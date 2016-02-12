// This file was generated based on '/Users/n07101/dev/fuseProjects/pull-to-reload/build/Android/Preview/cache/PullToReload.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PullToReload_FuseControlsTextControl_string_Value_Property.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Object.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uType* TYPES[2];

namespace g{

// internal sealed class PullToReload_FuseControlsTextControl_string_Value_Property :8
// {
::g::Uno::UX::Property_type* PullToReload_FuseControlsTextControl_string_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(PullToReload_FuseControlsTextControl_string_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("PullToReload_FuseControlsTextControl_string_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_OnAddListener = (void(*)(::g::Uno::UX::Property*, uDelegate*))PullToReload_FuseControlsTextControl_string_Value_Property__OnAddListener_fn;
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))PullToReload_FuseControlsTextControl_string_Value_Property__OnGet_fn;
    type->fp_OnRemoveListener = (void(*)(::g::Uno::UX::Property*, uDelegate*))PullToReload_FuseControlsTextControl_string_Value_Property__OnRemoveListener_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))PullToReload_FuseControlsTextControl_string_Value_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[1] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(2,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::PullToReload_FuseControlsTextControl_string_Value_Property, _obj), 0);
    return type;
}

// public PullToReload_FuseControlsTextControl_string_Value_Property(Fuse.Controls.TextControl obj) :11
void PullToReload_FuseControlsTextControl_string_Value_Property__ctor_1_fn(PullToReload_FuseControlsTextControl_string_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj)
{
    __this->ctor_1(obj);
}

// public PullToReload_FuseControlsTextControl_string_Value_Property New(Fuse.Controls.TextControl obj) :11
void PullToReload_FuseControlsTextControl_string_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, PullToReload_FuseControlsTextControl_string_Value_Property** __retval)
{
    *__retval = PullToReload_FuseControlsTextControl_string_Value_Property::New1(obj);
}

// protected override sealed void OnAddListener(Uno.UX.ValueChangedHandler<string> listener) :14
void PullToReload_FuseControlsTextControl_string_Value_Property__OnAddListener_fn(PullToReload_FuseControlsTextControl_string_Value_Property* __this, uDelegate* listener)
{
    uStackFrame __("PullToReload_FuseControlsTextControl_string_Value_Property", "OnAddListener(Uno.UX.ValueChangedHandler<string>)");
    uPtr(__this->_obj)->add_ValueChanged(listener);
}

// protected override sealed string OnGet() :12
void PullToReload_FuseControlsTextControl_string_Value_Property__OnGet_fn(PullToReload_FuseControlsTextControl_string_Value_Property* __this, uString** __retval)
{
    uStackFrame __("PullToReload_FuseControlsTextControl_string_Value_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// protected override sealed void OnRemoveListener(Uno.UX.ValueChangedHandler<string> listener) :15
void PullToReload_FuseControlsTextControl_string_Value_Property__OnRemoveListener_fn(PullToReload_FuseControlsTextControl_string_Value_Property* __this, uDelegate* listener)
{
    uStackFrame __("PullToReload_FuseControlsTextControl_string_Value_Property", "OnRemoveListener(Uno.UX.ValueChangedHandler<string>)");
    uPtr(__this->_obj)->remove_ValueChanged(listener);
}

// protected override sealed void OnSet(string v, object origin) :13
void PullToReload_FuseControlsTextControl_string_Value_Property__OnSet_fn(PullToReload_FuseControlsTextControl_string_Value_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("PullToReload_FuseControlsTextControl_string_Value_Property", "OnSet(string,object)");
    uPtr(__this->_obj)->SetValue1(v, origin);
}

// public PullToReload_FuseControlsTextControl_string_Value_Property(Fuse.Controls.TextControl obj) [instance] :11
void PullToReload_FuseControlsTextControl_string_Value_Property::ctor_1(::g::Fuse::Controls::TextControl* obj)
{
    uStackFrame __("PullToReload_FuseControlsTextControl_string_Value_Property", ".ctor(Fuse.Controls.TextControl)");
    ctor_();
    _obj = obj;
    uPtr(obj)->add_ValueChanged(uDelegate::New(::TYPES[1/*Uno.UX.ValueChangedHandler<string>*/], (void*)::g::Uno::UX::Property__OnValueChanged_fn, this));
}

// public PullToReload_FuseControlsTextControl_string_Value_Property New(Fuse.Controls.TextControl obj) [static] :11
PullToReload_FuseControlsTextControl_string_Value_Property* PullToReload_FuseControlsTextControl_string_Value_Property::New1(::g::Fuse::Controls::TextControl* obj)
{
    PullToReload_FuseControlsTextControl_string_Value_Property* obj1 = (PullToReload_FuseControlsTextControl_string_Value_Property*)uNew(PullToReload_FuseControlsTextControl_string_Value_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
