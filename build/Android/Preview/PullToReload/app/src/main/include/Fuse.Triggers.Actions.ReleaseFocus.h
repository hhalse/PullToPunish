// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.23.2/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct ReleaseFocus;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class ReleaseFocus :159
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ReleaseFocus_typeof();
void ReleaseFocus__ctor_1_fn(ReleaseFocus* __this);
void ReleaseFocus__New1_fn(ReleaseFocus** __retval);
void ReleaseFocus__Perform_fn(ReleaseFocus* __this, ::g::Fuse::Node* target);

struct ReleaseFocus : ::g::Fuse::Triggers::Actions::TriggerAction
{
    void ctor_1();
    static ReleaseFocus* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
