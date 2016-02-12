public partial class MainView: Fuse.App
{
    PullToReload_FuseControlsTextControl_string_Value_Property temp_Value_inst;
    internal Fuse.Effects.DropShadow dropShadow;
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Controls.Text();
        temp_Value_inst = new PullToReload_FuseControlsTextControl_string_Value_Property(temp);
        var temp1 = new Fuse.Reactive.JavaScript();
        var temp2 = new Fuse.Controls.DockPanel();
        var temp3 = new Fuse.Controls.StatusBarBackground();
        var temp4 = new Fuse.Controls.Panel();
        var temp5 = new Fuse.Controls.Text();
        var temp6 = new Fuse.Drawing.StaticSolidColor(float4(0.3215686f, 0.4627451f, 0.7921569f, 1f));
        var temp7 = new Fuse.Controls.Panel();
        var temp8 = new Fuse.Controls.Image();
        var temp9 = new Fuse.Controls.ScrollView();
        var temp10 = new Fuse.Controls.DockPanel();
        var temp11 = new CogWheelReload();
        var temp12 = new Fuse.Controls.StackPanel();
        dropShadow = new Fuse.Effects.DropShadow();
        var temp13 = new Fuse.Controls.Panel();
        var temp14 = new Fuse.Controls.StackPanel();
        var temp15 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "punishment");
        var temp16 = new Fuse.Drawing.StaticSolidColor(float4(0.8666667f, 0.8666667f, 0.8666667f, 1f));
        var temp17 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp18 = new Fuse.Controls.BottomBarBackground();
        var temp19 = new Fuse.Drawing.StaticSolidColor(float4(0.4039216f, 0.5764706f, 0.9764706f, 1f));
        this.Background = float4(0.4039216f, 0.5764706f, 0.9764706f, 1f);
        temp1.Code = "var Observable = require(\"FuseJS/Observable\");\n\t\t\n\t\tvar punishments = [\n\t\t\"Kjøp noe digg\", \"Gå med rar hatt\", \"10-pushups\",\n\t\t\"Ta en i lamasen\", \"Kjøp godt og blandet til teamet\", \"Rydd opp alle kaffekopper\",\n\t\t\"Tøm alle pappesker\", \"Si: Jeg er lei for at jeg sinker teamet ved å komme for sent\",\n\t\t\"Se skikkelig lei deg ut i 5 minutter\", \"Du slapp unna straff denne gangen. Puh!\",\n\t\t\"Kle deg ut som grøt og få lagt bilde ut på Slack\", \n\t\t\"Gå ut, kom inn igjen og si unnskyld\", \"Du må hylle plattformen du ikke jobber på\",\n\t\t\"Du må være scrummaster neste stand-up\", \"Du må komme med en innovasjonsdag-ide. NÅ!\",\n\t\t\"Du må prate svorsk resten av dagen\"\n\t\t];\n\t\t\n\t\tvar punishment = Observable(\"Straffen kommer her\");\n\t\tfunction endLoading(){\n\t\t\tpunishment.value=punishments[getRandomInt(0,punishments.length-1)];\n\t\t\tisLoading.value = false;\n\t\t}\n\n\t\tfunction getRandomInt(min, max) {\n  \t\t\treturn Math.floor(Math.random() * (max - min)) + min;\n\t\t}\n\n\t\tfunction reloadHandler(){\n\t\t\tisLoading.value = true;\n\t\t\tsetTimeout(endLoading, 3500);\n\t\t}\n\n\t\tvar isLoading = Observable(false);\n\n\t\tmodule.exports = {\n\t\t\tisLoading: isLoading,\n\t\t\treloadHandler: reloadHandler,\n\t\t\tpunishment : punishment\n\t\t\t\n\t\t};";
        temp1.LineNumber = 2;
        temp1.FileName = "/Users/n07101/dev/fuseProjects/pull-to-reload/MainView.ux";
        temp2.Background = temp19;
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp4);
        temp2.Children.Add(temp7);
        temp2.Children.Add(temp18);
        global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Top);
        temp4.Height = 60f;
        global::Fuse.Controls.DockPanel.SetDock(temp4, Fuse.Layouts.Dock.Top);
        temp4.Background = temp6;
        temp4.Children.Add(temp5);
        temp5.Value = "Pull to punish";
        temp5.FontSize = 20f;
        temp5.TextColor = float4(1f, 1f, 1f, 1f);
        temp5.Alignment = Fuse.Elements.Alignment.Center;
        temp7.Children.Add(temp8);
        temp7.Children.Add(temp9);
        temp8.Url = "http://www.trbimg.com/img-541ceefa/turbine/ct-corporal-punishment-steve-chapman-oped-0918-20140918";
        temp8.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp9.SnapMinTransform = false;
        temp9.Content = temp10;
        temp10.Children.Add(temp11);
        temp10.Children.Add(temp12);
        global::Fuse.Controls.DockPanel.SetDock(temp11, Fuse.Layouts.Dock.Top);
        temp12.Background = temp17;
        temp12.Children.Add(temp13);
        temp12.Effects.Add(dropShadow);
        dropShadow.Size = 10f;
        dropShadow.Angle = 180f;
        dropShadow.Distance = 10f;
        dropShadow.Color = float4(0.2f, 0.2f, 0.2f, 1f);
        temp13.Margin = float4(0f, 0f, 0f, 2f);
        temp13.Background = temp16;
        temp13.Children.Add(temp14);
        temp14.Children.Add(temp);
        temp.TextWrapping = Fuse.Elements.TextWrapping.Wrap;
        temp.FontSize = 20f;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Padding = float4(10f, 10f, 10f, 10f);
        temp.Behaviors.Add(temp15);
        global::Fuse.Controls.DockPanel.SetDock(temp18, Fuse.Layouts.Dock.Bottom);
        this.RootNode = temp2;
        this.Theme = Fuse.GraphicsTheme.Singleton;
        this.Behaviors.Add(temp1);
    }
}
