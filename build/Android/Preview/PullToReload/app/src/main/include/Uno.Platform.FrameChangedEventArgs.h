// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.23.4/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
#include <Uno.Rect.h>
namespace g{namespace Uno{namespace Platform{struct FrameChangedEventArgs;}}}

namespace g{
namespace Uno{
namespace Platform{

// public sealed class FrameChangedEventArgs :172
// {
uType* FrameChangedEventArgs_typeof();
void FrameChangedEventArgs__ctor_1_fn(FrameChangedEventArgs* __this, ::g::Uno::Rect* newFrame);
void FrameChangedEventArgs__New2_fn(::g::Uno::Rect* newFrame, FrameChangedEventArgs** __retval);
void FrameChangedEventArgs__get_NewFrame_fn(FrameChangedEventArgs* __this, ::g::Uno::Rect* __retval);
void FrameChangedEventArgs__set_NewFrame_fn(FrameChangedEventArgs* __this, ::g::Uno::Rect* value);

struct FrameChangedEventArgs : ::g::Uno::EventArgs
{
    ::g::Uno::Rect _NewFrame;

    void ctor_1(::g::Uno::Rect newFrame);
    ::g::Uno::Rect NewFrame();
    void NewFrame(::g::Uno::Rect value);
    static FrameChangedEventArgs* New2(::g::Uno::Rect newFrame);
};
// }

}}} // ::g::Uno::Platform
