// This file was generated based on '/Users/n07101/dev/fuseProjects/pull-to-reload/build/Android/Preview/cache/CogWheelReload.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BigCog.h>
#include <_root.CogWheelReload.h>
#include <_root.CogWheelReload.Template.h>
#include <_root.PullToReload_FuseElementsElement_float_Height_Property.h>
#include <_root.PullToReload_FuseElementsElement_float_MinHeight_Property.h>
#include <_root.PullToReload_FuseRotation_float_Degrees_Property.h>
#include <_root.PullToReload_FuseTranslation_float_Y_Property.h>
#include <_root.PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property.h>
#include <_root.PullToReload_FuseTriggersWhileBool_bool_Value_Property.h>
#include <_root.SmallCog.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Spin.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEventHandler.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Rotation.h>
#include <Fuse.Style.h>
#include <Fuse.Transform.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.PlaybackAction.h>
#include <Fuse.Triggers.Actions.PlayTo.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Actions.TriggerDirection.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.PullToReload.h>
#include <Fuse.Triggers.ScrollingAnimation.h>
#include <Fuse.Triggers.ScrollingAnimationRange.h>
#include <Fuse.Triggers.State.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Template-1.h>
static uString* STRINGS[8];
static uType* TYPES[29];

namespace g{

// public partial sealed class CogWheelReload :1
// {
// static CogWheelReload() :51
static void CogWheelReload__cctor_4_fn(uType* __type)
{
}

::g::Fuse::Controls::Panel_type* CogWheelReload_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 131;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(CogWheelReload);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("CogWheelReload", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)CogWheelReload__New2_fn;
    type->fp_cctor_ = CogWheelReload__cctor_4_fn;
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
    ::STRINGS[0] = uString::Const("isLoading");
    ::STRINGS[1] = uString::Const("reloadHandler");
    ::STRINGS[2] = uString::Const("cogPanel");
    ::STRINGS[3] = uString::Const("cog1");
    ::STRINGS[4] = uString::Const("cog2");
    ::STRINGS[5] = uString::Const("cog3");
    ::STRINGS[6] = uString::Const("cog4");
    ::STRINGS[7] = uString::Const("cog5");
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Triggers::WhileBool_typeof();
    ::TYPES[2] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Image_typeof());
    ::TYPES[3] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[4] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[5] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[6] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[7] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[8] = ::g::Fuse::Style_typeof();
    ::TYPES[9] = ::g::Uno::UX::ITemplate_typeof();
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[11] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[12] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[13] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[14] = ::g::Fuse::Transform_typeof();
    ::TYPES[15] = ::g::Fuse::Translation_typeof();
    ::TYPES[16] = ::g::Fuse::Rotation_typeof();
    ::TYPES[17] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[18] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[19] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[20] = ::g::Fuse::Triggers::ScrollingAnimation_typeof();
    ::TYPES[21] = ::g::Fuse::Triggers::PullToReload_typeof();
    ::TYPES[22] = ::g::Fuse::NodeEventHandler_typeof();
    ::TYPES[23] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[24] = ::g::Fuse::Triggers::Actions::PlayTo_typeof();
    ::TYPES[25] = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    ::TYPES[26] = ::g::Fuse::Triggers::IPlayback_typeof();
    ::TYPES[27] = ::g::Fuse::Animations::Spin_typeof();
    ::TYPES[28] = ::g::Fuse::Behavior_typeof();
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
    type->SetFields(100,
        ::g::SmallCog_typeof(), offsetof(::g::CogWheelReload, cog1), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::CogWheelReload, cog1Rotation), 0,
        ::g::PullToReload_FuseRotation_float_Degrees_Property_typeof(), offsetof(::g::CogWheelReload, cog1Rotation_Degrees_inst), 0,
        ::g::BigCog_typeof(), offsetof(::g::CogWheelReload, cog2), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::CogWheelReload, cog2Rotation), 0,
        ::g::PullToReload_FuseRotation_float_Degrees_Property_typeof(), offsetof(::g::CogWheelReload, cog2Rotation_Degrees_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::CogWheelReload, cog2Trans), 0,
        ::g::PullToReload_FuseTranslation_float_Y_Property_typeof(), offsetof(::g::CogWheelReload, cog2Trans_Y_inst), 0,
        ::g::BigCog_typeof(), offsetof(::g::CogWheelReload, cog3), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::CogWheelReload, cog3Rotation), 0,
        ::g::PullToReload_FuseRotation_float_Degrees_Property_typeof(), offsetof(::g::CogWheelReload, cog3Rotation_Degrees_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::CogWheelReload, cog3Trans), 0,
        ::g::PullToReload_FuseTranslation_float_Y_Property_typeof(), offsetof(::g::CogWheelReload, cog3Trans_Y_inst), 0,
        ::g::BigCog_typeof(), offsetof(::g::CogWheelReload, cog4), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::CogWheelReload, cog4Rotation), 0,
        ::g::PullToReload_FuseRotation_float_Degrees_Property_typeof(), offsetof(::g::CogWheelReload, cog4Rotation_Degrees_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::CogWheelReload, cog4Trans), 0,
        ::g::PullToReload_FuseTranslation_float_Y_Property_typeof(), offsetof(::g::CogWheelReload, cog4Trans_Y_inst), 0,
        ::g::BigCog_typeof(), offsetof(::g::CogWheelReload, cog5), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::CogWheelReload, cog5Rotation), 0,
        ::g::PullToReload_FuseRotation_float_Degrees_Property_typeof(), offsetof(::g::CogWheelReload, cog5Rotation_Degrees_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::CogWheelReload, cog5Trans), 0,
        ::g::PullToReload_FuseTranslation_float_Y_Property_typeof(), offsetof(::g::CogWheelReload, cog5Trans_Y_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::CogWheelReload, cogPanel), 0,
        ::g::PullToReload_FuseElementsElement_float_Height_Property_typeof(), offsetof(::g::CogWheelReload, cogPanel_Height_inst), 0,
        ::g::PullToReload_FuseElementsElement_float_MinHeight_Property_typeof(), offsetof(::g::CogWheelReload, cogPanel_MinHeight_inst), 0,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(::g::CogWheelReload, moveCogsIntoPlace), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::CogWheelReload, retainSpace), 0,
        ::g::PullToReload_FuseTriggersWhileBool_bool_Value_Property_typeof(), offsetof(::g::CogWheelReload, retainSpace_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::CogWheelReload, temp_eb0), 0,
        ::g::PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property_typeof(), offsetof(::g::CogWheelReload, temp_IsLoading_inst), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CogWheelReload__New2_fn, 0, true, CogWheelReload_typeof(), 0));
    return type;
}

// public CogWheelReload() :54
void CogWheelReload__ctor_4_fn(CogWheelReload* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :58
void CogWheelReload__InitializeUX_fn(CogWheelReload* __this)
{
    __this->InitializeUX();
}

// public CogWheelReload New() :54
void CogWheelReload__New2_fn(CogWheelReload** __retval)
{
    *__retval = CogWheelReload::New2();
}

// public CogWheelReload() [instance] :54
void CogWheelReload::ctor_4()
{
    uStackFrame __("CogWheelReload", ".ctor()");
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :58
void CogWheelReload::InitializeUX()
{
    uStackFrame __("CogWheelReload", "InitializeUX()");
    CogWheelReload__Template* collection1;
    cogPanel = ::g::Fuse::Controls::Panel::New1();
    cogPanel_MinHeight_inst = ::g::PullToReload_FuseElementsElement_float_MinHeight_Property::New1(cogPanel);
    cogPanel_Height_inst = ::g::PullToReload_FuseElementsElement_float_Height_Property::New1(cogPanel);
    cog1Rotation = ::g::Fuse::Rotation::New1();
    cog1Rotation_Degrees_inst = ::g::PullToReload_FuseRotation_float_Degrees_Property::New1(cog1Rotation);
    cog2Rotation = ::g::Fuse::Rotation::New1();
    cog2Rotation_Degrees_inst = ::g::PullToReload_FuseRotation_float_Degrees_Property::New1(cog2Rotation);
    cog3Rotation = ::g::Fuse::Rotation::New1();
    cog3Rotation_Degrees_inst = ::g::PullToReload_FuseRotation_float_Degrees_Property::New1(cog3Rotation);
    cog4Rotation = ::g::Fuse::Rotation::New1();
    cog4Rotation_Degrees_inst = ::g::PullToReload_FuseRotation_float_Degrees_Property::New1(cog4Rotation);
    cog5Rotation = ::g::Fuse::Rotation::New1();
    cog5Rotation_Degrees_inst = ::g::PullToReload_FuseRotation_float_Degrees_Property::New1(cog5Rotation);
    cog2Trans = ::g::Fuse::Translation::New1();
    cog2Trans_Y_inst = ::g::PullToReload_FuseTranslation_float_Y_Property::New1(cog2Trans);
    cog3Trans = ::g::Fuse::Translation::New1();
    cog3Trans_Y_inst = ::g::PullToReload_FuseTranslation_float_Y_Property::New1(cog3Trans);
    cog4Trans = ::g::Fuse::Translation::New1();
    cog4Trans_Y_inst = ::g::PullToReload_FuseTranslation_float_Y_Property::New1(cog4Trans);
    cog5Trans = ::g::Fuse::Translation::New1();
    cog5Trans_Y_inst = ::g::PullToReload_FuseTranslation_float_Y_Property::New1(cog5Trans);
    retainSpace = ::g::Fuse::Triggers::WhileTrue::New1();
    retainSpace_Value_inst = ::g::PullToReload_FuseTriggersWhileBool_bool_Value_Property::New1(retainSpace);
    ::g::Fuse::Triggers::PullToReload* temp = ::g::Fuse::Triggers::PullToReload::New2();
    temp_IsLoading_inst = ::g::PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property::New1(temp);
    ::g::Fuse::Style* temp1 = ::g::Fuse::Style::New1();
    collection1 = CogWheelReload__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    CogWheelReload__Template* temp2 = collection1;
    cog1 = ::g::SmallCog::New3();
    cog2 = ::g::BigCog::New3();
    cog3 = ::g::BigCog::New3();
    ::g::Fuse::Rotation* temp3 = ::g::Fuse::Rotation::New1();
    cog4 = ::g::BigCog::New3();
    ::g::Fuse::Rotation* temp4 = ::g::Fuse::Rotation::New1();
    cog5 = ::g::BigCog::New3();
    ::g::Fuse::Rotation* temp5 = ::g::Fuse::Rotation::New1();
    ::g::Fuse::Drawing::StaticSolidColor* temp6 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.09411765f, 0.227451f, 0.4352941f, 1.0f));
    ::g::Fuse::Animations::Change* temp7 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], cogPanel_MinHeight_inst);
    ::g::Fuse::Triggers::ScrollingAnimation* temp8 = ::g::Fuse::Triggers::ScrollingAnimation::New1();
    ::g::Fuse::Animations::Change* temp9 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], cogPanel_Height_inst);
    ::g::Fuse::Animations::Change* temp10 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], cog1Rotation_Degrees_inst);
    ::g::Fuse::Animations::Change* temp11 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], cog2Rotation_Degrees_inst);
    ::g::Fuse::Animations::Change* temp12 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], cog3Rotation_Degrees_inst);
    ::g::Fuse::Animations::Change* temp13 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], cog4Rotation_Degrees_inst);
    ::g::Fuse::Animations::Change* temp14 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], cog5Rotation_Degrees_inst);
    moveCogsIntoPlace = ::g::Fuse::Triggers::Timeline::New1();
    ::g::Fuse::Animations::Change* temp15 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], cog2Trans_Y_inst);
    ::g::Fuse::Animations::Change* temp16 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], cog3Trans_Y_inst);
    ::g::Fuse::Animations::Change* temp17 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], cog4Trans_Y_inst);
    ::g::Fuse::Animations::Change* temp18 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], cog5Trans_Y_inst);
    ::g::Fuse::Triggers::State* temp19 = ::g::Fuse::Triggers::State::New1();
    ::g::Fuse::Triggers::State* temp20 = ::g::Fuse::Triggers::State::New1();
    ::g::Fuse::Triggers::Actions::PlayTo* temp21 = ::g::Fuse::Triggers::Actions::PlayTo::New1();
    ::g::Fuse::Triggers::State* temp22 = ::g::Fuse::Triggers::State::New1();
    ::g::Fuse::Animations::Change* temp23 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[5/*Fuse.Animations.Change<bool>*/], retainSpace_Value_inst);
    ::g::Fuse::Animations::Spin* temp24 = ::g::Fuse::Animations::Spin::New1();
    ::g::Fuse::Animations::Spin* temp25 = ::g::Fuse::Animations::Spin::New1();
    ::g::Fuse::Animations::Spin* temp26 = ::g::Fuse::Animations::Spin::New1();
    ::g::Fuse::Animations::Spin* temp27 = ::g::Fuse::Animations::Spin::New1();
    ::g::Fuse::Animations::Spin* temp28 = ::g::Fuse::Animations::Spin::New1();
    ::g::Fuse::Triggers::Actions::PlayTo* temp29 = ::g::Fuse::Triggers::Actions::PlayTo::New1();
    ::g::Fuse::Reactive::DataBinding* temp30 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[7/*Fuse.Reactive.DataBinding<bool>*/], temp_IsLoading_inst, ::STRINGS[0/*"isLoading"*/]);
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[1/*"reloadHandler"*/]);
    ClipToBounds(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[9/*Uno.UX.ITemplate*/])), (uObject*)temp2);
    uPtr(cogPanel)->Height(0.0f);
    uPtr(cogPanel)->Alignment(4);
    uPtr(cogPanel)->Name(::STRINGS[2/*"cogPanel"*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(cogPanel, 2);
    uPtr(cogPanel)->Background(temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cogPanel)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[10/*Fuse.Node*/])), cog1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cogPanel)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[10/*Fuse.Node*/])), cog2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cogPanel)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[10/*Fuse.Node*/])), cog3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cogPanel)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[10/*Fuse.Node*/])), cog4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cogPanel)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[10/*Fuse.Node*/])), cog5);
    uPtr(cog1)->Name(::STRINGS[3/*"cog1"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog1)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Transform*/])), cog1Rotation);
    uPtr(cog2)->Offset(::g::Uno::Float2__New2(60.0f, -60.0f));
    uPtr(cog2)->Name(::STRINGS[4/*"cog2"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog2)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Transform*/])), cog2Trans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog2)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Transform*/])), cog2Rotation);
    uPtr(cog2Trans)->Y(-100.0f);
    uPtr(cog3)->Offset(::g::Uno::Float2__New2(-60.0f, 60.0f));
    uPtr(cog3)->Name(::STRINGS[5/*"cog3"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog3)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Transform*/])), cog3Trans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog3)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Transform*/])), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog3)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Transform*/])), cog3Rotation);
    uPtr(cog3Trans)->Y(100.0f);
    temp3->Degrees(10.0f);
    uPtr(cog4)->Offset(::g::Uno::Float2__New2(130.0f, 30.0f));
    uPtr(cog4)->Name(::STRINGS[6/*"cog4"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog4)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Transform*/])), cog4Trans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog4)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Transform*/])), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog4)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Transform*/])), cog4Rotation);
    uPtr(cog4Trans)->Y(100.0f);
    temp4->Degrees(5.0f);
    uPtr(cog5)->Offset(::g::Uno::Float2__New2(-100.0f, -47.0f));
    uPtr(cog5)->Name(::STRINGS[7/*"cog5"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog5)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Transform*/])), cog5Trans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog5)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Transform*/])), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog5)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Transform*/])), cog5Rotation);
    uPtr(cog5Trans)->Y(-100.0f);
    temp5->Degrees(8.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(retainSpace)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp7);
    ::g::Fuse::Animations::Change__set_Value_fn(temp7, uCRef(75.0f));
    temp7->Easing(19);
    temp7->Duration(0.0);
    temp7->DurationBack(0.3);
    temp8->Range(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp14);
    ::g::Fuse::Animations::Change__set_Value_fn(temp9, uCRef(150.0f));
    temp9->Duration(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp10, uCRef(200.0f));
    temp10->Duration(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp11, uCRef(-93.0f));
    temp11->Duration(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp12, uCRef(-93.0f));
    temp12->Duration(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp13, uCRef(93.0f));
    temp13->Duration(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp14, uCRef(93.0f));
    temp14->Duration(1.0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moveCogsIntoPlace)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moveCogsIntoPlace)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moveCogsIntoPlace)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moveCogsIntoPlace)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp18);
    ::g::Fuse::Animations::Change__set_Value_fn(temp15, uCRef(0.0f));
    temp15->Easing(20);
    temp15->Duration(0.6);
    temp15->DurationBack(0.2);
    ::g::Fuse::Animations::Change__set_Value_fn(temp16, uCRef(0.0f));
    temp16->Easing(20);
    temp16->Duration(0.6);
    temp16->DurationBack(0.2);
    ::g::Fuse::Animations::Change__set_Value_fn(temp17, uCRef(0.0f));
    temp17->Easing(20);
    temp17->Duration(0.6);
    temp17->DurationBack(0.2);
    ::g::Fuse::Animations::Change__set_Value_fn(temp18, uCRef(0.0f));
    temp18->Easing(20);
    temp18->Duration(0.6);
    temp18->DurationBack(0.2);
    temp->add_ReloadHandler(uDelegate::New(::TYPES[22/*Fuse.NodeEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    temp->Pulling(temp19);
    temp->PulledPastThreshold(temp20);
    temp->Loading(temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Triggers.Actions.TriggerAction*/])), temp21);
    temp21->Progress(1.0);
    temp21->Target((uObject*)moveCogsIntoPlace);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Triggers.Actions.TriggerAction*/])), temp29);
    ::g::Fuse::Animations::Change__set_Value_fn(temp23, uCRef(true));
    temp23->DurationBack(0.5);
    temp24->Frequency(0.53125);
    temp24->Target(cog1);
    temp25->Frequency(-0.25);
    temp25->Target(cog2);
    temp26->Frequency(-0.25);
    temp26->Target(cog3);
    temp27->Frequency(0.25);
    temp27->Target(cog4);
    temp28->Frequency(0.25);
    temp28->Target(cog5);
    temp29->Progress(0.0);
    temp29->Direction(1);
    temp29->Target((uObject*)moveCogsIntoPlace);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[10/*Fuse.Node*/])), cogPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[28/*Fuse.Behavior*/])), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[28/*Fuse.Behavior*/])), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[28/*Fuse.Behavior*/])), retainSpace);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[28/*Fuse.Behavior*/])), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[28/*Fuse.Behavior*/])), moveCogsIntoPlace);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[28/*Fuse.Behavior*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Styles()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Style*/])), temp1);
}

// public CogWheelReload New() [static] :54
CogWheelReload* CogWheelReload::New2()
{
    CogWheelReload* obj2 = (CogWheelReload*)uNew(CogWheelReload_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

} // ::g
