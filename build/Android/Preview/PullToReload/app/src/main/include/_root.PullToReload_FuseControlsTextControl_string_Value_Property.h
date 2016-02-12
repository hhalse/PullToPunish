// This file was generated based on '/Users/n07101/dev/fuseProjects/pull-to-reload/build/Android/Preview/cache/PullToReload.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{struct PullToReload_FuseControlsTextControl_string_Value_Property;}

namespace g{

// internal sealed class PullToReload_FuseControlsTextControl_string_Value_Property :8
// {
::g::Uno::UX::Property_type* PullToReload_FuseControlsTextControl_string_Value_Property_typeof();
void PullToReload_FuseControlsTextControl_string_Value_Property__ctor_1_fn(PullToReload_FuseControlsTextControl_string_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj);
void PullToReload_FuseControlsTextControl_string_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, PullToReload_FuseControlsTextControl_string_Value_Property** __retval);
void PullToReload_FuseControlsTextControl_string_Value_Property__OnAddListener_fn(PullToReload_FuseControlsTextControl_string_Value_Property* __this, uDelegate* listener);
void PullToReload_FuseControlsTextControl_string_Value_Property__OnGet_fn(PullToReload_FuseControlsTextControl_string_Value_Property* __this, uString** __retval);
void PullToReload_FuseControlsTextControl_string_Value_Property__OnRemoveListener_fn(PullToReload_FuseControlsTextControl_string_Value_Property* __this, uDelegate* listener);
void PullToReload_FuseControlsTextControl_string_Value_Property__OnSet_fn(PullToReload_FuseControlsTextControl_string_Value_Property* __this, uString* v, uObject* origin);

struct PullToReload_FuseControlsTextControl_string_Value_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_1(::g::Fuse::Controls::TextControl* obj);
    static PullToReload_FuseControlsTextControl_string_Value_Property* New1(::g::Fuse::Controls::TextControl* obj);
};
// }

} // ::g
