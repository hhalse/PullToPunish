// This file was generated based on '/Users/n07101/dev/fuseProjects/pull-to-reload/build/Android/Preview/cache/SmallCog.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PullToReload_bundle.h>
#include <_root.SmallCog.h>
#include <Fuse.Elements.Element.h>
#include <Uno.BundleFile.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
static uType* TYPES[4];

namespace g{

// public partial sealed class SmallCog :1
// {
// static SmallCog() :3
static void SmallCog__cctor_5_fn(uType* __type)
{
}

::g::Fuse::Controls::Panel_type* SmallCog_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 107;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(SmallCog);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("SmallCog", options);
    type->SetBase(::g::Fuse::Controls::Image_typeof());
    type->fp_ctor_ = (void*)SmallCog__New3_fn;
    type->fp_cctor_ = SmallCog__cctor_5_fn;
    type->interface7.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__FuseNavigationINavigationPanelAddChild_fn;
    type->interface7.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__FuseNavigationINavigationPanelAddChildAt_fn;
    type->interface7.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__FuseNavigationINavigationPanelRemoveChild_fn;
    type->interface7.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__FuseNavigationINavigationPanelGetChild_fn;
    type->interface8.fp_Add = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Panel__FuseIObjectContainerAdd_fn;
    type->interface8.fp_Insert = (void(*)(uObject*, int*, uObject*))::g::Fuse::Controls::Panel__FuseIObjectContainerInsert_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Panel__FuseIObjectContainerRemove_fn;
    type->interface8.fp_BeginRemove = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Panel__FuseIObjectContainerBeginRemove_fn;
    type->interface7.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__FuseNavigationINavigationPanelget_ChildCount_fn;
    type->interface7.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface7.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface7.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface7.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface7.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface7.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface7.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface7.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface7.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface7.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface7.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface2.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface4.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface3.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface6.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface5.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface5.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface5.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface5.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[0] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[2] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[3] = ::g::PullToReload_bundle_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8));
    type->SetFields(107);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SmallCog__New3_fn, 0, true, SmallCog_typeof(), 0));
    return type;
}

// public SmallCog() :6
void SmallCog__ctor_5_fn(SmallCog* __this)
{
    __this->ctor_5();
}

// private void InitializeUX() :10
void SmallCog__InitializeUX_fn(SmallCog* __this)
{
    __this->InitializeUX();
}

// public SmallCog New() :6
void SmallCog__New3_fn(SmallCog** __retval)
{
    *__retval = SmallCog::New3();
}

// public SmallCog() [instance] :6
void SmallCog::ctor_5()
{
    uStackFrame __("SmallCog", ".ctor()");
    ctor_4();
    InitializeUX();
}

// private void InitializeUX() [instance] :10
void SmallCog::InitializeUX()
{
    uStackFrame __("SmallCog", "InitializeUX()");
    Color(::g::Uno::Float4__New2(0.2431373f, 0.3921569f, 0.7176471f, 1.0f));
    Width(60.0f);
    Height(60.0f);
    File(::g::Uno::UX::BundleFileSource::New1(::g::PullToReload_bundle::cog1_whiteeb487005()));
}

// public SmallCog New() [static] :6
SmallCog* SmallCog::New3()
{
    SmallCog* obj1 = (SmallCog*)uNew(SmallCog_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

} // ::g
