// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.23.2/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.Controls.CompoundButton.h>
#include <Fuse.IDataContext.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Android{namespace android{namespace widget{struct CompoundButton;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct CheckBox;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public sealed extern class CheckBox :280
// {
::g::Fuse::Android::Controls::CompoundButton_type* CheckBox_typeof();
void CheckBox__ctor_4_fn(CheckBox* __this);
void CheckBox__CreateCompoundButton_fn(CheckBox* __this, ::g::Android::android::widget::CompoundButton** __retval);
void CheckBox__New1_fn(CheckBox** __retval);

struct CheckBox : ::g::Fuse::Android::Controls::CompoundButton
{
    void ctor_4();
    static CheckBox* New1();
};
// }

}}}} // ::g::Fuse::Android::Controls
