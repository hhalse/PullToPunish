// This file was generated based on '/usr/local/share/uno/Packages/Android/0.23.1/Android/android/media/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}

namespace g{
namespace Android{
namespace android{
namespace media{

// public abstract extern interface MediaPlayerDLROnVideoSizeChangedListener :18836
// {
uInterfaceType* MediaPlayerDLROnVideoSizeChangedListener_typeof();

struct MediaPlayerDLROnVideoSizeChangedListener
{
    void(*fp_onVideoSizeChanged)(uObject*, ::g::Android::android::media::MediaPlayer*, int*, int*);
    static void onVideoSizeChanged(const uInterface& __this, ::g::Android::android::media::MediaPlayer* arg0, int arg1, int arg2) { __this.VTable<MediaPlayerDLROnVideoSizeChangedListener>()->fp_onVideoSizeChanged(__this, arg0, &arg1, &arg2); }
};
// }

}}}} // ::g::Android::android::media
