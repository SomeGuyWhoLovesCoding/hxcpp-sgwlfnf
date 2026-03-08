#ifndef HX_FIELD_CACHE_H
#define HX_FIELD_CACHE_H

// FieldCache.h
// Per-call-site inline cache for dynamic field access on hx::Anon_obj.
//
// Usage in generated C++ (read):
//
//   static hx::FieldCache _fc_health;
//   hx::Val result = hx::CachedField(obj.mPtr, HX_CSTRING("health"), _fc_health);
//
// Usage in generated C++ (write):
//
//   static hx::FieldCache _fc_health;
//   hx::CachedSetField(obj.mPtr, HX_CSTRING("health"), val, _fc_health);
//
// The static FieldCache persists across calls at that site. In a hot loop
// over objects of the same shape the first iteration misses (falls through
// to __Field/__SetField) and every subsequent one hits, doing only an int
// comparison + direct array index – no hash lookup.
//
// Thread safety: two threads racing to write the same cache slot is safe
// because both writes are idempotent (same shape → same index). No locks
// needed.

#include <hx/Anon.h>

namespace hx {

// ---------------------------------------------------------------------------
// FieldCache
// ---------------------------------------------------------------------------

struct FieldCache
{
   int shapeId;
   int index;

   FieldCache() : shapeId(-1), index(-1) {}
};

// ---------------------------------------------------------------------------
// CachedField  (read)
// ---------------------------------------------------------------------------

inline hx::Val CachedField(hx::Object *inObj, const ::String &inName,
                            FieldCache &ioCache)
{
   if (!inObj)
      return hx::Val();

   // Fast path: only attempt cache on Anon_obj (vtObject).
   // Avoids dynamic_cast cost on non-anon dynamics.
   if (inObj->__GetType() == vtObject)
   {
      hx::Anon_obj *anon = static_cast<hx::Anon_obj *>(inObj);
      int shape = anon->__shapeId();

      if (shape == ioCache.shapeId && ioCache.index >= 0)
      {
         const ::cpp::Variant *v = anon->__fieldAtIndex(ioCache.index);
         if (v)
            return hx::Val(*v);
      }

      // Miss – normal lookup then populate cache
      hx::Val result = anon->__Field(inName, HX_PROP_DYNAMIC);
      ioCache.shapeId = anon->__shapeId(); // re-read: __Field may mutate
      ioCache.index   = anon->__findFieldIndex(inName);
      return result;
   }

   // Non-anon dynamic – bypass cache entirely
   return inObj->__Field(inName, HX_PROP_DYNAMIC);
}

// ---------------------------------------------------------------------------
// CachedSetField  (write)
// ---------------------------------------------------------------------------

inline hx::Val CachedSetField(hx::Object *inObj, const ::String &inName,
                               const hx::Val &inValue, FieldCache &ioCache)
{
   if (!inObj)
      return inValue;

   if (inObj->__GetType() == vtObject)
   {
      hx::Anon_obj *anon = static_cast<hx::Anon_obj *>(inObj);
      int shape = anon->__shapeId();

      if (shape == ioCache.shapeId && ioCache.index >= 0)
      {
         ::cpp::Variant *v = anon->__fieldAtIndexW(ioCache.index);
         if (v)
         {
            *v = inValue;
            #ifdef HXCPP_GC_GENERATIONAL
            if (inValue.type <= ::cpp::Variant::typeString)
               HX_OBJ_WB_GET(anon, inValue.valObject);
            #endif
            return inValue;
         }
      }

      // Miss – normal __SetField then populate cache
      hx::Val result   = anon->__SetField(inName, inValue, HX_PROP_DYNAMIC);
      ioCache.shapeId  = anon->__shapeId(); // re-read: may have added field
      ioCache.index    = anon->__findFieldIndex(inName);
      return result;
   }

   return inObj->__SetField(inName, inValue, HX_PROP_DYNAMIC);
}

} // namespace hx

// ---------------------------------------------------------------------------
// Convenience macros for the code generator
//
// HX_CACHED_FIELD(obj, name)
//   Expands to a statement-expression that reads obj.name via an inline
//   cache. The static FieldCache is keyed by the call site (via __LINE__
//   and __COUNTER__ if available).
//
// HX_CACHED_SET_FIELD(obj, name, val)
//   Same for writes.
//
// These are optional – the code generator can emit the static + call
// directly instead.
// ---------------------------------------------------------------------------

#ifdef __COUNTER__
  #define HX_FC_UNIQUE __COUNTER__
#else
  #define HX_FC_UNIQUE __LINE__
#endif

#define HX_CACHED_FIELD(obj, name) \
   ([&]() -> hx::Val { \
      static hx::FieldCache _hx_fc_##HX_FC_UNIQUE; \
      return hx::CachedField((obj).mPtr, HX_CSTRING(name), _hx_fc_##HX_FC_UNIQUE); \
   }())

#define HX_CACHED_SET_FIELD(obj, name, val) \
   ([&]() -> hx::Val { \
      static hx::FieldCache _hx_fc_##HX_FC_UNIQUE; \
      return hx::CachedSetField((obj).mPtr, HX_CSTRING(name), (val), _hx_fc_##HX_FC_UNIQUE); \
   }())

#endif // HX_FIELD_CACHE_H