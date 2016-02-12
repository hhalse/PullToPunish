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
        var temp8 = new Fuse.Controls.ScrollView();
        var temp9 = new Fuse.Controls.DockPanel();
        var temp10 = new CogWheelReload();
        var temp11 = new Fuse.Controls.StackPanel();
        dropShadow = new Fuse.Effects.DropShadow();
        var temp12 = new Fuse.Controls.Panel();
        var temp13 = new Fuse.Controls.StackPanel();
        var temp14 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "punishment");
        var temp15 = new Fuse.Drawing.StaticSolidColor(float4(0.8666667f, 0.8666667f, 0.8666667f, 1f));
        var temp16 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp17 = new Fuse.Controls.BottomBarBackground();
        var temp18 = new Fuse.Drawing.StaticSolidColor(float4(0.4039216f, 0.5764706f, 0.9764706f, 1f));
        this.Background = float4(0.4039216f, 0.5764706f, 0.9764706f, 1f);
        temp1.Code = "var Observable = require(\"FuseJS/Observable\");\n\t\tvar cars = [\"Kjøp noe digg\", \"Gå med rar hatt\", \"10-pushups\"];\n\t\tvar punishment=Observable(\"\");\n\t\tfunction endLoading(){\n\t\t\tpunishment=cars[getRandomInt(0,2)]\t\n\t\t\tisLoading.value = false;\n\t\t}\n\n\t\tfunction getRandomInt(min, max) {\n  \t\t\treturn Math.floor(Math.random() * (max - min)) + min;\n\t\t}\n\t\tfunction reloadHandler(){\n\t\t\tisLoading.value = true;\n\t\t\tsetTimeout(endLoading, 3000);\n\t\t}\n\n\t\tvar isLoading = Observable(false);\n\n\t\tmodule.exports = {\n\t\t\tisLoading: isLoading,\n\t\t\treloadHandler: reloadHandler,\n\t\t\tpunishement : punishment\n\t\t\t\n\t\t};";
        temp1.LineNumber = 2;
        temp1.FileName = "/Users/n07101/dev/fuseProjects/pull-to-reload/MainView.ux";
        temp2.Background = temp18;
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp4);
        temp2.Children.Add(temp7);
        temp2.Children.Add(temp17);
        global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Top);
        temp4.Height = 60f;
        global::Fuse.Controls.DockPanel.SetDock(temp4, Fuse.Layouts.Dock.Top);
        temp4.Background = temp6;
        temp4.Children.Add(temp5);
        temp5.Value = "Pull to reload";
        temp5.FontSize = 20f;
        temp5.TextColor = float4(1f, 1f, 1f, 1f);
        temp5.Alignment = Fuse.Elements.Alignment.Center;
        temp7.Children.Add(temp8);
        temp8.SnapMinTransform = false;
        temp8.Content = temp9;
        temp9.Children.Add(temp10);
        temp9.Children.Add(temp11);
        global::Fuse.Controls.DockPanel.SetDock(temp10, Fuse.Layouts.Dock.Top);
        temp11.Background = temp16;
        temp11.Children.Add(temp12);
        temp11.Effects.Add(dropShadow);
        dropShadow.Size = 10f;
        dropShadow.Angle = 180f;
        dropShadow.Distance = 10f;
        dropShadow.Color = float4(0.2f, 0.2f, 0.2f, 1f);
        temp12.Height = 70f;
        temp12.Margin = float4(0f, 0f, 0f, 2f);
        temp12.Background = temp15;
        temp12.Children.Add(temp13);
        temp13.Children.Add(temp);
        temp.Alignment = Fuse.Elements.Alignment.CenterLeft;
        temp.Behaviors.Add(temp14);
        global::Fuse.Controls.DockPanel.SetDock(temp17, Fuse.Layouts.Dock.Bottom);
        this.RootNode = temp2;
        this.Theme = Fuse.GraphicsTheme.Singleton;
        this.Behaviors.Add(temp1);
    }
}
