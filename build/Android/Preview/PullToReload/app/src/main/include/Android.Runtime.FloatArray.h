// This file was generated based on '/usr/local/share/uno/Packages/Android/0.23.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Float.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Runtime{struct FloatArray;}}}

namespace g{
namespace Android{
namespace Runtime{

// public sealed extern class FloatArray :1084
// {
struct FloatArray_type : ::g::Android::java::lang::Object_type
{
    ::g::Uno::Collections::IEnumerable interface2;
};

FloatArray_type* FloatArray_typeof();
void FloatArray__ctor_6_fn(FloatArray* __this, int* length);
void FloatArray__GetEnumerator_fn(FloatArray* __this, uObject** __retval);
void FloatArray__get_Item_fn(FloatArray* __this, int* i, float* __retval);
void FloatArray__set_Item_fn(FloatArray* __this, int* i, float* value);
void FloatArray__New6_fn(int* length, FloatArray** __retval);
void FloatArray__ToUnoArray_fn(FloatArray* __this, uArray** __retval);

struct FloatArray : ::g::Android::java::lang::Object
{
    void ctor_6(int length);
    uObject* GetEnumerator();
    float Item(int i);
    void Item(int i, float value);
    uArray* ToUnoArray();
    static FloatArray* New6(int length);
};
// }

}}} // ::g::Android::Runtime
