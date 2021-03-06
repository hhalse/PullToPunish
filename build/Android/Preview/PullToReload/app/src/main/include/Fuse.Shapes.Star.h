// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Shapes/0.23.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Shapes.PathShape.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Shapes{struct Star;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Shapes{

// public sealed class Star :1015
// {
::g::Fuse::Shapes::PathShape_type* Star_typeof();
void Star__ctor_3_fn(Star* __this);
void Star__get__offset_fn(Star* __this, ::g::Uno::Float2* __retval);
void Star__New1_fn(Star** __retval);
void Star__get_Points_fn(Star* __this, int* __retval);
void Star__set_Points_fn(Star* __this, int* value);
void Star__get_Radius_fn(Star* __this, float* __retval);
void Star__get_Ratio_fn(Star* __this, float* __retval);
void Star__set_Ratio_fn(Star* __this, float* value);
void Star__get_RotationDegrees_fn(Star* __this, float* __retval);
void Star__set_RotationDegrees_fn(Star* __this, float* value);
void Star__get_RotationRadians_fn(Star* __this, float* __retval);
void Star__get_RoundRatio_fn(Star* __this, float* __retval);
void Star__set_RoundRatio_fn(Star* __this, float* value);
void Star__get_SpokeRadius_fn(Star* __this, float* __retval);
void Star__UpdatePath_fn(Star* __this);

struct Star : ::g::Fuse::Shapes::PathShape
{
    float _cachedDegrees;
    int _cachedPoints;
    float _cachedRadius;
    float _cachedRoundRatio;
    float _cachedSpokeRadius;
    float _degrees;
    int _points;
    float _ratio;
    float _roundRatio;

    void ctor_3();
    ::g::Uno::Float2 _offset();
    int Points();
    void Points(int value);
    float Radius();
    float Ratio();
    void Ratio(float value);
    float RotationDegrees();
    void RotationDegrees(float value);
    float RotationRadians();
    float RoundRatio();
    void RoundRatio(float value);
    float SpokeRadius();
    static Star* New1();
};
// }

}}} // ::g::Fuse::Shapes
