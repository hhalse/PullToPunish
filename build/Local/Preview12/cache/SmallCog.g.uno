public partial class SmallCog: Fuse.Controls.Image
{
    static SmallCog()
    {
    }
    public SmallCog()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.Color = float4(0.2431373f, 0.3921569f, 0.7176471f, 1f);
        this.Width = 60f;
        this.Height = 60f;
        this.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../Assets/cog1_white.png"));
    }
}
