// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Video/0.23.2/Graphics/Android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct AndroidAudioHelpers;}}}}}

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace Android{

// internal static extern class AndroidAudioHelpers :624
// {
uClassType* AndroidAudioHelpers_typeof();
void AndroidAudioHelpers__GetAudioFocus_fn();
void AndroidAudioHelpers__GetAudioFocus1_fn(int* streamType);
void AndroidAudioHelpers__ReleaseAudioFocus_fn();

struct AndroidAudioHelpers : uObject
{
    static void GetAudioFocus();
    static void GetAudioFocus1(int streamType);
    static void ReleaseAudioFocus();
};
// }

}}}}} // ::g::Fuse::Video::Graphics::Android
