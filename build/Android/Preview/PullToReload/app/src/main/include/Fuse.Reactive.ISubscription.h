// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface ISubscription :1364
// {
uInterfaceType* ISubscription_typeof();

struct ISubscription
{
    void(*fp_SetExclusive)(uObject*, uObject*);
    static void SetExclusive(const uInterface& __this, uObject* newValue) { __this.VTable<ISubscription>()->fp_SetExclusive(__this, newValue); }
};
// }

}}} // ::g::Fuse::Reactive
