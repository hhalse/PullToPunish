// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.23.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Threading.IDispatcher.h>

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface IDispatcher :15
// {
uInterfaceType* IDispatcher_typeof();

struct IDispatcher
{
    void(*fp_Dispatch)(uObject*, int*, uDelegate*);
    static void Dispatch(const uInterface& __this, int priority, uDelegate* action) { __this.VTable<IDispatcher>()->fp_Dispatch(__this, &priority, action); }
};
// }

}}} // ::g::Fuse::Scripting
