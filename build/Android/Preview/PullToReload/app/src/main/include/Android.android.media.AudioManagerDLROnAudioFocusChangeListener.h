// This file was generated based on '/usr/local/share/uno/Packages/Android/0.23.1/Android/android/media/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace android{
namespace media{

// public abstract extern interface AudioManagerDLROnAudioFocusChangeListener :18605
// {
uInterfaceType* AudioManagerDLROnAudioFocusChangeListener_typeof();

struct AudioManagerDLROnAudioFocusChangeListener
{
    void(*fp_onAudioFocusChange)(uObject*, int*);
    static void onAudioFocusChange(const uInterface& __this, int arg0) { __this.VTable<AudioManagerDLROnAudioFocusChangeListener>()->fp_onAudioFocusChange(__this, &arg0); }
};
// }

}}}} // ::g::Android::android::media
