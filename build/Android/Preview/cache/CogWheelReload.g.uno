public partial class CogWheelReload: Fuse.Controls.Panel
{
    public partial class Template: Uno.UX.Template<Fuse.Controls.Image>
    {
        internal readonly CogWheelReload __parent;
        public Template(CogWheelReload parent)
        {
            __parent = parent;
        }
        static Template()
        {
        }
        protected override void OnApply(Fuse.Controls.Image self)
        {
            Fuse.Elements.Element.MaxWidthProperty.SetStyle(self, 200f);
            Fuse.Elements.Element.MaxHeightProperty.SetStyle(self, 200f);
            Fuse.Elements.Element.AlignmentProperty.SetStyle(self, Fuse.Elements.Alignment.Center);
        }
    }
    PullToReload_FuseElementsElement_float_MinHeight_Property cogPanel_MinHeight_inst;
    PullToReload_FuseElementsElement_float_Height_Property cogPanel_Height_inst;
    PullToReload_FuseRotation_float_Degrees_Property cog1Rotation_Degrees_inst;
    PullToReload_FuseRotation_float_Degrees_Property cog2Rotation_Degrees_inst;
    PullToReload_FuseRotation_float_Degrees_Property cog3Rotation_Degrees_inst;
    PullToReload_FuseRotation_float_Degrees_Property cog4Rotation_Degrees_inst;
    PullToReload_FuseRotation_float_Degrees_Property cog5Rotation_Degrees_inst;
    PullToReload_FuseTranslation_float_Y_Property cog2Trans_Y_inst;
    PullToReload_FuseTranslation_float_Y_Property cog3Trans_Y_inst;
    PullToReload_FuseTranslation_float_Y_Property cog4Trans_Y_inst;
    PullToReload_FuseTranslation_float_Y_Property cog5Trans_Y_inst;
    PullToReload_FuseTriggersWhileBool_bool_Value_Property retainSpace_Value_inst;
    PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property temp_IsLoading_inst;
    internal Fuse.Controls.Panel cogPanel;
    internal SmallCog cog1;
    internal Fuse.Rotation cog1Rotation;
    internal BigCog cog2;
    internal Fuse.Translation cog2Trans;
    internal Fuse.Rotation cog2Rotation;
    internal BigCog cog3;
    internal Fuse.Translation cog3Trans;
    internal Fuse.Rotation cog3Rotation;
    internal BigCog cog4;
    internal Fuse.Translation cog4Trans;
    internal Fuse.Rotation cog4Rotation;
    internal BigCog cog5;
    internal Fuse.Translation cog5Trans;
    internal Fuse.Rotation cog5Rotation;
    internal Fuse.Triggers.WhileTrue retainSpace;
    internal Fuse.Triggers.Timeline moveCogsIntoPlace;
    internal Fuse.Reactive.EventBinding temp_eb0;
    static CogWheelReload()
    {
    }
    public CogWheelReload()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        cogPanel = new Fuse.Controls.Panel();
        cogPanel_MinHeight_inst = new PullToReload_FuseElementsElement_float_MinHeight_Property(cogPanel);
        cogPanel_Height_inst = new PullToReload_FuseElementsElement_float_Height_Property(cogPanel);
        cog1Rotation = new Fuse.Rotation();
        cog1Rotation_Degrees_inst = new PullToReload_FuseRotation_float_Degrees_Property(cog1Rotation);
        cog2Rotation = new Fuse.Rotation();
        cog2Rotation_Degrees_inst = new PullToReload_FuseRotation_float_Degrees_Property(cog2Rotation);
        cog3Rotation = new Fuse.Rotation();
        cog3Rotation_Degrees_inst = new PullToReload_FuseRotation_float_Degrees_Property(cog3Rotation);
        cog4Rotation = new Fuse.Rotation();
        cog4Rotation_Degrees_inst = new PullToReload_FuseRotation_float_Degrees_Property(cog4Rotation);
        cog5Rotation = new Fuse.Rotation();
        cog5Rotation_Degrees_inst = new PullToReload_FuseRotation_float_Degrees_Property(cog5Rotation);
        cog2Trans = new Fuse.Translation();
        cog2Trans_Y_inst = new PullToReload_FuseTranslation_float_Y_Property(cog2Trans);
        cog3Trans = new Fuse.Translation();
        cog3Trans_Y_inst = new PullToReload_FuseTranslation_float_Y_Property(cog3Trans);
        cog4Trans = new Fuse.Translation();
        cog4Trans_Y_inst = new PullToReload_FuseTranslation_float_Y_Property(cog4Trans);
        cog5Trans = new Fuse.Translation();
        cog5Trans_Y_inst = new PullToReload_FuseTranslation_float_Y_Property(cog5Trans);
        retainSpace = new Fuse.Triggers.WhileTrue();
        retainSpace_Value_inst = new PullToReload_FuseTriggersWhileBool_bool_Value_Property(retainSpace);
        var temp = new Fuse.Triggers.PullToReload();
        temp_IsLoading_inst = new PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property(temp);
        var temp1 = new Fuse.Style();
        var temp2 = new Template(this) { Cascade = true, AffectSubtypes = true };
        cog1 = new SmallCog();
        cog2 = new BigCog();
        cog3 = new BigCog();
        var temp3 = new Fuse.Rotation();
        cog4 = new BigCog();
        var temp4 = new Fuse.Rotation();
        cog5 = new BigCog();
        var temp5 = new Fuse.Rotation();
        var temp6 = new Fuse.Drawing.StaticSolidColor(float4(0.09411765f, 0.227451f, 0.4352941f, 1f));
        var temp7 = new Fuse.Animations.Change<float>(cogPanel_MinHeight_inst);
        var temp8 = new Fuse.Triggers.ScrollingAnimation();
        var temp9 = new Fuse.Animations.Change<float>(cogPanel_Height_inst);
        var temp10 = new Fuse.Animations.Change<float>(cog1Rotation_Degrees_inst);
        var temp11 = new Fuse.Animations.Change<float>(cog2Rotation_Degrees_inst);
        var temp12 = new Fuse.Animations.Change<float>(cog3Rotation_Degrees_inst);
        var temp13 = new Fuse.Animations.Change<float>(cog4Rotation_Degrees_inst);
        var temp14 = new Fuse.Animations.Change<float>(cog5Rotation_Degrees_inst);
        moveCogsIntoPlace = new Fuse.Triggers.Timeline();
        var temp15 = new Fuse.Animations.Change<float>(cog2Trans_Y_inst);
        var temp16 = new Fuse.Animations.Change<float>(cog3Trans_Y_inst);
        var temp17 = new Fuse.Animations.Change<float>(cog4Trans_Y_inst);
        var temp18 = new Fuse.Animations.Change<float>(cog5Trans_Y_inst);
        var temp19 = new Fuse.Triggers.State();
        var temp20 = new Fuse.Triggers.State();
        var temp21 = new Fuse.Triggers.Actions.PlayTo();
        var temp22 = new Fuse.Triggers.State();
        var temp23 = new Fuse.Animations.Change<bool>(retainSpace_Value_inst);
        var temp24 = new Fuse.Animations.Spin();
        var temp25 = new Fuse.Animations.Spin();
        var temp26 = new Fuse.Animations.Spin();
        var temp27 = new Fuse.Animations.Spin();
        var temp28 = new Fuse.Animations.Spin();
        var temp29 = new Fuse.Triggers.Actions.PlayTo();
        var temp30 = new Fuse.Reactive.DataBinding<bool>(temp_IsLoading_inst, "isLoading");
        temp_eb0 = new Fuse.Reactive.EventBinding("reloadHandler");
        this.ClipToBounds = true;
        temp1.Templates.Add(temp2);
        cogPanel.Height = 0f;
        cogPanel.Alignment = Fuse.Elements.Alignment.Top;
        cogPanel.Name = "cogPanel";
        global::Fuse.Controls.DockPanel.SetDock(cogPanel, Fuse.Layouts.Dock.Top);
        cogPanel.Background = temp6;
        cogPanel.Children.Add(cog1);
        cogPanel.Children.Add(cog2);
        cogPanel.Children.Add(cog3);
        cogPanel.Children.Add(cog4);
        cogPanel.Children.Add(cog5);
        cog1.Name = "cog1";
        cog1.Transforms.Add(cog1Rotation);
        cog2.Offset = float2(60f, -60f);
        cog2.Name = "cog2";
        cog2.Transforms.Add(cog2Trans);
        cog2.Transforms.Add(cog2Rotation);
        cog2Trans.Y = -100f;
        cog3.Offset = float2(-60f, 60f);
        cog3.Name = "cog3";
        cog3.Transforms.Add(cog3Trans);
        cog3.Transforms.Add(temp3);
        cog3.Transforms.Add(cog3Rotation);
        cog3Trans.Y = 100f;
        temp3.Degrees = 10f;
        cog4.Offset = float2(130f, 30f);
        cog4.Name = "cog4";
        cog4.Transforms.Add(cog4Trans);
        cog4.Transforms.Add(temp4);
        cog4.Transforms.Add(cog4Rotation);
        cog4Trans.Y = 100f;
        temp4.Degrees = 5f;
        cog5.Offset = float2(-100f, -47f);
        cog5.Name = "cog5";
        cog5.Transforms.Add(cog5Trans);
        cog5.Transforms.Add(temp5);
        cog5.Transforms.Add(cog5Rotation);
        cog5Trans.Y = -100f;
        temp5.Degrees = 8f;
        retainSpace.Animators.Add(temp7);
        temp7.Value = 75f;
        temp7.Easing = Fuse.Animations.Easing.CircularIn;
        temp7.Duration = 0;
        temp7.DurationBack = 0.3;
        temp8.Range = Fuse.Triggers.ScrollingAnimationRange.SnapMin;
        temp8.Animators.Add(temp9);
        temp8.Animators.Add(temp10);
        temp8.Animators.Add(temp11);
        temp8.Animators.Add(temp12);
        temp8.Animators.Add(temp13);
        temp8.Animators.Add(temp14);
        temp9.Value = 150f;
        temp9.Duration = 1;
        temp10.Value = 200f;
        temp10.Duration = 1;
        temp11.Value = -93f;
        temp11.Duration = 1;
        temp12.Value = -93f;
        temp12.Duration = 1;
        temp13.Value = 93f;
        temp13.Duration = 1;
        temp14.Value = 93f;
        temp14.Duration = 1;
        moveCogsIntoPlace.Animators.Add(temp15);
        moveCogsIntoPlace.Animators.Add(temp16);
        moveCogsIntoPlace.Animators.Add(temp17);
        moveCogsIntoPlace.Animators.Add(temp18);
        temp15.Value = 0f;
        temp15.Easing = Fuse.Animations.Easing.CircularOut;
        temp15.Duration = 0.6;
        temp15.DurationBack = 0.2;
        temp16.Value = 0f;
        temp16.Easing = Fuse.Animations.Easing.CircularOut;
        temp16.Duration = 0.6;
        temp16.DurationBack = 0.2;
        temp17.Value = 0f;
        temp17.Easing = Fuse.Animations.Easing.CircularOut;
        temp17.Duration = 0.6;
        temp17.DurationBack = 0.2;
        temp18.Value = 0f;
        temp18.Easing = Fuse.Animations.Easing.CircularOut;
        temp18.Duration = 0.6;
        temp18.DurationBack = 0.2;
        temp.ReloadHandler += temp_eb0.OnEvent;
        temp.Pulling = temp19;
        temp.PulledPastThreshold = temp20;
        temp.Loading = temp22;
        temp20.Actions.Add(temp21);
        temp21.Progress = 1;
        temp21.Target = moveCogsIntoPlace;
        temp22.Animators.Add(temp23);
        temp22.Animators.Add(temp24);
        temp22.Animators.Add(temp25);
        temp22.Animators.Add(temp26);
        temp22.Animators.Add(temp27);
        temp22.Animators.Add(temp28);
        temp22.Actions.Add(temp29);
        temp23.Value = true;
        temp23.DurationBack = 0.5;
        temp24.Frequency = 0.53125;
        temp24.Target = cog1;
        temp25.Frequency = -0.25;
        temp25.Target = cog2;
        temp26.Frequency = -0.25;
        temp26.Target = cog3;
        temp27.Frequency = 0.25;
        temp27.Target = cog4;
        temp28.Frequency = 0.25;
        temp28.Target = cog5;
        temp29.Progress = 0;
        temp29.Direction = Fuse.Triggers.Actions.TriggerDirection.Backward;
        temp29.Target = moveCogsIntoPlace;
        this.Children.Add(cogPanel);
        this.Behaviors.Add(temp30);
        this.Behaviors.Add(temp_eb0);
        this.Behaviors.Add(retainSpace);
        this.Behaviors.Add(temp8);
        this.Behaviors.Add(moveCogsIntoPlace);
        this.Behaviors.Add(temp);
        this.Styles.Add(temp1);
    }
}
