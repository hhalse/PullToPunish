// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.23.2/FuseJS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct FileReaderImpl;}}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal static class FileReaderImpl :834
// {
uClassType* FileReaderImpl_typeof();
void FileReaderImpl__CreateModule_fn(uObject** __retval);
void FileReaderImpl__readAsDataURL_fn(uArray* args, uString** __retval);
void FileReaderImpl__readAsText_fn(uArray* args, uString** __retval);

struct FileReaderImpl : uObject
{
    static uObject* CreateModule();
    static uString* readAsDataURL(uArray* args);
    static uString* readAsText(uArray* args);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
