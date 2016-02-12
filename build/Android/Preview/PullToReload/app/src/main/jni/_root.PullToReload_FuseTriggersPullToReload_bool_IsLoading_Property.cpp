// This file was generated based on '/Users/n07101/dev/fuseProjects/pull-to-reload/build/Android/Preview/cache/PullToReload.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property.h>
#include <Fuse.Triggers.PullToReload.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property :1
// {
::g::Uno::UX::Property_type* PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Triggers::PullToReload_typeof();
    type->SetFields(2,
        ::g::Fuse::Triggers::PullToReload_typeof(), offsetof(::g::PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property, _obj), 0);
    return type;
}

// public PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property(Fuse.Triggers.PullToReload obj) :4
void PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property__ctor_1_fn(PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property* __this, ::g::Fuse::Triggers::PullToReload* obj)
{
    __this->ctor_1(obj);
}

// public PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property New(Fuse.Triggers.PullToReload obj) :4
void PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property__New1_fn(::g::Fuse::Triggers::PullToReload* obj, PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property** __retval)
{
    *__retval = PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property::New1(obj);
}

// protected override sealed bool OnGet() :5
void PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property__OnGet_fn(PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property* __this, bool* __retval)
{
    uStackFrame __("PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->IsLoading(), void();
}

// protected override sealed void OnSet(bool v, object origin) :6
void PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property__OnSet_fn(PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property", "OnSet(bool,object)");
    bool v_ = *v;
    uPtr(__this->_obj)->IsLoading(v_);
}

// public PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property(Fuse.Triggers.PullToReload obj) [instance] :4
void PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property::ctor_1(::g::Fuse::Triggers::PullToReload* obj)
{
    uStackFrame __("PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property", ".ctor(Fuse.Triggers.PullToReload)");
    ctor_();
    _obj = obj;
}

// public PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property New(Fuse.Triggers.PullToReload obj) [static] :4
PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property* PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property::New1(::g::Fuse::Triggers::PullToReload* obj)
{
    PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property* obj1 = (PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property*)uNew(PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
