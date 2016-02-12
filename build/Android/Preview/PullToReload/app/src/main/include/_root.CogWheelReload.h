// This file was generated based on '/Users/n07101/dev/fuseProjects/pull-to-reload/build/Android/Preview/cache/CogWheelReload.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Fuse{struct Rotation;}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{struct BigCog;}
namespace g{struct CogWheelReload;}
namespace g{struct PullToReload_FuseElementsElement_float_Height_Property;}
namespace g{struct PullToReload_FuseElementsElement_float_MinHeight_Property;}
namespace g{struct PullToReload_FuseRotation_float_Degrees_Property;}
namespace g{struct PullToReload_FuseTranslation_float_Y_Property;}
namespace g{struct PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property;}
namespace g{struct PullToReload_FuseTriggersWhileBool_bool_Value_Property;}
namespace g{struct SmallCog;}

namespace g{

// public partial sealed class CogWheelReload :1
// {
::g::Fuse::Controls::Panel_type* CogWheelReload_typeof();
void CogWheelReload__ctor_4_fn(CogWheelReload* __this);
void CogWheelReload__InitializeUX_fn(CogWheelReload* __this);
void CogWheelReload__New2_fn(CogWheelReload** __retval);

struct CogWheelReload : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::SmallCog*> cog1;
    uStrong< ::g::Fuse::Rotation*> cog1Rotation;
    uStrong< ::g::PullToReload_FuseRotation_float_Degrees_Property*> cog1Rotation_Degrees_inst;
    uStrong< ::g::BigCog*> cog2;
    uStrong< ::g::Fuse::Rotation*> cog2Rotation;
    uStrong< ::g::PullToReload_FuseRotation_float_Degrees_Property*> cog2Rotation_Degrees_inst;
    uStrong< ::g::Fuse::Translation*> cog2Trans;
    uStrong< ::g::PullToReload_FuseTranslation_float_Y_Property*> cog2Trans_Y_inst;
    uStrong< ::g::BigCog*> cog3;
    uStrong< ::g::Fuse::Rotation*> cog3Rotation;
    uStrong< ::g::PullToReload_FuseRotation_float_Degrees_Property*> cog3Rotation_Degrees_inst;
    uStrong< ::g::Fuse::Translation*> cog3Trans;
    uStrong< ::g::PullToReload_FuseTranslation_float_Y_Property*> cog3Trans_Y_inst;
    uStrong< ::g::BigCog*> cog4;
    uStrong< ::g::Fuse::Rotation*> cog4Rotation;
    uStrong< ::g::PullToReload_FuseRotation_float_Degrees_Property*> cog4Rotation_Degrees_inst;
    uStrong< ::g::Fuse::Translation*> cog4Trans;
    uStrong< ::g::PullToReload_FuseTranslation_float_Y_Property*> cog4Trans_Y_inst;
    uStrong< ::g::BigCog*> cog5;
    uStrong< ::g::Fuse::Rotation*> cog5Rotation;
    uStrong< ::g::PullToReload_FuseRotation_float_Degrees_Property*> cog5Rotation_Degrees_inst;
    uStrong< ::g::Fuse::Translation*> cog5Trans;
    uStrong< ::g::PullToReload_FuseTranslation_float_Y_Property*> cog5Trans_Y_inst;
    uStrong< ::g::Fuse::Controls::Panel*> cogPanel;
    uStrong< ::g::PullToReload_FuseElementsElement_float_Height_Property*> cogPanel_Height_inst;
    uStrong< ::g::PullToReload_FuseElementsElement_float_MinHeight_Property*> cogPanel_MinHeight_inst;
    uStrong< ::g::Fuse::Triggers::Timeline*> moveCogsIntoPlace;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> retainSpace;
    uStrong< ::g::PullToReload_FuseTriggersWhileBool_bool_Value_Property*> retainSpace_Value_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb0;
    uStrong< ::g::PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property*> temp_IsLoading_inst;

    void ctor_4();
    void InitializeUX();
    static CogWheelReload* New2();
};
// }

} // ::g
