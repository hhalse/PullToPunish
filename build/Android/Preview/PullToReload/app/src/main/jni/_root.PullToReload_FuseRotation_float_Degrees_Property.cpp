// This file was generated based on '/Users/n07101/dev/fuseProjects/pull-to-reload/build/Android/Preview/cache/PullToReload.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PullToReload_FuseRotation_float_Degrees_Property.h>
#include <Fuse.Rotation.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class PullToReload_FuseRotation_float_Degrees_Property :31
// {
::g::Uno::UX::Property_type* PullToReload_FuseRotation_float_Degrees_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(PullToReload_FuseRotation_float_Degrees_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("PullToReload_FuseRotation_float_Degrees_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))PullToReload_FuseRotation_float_Degrees_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))PullToReload_FuseRotation_float_Degrees_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Rotation_typeof();
    type->SetFields(2,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::PullToReload_FuseRotation_float_Degrees_Property, _obj), 0);
    return type;
}

// public PullToReload_FuseRotation_float_Degrees_Property(Fuse.Rotation obj) :34
void PullToReload_FuseRotation_float_Degrees_Property__ctor_1_fn(PullToReload_FuseRotation_float_Degrees_Property* __this, ::g::Fuse::Rotation* obj)
{
    __this->ctor_1(obj);
}

// public PullToReload_FuseRotation_float_Degrees_Property New(Fuse.Rotation obj) :34
void PullToReload_FuseRotation_float_Degrees_Property__New1_fn(::g::Fuse::Rotation* obj, PullToReload_FuseRotation_float_Degrees_Property** __retval)
{
    *__retval = PullToReload_FuseRotation_float_Degrees_Property::New1(obj);
}

// protected override sealed float OnGet() :35
void PullToReload_FuseRotation_float_Degrees_Property__OnGet_fn(PullToReload_FuseRotation_float_Degrees_Property* __this, float* __retval)
{
    uStackFrame __("PullToReload_FuseRotation_float_Degrees_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Degrees(), void();
}

// protected override sealed void OnSet(float v, object origin) :36
void PullToReload_FuseRotation_float_Degrees_Property__OnSet_fn(PullToReload_FuseRotation_float_Degrees_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("PullToReload_FuseRotation_float_Degrees_Property", "OnSet(float,object)");
    float v_ = *v;
    uPtr(__this->_obj)->Degrees(v_);
}

// public PullToReload_FuseRotation_float_Degrees_Property(Fuse.Rotation obj) [instance] :34
void PullToReload_FuseRotation_float_Degrees_Property::ctor_1(::g::Fuse::Rotation* obj)
{
    uStackFrame __("PullToReload_FuseRotation_float_Degrees_Property", ".ctor(Fuse.Rotation)");
    ctor_();
    _obj = obj;
}

// public PullToReload_FuseRotation_float_Degrees_Property New(Fuse.Rotation obj) [static] :34
PullToReload_FuseRotation_float_Degrees_Property* PullToReload_FuseRotation_float_Degrees_Property::New1(::g::Fuse::Rotation* obj)
{
    PullToReload_FuseRotation_float_Degrees_Property* obj1 = (PullToReload_FuseRotation_float_Degrees_Property*)uNew(PullToReload_FuseRotation_float_Degrees_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
