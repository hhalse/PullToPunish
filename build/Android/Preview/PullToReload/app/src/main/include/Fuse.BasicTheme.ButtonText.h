// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.23.2/.uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.TextBlock.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.String.h>
namespace g{namespace Fuse{namespace BasicTheme{struct ButtonText;}}}

namespace g{
namespace Fuse{
namespace BasicTheme{

// public partial sealed class ButtonText :728
// {
::g::Fuse::Controls::TextControl_type* ButtonText_typeof();
void ButtonText__ctor_6_fn(ButtonText* __this);
void ButtonText__InitializeUX_fn(ButtonText* __this);
void ButtonText__New2_fn(ButtonText** __retval);

struct ButtonText : ::g::Fuse::Controls::TextBlock
{
    void ctor_6();
    void InitializeUX();
    static ButtonText* New2();
};
// }

}}} // ::g::Fuse::BasicTheme
