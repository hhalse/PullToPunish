// This file was generated based on '/usr/local/share/uno/Packages/Android/0.23.1/Android/java/util/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace java{namespace lang{struct Object;}}}}
namespace g{namespace Android{namespace java{namespace util{struct Observable;}}}}

namespace g{
namespace Android{
namespace java{
namespace util{

// public abstract extern interface Observer :15073
// {
uInterfaceType* Observer_typeof();

struct Observer
{
    void(*fp_update)(uObject*, ::g::Android::java::util::Observable*, ::g::Android::java::lang::Object*);
    static void update(const uInterface& __this, ::g::Android::java::util::Observable* arg0, ::g::Android::java::lang::Object* arg1) { __this.VTable<Observer>()->fp_update(__this, arg0, arg1); }
};
// }

}}}} // ::g::Android::java::util
