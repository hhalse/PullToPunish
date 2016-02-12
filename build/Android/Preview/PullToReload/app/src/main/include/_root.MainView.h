// This file was generated based on '/Users/n07101/dev/fuseProjects/pull-to-reload/build/Android/Preview/cache/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
namespace g{namespace Fuse{namespace Effects{struct DropShadow;}}}
namespace g{struct MainView;}
namespace g{struct PullToReload_FuseControlsTextControl_string_Value_Property;}

namespace g{

// public partial sealed class MainView :1
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_3_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New1_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Fuse::Effects::DropShadow*> dropShadow;
    uStrong< ::g::PullToReload_FuseControlsTextControl_string_Value_Property*> temp_Value_inst;

    void ctor_3();
    void InitializeUX();
    static MainView* New1();
};
// }

} // ::g
