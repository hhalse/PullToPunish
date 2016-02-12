// This file was generated based on '/Users/n07101/dev/fuseProjects/pull-to-reload/build/Android/Preview/cache/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CogWheelReload.h>
#include <_root.MainView.h>
#include <_root.PullToReload_bundle.h>
#include <_root.PullToReload_FuseControlsTextControl_string_Value_Property.h>
#include <Fuse.AppBase.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.GraphicsTheme.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Theme.h>
#include <Uno.Bool.h>
#include <Uno.BundleFile.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[4];
static uType* TYPES[18];

namespace g{

// public partial sealed class MainView :1
// {
// static MainView() :5
static void MainView__cctor__fn(uType* __type)
{
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    ::STRINGS[0] = uString::Const("punishment");
    ::STRINGS[1] = uString::Const("var Observable = require(\"FuseJS/Observable\");\n"
        "\t\t\n"
        "\t\tvar punishments = [\n"
        "\t\t\"Kj\303\270p noe digg\", \"G\303\245 med rar hatt\", \"10-pushups\",\n"
        "\t\t\"Ta en i lamasen\", \"Kj\303\270p godt og blandet til teamet\", \"Rydd opp alle kaffekopper\",\n"
        "\t\t\"T\303\270m alle pappesker\", \"Si: Jeg er lei for at jeg sinker teamet ved \303\245 komme for sent\",\n"
        "\t\t\"Se skikkelig lei deg ut i 5 minutter\", \"Du slapp unna straff denne gangen. Puh!\",\n"
        "\t\t\"Kle deg ut som gr\303\270t og f\303\245 lagt bilde ut p\303\245 Slack\", \n"
        "\t\t\"G\303\245 ut, kom inn igjen og si unnskyld\", \"Du m\303\245 hylle plattformen du ikke jobber p\303\245\",\n"
        "\t\t\"Du m\303\245 v\303\246re scrummaster neste stand-up\", \"Du m\303\245 komme med en innovasjonsdag-ide. N\303\205!\",\n"
        "\t\t\"Du m\303\245 prate svorsk resten av dagen\", \"Bind opp alle kablene\"\n"
        "\t\t];\n"
        "\t\t\n"
        "\t\tvar punishment = Observable(\"Straffen kommer her\");\n"
        "\t\tfunction endLoading(){\n"
        "\t\t\tpunishment.value=punishments[getRandomInt(0,punishments.length-1)];\n"
        "\t\t\tisLoading.value = false;\n"
        "\t\t}\n"
        "\n"
        "\t\tfunction getRandomInt(min, max) {\n"
        "  \t\t\treturn Math.floor(Math.random() * (max - min)) + min;\n"
        "\t\t}\n"
        "\n"
        "\t\tfunction reloadHandler(){\n"
        "\t\t\tisLoading.value = true;\n"
        "\t\t\tsetTimeout(endLoading, 3500);\n"
        "\t\t}\n"
        "\n"
        "\t\tvar isLoading = Observable(false);\n"
        "\n"
        "\t\tmodule.exports = {\n"
        "\t\t\tisLoading: isLoading,\n"
        "\t\t\treloadHandler: reloadHandler,\n"
        "\t\t\tpunishment : punishment\n"
        "\t\t\t\n"
        "\t\t};");
    ::STRINGS[2] = uString::Const("/Users/n07101/dev/fuseProjects/pull-to-reload/MainView.ux");
    ::STRINGS[3] = uString::Const("Pull to punish");
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Fuse::AppBase_typeof();
    ::TYPES[4] = ::g::Fuse::Reactive::JavaScript_typeof();
    ::TYPES[5] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[7] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[8] = ::g::Fuse::Node_typeof();
    ::TYPES[9] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[10] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[11] = ::g::Fuse::Effects::Effect_typeof();
    ::TYPES[12] = ::g::Fuse::Effects::DropShadow_typeof();
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    ::TYPES[14] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[15] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[16] = ::g::PullToReload_bundle_typeof();
    ::TYPES[17] = ::g::Fuse::GraphicsTheme_typeof();
    type->SetFields(16,
        ::g::Fuse::Effects::DropShadow_typeof(), offsetof(::g::MainView, dropShadow), 0,
        ::g::PullToReload_FuseControlsTextControl_string_Value_Property_typeof(), offsetof(::g::MainView, temp_Value_inst), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, MainView_typeof(), 0));
    return type;
}

// public MainView() :8
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :12
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :8
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

// public MainView() [instance] :8
void MainView::ctor_3()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :12
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New2();
    temp_Value_inst = ::g::PullToReload_FuseControlsTextControl_string_Value_Property::New1(temp);
    ::g::Fuse::Reactive::JavaScript* temp1 = ::g::Fuse::Reactive::JavaScript::New1();
    ::g::Fuse::Controls::DockPanel* temp2 = ::g::Fuse::Controls::DockPanel::New2();
    ::g::Fuse::Controls::StatusBarBackground* temp3 = ::g::Fuse::Controls::StatusBarBackground::New2();
    ::g::Fuse::Controls::Panel* temp4 = ::g::Fuse::Controls::Panel::New1();
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp6 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.3215686f, 0.4627451f, 0.7921569f, 1.0f));
    ::g::Fuse::Controls::Panel* temp7 = ::g::Fuse::Controls::Panel::New1();
    ::g::Fuse::Controls::ScrollView* temp8 = ::g::Fuse::Controls::ScrollView::New2();
    ::g::Fuse::Controls::DockPanel* temp9 = ::g::Fuse::Controls::DockPanel::New2();
    ::g::CogWheelReload* temp10 = ::g::CogWheelReload::New2();
    ::g::Fuse::Controls::StackPanel* temp11 = ::g::Fuse::Controls::StackPanel::New2();
    dropShadow = ::g::Fuse::Effects::DropShadow::New1();
    ::g::Fuse::Controls::Panel* temp12 = ::g::Fuse::Controls::Panel::New1();
    ::g::Fuse::Controls::StackPanel* temp13 = ::g::Fuse::Controls::StackPanel::New2();
    ::g::Fuse::Reactive::DataBinding* temp14 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp_Value_inst, ::STRINGS[0/*"punishment"*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp15 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.8666667f, 0.8666667f, 0.8666667f, 1.0f));
    ::g::Fuse::Controls::Image* temp16 = ::g::Fuse::Controls::Image::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp17 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::BottomBarBackground* temp18 = ::g::Fuse::Controls::BottomBarBackground::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp19 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.4039216f, 0.5764706f, 0.9764706f, 1.0f));
    Background(::g::Uno::Float4__New2(0.4039216f, 0.5764706f, 0.9764706f, 1.0f));
    temp1->Code(::STRINGS[1/*"var Observa...*/]);
    temp1->LineNumber(2);
    temp1->FileName(::STRINGS[2/*"/Users/n071...*/]);
    temp2->Background(temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Node*/])), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Node*/])), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Node*/])), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Node*/])), temp18);
    ::g::Fuse::Controls::DockPanel::SetDock(temp3, 2);
    temp4->Height(60.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp4, 2);
    temp4->Background(temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Node*/])), temp5);
    temp5->Value(::STRINGS[3/*"Pull to pun...*/]);
    temp5->FontSize(20.0f);
    temp5->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp5->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Node*/])), temp8);
    temp8->SnapMinTransform(false);
    temp8->Content1(temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Node*/])), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Node*/])), temp11);
    ::g::Fuse::Controls::DockPanel::SetDock(temp10, 2);
    temp11->Background(temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Node*/])), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Node*/])), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Effects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[11/*Fuse.Effects.Effect*/])), dropShadow);
    uPtr(dropShadow)->Size(10.0f);
    uPtr(dropShadow)->Angle(180.0f);
    uPtr(dropShadow)->Distance(10.0f);
    uPtr(dropShadow)->Color(::g::Uno::Float4__New2(0.2f, 0.2f, 0.2f, 1.0f));
    temp12->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 2.0f));
    temp12->Background(temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Node*/])), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Node*/])), temp);
    temp->TextWrapping(1);
    temp->FontSize(20.0f);
    temp->Alignment(10);
    temp->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Behavior*/])), temp14);
    temp16->StretchMode(6);
    temp16->File(::g::Uno::UX::BundleFileSource::New1(::g::PullToReload_bundle::punishment529df330()));
    ::g::Fuse::Controls::DockPanel::SetDock(temp18, 3);
    RootNode(temp2);
    Theme(::g::Fuse::GraphicsTheme::Singleton());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Behavior*/])), temp1);
}

// public MainView New() [static] :8
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
