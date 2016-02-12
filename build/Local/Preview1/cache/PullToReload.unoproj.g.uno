sealed class PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property: Uno.UX.Property<bool>
{
    Fuse.Triggers.PullToReload _obj;
    public PullToReload_FuseTriggersPullToReload_bool_IsLoading_Property(Fuse.Triggers.PullToReload obj) { _obj = obj;  }
    protected override bool OnGet() { return _obj.IsLoading; }
    protected override void OnSet(bool v, object origin) { _obj.IsLoading = v; }
}
sealed class PullToReload_FuseElementsElement_float_MinHeight_Property: Uno.UX.Property<float>
{
    Fuse.Elements.Element _obj;
    public PullToReload_FuseElementsElement_float_MinHeight_Property(Fuse.Elements.Element obj) { _obj = obj;  }
    protected override float OnGet() { return _obj.MinHeight; }
    protected override void OnSet(float v, object origin) { _obj.MinHeight = v; }
}
sealed class PullToReload_FuseElementsElement_float_Height_Property: Uno.UX.Property<float>
{
    Fuse.Elements.Element _obj;
    public PullToReload_FuseElementsElement_float_Height_Property(Fuse.Elements.Element obj) { _obj = obj;  }
    protected override float OnGet() { return _obj.Height; }
    protected override void OnSet(float v, object origin) { _obj.Height = v; }
}
sealed class PullToReload_FuseRotation_float_Degrees_Property: Uno.UX.Property<float>
{
    Fuse.Rotation _obj;
    public PullToReload_FuseRotation_float_Degrees_Property(Fuse.Rotation obj) { _obj = obj;  }
    protected override float OnGet() { return _obj.Degrees; }
    protected override void OnSet(float v, object origin) { _obj.Degrees = v; }
}
sealed class PullToReload_FuseTranslation_float_Y_Property: Uno.UX.Property<float>
{
    Fuse.Translation _obj;
    public PullToReload_FuseTranslation_float_Y_Property(Fuse.Translation obj) { _obj = obj;  }
    protected override float OnGet() { return _obj.Y; }
    protected override void OnSet(float v, object origin) { _obj.Y = v; }
}
sealed class PullToReload_FuseTriggersWhileBool_bool_Value_Property: Uno.UX.Property<bool>
{
    Fuse.Triggers.WhileBool _obj;
    public PullToReload_FuseTriggersWhileBool_bool_Value_Property(Fuse.Triggers.WhileBool obj) { _obj = obj;  }
    protected override bool OnGet() { return _obj.Value; }
    protected override void OnSet(bool v, object origin) { _obj.Value = v; }
}
