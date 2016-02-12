// This file was generated based on '/Users/n07101/dev/fuseProjects/pull-to-reload/build/Android/Preview/cache/PullToReload.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PullToReload_FuseTriggersWhileBool_bool_Value_Property.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class PullToReload_FuseTriggersWhileBool_bool_Value_Property :45
// {
::g::Uno::UX::Property_type* PullToReload_FuseTriggersWhileBool_bool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(PullToReload_FuseTriggersWhileBool_bool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("PullToReload_FuseTriggersWhileBool_bool_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))PullToReload_FuseTriggersWhileBool_bool_Value_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))PullToReload_FuseTriggersWhileBool_bool_Value_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetFields(2,
        ::g::Fuse::Triggers::WhileBool_typeof(), offsetof(::g::PullToReload_FuseTriggersWhileBool_bool_Value_Property, _obj), 0);
    return type;
}

// public PullToReload_FuseTriggersWhileBool_bool_Value_Property(Fuse.Triggers.WhileBool obj) :48
void PullToReload_FuseTriggersWhileBool_bool_Value_Property__ctor_1_fn(PullToReload_FuseTriggersWhileBool_bool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj)
{
    __this->ctor_1(obj);
}

// public PullToReload_FuseTriggersWhileBool_bool_Value_Property New(Fuse.Triggers.WhileBool obj) :48
void PullToReload_FuseTriggersWhileBool_bool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, PullToReload_FuseTriggersWhileBool_bool_Value_Property** __retval)
{
    *__retval = PullToReload_FuseTriggersWhileBool_bool_Value_Property::New1(obj);
}

// protected override sealed bool OnGet() :49
void PullToReload_FuseTriggersWhileBool_bool_Value_Property__OnGet_fn(PullToReload_FuseTriggersWhileBool_bool_Value_Property* __this, bool* __retval)
{
    uStackFrame __("PullToReload_FuseTriggersWhileBool_bool_Value_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// protected override sealed void OnSet(bool v, object origin) :50
void PullToReload_FuseTriggersWhileBool_bool_Value_Property__OnSet_fn(PullToReload_FuseTriggersWhileBool_bool_Value_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("PullToReload_FuseTriggersWhileBool_bool_Value_Property", "OnSet(bool,object)");
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public PullToReload_FuseTriggersWhileBool_bool_Value_Property(Fuse.Triggers.WhileBool obj) [instance] :48
void PullToReload_FuseTriggersWhileBool_bool_Value_Property::ctor_1(::g::Fuse::Triggers::WhileBool* obj)
{
    uStackFrame __("PullToReload_FuseTriggersWhileBool_bool_Value_Property", ".ctor(Fuse.Triggers.WhileBool)");
    ctor_();
    _obj = obj;
}

// public PullToReload_FuseTriggersWhileBool_bool_Value_Property New(Fuse.Triggers.WhileBool obj) [static] :48
PullToReload_FuseTriggersWhileBool_bool_Value_Property* PullToReload_FuseTriggersWhileBool_bool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj)
{
    PullToReload_FuseTriggersWhileBool_bool_Value_Property* obj1 = (PullToReload_FuseTriggersWhileBool_bool_Value_Property*)uNew(PullToReload_FuseTriggersWhileBool_bool_Value_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
