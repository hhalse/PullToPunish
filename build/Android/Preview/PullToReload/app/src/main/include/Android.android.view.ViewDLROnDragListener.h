// This file was generated based on '/usr/local/share/uno/Packages/Android/0.23.1/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace view{struct DragEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface ViewDLROnDragListener :27280
// {
uInterfaceType* ViewDLROnDragListener_typeof();

struct ViewDLROnDragListener
{
    void(*fp_onDrag)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::DragEvent*, bool*);
    static bool onDrag(const uInterface& __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::DragEvent* arg1) { bool __retval; return __this.VTable<ViewDLROnDragListener>()->fp_onDrag(__this, arg0, arg1, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::view
