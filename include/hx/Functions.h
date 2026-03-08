#ifndef HX_FUNCTIONS_H
#define HX_FUNCTIONS_H
#include <hxcpp.h>
#include <type_traits>

namespace hx
{
   // Type trait to check if a type is a primitive that doesn't need GC marking
   template<typename T>
   struct is_gc_free_type : std::integral_constant<bool,
        std::is_arithmetic<T>::value
     || std::is_enum<T>::value
     || std::is_pointer<T>::value && !std::is_base_of<hx::Object, typename std::remove_pointer<T>::type>::value
     || std::is_same<T, const char*>::value
   > {};

   // Base case for empty capture list
   struct HXCPP_EXTERN_CLASS_ATTRIBUTES LocalFunc : public hx::Object
   {
      int __GetType() const { return vtFunction; }
      inline void DoMarkThis(hx::MarkContext *__inCtx) { }
#ifdef HXCPP_VISIT_ALLOCS
      inline void DoVisitThis(hx::VisitContext *__inCtx) { }
#endif
   };

   struct HXCPP_EXTERN_CLASS_ATTRIBUTES LocalThisFunc : public LocalFunc
   {
      Dynamic __this;
      void __SetThis(Dynamic inThis) { __this = inThis; }
      inline void DoMarkThis(hx::MarkContext *__inCtx) { HX_MARK_MEMBER(__this); }
#ifdef HXCPP_VISIT_ALLOCS
      inline void DoVisitThis(hx::VisitContext *__inCtx) { HX_VISIT_MEMBER(__this); }
#endif
   };

   // Helper to conditionally mark members
   template<bool NeedMark>
   struct MarkHelper {
      template<typename T>
      static void Mark(hx::MarkContext *__inCtx, const T&) {}
      
      template<typename T>
      static void Visit(hx::VisitContext *__inCtx, const T&) {}
   };

   template<>
   struct MarkHelper<true> {
      template<typename T>
      static void Mark(hx::MarkContext *__inCtx, const T& val) {
         HX_MARK_MEMBER(val);
      }
      
      template<typename T>
      static void Visit(hx::VisitContext *__inCtx, const T& val) {
         HX_VISIT_MEMBER(val);
      }
   };

   // Variadic LocalFunc that handles any number/types of captures
   template<typename... Captures>
   struct HXCPP_EXTERN_CLASS_ATTRIBUTES VariadicLocalFunc : public LocalFunc {
      std::tuple<Captures...> captures;
      
      VariadicLocalFunc() : captures() {}
      explicit VariadicLocalFunc(Captures... args) : captures(args...) {}
      
      template<size_t... Is>
      void DoMarkTuple(hx::MarkContext *__inCtx, std::index_sequence<Is...>) {
         (MarkMember<Is>(__inCtx), ...);
      }
      
      template<size_t I>
      void MarkMember(hx::MarkContext *__inCtx) {
         using T = std::tuple_element_t<I, std::tuple<Captures...>>;
         MarkHelper<!is_gc_free_type<T>::value>::Mark(__inCtx, std::get<I>(captures));
      }
      
#ifdef HXCPP_VISIT_ALLOCS
      template<size_t... Is>
      void DoVisitTuple(hx::VisitContext *__inCtx, std::index_sequence<Is...>) {
         (VisitMember<Is>(__inCtx), ...);
      }
      
      template<size_t I>
      void VisitMember(hx::VisitContext *__inCtx) {
         using T = std::tuple_element_t<I, std::tuple<Captures...>>;
         MarkHelper<!is_gc_free_type<T>::value>::Visit(__inCtx, std::get<I>(captures));
      }
#endif
      
      inline void DoMarkThis(hx::MarkContext *__inCtx) {
         DoMarkTuple(__inCtx, std::index_sequence_for<Captures...>{});
      }
      
#ifdef HXCPP_VISIT_ALLOCS
      inline void DoVisitThis(hx::VisitContext *__inCtx) {
         DoVisitTuple(__inCtx, std::index_sequence_for<Captures...>{});
      }
#endif
   };

   // Specialization for common case - single primitive (no GC overhead)
   template<typename T>
   struct HXCPP_EXTERN_CLASS_ATTRIBUTES VariadicLocalFunc<T> : public LocalFunc {
      T captured;
      
      VariadicLocalFunc() : captured() {}
      explicit VariadicLocalFunc(T v) : captured(v) {}
      
      inline void DoMarkThis(hx::MarkContext *__inCtx) {
         MarkHelper<!is_gc_free_type<T>::value>::Mark(__inCtx, captured);
      }
      
#ifdef HXCPP_VISIT_ALLOCS
      inline void DoVisitThis(hx::VisitContext *__inCtx) {
         MarkHelper<!is_gc_free_type<T>::value>::Visit(__inCtx, captured);
      }
#endif
   };
}
#endif