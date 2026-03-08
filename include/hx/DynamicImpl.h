// ─── Opt 5: StackArray — eliminates heap alloc for 6+ arg calls ─────────────
// A non-owning view over a stack-local Dynamic array. Satisfies __Run's
// const Array<Dynamic>& parameter via implicit conversion (only allocates
// if the callee actually stores or escapes the array).
namespace hx {
   struct StackArray {
      const Dynamic *data; int length;
      StackArray(const Dynamic *d, int n) : data(d), length(n) {}
      inline const Dynamic &operator[](int i) const { return data[i]; }
      operator Array<Dynamic>() const {
         Array<Dynamic> a = Array_obj<Dynamic>::__new(length);
         for (int i=0;i<length;++i) a->init(i,data[i]);
         return a;
      }
   };
}

//   ##  ##  ##   ##   ####   ##  ## ## ##  ##  ####    ##
//   ##  ##  ## ##  ## ##  ## ### ## ## ### ## ##       ##
//    ## ## ##  ###### ###### ###### ## ###### ## ###   ##
//    ## ## ##  ##  ## ## ##  ## ### ## ## ### ##  ##     
//     ## ##    ##  ## ##  ## ##  ## ## ##  ##  ####    ##

// DO NOT EDIT
// This file is generated from the .tpl file

 

namespace hx {

struct CMemberFunction0 : public hx::Object 
{ 
   hx::ObjectPtr<Object> mThis; 
   MemberFunction0 mFunction;
   const char *mName;

   HX_IS_INSTANCE_OF enum { _hx_ClassId = hx::clsIdCMember0 };


   CMemberFunction0(const char *inName, hx::Object *inObj, MemberFunction0 inFunction)
   {
      mName = inName;
      mThis = inObj;
      mFunction = inFunction;
   }
   int __Compare(const hx::Object *inRHS) const
   {
      if (!inRHS || !const_cast<hx::Object*>(inRHS)->_hx_isInstanceOf(hx::clsIdCMember0)) return -1;
      const CMemberFunction0 *other = static_cast<const CMemberFunction0 *>(inRHS);
      return (mName==other->mName && mFunction==other->mFunction && mThis.GetPtr()==other->mThis.GetPtr())? 0 : -1;
   }

   int __GetType() const { return vtFunction; } 
   int __ArgCount() const { return 0; } 
   ::String __ToString() const{ return String(mName); } 
   void __Mark(hx::MarkContext *__inCtx) { HX_MARK_MEMBER_NAME(mThis,"CMemberFunction0.this"); } 
   #ifdef HXCPP_VISIT_ALLOCS
   void __Visit(hx::VisitContext *__inCtx) { HX_VISIT_MEMBER(mThis); } 
   #endif
   void *__GetHandle() const { return mThis.GetPtr(); } 
   Dynamic __Run(const Array<Dynamic> &inArgs) 
   { 
      
      hx::Object *__self = mThis.GetPtr(); return mFunction(__self);
   } 
   Dynamic __run() 
   { 
      
      hx::Object *__self = mThis.GetPtr(); return mFunction(__self);
   } 
}; 



struct CStaticFunction0 : public hx::Object 
{ 
   StaticFunction0 mFunction;
   const char *mName;

   HX_IS_INSTANCE_OF enum { _hx_ClassId = hx::clsIdCStatic0 };


   CStaticFunction0(const char *inName,StaticFunction0 inFunction)
   {
      mName = inName;
      mFunction = inFunction;
   }
   int __Compare(const hx::Object *inRHS) const
   {
      if (!inRHS || !const_cast<hx::Object*>(inRHS)->_hx_isInstanceOf(hx::clsIdCStatic0)) return -1;
      const CStaticFunction0 *other = static_cast<const CStaticFunction0 *>(inRHS);
      return mName==other->mName && mFunction==other->mFunction && mName==other->mName ? 0 : -1;
   }

   int __GetType() const { return vtFunction; } 
   int __ArgCount() const { return 0; } 
   ::String __ToString() const{ return String(mName); } 
   Dynamic __Run(const Array<Dynamic> &inArgs) 
   { 
      return mFunction();
   } 
   Dynamic __run() 
   { 
      return mFunction();
   } 
}; 


HXCPP_EXTERN_CLASS_ATTRIBUTES
Dynamic CreateMemberFunction0(const char *inName,hx::Object *inObj, MemberFunction0 inFunc)
   { return new CMemberFunction0(inName,inObj,inFunc); }

HXCPP_EXTERN_CLASS_ATTRIBUTES
Dynamic CreateStaticFunction0(const char *inName,StaticFunction0 inFunc)
   { return new CStaticFunction0(inName,inFunc); }

}


 

namespace hx {

struct CMemberFunction1 : public hx::Object 
{ 
   hx::ObjectPtr<Object> mThis; 
   MemberFunction1 mFunction;
   const char *mName;

   HX_IS_INSTANCE_OF enum { _hx_ClassId = hx::clsIdCMember1 };


   CMemberFunction1(const char *inName, hx::Object *inObj, MemberFunction1 inFunction)
   {
      mName = inName;
      mThis = inObj;
      mFunction = inFunction;
   }
   int __Compare(const hx::Object *inRHS) const
   {
      if (!inRHS || !const_cast<hx::Object*>(inRHS)->_hx_isInstanceOf(hx::clsIdCMember1)) return -1;
      const CMemberFunction1 *other = static_cast<const CMemberFunction1 *>(inRHS);
      return (mName==other->mName && mFunction==other->mFunction && mThis.GetPtr()==other->mThis.GetPtr())? 0 : -1;
   }

   int __GetType() const { return vtFunction; } 
   int __ArgCount() const { return 1; } 
   ::String __ToString() const{ return String(mName); } 
   void __Mark(hx::MarkContext *__inCtx) { HX_MARK_MEMBER_NAME(mThis,"CMemberFunction1.this"); } 
   #ifdef HXCPP_VISIT_ALLOCS
   void __Visit(hx::VisitContext *__inCtx) { HX_VISIT_MEMBER(mThis); } 
   #endif
   void *__GetHandle() const { return mThis.GetPtr(); } 
   Dynamic __Run(const Array<Dynamic> &inArgs) 
   { 
      
      hx::Object *__self = mThis.GetPtr(); return mFunction(__self, inArgs[0]);
   } 
   Dynamic __run(const Dynamic &inArg0) 
   { 
      
      hx::Object *__self = mThis.GetPtr(); return mFunction(__self, inArg0);
   } 
}; 



struct CStaticFunction1 : public hx::Object 
{ 
   StaticFunction1 mFunction;
   const char *mName;

   HX_IS_INSTANCE_OF enum { _hx_ClassId = hx::clsIdCStatic1 };


   CStaticFunction1(const char *inName,StaticFunction1 inFunction)
   {
      mName = inName;
      mFunction = inFunction;
   }
   int __Compare(const hx::Object *inRHS) const
   {
      if (!inRHS || !const_cast<hx::Object*>(inRHS)->_hx_isInstanceOf(hx::clsIdCStatic1)) return -1;
      const CStaticFunction1 *other = static_cast<const CStaticFunction1 *>(inRHS);
      return mName==other->mName && mFunction==other->mFunction && mName==other->mName ? 0 : -1;
   }

   int __GetType() const { return vtFunction; } 
   int __ArgCount() const { return 1; } 
   ::String __ToString() const{ return String(mName); } 
   Dynamic __Run(const Array<Dynamic> &inArgs) 
   { 
      return mFunction(inArgs[0]);
   } 
   Dynamic __run(const Dynamic &inArg0) 
   { 
      return mFunction(inArg0);
   } 
}; 


HXCPP_EXTERN_CLASS_ATTRIBUTES
Dynamic CreateMemberFunction1(const char *inName,hx::Object *inObj, MemberFunction1 inFunc)
   { return new CMemberFunction1(inName,inObj,inFunc); }

HXCPP_EXTERN_CLASS_ATTRIBUTES
Dynamic CreateStaticFunction1(const char *inName,StaticFunction1 inFunc)
   { return new CStaticFunction1(inName,inFunc); }

}


 

namespace hx {

struct CMemberFunction2 : public hx::Object 
{ 
   hx::ObjectPtr<Object> mThis; 
   MemberFunction2 mFunction;
   const char *mName;

   HX_IS_INSTANCE_OF enum { _hx_ClassId = hx::clsIdCMember2 };


   CMemberFunction2(const char *inName, hx::Object *inObj, MemberFunction2 inFunction)
   {
      mName = inName;
      mThis = inObj;
      mFunction = inFunction;
   }
   int __Compare(const hx::Object *inRHS) const
   {
      if (!inRHS || !const_cast<hx::Object*>(inRHS)->_hx_isInstanceOf(hx::clsIdCMember2)) return -1;
      const CMemberFunction2 *other = static_cast<const CMemberFunction2 *>(inRHS);
      return (mName==other->mName && mFunction==other->mFunction && mThis.GetPtr()==other->mThis.GetPtr())? 0 : -1;
   }

   int __GetType() const { return vtFunction; } 
   int __ArgCount() const { return 2; } 
   ::String __ToString() const{ return String(mName); } 
   void __Mark(hx::MarkContext *__inCtx) { HX_MARK_MEMBER_NAME(mThis,"CMemberFunction2.this"); } 
   #ifdef HXCPP_VISIT_ALLOCS
   void __Visit(hx::VisitContext *__inCtx) { HX_VISIT_MEMBER(mThis); } 
   #endif
   void *__GetHandle() const { return mThis.GetPtr(); } 
   Dynamic __Run(const Array<Dynamic> &inArgs) 
   { 
      
      return mFunction(mThis.GetPtr(), inArgs[0],inArgs[1]);
      
   } 
   Dynamic __run(const Dynamic &inArg0,const Dynamic &inArg1) 
   { 
      
      return mFunction(mThis.GetPtr(), inArg0,inArg1);
      
   } 
}; 



struct CStaticFunction2 : public hx::Object 
{ 
   StaticFunction2 mFunction;
   const char *mName;

   HX_IS_INSTANCE_OF enum { _hx_ClassId = hx::clsIdCStatic2 };


   CStaticFunction2(const char *inName,StaticFunction2 inFunction)
   {
      mName = inName;
      mFunction = inFunction;
   }
   int __Compare(const hx::Object *inRHS) const
   {
      if (!inRHS || !const_cast<hx::Object*>(inRHS)->_hx_isInstanceOf(hx::clsIdCStatic2)) return -1;
      const CStaticFunction2 *other = static_cast<const CStaticFunction2 *>(inRHS);
      return mName==other->mName && mFunction==other->mFunction && mName==other->mName ? 0 : -1;
   }

   int __GetType() const { return vtFunction; } 
   int __ArgCount() const { return 2; } 
   ::String __ToString() const{ return String(mName); } 
   Dynamic __Run(const Array<Dynamic> &inArgs) 
   { 
      return mFunction(inArgs[0],inArgs[1]);
   } 
   Dynamic __run(const Dynamic &inArg0,const Dynamic &inArg1) 
   { 
      return mFunction(inArg0,inArg1);
   } 
}; 


HXCPP_EXTERN_CLASS_ATTRIBUTES
Dynamic CreateMemberFunction2(const char *inName,hx::Object *inObj, MemberFunction2 inFunc)
   { return new CMemberFunction2(inName,inObj,inFunc); }

HXCPP_EXTERN_CLASS_ATTRIBUTES
Dynamic CreateStaticFunction2(const char *inName,StaticFunction2 inFunc)
   { return new CStaticFunction2(inName,inFunc); }

}


 

namespace hx {

struct CMemberFunction3 : public hx::Object 
{ 
   hx::ObjectPtr<Object> mThis; 
   MemberFunction3 mFunction;
   const char *mName;

   HX_IS_INSTANCE_OF enum { _hx_ClassId = hx::clsIdCMember3 };


   CMemberFunction3(const char *inName, hx::Object *inObj, MemberFunction3 inFunction)
   {
      mName = inName;
      mThis = inObj;
      mFunction = inFunction;
   }
   int __Compare(const hx::Object *inRHS) const
   {
      if (!inRHS || !const_cast<hx::Object*>(inRHS)->_hx_isInstanceOf(hx::clsIdCMember3)) return -1;
      const CMemberFunction3 *other = static_cast<const CMemberFunction3 *>(inRHS);
      return (mName==other->mName && mFunction==other->mFunction && mThis.GetPtr()==other->mThis.GetPtr())? 0 : -1;
   }

   int __GetType() const { return vtFunction; } 
   int __ArgCount() const { return 3; } 
   ::String __ToString() const{ return String(mName); } 
   void __Mark(hx::MarkContext *__inCtx) { HX_MARK_MEMBER_NAME(mThis,"CMemberFunction3.this"); } 
   #ifdef HXCPP_VISIT_ALLOCS
   void __Visit(hx::VisitContext *__inCtx) { HX_VISIT_MEMBER(mThis); } 
   #endif
   void *__GetHandle() const { return mThis.GetPtr(); } 
   Dynamic __Run(const Array<Dynamic> &inArgs) 
   { 
      
      return mFunction(mThis.GetPtr(), inArgs[0],inArgs[1],inArgs[2]);
      
   } 
   Dynamic __run(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2) 
   { 
      
      return mFunction(mThis.GetPtr(), inArg0,inArg1,inArg2);
      
   } 
}; 



struct CStaticFunction3 : public hx::Object 
{ 
   StaticFunction3 mFunction;
   const char *mName;

   HX_IS_INSTANCE_OF enum { _hx_ClassId = hx::clsIdCStatic3 };


   CStaticFunction3(const char *inName,StaticFunction3 inFunction)
   {
      mName = inName;
      mFunction = inFunction;
   }
   int __Compare(const hx::Object *inRHS) const
   {
      if (!inRHS || !const_cast<hx::Object*>(inRHS)->_hx_isInstanceOf(hx::clsIdCStatic3)) return -1;
      const CStaticFunction3 *other = static_cast<const CStaticFunction3 *>(inRHS);
      return mName==other->mName && mFunction==other->mFunction && mName==other->mName ? 0 : -1;
   }

   int __GetType() const { return vtFunction; } 
   int __ArgCount() const { return 3; } 
   ::String __ToString() const{ return String(mName); } 
   Dynamic __Run(const Array<Dynamic> &inArgs) 
   { 
      return mFunction(inArgs[0],inArgs[1],inArgs[2]);
   } 
   Dynamic __run(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2) 
   { 
      return mFunction(inArg0,inArg1,inArg2);
   } 
}; 


HXCPP_EXTERN_CLASS_ATTRIBUTES
Dynamic CreateMemberFunction3(const char *inName,hx::Object *inObj, MemberFunction3 inFunc)
   { return new CMemberFunction3(inName,inObj,inFunc); }

HXCPP_EXTERN_CLASS_ATTRIBUTES
Dynamic CreateStaticFunction3(const char *inName,StaticFunction3 inFunc)
   { return new CStaticFunction3(inName,inFunc); }

}


 

namespace hx {

struct CMemberFunction4 : public hx::Object 
{ 
   hx::ObjectPtr<Object> mThis; 
   MemberFunction4 mFunction;
   const char *mName;

   HX_IS_INSTANCE_OF enum { _hx_ClassId = hx::clsIdCMember4 };


   CMemberFunction4(const char *inName, hx::Object *inObj, MemberFunction4 inFunction)
   {
      mName = inName;
      mThis = inObj;
      mFunction = inFunction;
   }
   int __Compare(const hx::Object *inRHS) const
   {
      if (!inRHS || !const_cast<hx::Object*>(inRHS)->_hx_isInstanceOf(hx::clsIdCMember4)) return -1;
      const CMemberFunction4 *other = static_cast<const CMemberFunction4 *>(inRHS);
      return (mName==other->mName && mFunction==other->mFunction && mThis.GetPtr()==other->mThis.GetPtr())? 0 : -1;
   }

   int __GetType() const { return vtFunction; } 
   int __ArgCount() const { return 4; } 
   ::String __ToString() const{ return String(mName); } 
   void __Mark(hx::MarkContext *__inCtx) { HX_MARK_MEMBER_NAME(mThis,"CMemberFunction4.this"); } 
   #ifdef HXCPP_VISIT_ALLOCS
   void __Visit(hx::VisitContext *__inCtx) { HX_VISIT_MEMBER(mThis); } 
   #endif
   void *__GetHandle() const { return mThis.GetPtr(); } 
   Dynamic __Run(const Array<Dynamic> &inArgs) 
   { 
      
      return mFunction(mThis.GetPtr(), inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
      
   } 
   Dynamic __run(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3) 
   { 
      
      return mFunction(mThis.GetPtr(), inArg0,inArg1,inArg2,inArg3);
      
   } 
}; 



struct CStaticFunction4 : public hx::Object 
{ 
   StaticFunction4 mFunction;
   const char *mName;

   HX_IS_INSTANCE_OF enum { _hx_ClassId = hx::clsIdCStatic4 };


   CStaticFunction4(const char *inName,StaticFunction4 inFunction)
   {
      mName = inName;
      mFunction = inFunction;
   }
   int __Compare(const hx::Object *inRHS) const
   {
      if (!inRHS || !const_cast<hx::Object*>(inRHS)->_hx_isInstanceOf(hx::clsIdCStatic4)) return -1;
      const CStaticFunction4 *other = static_cast<const CStaticFunction4 *>(inRHS);
      return mName==other->mName && mFunction==other->mFunction && mName==other->mName ? 0 : -1;
   }

   int __GetType() const { return vtFunction; } 
   int __ArgCount() const { return 4; } 
   ::String __ToString() const{ return String(mName); } 
   Dynamic __Run(const Array<Dynamic> &inArgs) 
   { 
      return mFunction(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
   } 
   Dynamic __run(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3) 
   { 
      return mFunction(inArg0,inArg1,inArg2,inArg3);
   } 
}; 


HXCPP_EXTERN_CLASS_ATTRIBUTES
Dynamic CreateMemberFunction4(const char *inName,hx::Object *inObj, MemberFunction4 inFunc)
   { return new CMemberFunction4(inName,inObj,inFunc); }

HXCPP_EXTERN_CLASS_ATTRIBUTES
Dynamic CreateStaticFunction4(const char *inName,StaticFunction4 inFunc)
   { return new CStaticFunction4(inName,inFunc); }

}


 

namespace hx {

struct CMemberFunction5 : public hx::Object 
{ 
   hx::ObjectPtr<Object> mThis; 
   MemberFunction5 mFunction;
   const char *mName;

   HX_IS_INSTANCE_OF enum { _hx_ClassId = hx::clsIdCMember5 };


   CMemberFunction5(const char *inName, hx::Object *inObj, MemberFunction5 inFunction)
   {
      mName = inName;
      mThis = inObj;
      mFunction = inFunction;
   }
   int __Compare(const hx::Object *inRHS) const
   {
      if (!inRHS || !const_cast<hx::Object*>(inRHS)->_hx_isInstanceOf(hx::clsIdCMember5)) return -1;
      const CMemberFunction5 *other = static_cast<const CMemberFunction5 *>(inRHS);
      return (mName==other->mName && mFunction==other->mFunction && mThis.GetPtr()==other->mThis.GetPtr())? 0 : -1;
   }

   int __GetType() const { return vtFunction; } 
   int __ArgCount() const { return 5; } 
   ::String __ToString() const{ return String(mName); } 
   void __Mark(hx::MarkContext *__inCtx) { HX_MARK_MEMBER_NAME(mThis,"CMemberFunction5.this"); } 
   #ifdef HXCPP_VISIT_ALLOCS
   void __Visit(hx::VisitContext *__inCtx) { HX_VISIT_MEMBER(mThis); } 
   #endif
   void *__GetHandle() const { return mThis.GetPtr(); } 
   Dynamic __Run(const Array<Dynamic> &inArgs) 
   { 
      
      return mFunction(mThis.GetPtr(), inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
      
   } 
   Dynamic __run(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4) 
   { 
      
      return mFunction(mThis.GetPtr(), inArg0,inArg1,inArg2,inArg3,inArg4);
      
   } 
}; 



struct CStaticFunction5 : public hx::Object 
{ 
   StaticFunction5 mFunction;
   const char *mName;

   HX_IS_INSTANCE_OF enum { _hx_ClassId = hx::clsIdCStatic5 };


   CStaticFunction5(const char *inName,StaticFunction5 inFunction)
   {
      mName = inName;
      mFunction = inFunction;
   }
   int __Compare(const hx::Object *inRHS) const
   {
      if (!inRHS || !const_cast<hx::Object*>(inRHS)->_hx_isInstanceOf(hx::clsIdCStatic5)) return -1;
      const CStaticFunction5 *other = static_cast<const CStaticFunction5 *>(inRHS);
      return mName==other->mName && mFunction==other->mFunction && mName==other->mName ? 0 : -1;
   }

   int __GetType() const { return vtFunction; } 
   int __ArgCount() const { return 5; } 
   ::String __ToString() const{ return String(mName); } 
   Dynamic __Run(const Array<Dynamic> &inArgs) 
   { 
      return mFunction(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
   } 
   Dynamic __run(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4) 
   { 
      return mFunction(inArg0,inArg1,inArg2,inArg3,inArg4);
   } 
}; 


HXCPP_EXTERN_CLASS_ATTRIBUTES
Dynamic CreateMemberFunction5(const char *inName,hx::Object *inObj, MemberFunction5 inFunc)
   { return new CMemberFunction5(inName,inObj,inFunc); }

HXCPP_EXTERN_CLASS_ATTRIBUTES
Dynamic CreateStaticFunction5(const char *inName,StaticFunction5 inFunc)
   { return new CStaticFunction5(inName,inFunc); }

}


 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args6[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5}; return mPtr->__Run(hx::StackArray(_args6,6));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args6[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5}; return valObject->__Run(hx::StackArray(_args6,6));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args7[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6}; return mPtr->__Run(hx::StackArray(_args7,7));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args7[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6}; return valObject->__Run(hx::StackArray(_args7,7));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args8[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7}; return mPtr->__Run(hx::StackArray(_args8,8));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args8[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7}; return valObject->__Run(hx::StackArray(_args8,8));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args9[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8}; return mPtr->__Run(hx::StackArray(_args9,9));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args9[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8}; return valObject->__Run(hx::StackArray(_args9,9));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args10[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9}; return mPtr->__Run(hx::StackArray(_args10,10));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args10[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9}; return valObject->__Run(hx::StackArray(_args10,10));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args11[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10}; return mPtr->__Run(hx::StackArray(_args11,11));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args11[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10}; return valObject->__Run(hx::StackArray(_args11,11));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args12[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11}; return mPtr->__Run(hx::StackArray(_args12,12));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args12[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11}; return valObject->__Run(hx::StackArray(_args12,12));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args13[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12}; return mPtr->__Run(hx::StackArray(_args13,13));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args13[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12}; return valObject->__Run(hx::StackArray(_args13,13));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args14[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13}; return mPtr->__Run(hx::StackArray(_args14,14));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args14[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13}; return valObject->__Run(hx::StackArray(_args14,14));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args15[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14}; return mPtr->__Run(hx::StackArray(_args15,15));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args15[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14}; return valObject->__Run(hx::StackArray(_args15,15));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args16[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15}; return mPtr->__Run(hx::StackArray(_args16,16));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args16[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15}; return valObject->__Run(hx::StackArray(_args16,16));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args17[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16}; return mPtr->__Run(hx::StackArray(_args17,17));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args17[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16}; return valObject->__Run(hx::StackArray(_args17,17));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args18[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17}; return mPtr->__Run(hx::StackArray(_args18,18));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args18[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17}; return valObject->__Run(hx::StackArray(_args18,18));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17,const Dynamic &inArg18)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args19[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17,inArg18}; return mPtr->__Run(hx::StackArray(_args19,19));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17,const Dynamic &inArg18)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args19[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17,inArg18}; return valObject->__Run(hx::StackArray(_args19,19));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17,const Dynamic &inArg18,const Dynamic &inArg19)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args20[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17,inArg18,inArg19}; return mPtr->__Run(hx::StackArray(_args20,20));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17,const Dynamic &inArg18,const Dynamic &inArg19)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args20[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17,inArg18,inArg19}; return valObject->__Run(hx::StackArray(_args20,20));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17,const Dynamic &inArg18,const Dynamic &inArg19,const Dynamic &inArg20)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args21[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17,inArg18,inArg19,inArg20}; return mPtr->__Run(hx::StackArray(_args21,21));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17,const Dynamic &inArg18,const Dynamic &inArg19,const Dynamic &inArg20)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args21[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17,inArg18,inArg19,inArg20}; return valObject->__Run(hx::StackArray(_args21,21));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17,const Dynamic &inArg18,const Dynamic &inArg19,const Dynamic &inArg20,const Dynamic &inArg21)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args22[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17,inArg18,inArg19,inArg20,inArg21}; return mPtr->__Run(hx::StackArray(_args22,22));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17,const Dynamic &inArg18,const Dynamic &inArg19,const Dynamic &inArg20,const Dynamic &inArg21)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args22[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17,inArg18,inArg19,inArg20,inArg21}; return valObject->__Run(hx::StackArray(_args22,22));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17,const Dynamic &inArg18,const Dynamic &inArg19,const Dynamic &inArg20,const Dynamic &inArg21,const Dynamic &inArg22)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args23[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17,inArg18,inArg19,inArg20,inArg21,inArg22}; return mPtr->__Run(hx::StackArray(_args23,23));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17,const Dynamic &inArg18,const Dynamic &inArg19,const Dynamic &inArg20,const Dynamic &inArg21,const Dynamic &inArg22)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args23[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17,inArg18,inArg19,inArg20,inArg21,inArg22}; return valObject->__Run(hx::StackArray(_args23,23));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17,const Dynamic &inArg18,const Dynamic &inArg19,const Dynamic &inArg20,const Dynamic &inArg21,const Dynamic &inArg22,const Dynamic &inArg23)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args24[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17,inArg18,inArg19,inArg20,inArg21,inArg22,inArg23}; return mPtr->__Run(hx::StackArray(_args24,24));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17,const Dynamic &inArg18,const Dynamic &inArg19,const Dynamic &inArg20,const Dynamic &inArg21,const Dynamic &inArg22,const Dynamic &inArg23)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args24[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17,inArg18,inArg19,inArg20,inArg21,inArg22,inArg23}; return valObject->__Run(hx::StackArray(_args24,24));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17,const Dynamic &inArg18,const Dynamic &inArg19,const Dynamic &inArg20,const Dynamic &inArg21,const Dynamic &inArg22,const Dynamic &inArg23,const Dynamic &inArg24)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args25[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17,inArg18,inArg19,inArg20,inArg21,inArg22,inArg23,inArg24}; return mPtr->__Run(hx::StackArray(_args25,25));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17,const Dynamic &inArg18,const Dynamic &inArg19,const Dynamic &inArg20,const Dynamic &inArg21,const Dynamic &inArg22,const Dynamic &inArg23,const Dynamic &inArg24)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args25[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17,inArg18,inArg19,inArg20,inArg21,inArg22,inArg23,inArg24}; return valObject->__Run(hx::StackArray(_args25,25));
}
}



 
Dynamic Dynamic::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17,const Dynamic &inArg18,const Dynamic &inArg19,const Dynamic &inArg20,const Dynamic &inArg21,const Dynamic &inArg22,const Dynamic &inArg23,const Dynamic &inArg24,const Dynamic &inArg25)
{
   if ((!mPtr)) Dynamic::ThrowBadFunctionError();
   const Dynamic _args26[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17,inArg18,inArg19,inArg20,inArg21,inArg22,inArg23,inArg24,inArg25}; return mPtr->__Run(hx::StackArray(_args26,26));
}

namespace cpp
{
::Dynamic Variant::operator()(const Dynamic &inArg0,const Dynamic &inArg1,const Dynamic &inArg2,const Dynamic &inArg3,const Dynamic &inArg4,const Dynamic &inArg5,const Dynamic &inArg6,const Dynamic &inArg7,const Dynamic &inArg8,const Dynamic &inArg9,const Dynamic &inArg10,const Dynamic &inArg11,const Dynamic &inArg12,const Dynamic &inArg13,const Dynamic &inArg14,const Dynamic &inArg15,const Dynamic &inArg16,const Dynamic &inArg17,const Dynamic &inArg18,const Dynamic &inArg19,const Dynamic &inArg20,const Dynamic &inArg21,const Dynamic &inArg22,const Dynamic &inArg23,const Dynamic &inArg24,const Dynamic &inArg25)
{
   if (isNull()) Dynamic::ThrowBadFunctionError();
   const Dynamic _args26[]={inArg0,inArg1,inArg2,inArg3,inArg4,inArg5,inArg6,inArg7,inArg8,inArg9,inArg10,inArg11,inArg12,inArg13,inArg14,inArg15,inArg16,inArg17,inArg18,inArg19,inArg20,inArg21,inArg22,inArg23,inArg24,inArg25}; return valObject->__Run(hx::StackArray(_args26,26));
}
}





namespace hx
{


struct CMemberFunctionVar : public hx::Object 
{ 
   hx::ObjectPtr<Object> mThis; 
   MemberFunctionVar mFunction;
   const char *mName;
   int N;


   HX_IS_INSTANCE_OF enum { _hx_ClassId = hx::clsIdCMemberVar };


   CMemberFunctionVar(const char *inName,hx::Object *inObj, MemberFunctionVar inFunction,int inN)
   {
      mThis = inObj;
      mFunction = inFunction;
      mName = inName;
      N = inN;
   }
   int __Compare(const hx::Object *inRHS) const
   {
      if (!inRHS || !const_cast<hx::Object*>(inRHS)->_hx_isInstanceOf(hx::clsIdCMemberVar)) return -1;
      const CMemberFunctionVar *other = static_cast<const CMemberFunctionVar *>(inRHS);
      return (mFunction==other->mFunction && mName==other->mName && mThis.GetPtr()==other->mThis.GetPtr())? 0 : -1;
   }


   int __GetType() const { return vtFunction; } 
   int __ArgCount() const { return N; } 
   ::String __ToString() const{ return String(mName); } 
   void __Mark(hx::MarkContext *__inCtx) { HX_MARK_MEMBER_NAME(mThis,"CMemberFunctionVar.this"); } 
   #ifdef HXCPP_VISIT_ALLOCS
   void __Visit(hx::VisitContext *__inCtx) { HX_VISIT_MEMBER(mThis); } 
   #endif
   void *__GetHandle() const { return mThis.GetPtr(); } 
   Dynamic __Run(const Array<Dynamic> &inArgs) 
   { 
      hx::Object *__self = mThis.GetPtr(); return mFunction(__self, inArgs);
   } 
}; 



struct CStaticFunctionVar : public hx::Object 
{ 
   StaticFunctionVar mFunction;
   const char *mName;
   int N;

   HX_IS_INSTANCE_OF enum { _hx_ClassId = hx::clsIdCStaticVar };

   CStaticFunctionVar(const char *inName,StaticFunctionVar inFunction,int inN)
   {
      mFunction = inFunction;
      mName = inName;
      N = inN;
   }
   int __Compare(const hx::Object *inRHS) const
   {
      if (!inRHS || !const_cast<hx::Object*>(inRHS)->_hx_isInstanceOf(hx::clsIdCStaticVar)) return -1;
      const CStaticFunctionVar *other = static_cast<const CStaticFunctionVar *>(inRHS);
      return mName==other->mName && mFunction==other->mFunction ? 0 : -1;
   }


   int __GetType() const { return vtFunction; } 
   int __ArgCount() const { return N; } 
   ::String __ToString() const { return String(mName); } 
   Dynamic __Run(const Array<Dynamic> &inArgs) 
   { 
      return mFunction(inArgs);
   } 
}; 


Dynamic CreateMemberFunctionVar(const char *inName, hx::Object *inObj, MemberFunctionVar inFunc,int inN)
   { return new CMemberFunctionVar(inName, inObj,inFunc,inN); }

Dynamic CreateStaticFunctionVar(const char *inName,StaticFunctionVar inFunc,int inN)
   { return new CStaticFunctionVar(inName, inFunc,inN); }

}