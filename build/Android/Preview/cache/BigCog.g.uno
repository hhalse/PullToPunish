public partial class BigCog: Fuse.Controls.Image
{
    static BigCog()
    {
    }
    public BigCog()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.Color = float4(0.2078431f, 0.3843137f, 0.7686275f, 1f);
        this.Width = 120f;
        this.Height = 120f;
        this.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../Assets/cog2_white.png"));
    }
}
