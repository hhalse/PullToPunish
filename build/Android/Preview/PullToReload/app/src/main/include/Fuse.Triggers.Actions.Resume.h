// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.23.2/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.PlaybackAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Resume;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Resume :228
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Resume_typeof();
void Resume__ctor_2_fn(Resume* __this);
void Resume__New1_fn(Resume** __retval);
void Resume__Perform_fn(Resume* __this, ::g::Fuse::Node* target);

struct Resume : ::g::Fuse::Triggers::Actions::PlaybackAction
{
    void ctor_2();
    static Resume* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
