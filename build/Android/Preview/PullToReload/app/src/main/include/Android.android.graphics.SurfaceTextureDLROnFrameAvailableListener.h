// This file was generated based on '/usr/local/share/uno/Packages/Android/0.23.1/Android/android/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace graphics{struct SurfaceTexture;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public abstract extern interface SurfaceTextureDLROnFrameAvailableListener :12544
// {
uInterfaceType* SurfaceTextureDLROnFrameAvailableListener_typeof();

struct SurfaceTextureDLROnFrameAvailableListener
{
    void(*fp_onFrameAvailable)(uObject*, ::g::Android::android::graphics::SurfaceTexture*);
    static void onFrameAvailable(const uInterface& __this, ::g::Android::android::graphics::SurfaceTexture* arg0) { __this.VTable<SurfaceTextureDLROnFrameAvailableListener>()->fp_onFrameAvailable(__this, arg0); }
};
// }

}}}} // ::g::Android::android::graphics
