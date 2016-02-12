// This file was generated based on '/Users/n07101/dev/fuseProjects/pull-to-reload/build/Android/Preview/cache/PullToReload.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PullToReload_FuseElementsElement_float_MinHeight_Property.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class PullToReload_FuseElementsElement_float_MinHeight_Property :17
// {
::g::Uno::UX::Property_type* PullToReload_FuseElementsElement_float_MinHeight_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(PullToReload_FuseElementsElement_float_MinHeight_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("PullToReload_FuseElementsElement_float_MinHeight_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))PullToReload_FuseElementsElement_float_MinHeight_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))PullToReload_FuseElementsElement_float_MinHeight_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(2,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::PullToReload_FuseElementsElement_float_MinHeight_Property, _obj), 0);
    return type;
}

// public PullToReload_FuseElementsElement_float_MinHeight_Property(Fuse.Elements.Element obj) :20
void PullToReload_FuseElementsElement_float_MinHeight_Property__ctor_1_fn(PullToReload_FuseElementsElement_float_MinHeight_Property* __this, ::g::Fuse::Elements::Element* obj)
{
    __this->ctor_1(obj);
}

// public PullToReload_FuseElementsElement_float_MinHeight_Property New(Fuse.Elements.Element obj) :20
void PullToReload_FuseElementsElement_float_MinHeight_Property__New1_fn(::g::Fuse::Elements::Element* obj, PullToReload_FuseElementsElement_float_MinHeight_Property** __retval)
{
    *__retval = PullToReload_FuseElementsElement_float_MinHeight_Property::New1(obj);
}

// protected override sealed float OnGet() :21
void PullToReload_FuseElementsElement_float_MinHeight_Property__OnGet_fn(PullToReload_FuseElementsElement_float_MinHeight_Property* __this, float* __retval)
{
    uStackFrame __("PullToReload_FuseElementsElement_float_MinHeight_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->MinHeight(), void();
}

// protected override sealed void OnSet(float v, object origin) :22
void PullToReload_FuseElementsElement_float_MinHeight_Property__OnSet_fn(PullToReload_FuseElementsElement_float_MinHeight_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("PullToReload_FuseElementsElement_float_MinHeight_Property", "OnSet(float,object)");
    float v_ = *v;
    uPtr(__this->_obj)->MinHeight(v_);
}

// public PullToReload_FuseElementsElement_float_MinHeight_Property(Fuse.Elements.Element obj) [instance] :20
void PullToReload_FuseElementsElement_float_MinHeight_Property::ctor_1(::g::Fuse::Elements::Element* obj)
{
    uStackFrame __("PullToReload_FuseElementsElement_float_MinHeight_Property", ".ctor(Fuse.Elements.Element)");
    ctor_();
    _obj = obj;
}

// public PullToReload_FuseElementsElement_float_MinHeight_Property New(Fuse.Elements.Element obj) [static] :20
PullToReload_FuseElementsElement_float_MinHeight_Property* PullToReload_FuseElementsElement_float_MinHeight_Property::New1(::g::Fuse::Elements::Element* obj)
{
    PullToReload_FuseElementsElement_float_MinHeight_Property* obj1 = (PullToReload_FuseElementsElement_float_MinHeight_Property*)uNew(PullToReload_FuseElementsElement_float_MinHeight_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
