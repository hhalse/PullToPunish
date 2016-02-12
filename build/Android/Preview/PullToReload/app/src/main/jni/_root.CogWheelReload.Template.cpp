// This file was generated based on '/Users/n07101/dev/fuseProjects/pull-to-reload/build/Android/Preview/cache/CogWheelReload.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CogWheelReload.h>
#include <_root.CogWheelReload.Template.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.SizeUnit.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.StylePropertyWithUnit-3.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
static uType* TYPES[1];

namespace g{

// public partial sealed class CogWheelReload.Template :3
// {
// static Template() :10
static void CogWheelReload__Template__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* CogWheelReload__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CogWheelReload__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("CogWheelReload.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Image_typeof()));
    type->fp_cctor_ = CogWheelReload__Template__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))CogWheelReload__Template__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::CogWheelReload_typeof(), offsetof(::g::CogWheelReload__Template, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CogWheelReload__Template__New1_fn, 0, true, CogWheelReload__Template_typeof(), 1, ::g::CogWheelReload_typeof()));
    return type;
}

// public Template(CogWheelReload parent) :6
void CogWheelReload__Template__ctor_1_fn(CogWheelReload__Template* __this, ::g::CogWheelReload* parent)
{
    __this->ctor_1(parent);
}

// public Template New(CogWheelReload parent) :6
void CogWheelReload__Template__New1_fn(::g::CogWheelReload* parent, CogWheelReload__Template** __retval)
{
    *__retval = CogWheelReload__Template::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.Image self) :13
void CogWheelReload__Template__OnApply_fn(CogWheelReload__Template* __this, ::g::Fuse::Controls::Image* self)
{
    uStackFrame __("CogWheelReload.Template", "OnApply(Fuse.Controls.Image)");
    bool ret2;
    bool ret3;
    bool ret4;
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Elements::Element::MaxWidthProperty()), self, uCRef(200.0f), &ret2);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Elements::Element::MaxHeightProperty()), self, uCRef(200.0f), &ret3);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Elements::Element::AlignmentProperty()), self, uCRef<int>(10), &ret4);
}

// public Template(CogWheelReload parent) [instance] :6
void CogWheelReload__Template::ctor_1(::g::CogWheelReload* parent)
{
    uStackFrame __("CogWheelReload.Template", ".ctor(CogWheelReload)");
    ctor_();
    __parent1 = parent;
}

// public Template New(CogWheelReload parent) [static] :6
CogWheelReload__Template* CogWheelReload__Template::New1(::g::CogWheelReload* parent)
{
    CogWheelReload__Template* obj1 = (CogWheelReload__Template*)uNew(CogWheelReload__Template_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
