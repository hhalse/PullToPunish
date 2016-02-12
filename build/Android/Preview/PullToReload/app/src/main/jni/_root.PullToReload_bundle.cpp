// This file was generated based on '/Users/n07101/dev/fuseProjects/pull-to-reload/PullToReload.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PullToReload_bundle.h>
#include <Uno.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[3];

namespace g{

// public static generated class PullToReload_bundle :0
// {
// static PullToReload_bundle() :0
static void PullToReload_bundle__cctor__fn(uType* __type)
{
    PullToReload_bundle::cog1_whiteeb487005_ = ::g::Uno::BundleFile::New1(::STRINGS[0/*"cog1_white-...*/]);
    PullToReload_bundle::cog2_white802d22c6_ = ::g::Uno::BundleFile::New1(::STRINGS[1/*"cog2_white-...*/]);
    PullToReload_bundle::punishment529df330_ = ::g::Uno::BundleFile::New1(::STRINGS[2/*"punishment-...*/]);
}

uClassType* PullToReload_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("PullToReload_bundle", options);
    type->fp_cctor_ = PullToReload_bundle__cctor__fn;
    ::STRINGS[0] = uString::Const("cog1_white-32cf37e7.png");
    ::STRINGS[1] = uString::Const("cog2_white-c7b3eaa8.png");
    ::STRINGS[2] = uString::Const("punishment-9a24bb12.jpg");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::PullToReload_bundle::cog1_whiteeb487005_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::PullToReload_bundle::cog2_white802d22c6_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::PullToReload_bundle::punishment529df330_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("cog1_whiteeb487005", 0),
        new uField("cog2_white802d22c6", 1),
        new uField("punishment529df330", 2));
    return type;
}

uSStrong< ::g::Uno::BundleFile*> PullToReload_bundle::cog1_whiteeb487005_;
uSStrong< ::g::Uno::BundleFile*> PullToReload_bundle::cog2_white802d22c6_;
uSStrong< ::g::Uno::BundleFile*> PullToReload_bundle::punishment529df330_;
// }

} // ::g
