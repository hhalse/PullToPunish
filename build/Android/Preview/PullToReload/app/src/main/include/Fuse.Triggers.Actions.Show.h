// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.23.2/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Show;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Show :468
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Show_typeof();
void Show__ctor_1_fn(Show* __this);
void Show__New1_fn(Show** __retval);
void Show__Perform_fn(Show* __this, ::g::Fuse::Node* target);

struct Show : ::g::Fuse::Triggers::Actions::TriggerAction
{
    void ctor_1();
    static Show* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
