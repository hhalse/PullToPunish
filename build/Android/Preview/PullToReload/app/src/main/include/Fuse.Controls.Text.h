// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.23.2/$.uno'.
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
namespace g{namespace Fuse{namespace Controls{struct Text;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Text :4263
// {
::g::Fuse::Controls::TextControl_type* Text_typeof();
void Text__ctor_6_fn(Text* __this);
void Text__New2_fn(Text** __retval);
void Text__OnRooted_fn(Text* __this);
void Text__OnUnrooted_fn(Text* __this);

struct Text : ::g::Fuse::Controls::TextBlock
{
    void ctor_6();
    static Text* New2();
};
// }

}}} // ::g::Fuse::Controls
