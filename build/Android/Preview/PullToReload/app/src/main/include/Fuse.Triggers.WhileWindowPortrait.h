// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.23.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileWindowAspect.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileWindowPortrait;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileWindowPortrait :2046
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowPortrait_typeof();
void WhileWindowPortrait__ctor_5_fn(WhileWindowPortrait* __this);
void WhileWindowPortrait__get_IsActive_fn(WhileWindowPortrait* __this, bool* __retval);
void WhileWindowPortrait__New1_fn(WhileWindowPortrait** __retval);

struct WhileWindowPortrait : ::g::Fuse::Triggers::WhileWindowAspect
{
    void ctor_5();
    static WhileWindowPortrait* New1();
};
// }

}}} // ::g::Fuse::Triggers
