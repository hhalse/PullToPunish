public partial class MainView: Fuse.App
{
    public partial class Factory: Uno.UX.Factory
    {
        internal readonly MainView __parent;
        public Factory(MainView parent): base(null, false)
        {
            __parent = parent;
        }
        static Factory()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Panel();
            var temp = new Fuse.Drawing.StaticSolidColor(float4(0.8666667f, 0.8666667f, 0.8666667f, 1f));
            self.Height = 70f;
            self.Margin = float4(0f, 0f, 0f, 2f);
            self.Background = temp;
            return self;
        }
    }
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
        var temp = new Fuse.Reactive.JavaScript();
        var temp1 = new Fuse.Controls.DockPanel();
        var temp2 = new Fuse.Controls.StatusBarBackground();
        var temp3 = new Fuse.Controls.Panel();
        var temp4 = new Fuse.Controls.Text();
        var temp5 = new Fuse.Drawing.StaticSolidColor(float4(0.3215686f, 0.4627451f, 0.7921569f, 1f));
        var temp6 = new Fuse.Controls.Panel();
        var temp7 = new Fuse.Controls.ScrollView();
        var temp8 = new Fuse.Controls.DockPanel();
        var temp9 = new CogWheelReload();
        var temp10 = new Fuse.Controls.StackPanel();
        dropShadow = new Fuse.Effects.DropShadow();
        var temp11 = new Fuse.Reactive.Each();
        var temp12 = new Factory(this);
        var temp13 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp14 = new Fuse.Controls.BottomBarBackground();
        var temp15 = new Fuse.Drawing.StaticSolidColor(float4(0.4039216f, 0.5764706f, 0.9764706f, 1f));
        this.Background = float4(0.4039216f, 0.5764706f, 0.9764706f, 1f);
        temp.Code = "var Observable = require(\"FuseJS/Observable\");\n\n\t\tfunction endLoading(){\n\t\t\tisLoading.value = false;\n\t\t}\n\n\t\tfunction reloadHandler(){\n\t\t\tisLoading.value = true;\n\t\t\tsetTimeout(endLoading, 3000);\n\t\t}\n\n\t\tvar isLoading = Observable(false);\n\n\t\tmodule.exports = {\n\t\t\tisLoading: isLoading,\n\t\t\treloadHandler: reloadHandler\n\t\t};";
        temp.LineNumber = 2;
        temp.FileName = "/Users/n07101/dev/fuseProjects/pull-to-reload/MainView.ux";
        temp1.Background = temp15;
        temp1.Children.Add(temp2);
        temp1.Children.Add(temp3);
        temp1.Children.Add(temp6);
        temp1.Children.Add(temp14);
        global::Fuse.Controls.DockPanel.SetDock(temp2, Fuse.Layouts.Dock.Top);
        temp3.Height = 60f;
        global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Top);
        temp3.Background = temp5;
        temp3.Children.Add(temp4);
        temp4.Value = "Pull to reload";
        temp4.FontSize = 20f;
        temp4.TextColor = float4(1f, 1f, 1f, 1f);
        temp4.Alignment = Fuse.Elements.Alignment.Center;
        temp6.Children.Add(temp7);
        temp7.SnapMinTransform = false;
        temp7.Content = temp8;
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp10);
        global::Fuse.Controls.DockPanel.SetDock(temp9, Fuse.Layouts.Dock.Top);
        temp10.Background = temp13;
        temp10.Effects.Add(dropShadow);
        temp10.Behaviors.Add(temp11);
        dropShadow.Size = 10f;
        dropShadow.Angle = 180f;
        dropShadow.Distance = 10f;
        dropShadow.Color = float4(0.2f, 0.2f, 0.2f, 1f);
        temp11.Count = 15;
        temp11.Factories.Add(temp12);
        global::Fuse.Controls.DockPanel.SetDock(temp14, Fuse.Layouts.Dock.Bottom);
        this.RootNode = temp1;
        this.Theme = Fuse.GraphicsTheme.Singleton;
        this.Behaviors.Add(temp);
    }
}
