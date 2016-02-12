// This file was generated based on '/Users/n07101/dev/fuseProjects/pull-to-reload/build/Android/Preview/cache/PullToReload.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Rotation;}}
namespace g{struct PullToReload_FuseRotation_float_Degrees_Property;}

namespace g{

// internal sealed class PullToReload_FuseRotation_float_Degrees_Property :31
// {
::g::Uno::UX::Property_type* PullToReload_FuseRotation_float_Degrees_Property_typeof();
void PullToReload_FuseRotation_float_Degrees_Property__ctor_1_fn(PullToReload_FuseRotation_float_Degrees_Property* __this, ::g::Fuse::Rotation* obj);
void PullToReload_FuseRotation_float_Degrees_Property__New1_fn(::g::Fuse::Rotation* obj, PullToReload_FuseRotation_float_Degrees_Property** __retval);
void PullToReload_FuseRotation_float_Degrees_Property__OnGet_fn(PullToReload_FuseRotation_float_Degrees_Property* __this, float* __retval);
void PullToReload_FuseRotation_float_Degrees_Property__OnSet_fn(PullToReload_FuseRotation_float_Degrees_Property* __this, float* v, uObject* origin);

struct PullToReload_FuseRotation_float_Degrees_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Rotation*> _obj;

    void ctor_1(::g::Fuse::Rotation* obj);
    static PullToReload_FuseRotation_float_Degrees_Property* New1(::g::Fuse::Rotation* obj);
};
// }

} // ::g
