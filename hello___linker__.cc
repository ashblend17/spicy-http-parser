// Begin of __linker__
// Compiled by HILTI version 1.13.0-dev.128

#include <hilti/rt/compiler-setup.h>

// 
// Linker code generated for modules:
//   - CustomHttp (/home/cooker/code/gsoc25/spicy-parsers/hello.spicy)

#include <spicy/rt/libspicy.h>
#include <hilti/rt/libhilti.h>

namespace __hlt_hello::CustomHttp {
    struct Requestline;
    struct Requestline;
    extern void __hook_Requestline___on_0x25_done_b543(::hilti::rt::ValueReference<Requestline>& __self);
    extern void __hook_Requestline___on_0x25_done(::hilti::rt::ValueReference<Requestline>& __self);
}

const char HILTI_EXPORT HILTI_WEAK * __hlt_hlto_library_version = R"({"debug":false,"hilti_version":11300,"magic":"v1"})";
const char HILTI_EXPORT HILTI_WEAK * __hlt_hlto_bind_to_version = spicy_version_1_13_0();
const char HILTI_WEAK * __hlt_hello_hlto_scope = "1be4117c24e4ea66";

extern void __hlt_hello::CustomHttp::__hook_Requestline___on_0x25_done(::hilti::rt::ValueReference<Requestline>& __self) { __hlt_hello::CustomHttp::__hook_Requestline___on_0x25_done_b543(__self); }
