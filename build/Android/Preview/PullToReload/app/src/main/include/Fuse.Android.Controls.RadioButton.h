// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.23.2/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.Controls.CompoundButton.h>
#include <Fuse.IDataContext.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Android{namespace android{namespace widget{struct CompoundButton;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct RadioButton;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public sealed extern class RadioButton :289
// {
::g::Fuse::Android::Controls::CompoundButton_type* RadioButton_typeof();
void RadioButton__ctor_4_fn(RadioButton* __this);
void RadioButton__CreateCompoundButton_fn(RadioButton* __this, ::g::Android::android::widget::CompoundButton** __retval);
void RadioButton__New1_fn(RadioButton** __retval);

struct RadioButton : ::g::Fuse::Android::Controls::CompoundButton
{
    void ctor_4();
    static RadioButton* New1();
};
// }

}}}} // ::g::Fuse::Android::Controls
