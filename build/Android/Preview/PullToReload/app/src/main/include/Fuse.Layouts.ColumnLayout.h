// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.23.2/Layouts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct ColumnLayout;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class ColumnLayout :116
// {
::g::Fuse::Layouts::Layout_type* ColumnLayout_typeof();
void ColumnLayout__ctor_1_fn(ColumnLayout* __this);
void ColumnLayout__Arrange_fn(ColumnLayout* __this, uObject* nodes, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* offset, bool* doArrange, ::g::Uno::Float4* padding, ::g::Uno::Float2* __retval);
void ColumnLayout__ArrangePaddingBox_fn(ColumnLayout* __this, uObject* nodes, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp);
void ColumnLayout__get_ColumnCount_fn(ColumnLayout* __this, int* __retval);
void ColumnLayout__set_ColumnCount_fn(ColumnLayout* __this, int* value);
void ColumnLayout__GetContentSize_fn(ColumnLayout* __this, uObject* nodes, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void ColumnLayout__LeastAt_fn(ColumnLayout* __this, uArray* c, int* __retval);
void ColumnLayout__Max_fn(ColumnLayout* __this, uArray* c, float* __retval);
void ColumnLayout__New1_fn(ColumnLayout** __retval);
void ColumnLayout__get_Orientation_fn(ColumnLayout* __this, int* __retval);
void ColumnLayout__set_Orientation_fn(ColumnLayout* __this, int* value);

struct ColumnLayout : ::g::Fuse::Layouts::Layout
{
    int _columnCount;
    int _orientation;

    void ctor_1();
    ::g::Uno::Float2 Arrange(uObject* nodes, ::g::Fuse::LayoutParams lp, ::g::Uno::Float2 fillSize, int fillSet, ::g::Uno::Float2 offset, bool doArrange, ::g::Uno::Float4 padding);
    int ColumnCount();
    void ColumnCount(int value);
    int LeastAt(uArray* c);
    float Max(uArray* c);
    int Orientation();
    void Orientation(int value);
    static ColumnLayout* New1();
};
// }

}}} // ::g::Fuse::Layouts
