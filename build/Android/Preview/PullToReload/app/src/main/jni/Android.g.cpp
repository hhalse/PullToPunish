// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Bootstrapper.h>
#include <BootstrapperImpl_Android.h>

namespace g{
namespace Android{

// /usr/local/share/uno/Packages/UnoCore/0.23.4/Targets/CPlusPlus/Android/Uno/Base/$.uno(9)
// ----------------------------------------------------------------------------------------

// internal static extern class Bootstrapper :9
// {
uClassType* Bootstrapper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Bootstrapper", options);
    return type;
}

// public static extern void _RegisterTypes() :11
void Bootstrapper___RegisterTypes_fn()
{
    Bootstrapper::_RegisterTypes();
}

// public static extern void _RegisterTypes() [static] :11
void Bootstrapper::_RegisterTypes()
{
    uStackFrame __("Android.Bootstrapper", "_RegisterTypes()");
    ::BootstrapperImpl();
}
// }

}} // ::g::Android
