// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Dispatcher;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface IAsyncArray :1353
// {
uInterfaceType* IAsyncArray_typeof();

struct IAsyncArray
{
    void(*fp_Enum)(uObject*, ::g::Fuse::Reactive::Dispatcher*, uDelegate*);
    static void Enum(const uInterface& __this, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback) { __this.VTable<IAsyncArray>()->fp_Enum(__this, thread, callback); }
};
// }

}}} // ::g::Fuse::Reactive
