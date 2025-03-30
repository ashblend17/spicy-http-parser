// Begin of CustomHttp (from "hello.spicy")
// Compiled by HILTI version 1.13.0-dev.128

#include <hilti/rt/compiler-setup.h>

#include <spicy/rt/libspicy.h>
#include <hilti/rt/libhilti.h>

extern const char* __hlt_hello_hlto_scope;

namespace __hlt_hello::CustomHttp {
    struct Header;
    struct Version;
    struct Requestline;
    struct Header : ::hilti::rt::trait::isStruct, ::hilti::rt::Controllable<Header> {
        auto __self() { return ::hilti::rt::ValueReference<Header>::self(this); }
        std::optional<::hilti::rt::Bytes> key{};
        std::optional<::hilti::rt::Bytes> value{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_CustomHttp__Header_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        Header();
        Header(const Header&) = default;
        Header(Header&&) = default;
        Header& operator=(const Header&) = default;
        Header& operator=(Header&&) = default;
        Header(std::optional<std::optional<::hilti::rt::Bytes>> key, std::optional<std::optional<::hilti::rt::Bytes>> value);
        template<typename F> void __visit(F _) const { _("key", key); _("value", value); }

        std::string __to_string() const {
            return "["s + "$key=" + hilti::rt::to_string(key) + ", " "$value=" + hilti::rt::to_string(value) + "]";
        }
    };

    struct Version : ::hilti::rt::trait::isStruct, ::hilti::rt::Controllable<Version> {
        auto __self() { return ::hilti::rt::ValueReference<Version>::self(this); }
        std::optional<::hilti::rt::Bytes> number{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_CustomHttp__Version_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        Version();
        Version(const Version&) = default;
        Version(Version&&) = default;
        Version& operator=(const Version&) = default;
        Version& operator=(Version&&) = default;
        Version(std::optional<std::optional<::hilti::rt::Bytes>> number);
        template<typename F> void __visit(F _) const { _("number", number); }

        std::string __to_string() const {
            return "["s + "$number=" + hilti::rt::to_string(number) + "]";
        }
    };

    struct Requestline : ::hilti::rt::trait::isStruct, ::hilti::rt::Controllable<Requestline> {
        auto __self() { return ::hilti::rt::ValueReference<Requestline>::self(this); }
        std::optional<::hilti::rt::Bytes> method{};
        std::optional<::hilti::rt::Bytes> uri{};
        std::optional<::hilti::rt::ValueReference<Version>> version{};
        std::optional<::hilti::rt::Vector<Header>> headers{};
        std::optional<::hilti::rt::Bytes> body{};
        void __on_0x25_done();
        inline static ::spicy::rt::Parser __parser{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        static auto parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View;
        static auto parse2(::hilti::rt::ValueReference<Requestline>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View;
        static auto parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View;
        auto __parse_headers_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error, ::hilti::rt::Vector<Header>& __dst) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_CustomHttp__Requestline_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        Requestline();
        Requestline(const Requestline&) = default;
        Requestline(Requestline&&) = default;
        Requestline& operator=(const Requestline&) = default;
        Requestline& operator=(Requestline&&) = default;
        Requestline(std::optional<std::optional<::hilti::rt::Bytes>> method, std::optional<std::optional<::hilti::rt::Bytes>> uri, std::optional<std::optional<::hilti::rt::ValueReference<Version>>> version, std::optional<std::optional<::hilti::rt::Vector<Header>>> headers, std::optional<std::optional<::hilti::rt::Bytes>> body);
        template<typename F> void __visit(F _) const { _("method", method); _("uri", uri); _("version", version); _("headers", headers); _("body", body); }

        std::string __to_string() const {
            return "["s + "$method=" + hilti::rt::to_string(method) + ", " "$uri=" + hilti::rt::to_string(uri) + ", " "$version=" + hilti::rt::to_string(version) + ", " "$headers=" + hilti::rt::to_string(headers) + ", " "$body=" + hilti::rt::to_string(body) + "]";
        }
    };

    const ::hilti::rt::RegExp Body = ::hilti::rt::RegExp({hilti::rt::regexp::Pattern{".?|\\{.*|(?:\\r?\\n)", false, 0}}, {});
    const ::hilti::rt::RegExp __ctor__regexp = ::hilti::rt::RegExp({hilti::rt::regexp::Pattern{"[^ \\t\\r\\n:]+", false, 0}}, {});
    const ::hilti::rt::RegExp __ctor__regexp_2 = ::hilti::rt::RegExp({hilti::rt::regexp::Pattern{":", false, 0}}, {});
    const ::hilti::rt::RegExp __ctor__regexp_3 = ::hilti::rt::RegExp({hilti::rt::regexp::Pattern{"[ \\t]+", false, 0}}, {});
    const ::hilti::rt::RegExp __ctor__regexp_4 = ::hilti::rt::RegExp({hilti::rt::regexp::Pattern{"[^\\r\\n]+", false, 0}}, {});
    const ::hilti::rt::RegExp __ctor__regexp_5 = ::hilti::rt::RegExp({hilti::rt::regexp::Pattern{"\\r?\\n", false, 0}}, {});
    const ::hilti::rt::RegExp __ctor__regexp_10 = ::hilti::rt::RegExp({hilti::rt::regexp::Pattern{".?|\\{.*|(?:\\r?\\n)", false, 0}}, {});
    const ::hilti::rt::RegExp __ctor__regexp_9 = ::hilti::rt::RegExp({hilti::rt::regexp::Pattern{"^$|\\r?\\n", false, 0}}, {});
    const ::hilti::rt::RegExp __ctor__regexp_8 = ::hilti::rt::RegExp({hilti::rt::regexp::Pattern{"^$|\\r?\\n", false, 1}, hilti::rt::regexp::Pattern{"[^ \\t\\r\\n:]+", false, 2}}, {.no_sub = true});
    const ::hilti::rt::RegExp __ctor__regexp_6 = ::hilti::rt::RegExp({hilti::rt::regexp::Pattern{"HTTP/", false, 0}}, {});
    const ::hilti::rt::RegExp __ctor__regexp_7 = ::hilti::rt::RegExp({hilti::rt::regexp::Pattern{"[0-9]+\\.[0-9]+", false, 0}}, {});
    const ::hilti::rt::RegExp NewLine = ::hilti::rt::RegExp({hilti::rt::regexp::Pattern{"\\r?\\n", false, 0}}, {});
    const ::hilti::rt::RegExp OptionalNewLine = ::hilti::rt::RegExp({hilti::rt::regexp::Pattern{"^$|\\r?\\n", false, 0}}, {});
    const ::hilti::rt::RegExp Token = ::hilti::rt::RegExp({hilti::rt::regexp::Pattern{"[^ \\t\\r\\n:]+", false, 0}}, {});
    const ::hilti::rt::RegExp Whitespace = ::hilti::rt::RegExp({hilti::rt::regexp::Pattern{"[ \\t]+", false, 0}}, {});
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Header0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Header0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Header0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Header0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Header0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Header0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Header0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Header0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Requestline0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Requestline0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Requestline0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Requestline0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Requestline0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Requestline0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Requestline0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Requestline0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Version0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Version0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Version0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Version0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Version0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Version0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Version0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25CustomHttp0x400x40Version0x25uses_sync_advance = ::hilti::rt::Bool(false);
}

namespace hlt_hello::CustomHttp::Requestline {
    using Type = __hlt_hello::CustomHttp::Requestline;
}

namespace __hlt_hello::CustomHttp {
    extern auto operator<<(std::ostream& o, const __hlt_hello::CustomHttp::Header& x) -> std::ostream&;
    Header::Header() {
    }

    Header::Header(std::optional<std::optional<::hilti::rt::Bytes>> key, std::optional<std::optional<::hilti::rt::Bytes>> value) : Header() {
        if ( key ) this->key = std::move(*key);
        if ( value ) this->value = std::move(*value);
    }

    
    extern auto operator<<(std::ostream& o, const __hlt_hello::CustomHttp::Version& x) -> std::ostream&;
    Version::Version() {
    }

    Version::Version(std::optional<std::optional<::hilti::rt::Bytes>> number) : Version() {
        if ( number ) this->number = std::move(*number);
    }

    
    extern auto operator<<(std::ostream& o, const __hlt_hello::CustomHttp::Requestline& x) -> std::ostream&;
    extern void __hook_Requestline___on_0x25_done(::hilti::rt::ValueReference<__hlt_hello::CustomHttp::Requestline>& __self);
    Requestline::Requestline() {
    }

    Requestline::Requestline(std::optional<std::optional<::hilti::rt::Bytes>> method, std::optional<std::optional<::hilti::rt::Bytes>> uri, std::optional<std::optional<::hilti::rt::ValueReference<__hlt_hello::CustomHttp::Version>>> version, std::optional<std::optional<::hilti::rt::Vector<__hlt_hello::CustomHttp::Header>>> headers, std::optional<std::optional<::hilti::rt::Bytes>> body) : Requestline() {
        if ( method ) this->method = std::move(*method);
        if ( uri ) this->uri = std::move(*uri);
        if ( version ) this->version = std::move(*version);
        if ( headers ) this->headers = std::move(*headers);
        if ( body ) this->body = std::move(*body);
    }

    
    extern void __hook_Requestline___on_0x25_done_b543(::hilti::rt::ValueReference<Requestline>& __self);
    extern void __hook_Requestline___on_0x25_done(::hilti::rt::ValueReference<Requestline>& __self);
    extern void __hook_Requestline___on_0x25_done_b543(::hilti::rt::ValueReference<Requestline>& __self);
}

namespace hlt_hello::CustomHttp::Requestline {
    extern auto parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
    extern auto parse2(::hilti::rt::ValueReference<__hlt_hello::CustomHttp::Requestline>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
    extern auto parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
}

namespace __hlt_hello::CustomHttp {
    extern void __register_CustomHttp_Header();
    extern void __register_CustomHttp_Requestline();
    extern void __register_CustomHttp_Version();
    extern void __init_module();
    extern void __register_module();
}

namespace __hlt_hello::type_info { namespace {
    extern const ::hilti::rt::TypeInfo __ti_CustomHttp__Header_namex2aCustomHttp__Headerx2b;
    extern const ::hilti::rt::TypeInfo __ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b;
    extern const ::hilti::rt::TypeInfo __ti_hilti__RecoverableFailure_namex2ahilti__RecoverableFailurex2b;
    const ::hilti::rt::TypeInfo __ti_hilti__RecoverableFailure_namex2ahilti__RecoverableFailurex2b = { "hilti::RecoverableFailure", "hilti::RecoverableFailure", [](const void *self) { return hilti::rt::to_string(*reinterpret_cast<const ::hilti::rt::RecoverableFailure*>(self)); }, new ::hilti::rt::type_info::Exception() };
    const ::hilti::rt::TypeInfo __ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b = { {}, "optional<spicy::RecoverableFailure>", [](const void *self) { return hilti::rt::to_string(*reinterpret_cast<const std::optional<::hilti::rt::RecoverableFailure>*>(self)); }, new ::hilti::rt::type_info::Optional(&type_info::__ti_hilti__RecoverableFailure_namex2ahilti__RecoverableFailurex2b, ::hilti::rt::type_info::Optional::accessor<::hilti::rt::RecoverableFailure>()) };
    const ::hilti::rt::TypeInfo __ti_CustomHttp__Header_namex2aCustomHttp__Headerx2b = { "CustomHttp::Header", "CustomHttp::Header", [](const void *self) { return hilti::rt::to_string(*reinterpret_cast<const __hlt_hello::CustomHttp::Header*>(self)); }, new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "key", &::hilti::rt::type_info::bytes, offsetof(CustomHttp::Header, key), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "value", &::hilti::rt::type_info::bytes, offsetof(CustomHttp::Header, value), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(CustomHttp::Header, __error), true, false }})) };
    extern const ::hilti::rt::TypeInfo __ti_CustomHttp__Version_namex2aCustomHttp__Versionx2b;
    const ::hilti::rt::TypeInfo __ti_CustomHttp__Version_namex2aCustomHttp__Versionx2b = { "CustomHttp::Version", "CustomHttp::Version", [](const void *self) { return hilti::rt::to_string(*reinterpret_cast<const __hlt_hello::CustomHttp::Version*>(self)); }, new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "number", &::hilti::rt::type_info::bytes, offsetof(CustomHttp::Version, number), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(CustomHttp::Version, __error), true, false }})) };
    extern const ::hilti::rt::TypeInfo __ti_CustomHttp__Requestline_namex2aCustomHttp__Requestlinex2b;
    extern const ::hilti::rt::TypeInfo __ti_value_ref_Version__value_refx2anamex2aCustomHttp__Versionx2bx2b;
    const ::hilti::rt::TypeInfo __ti_value_ref_Version__value_refx2anamex2aCustomHttp__Versionx2bx2b = { {}, "value_ref<Version>", [](const void *self) { return hilti::rt::to_string(*reinterpret_cast<const ::hilti::rt::ValueReference<__hlt_hello::CustomHttp::Version>*>(self)); }, new ::hilti::rt::type_info::ValueReference(&type_info::__ti_CustomHttp__Version_namex2aCustomHttp__Versionx2b, ::hilti::rt::type_info::ValueReference::accessor<__hlt_hello::CustomHttp::Version>()) };
    extern const ::hilti::rt::TypeInfo __ti_vector_Header__vectorx2anamex2aCustomHttp__Headerx2bx2b;
    const ::hilti::rt::TypeInfo __ti_vector_Header__vectorx2anamex2aCustomHttp__Headerx2bx2b = { {}, "vector<Header>", [](const void *self) { return hilti::rt::to_string(*reinterpret_cast<const ::hilti::rt::Vector<__hlt_hello::CustomHttp::Header>*>(self)); }, new ::hilti::rt::type_info::Vector(&type_info::__ti_CustomHttp__Header_namex2aCustomHttp__Headerx2b, ::hilti::rt::type_info::Vector::accessor<__hlt_hello::CustomHttp::Header>()) };
    const ::hilti::rt::TypeInfo __ti_CustomHttp__Requestline_namex2aCustomHttp__Requestlinex2b = { "CustomHttp::Requestline", "CustomHttp::Requestline", [](const void *self) { return hilti::rt::to_string(*reinterpret_cast<const __hlt_hello::CustomHttp::Requestline*>(self)); }, new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "method", &::hilti::rt::type_info::bytes, offsetof(CustomHttp::Requestline, method), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "uri", &::hilti::rt::type_info::bytes, offsetof(CustomHttp::Requestline, uri), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "version", &type_info::__ti_value_ref_Version__value_refx2anamex2aCustomHttp__Versionx2bx2b, offsetof(CustomHttp::Requestline, version), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::ValueReference<__hlt_hello::CustomHttp::Version>>() }, ::hilti::rt::type_info::struct_::Field{ "headers", &type_info::__ti_vector_Header__vectorx2anamex2aCustomHttp__Headerx2bx2b, offsetof(CustomHttp::Requestline, headers), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Vector<__hlt_hello::CustomHttp::Header>>() }, ::hilti::rt::type_info::struct_::Field{ "body", &::hilti::rt::type_info::bytes, offsetof(CustomHttp::Requestline, body), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(CustomHttp::Requestline, __error), true, false }})) };
} }

HILTI_PRE_INIT(__hlt_hello::CustomHttp::__register_module)

auto __hlt_hello::CustomHttp::Header::__parse_CustomHttp__Header_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = Header::__self();
    ::hilti::rt::detail::checkStack();
    __location__("hello.spicy:9:15-15:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;

    {
        __location__("hello.spicy:3:21-3:34");
        ::hilti::rt::Vector<::hilti::rt::Bytes> __captures;

        // Begin parsing production: Ctor: key -> /[^ \t\r\n:]+/ (regexp);
        if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
            if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{2} ) {
                  __location__("hello.spicy:3:21-3:34");
                throw ::spicy::rt::ParseError("unexpected token to consume"sv, "hello.spicy:3:21-3:34");
            }

            ::hilti::rt::optional::valueOrInit((*__self).key) = __cur.sub(__lahe).data();
            __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
            __cur = __cur.advance(__lahe);
            if ( __trim ) {
                (*__data).trim(__cur.begin());
            }
        }
        else {
            ::hilti::rt::stream::View __ncur = __cur;
            for ( ::hilti::rt::regexp::MatchState ms = __hlt_hello::CustomHttp::__ctor__regexp.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
                ::hilti::rt::integer::safe<int32_t> __rc;
                  __location__("hello.spicy:3:21-3:34");
                std::tie(__rc, __ncur) = ms.advance(__ncur);
                if ( ::hilti::rt::integer::safe<int32_t> __x = __rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                    ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_1;
                    // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                    ::spicy::rt::detail::waitForInputOrEod(__data, __ncur, (__lhs_1=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                    continue;
                }

                else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                      __location__("hello.spicy:3:21-3:34");
                    throw ::spicy::rt::ParseError("failed to match regular expression"sv, "hello.spicy:3:21-3:34");
                }

                else  {
                    __captures = ms.captures(__cur);
                    ::hilti::rt::optional::valueOrInit((*__self).key) = __cur.sub(__ncur.begin()).data();
                    __cur = __ncur;
                    if ( __trim ) {
                        (*__data).trim(__cur.begin());
                    }

                    break;
                }
            }
        }

        // End parsing production: Ctor: key -> /[^ \t\r\n:]+/ (regexp);
    }

    ::hilti::rt::Bytes __transient__anon;
    __location__("hello.spicy:11:21-11:23");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures;

    // Begin parsing production: Ctor: _anon -> /:/ (regexp);
    ::hilti::rt::stream::View __ncur = __cur;
    for ( ::hilti::rt::regexp::MatchState ms = __hlt_hello::CustomHttp::__ctor__regexp_2.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
        ::hilti::rt::integer::safe<int32_t> __rc;
          __location__("hello.spicy:11:21-11:23");
        std::tie(__rc, __ncur) = ms.advance(__ncur);
        if ( ::hilti::rt::integer::safe<int32_t> __x = __rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
            ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_2;
            // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
            ::spicy::rt::detail::waitForInputOrEod(__data, __ncur, (__lhs_2=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
            continue;
        }

        else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
              __location__("hello.spicy:11:21-11:23");
            throw ::spicy::rt::ParseError("failed to match regular expression"sv, "hello.spicy:11:21-11:23");
        }

        else  {
            __captures = ms.captures(__cur);
            __transient__anon = __cur.sub(__ncur.begin()).data();
            __cur = __ncur;
            if ( __trim ) {
                (*__data).trim(__cur.begin());
            }

            break;
        }
    }

    // End parsing production: Ctor: _anon -> /:/ (regexp);

    ::hilti::rt::Bytes __transient__anon_2;
    __location__("hello.spicy:4:21-4:28");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures_2;

    // Begin parsing production: Ctor: _anon_2 -> /[ \t]+/ (regexp);
    ::hilti::rt::stream::View __ncur_2 = __cur;
    for ( ::hilti::rt::regexp::MatchState ms = __hlt_hello::CustomHttp::__ctor__regexp_3.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
        ::hilti::rt::integer::safe<int32_t> __rc;
          __location__("hello.spicy:4:21-4:28");
        std::tie(__rc, __ncur_2) = ms.advance(__ncur_2);
        if ( ::hilti::rt::integer::safe<int32_t> __x = __rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
            ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_3;
            // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
            ::spicy::rt::detail::waitForInputOrEod(__data, __ncur_2, (__lhs_3=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
            continue;
        }

        else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
              __location__("hello.spicy:4:21-4:28");
            throw ::spicy::rt::ParseError("failed to match regular expression"sv, "hello.spicy:4:21-4:28");
        }

        else  {
            __captures_2 = ms.captures(__cur);
            __transient__anon_2 = __cur.sub(__ncur_2.begin()).data();
            __cur = __ncur_2;
            if ( __trim ) {
                (*__data).trim(__cur.begin());
            }

            break;
        }
    }

    // End parsing production: Ctor: _anon_2 -> /[ \t]+/ (regexp);

    {
        __location__("hello.spicy:13:21-13:30");
        ::hilti::rt::Vector<::hilti::rt::Bytes> __captures;

        // Begin parsing production: Ctor: value -> /[^\r\n]+/ (regexp);
        ::hilti::rt::stream::View __ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_hello::CustomHttp::__ctor__regexp_4.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> __rc;
              __location__("hello.spicy:13:21-13:30");
            std::tie(__rc, __ncur) = ms.advance(__ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = __rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_4;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::spicy::rt::detail::waitForInputOrEod(__data, __ncur, (__lhs_4=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("hello.spicy:13:21-13:30");
                throw ::spicy::rt::ParseError("failed to match regular expression"sv, "hello.spicy:13:21-13:30");
            }

            else  {
                __captures = ms.captures(__cur);
                ::hilti::rt::optional::valueOrInit((*__self).value) = __cur.sub(__ncur.begin()).data();
                __cur = __ncur;
                if ( __trim ) {
                    (*__data).trim(__cur.begin());
                }

                break;
            }
        }

        // End parsing production: Ctor: value -> /[^\r\n]+/ (regexp);
    }

    ::hilti::rt::Bytes __transient__anon_3;
    __location__("hello.spicy:5:21-5:27");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures_3;

    // Begin parsing production: Ctor: _anon_3 -> /\r?\n/ (regexp);
    ::hilti::rt::stream::View __ncur_3 = __cur;
    for ( ::hilti::rt::regexp::MatchState ms = __hlt_hello::CustomHttp::__ctor__regexp_5.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
        ::hilti::rt::integer::safe<int32_t> __rc;
          __location__("hello.spicy:5:21-5:27");
        std::tie(__rc, __ncur_3) = ms.advance(__ncur_3);
        if ( ::hilti::rt::integer::safe<int32_t> __x = __rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
            ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_5;
            // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
            ::spicy::rt::detail::waitForInputOrEod(__data, __ncur_3, (__lhs_5=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
            continue;
        }

        else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
              __location__("hello.spicy:5:21-5:27");
            throw ::spicy::rt::ParseError("failed to match regular expression"sv, "hello.spicy:5:21-5:27");
        }

        else  {
            __captures_3 = ms.captures(__cur);
            __transient__anon_3 = __cur.sub(__ncur_3.begin()).data();
            __cur = __ncur_3;
            if ( __trim ) {
                (*__data).trim(__cur.begin());
            }

            break;
        }
    }

    // End parsing production: Ctor: _anon_3 -> /\r?\n/ (regexp);

    ::hilti::rt::debug::dedent("spicy"sv);
    __result = std::make_tuple(__cur, __lah, __lahe, __error);
    return __result;
}

auto __hlt_hello::CustomHttp::Header::__parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = Header::__self();
    ::hilti::rt::detail::checkStack();
    __location__("hello.spicy:9:15-15:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;

    {
        ::hilti::rt::debug::indent("spicy"sv);
        ::hilti::rt::stream::SafeConstIterator __begin = __cur.begin();
        ::hilti::rt::StrongReference<::hilti::rt::Stream> filtered = ::hilti::rt::StrongReference<::hilti::rt::Stream>();
        if ( ! (::hilti::rt::Bool(static_cast<bool>(filtered))) ) {
            __result = (*__self).__parse_CustomHttp__Header_stage2(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        }
    }

    return __result;
}

inline void __hlt_hello::CustomHttp::Requestline::__on_0x25_done() {
    auto __self = CustomHttp::Requestline::__self();
    return __hlt_hello::CustomHttp::__hook_Requestline___on_0x25_done(__self);
}

auto __hlt_hello::CustomHttp::Requestline::__parse_CustomHttp__Requestline_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = Requestline::__self();
    ::hilti::rt::detail::checkStack();
    __location__("hello.spicy:22:27-53:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;

    {
        __location__("hello.spicy:3:21-3:34");
        ::hilti::rt::Vector<::hilti::rt::Bytes> __captures;

        // Begin parsing production: Ctor: method -> /[^ \t\r\n:]+/ (regexp);
        if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
            if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{2} ) {
                  __location__("hello.spicy:3:21-3:34");
                throw ::spicy::rt::ParseError("unexpected token to consume"sv, "hello.spicy:3:21-3:34");
            }

            ::hilti::rt::optional::valueOrInit((*__self).method) = __cur.sub(__lahe).data();
            __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
            __cur = __cur.advance(__lahe);
            if ( __trim ) {
                (*__data).trim(__cur.begin());
            }
        }
        else {
            ::hilti::rt::stream::View __ncur = __cur;
            for ( ::hilti::rt::regexp::MatchState ms = __hlt_hello::CustomHttp::__ctor__regexp.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
                ::hilti::rt::integer::safe<int32_t> __rc;
                  __location__("hello.spicy:3:21-3:34");
                std::tie(__rc, __ncur) = ms.advance(__ncur);
                if ( ::hilti::rt::integer::safe<int32_t> __x = __rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                    ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_6;
                    // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                    ::spicy::rt::detail::waitForInputOrEod(__data, __ncur, (__lhs_6=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                    continue;
                }

                else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                      __location__("hello.spicy:3:21-3:34");
                    throw ::spicy::rt::ParseError("failed to match regular expression"sv, "hello.spicy:3:21-3:34");
                }

                else  {
                    __captures = ms.captures(__cur);
                    ::hilti::rt::optional::valueOrInit((*__self).method) = __cur.sub(__ncur.begin()).data();
                    __cur = __ncur;
                    if ( __trim ) {
                        (*__data).trim(__cur.begin());
                    }

                    break;
                }
            }
        }

        // End parsing production: Ctor: method -> /[^ \t\r\n:]+/ (regexp);
    }

    ::hilti::rt::Bytes __transient__anon_5;
    __location__("hello.spicy:4:21-4:28");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures;

    // Begin parsing production: Ctor: _anon_5 -> /[ \t]+/ (regexp);
    ::hilti::rt::stream::View __ncur = __cur;
    for ( ::hilti::rt::regexp::MatchState ms = __hlt_hello::CustomHttp::__ctor__regexp_3.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
        ::hilti::rt::integer::safe<int32_t> __rc;
          __location__("hello.spicy:4:21-4:28");
        std::tie(__rc, __ncur) = ms.advance(__ncur);
        if ( ::hilti::rt::integer::safe<int32_t> __x = __rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
            ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_7;
            // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
            ::spicy::rt::detail::waitForInputOrEod(__data, __ncur, (__lhs_7=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
            continue;
        }

        else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
              __location__("hello.spicy:4:21-4:28");
            throw ::spicy::rt::ParseError("failed to match regular expression"sv, "hello.spicy:4:21-4:28");
        }

        else  {
            __captures = ms.captures(__cur);
            __transient__anon_5 = __cur.sub(__ncur.begin()).data();
            __cur = __ncur;
            if ( __trim ) {
                (*__data).trim(__cur.begin());
            }

            break;
        }
    }

    // End parsing production: Ctor: _anon_5 -> /[ \t]+/ (regexp);

    {
        __location__("hello.spicy:3:21-3:34");
        ::hilti::rt::Vector<::hilti::rt::Bytes> __captures;

        // Begin parsing production: Ctor: uri -> /[^ \t\r\n:]+/ (regexp);
        if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
            if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{2} ) {
                  __location__("hello.spicy:3:21-3:34");
                throw ::spicy::rt::ParseError("unexpected token to consume"sv, "hello.spicy:3:21-3:34");
            }

            ::hilti::rt::optional::valueOrInit((*__self).uri) = __cur.sub(__lahe).data();
            __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
            __cur = __cur.advance(__lahe);
            if ( __trim ) {
                (*__data).trim(__cur.begin());
            }
        }
        else {
            ::hilti::rt::stream::View __ncur = __cur;
            for ( ::hilti::rt::regexp::MatchState ms = __hlt_hello::CustomHttp::__ctor__regexp.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
                ::hilti::rt::integer::safe<int32_t> __rc;
                  __location__("hello.spicy:3:21-3:34");
                std::tie(__rc, __ncur) = ms.advance(__ncur);
                if ( ::hilti::rt::integer::safe<int32_t> __x = __rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                    ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_8;
                    // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                    ::spicy::rt::detail::waitForInputOrEod(__data, __ncur, (__lhs_8=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                    continue;
                }

                else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                      __location__("hello.spicy:3:21-3:34");
                    throw ::spicy::rt::ParseError("failed to match regular expression"sv, "hello.spicy:3:21-3:34");
                }

                else  {
                    __captures = ms.captures(__cur);
                    ::hilti::rt::optional::valueOrInit((*__self).uri) = __cur.sub(__ncur.begin()).data();
                    __cur = __ncur;
                    if ( __trim ) {
                        (*__data).trim(__cur.begin());
                    }

                    break;
                }
            }
        }

        // End parsing production: Ctor: uri -> /[^ \t\r\n:]+/ (regexp);
    }

    ::hilti::rt::Bytes __transient__anon_6;
    __location__("hello.spicy:4:21-4:28");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures_2;

    // Begin parsing production: Ctor: _anon_6 -> /[ \t]+/ (regexp);
    ::hilti::rt::stream::View __ncur_2 = __cur;
    for ( ::hilti::rt::regexp::MatchState ms = __hlt_hello::CustomHttp::__ctor__regexp_3.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
        ::hilti::rt::integer::safe<int32_t> __rc;
          __location__("hello.spicy:4:21-4:28");
        std::tie(__rc, __ncur_2) = ms.advance(__ncur_2);
        if ( ::hilti::rt::integer::safe<int32_t> __x = __rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
            ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_9;
            // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
            ::spicy::rt::detail::waitForInputOrEod(__data, __ncur_2, (__lhs_9=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
            continue;
        }

        else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
              __location__("hello.spicy:4:21-4:28");
            throw ::spicy::rt::ParseError("failed to match regular expression"sv, "hello.spicy:4:21-4:28");
        }

        else  {
            __captures_2 = ms.captures(__cur);
            __transient__anon_6 = __cur.sub(__ncur_2.begin()).data();
            __cur = __ncur_2;
            if ( __trim ) {
                (*__data).trim(__cur.begin());
            }

            break;
        }
    }

    // End parsing production: Ctor: _anon_6 -> /[ \t]+/ (regexp);

    {
        __location__("hello.spicy:17:16-20:1");

        // Begin parsing production: Unit: CustomHttp__Version_2 -> _anon_4_2 number_2;
        ::hilti::rt::optional::valueOrInit((*__self).version) = (__hlt_hello::CustomHttp::Version());
        std::tie(__cur, __lah, __lahe, __error) = (*::hilti::rt::optional::value((*__self).version)).__parse_stage1(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        // End parsing production: Unit: CustomHttp__Version_2 -> _anon_4_2 number_2;
    }

    ::hilti::rt::Bytes __transient__anon_7;
    __location__("hello.spicy:5:21-5:27");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures_3;

    // Begin parsing production: Ctor: _anon_7 -> /\r?\n/ (regexp);
    ::hilti::rt::stream::View __ncur_3 = __cur;
    for ( ::hilti::rt::regexp::MatchState ms = __hlt_hello::CustomHttp::__ctor__regexp_5.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
        ::hilti::rt::integer::safe<int32_t> __rc;
          __location__("hello.spicy:5:21-5:27");
        std::tie(__rc, __ncur_3) = ms.advance(__ncur_3);
        if ( ::hilti::rt::integer::safe<int32_t> __x = __rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
            ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_10;
            // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
            ::spicy::rt::detail::waitForInputOrEod(__data, __ncur_3, (__lhs_10=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
            continue;
        }

        else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
              __location__("hello.spicy:5:21-5:27");
            throw ::spicy::rt::ParseError("failed to match regular expression"sv, "hello.spicy:5:21-5:27");
        }

        else  {
            __captures_3 = ms.captures(__cur);
            __transient__anon_7 = __cur.sub(__ncur_3.begin()).data();
            __cur = __ncur_3;
            if ( __trim ) {
                (*__data).trim(__cur.begin());
            }

            break;
        }
    }

    // End parsing production: Ctor: _anon_7 -> /\r?\n/ (regexp);

    {
        __location__("hello.spicy:29:5-29:29");
        ::hilti::rt::integer::safe<uint64_t> __pre_container_offset = ::hilti::rt::integer::safe<std::uint64_t>{0U};

        // Begin parsing production: While: headers -> while(<look-ahead-found>): Resolved_5;
        std::tie(__cur, __lah, __lahe, __error) = (*__self).__parse_headers_stage1(__data, __begin, __cur, __trim, __lah, __lahe, __error, ::hilti::rt::optional::valueOrInit((*__self).headers));
        // End parsing production: While: headers -> while(<look-ahead-found>): Resolved_5;

        ::hilti::rt::integer::safe<uint64_t> __prev = ::hilti::rt::integer::safe<std::uint64_t>{0U};
    }

    ::hilti::rt::Bytes __transient__anon_9;
    __location__("hello.spicy:6:24-6:33");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures_4;

    // Begin parsing production: Ctor: _anon_9 -> /^$|\r?\n/ (regexp);
    if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
        if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{1} ) {
              __location__("hello.spicy:6:24-6:33");
            throw ::spicy::rt::ParseError("unexpected token to consume"sv, "hello.spicy:6:24-6:33");
        }

        __transient__anon_9 = __cur.sub(__lahe).data();
        __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
        __cur = __cur.advance(__lahe);
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }
    }
    else {
        ::hilti::rt::stream::View __ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_hello::CustomHttp::__ctor__regexp_9.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> __rc;
              __location__("hello.spicy:6:24-6:33");
            std::tie(__rc, __ncur) = ms.advance(__ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = __rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_11;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::spicy::rt::detail::waitForInputOrEod(__data, __ncur, (__lhs_11=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("hello.spicy:6:24-6:33");
                throw ::spicy::rt::ParseError("failed to match regular expression"sv, "hello.spicy:6:24-6:33");
            }

            else  {
                __captures_4 = ms.captures(__cur);
                __transient__anon_9 = __cur.sub(__ncur.begin()).data();
                __cur = __ncur;
                if ( __trim ) {
                    (*__data).trim(__cur.begin());
                }

                break;
            }
        }
    }

    // End parsing production: Ctor: _anon_9 -> /^$|\r?\n/ (regexp);

    {
        __location__("hello.spicy:7:21-7:39");
        ::hilti::rt::Vector<::hilti::rt::Bytes> __captures;

        // Begin parsing production: Ctor: body -> /.?|\{.*|(?:\r?\n)/ (regexp);
        ::hilti::rt::stream::View __ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_hello::CustomHttp::__ctor__regexp_10.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> __rc;
              __location__("hello.spicy:7:21-7:39");
            std::tie(__rc, __ncur) = ms.advance(__ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = __rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_12;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::spicy::rt::detail::waitForInputOrEod(__data, __ncur, (__lhs_12=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("hello.spicy:7:21-7:39");
                throw ::spicy::rt::ParseError("failed to match regular expression"sv, "hello.spicy:7:21-7:39");
            }

            else  {
                __captures = ms.captures(__cur);
                ::hilti::rt::optional::valueOrInit((*__self).body) = __cur.sub(__ncur.begin()).data();
                __cur = __ncur;
                if ( __trim ) {
                    (*__data).trim(__cur.begin());
                }

                break;
            }
        }

        // End parsing production: Ctor: body -> /.?|\{.*|(?:\r?\n)/ (regexp);
    }

    (*__self).__error = __error;
      __location__("hello.spicy:22:27-53:1");
    (*__self).__on_0x25_done();
    __error = (*__self).__error;
    ::hilti::rt::debug::dedent("spicy"sv);
    __result = std::make_tuple(__cur, __lah, __lahe, __error);
    return __result;
}

auto __hlt_hello::CustomHttp::Requestline::__parse_headers_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error, ::hilti::rt::Vector<__hlt_hello::CustomHttp::Header>& __dst) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = Requestline::__self();
    ::hilti::rt::detail::checkStack();
    __location__("hello.spicy:29:5-29:29");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;
    while ( ::hilti::rt::Bool(true) ) {
        ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_13;
        ::spicy::rt::detail::waitForInputOrEod(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{1U}, (__lhs_13=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
        if ( ! (::hilti::rt::Bool(static_cast<bool>(__lah))) ) {
            ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_14;
            if ( ::spicy::rt::detail::atEod(__data, __cur, (__lhs_14=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>()))) ) {
                __lah = ::hilti::rt::integer::safe<std::int64_t>{-1};
            }
            else {
                ::hilti::rt::stream::View ncur = __cur;
                for ( ::hilti::rt::regexp::MatchState ms = __hlt_hello::CustomHttp::__ctor__regexp_8.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
                    ::hilti::rt::integer::safe<int32_t> rc;
                      __location__("hello.spicy:29:5-29:29");
                    std::tie(rc, ncur) = ms.advance(ncur);
                    if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                        ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_15;
                        if ( ::spicy::rt::detail::waitForInputOrEod(__data, __cur, (__lhs_15=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>()))) ) {
                            continue;
                        }

                        __lah = ::hilti::rt::integer::safe<std::int64_t>{-1};
                        __lahe = __cur.begin();
                        break;
                    }

                    else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                        ::spicy::rt::detail::printParserState("CustomHttp::Requestline"sv, __data, std::optional<::hilti::rt::stream::SafeConstIterator>(__begin), __cur, __lah, __lahe, "default"sv, __trim, __error);
                        __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
                        __lahe = __cur.begin();
                        break;
                    }

                    else  {
                        __lah = ::hilti::rt::integer::safe<int64_t>(rc);
                        __lahe = ncur.begin();
                        break;
                    }
                }

                ::spicy::rt::detail::printParserState("CustomHttp::Requestline"sv, __data, std::optional<::hilti::rt::stream::SafeConstIterator>(__begin), __cur, __lah, __lahe, "default"sv, __trim, __error);
            }
        }

        if ( ::hilti::rt::integer::safe<int64_t> __x = __lah; __x == ::hilti::rt::integer::safe<std::int64_t>{1} ) {
            break;
        }

        else if ( __x == ::hilti::rt::integer::safe<std::int64_t>{2} ) {
            ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_16;
            ::hilti::rt::stream::SafeConstIterator __old_begin = __cur.begin();
            ::hilti::rt::ValueReference<__hlt_hello::CustomHttp::Header> __elem;
            __location__("hello.spicy:9:15-15:1");

            // Begin parsing production: Unit: CustomHttp__Header_2 -> key_2 _anon_8 _anon_2_2 value_2 _anon_3_2 (container 'headers');
            __elem = (__hlt_hello::CustomHttp::Header());
            std::tie(__cur, __lah, __lahe, __error) = (*__elem).__parse_stage1(__data, __begin, __cur, __trim, __lah, __lahe, __error);
            // End parsing production: Unit: CustomHttp__Header_2 -> key_2 _anon_8 _anon_2_2 value_2 _anon_3_2 (container 'headers');

            ::hilti::rt::Bool __stop = ::hilti::rt::Bool(false);
            if ( ! (__stop) ) {
            }

            if ( ! (__stop) ) {
                __dst.emplace_back((*__elem));
            }

            if ( __stop ) {
                break;
            }

            if ( (__cur.begin() == __old_begin) && (! (::spicy::rt::detail::atEod(__data, __cur, (__lhs_16=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>()))))) ) {
                  __location__("hello.spicy:29:5-29:29");
                throw ::spicy::rt::ParseError("loop body did not change input position, possible infinite loop"sv, "hello.spicy:29:5-29:29");
            }
        }

        else if ( __x == ::hilti::rt::integer::safe<std::int64_t>{-1} ) {
              __location__("hello.spicy:29:5-29:29");
            throw ::spicy::rt::ParseError("expected look-ahead token, but reached end-of-data"sv, "hello.spicy:29:5-29:29");
        }

        else  {
            break;
        }
    }

    __result = std::make_tuple(__cur, __lah, __lahe, __error);
    return __result;
}

auto __hlt_hello::CustomHttp::Requestline::__parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = Requestline::__self();
    ::hilti::rt::detail::checkStack();
    __location__("hello.spicy:22:27-53:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;

    {
        ::hilti::rt::debug::indent("spicy"sv);
        ::hilti::rt::stream::SafeConstIterator __begin = __cur.begin();
        ::hilti::rt::StrongReference<::hilti::rt::Stream> filtered = ::hilti::rt::StrongReference<::hilti::rt::Stream>();
        if ( ! (::hilti::rt::Bool(static_cast<bool>(filtered))) ) {
            __result = (*__self).__parse_CustomHttp__Requestline_stage2(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        }
    }

    return __result;
}

extern auto __hlt_hello::CustomHttp::Requestline::parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("hello.spicy:22:27-53:1");
    ::hilti::rt::ValueReference<__hlt_hello::CustomHttp::Requestline> __unit = ::hilti::rt::reference::make_value<__hlt_hello::CustomHttp::Requestline>((__hlt_hello::CustomHttp::Requestline()));
    ::hilti::rt::stream::View __ncur = (__cur ? ::hilti::rt::optional::value(__cur) : (*__data).view());
    ::hilti::rt::integer::safe<int64_t> __lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator __lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> __error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("hello.spicy:22:27-53:1");

    // Begin parsing production: Unit: CustomHttp__Requestline -> method _anon_5 uri _anon_6 Resolved_4 _anon_7 headers _anon_9 body;
    std::tie(__ncur, __lahead, __lahead_end, __error) = (*__unit).__parse_stage1(__data, __ncur.begin(), __ncur, ::hilti::rt::Bool(true), __lahead, __lahead_end, __error);
    // End parsing production: Unit: CustomHttp__Requestline -> method _anon_5 uri _anon_6 Resolved_4 _anon_7 headers _anon_9 body;

    if ( __error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt("successful synchronization never confirmed: %s"sv, ::hilti::rt::exception::what(::hilti::rt::optional::value(__error))), ::hilti::rt::exception::where(::hilti::rt::optional::value(__error)));
    }

    return __ncur;
}

extern auto __hlt_hello::CustomHttp::Requestline::parse2(::hilti::rt::ValueReference<__hlt_hello::CustomHttp::Requestline>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("hello.spicy:22:27-53:1");
    ::hilti::rt::stream::View __ncur = (__cur ? ::hilti::rt::optional::value(__cur) : (*__data).view());
    ::hilti::rt::integer::safe<int64_t> __lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator __lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> __error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("hello.spicy:22:27-53:1");

    // Begin parsing production: Unit: CustomHttp__Requestline -> method _anon_5 uri _anon_6 Resolved_4 _anon_7 headers _anon_9 body;
    std::tie(__ncur, __lahead, __lahead_end, __error) = (*__unit).__parse_stage1(__data, __ncur.begin(), __ncur, ::hilti::rt::Bool(true), __lahead, __lahead_end, __error);
    // End parsing production: Unit: CustomHttp__Requestline -> method _anon_5 uri _anon_6 Resolved_4 _anon_7 headers _anon_9 body;

    if ( __error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt("successful synchronization never confirmed: %s"sv, ::hilti::rt::exception::what(::hilti::rt::optional::value(__error))), ::hilti::rt::exception::where(::hilti::rt::optional::value(__error)));
    }

    return __ncur;
}

extern auto __hlt_hello::CustomHttp::Requestline::parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("hello.spicy:22:27-53:1");
    ::hilti::rt::ValueReference<__hlt_hello::CustomHttp::Requestline> __unit = ::hilti::rt::reference::make_value<__hlt_hello::CustomHttp::Requestline>((__hlt_hello::CustomHttp::Requestline()));
    ::spicy::rt::ParsedUnit::initialize((*__gunit), __unit, &type_info::__ti_CustomHttp__Requestline_namex2aCustomHttp__Requestlinex2b);
    ::hilti::rt::stream::View __ncur = (__cur ? ::hilti::rt::optional::value(__cur) : (*__data).view());
    ::hilti::rt::integer::safe<int64_t> __lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator __lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> __error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("hello.spicy:22:27-53:1");

    // Begin parsing production: Unit: CustomHttp__Requestline -> method _anon_5 uri _anon_6 Resolved_4 _anon_7 headers _anon_9 body;
    std::tie(__ncur, __lahead, __lahead_end, __error) = (*__unit).__parse_stage1(__data, __ncur.begin(), __ncur, ::hilti::rt::Bool(true), __lahead, __lahead_end, __error);
    // End parsing production: Unit: CustomHttp__Requestline -> method _anon_5 uri _anon_6 Resolved_4 _anon_7 headers _anon_9 body;

    if ( __error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt("successful synchronization never confirmed: %s"sv, ::hilti::rt::exception::what(::hilti::rt::optional::value(__error))), ::hilti::rt::exception::where(::hilti::rt::optional::value(__error)));
    }

    return __ncur;
}

auto __hlt_hello::CustomHttp::Version::__parse_CustomHttp__Version_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = Version::__self();
    ::hilti::rt::detail::checkStack();
    __location__("hello.spicy:17:16-20:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;
    ::hilti::rt::Bytes __transient__anon_4;
    __location__("hello.spicy:18:21-18:28");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures;

    // Begin parsing production: Ctor: _anon_4 -> /HTTP// (regexp);
    ::hilti::rt::stream::View __ncur = __cur;
    for ( ::hilti::rt::regexp::MatchState ms = __hlt_hello::CustomHttp::__ctor__regexp_6.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
        ::hilti::rt::integer::safe<int32_t> __rc;
          __location__("hello.spicy:18:21-18:28");
        std::tie(__rc, __ncur) = ms.advance(__ncur);
        if ( ::hilti::rt::integer::safe<int32_t> __x = __rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
            ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_17;
            // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
            ::spicy::rt::detail::waitForInputOrEod(__data, __ncur, (__lhs_17=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
            continue;
        }

        else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
              __location__("hello.spicy:18:21-18:28");
            throw ::spicy::rt::ParseError("failed to match regular expression"sv, "hello.spicy:18:21-18:28");
        }

        else  {
            __captures = ms.captures(__cur);
            __transient__anon_4 = __cur.sub(__ncur.begin()).data();
            __cur = __ncur;
            if ( __trim ) {
                (*__data).trim(__cur.begin());
            }

            break;
        }
    }

    // End parsing production: Ctor: _anon_4 -> /HTTP// (regexp);

    {
        __location__("hello.spicy:19:21-19:36");
        ::hilti::rt::Vector<::hilti::rt::Bytes> __captures;

        // Begin parsing production: Ctor: number -> /[0-9]+\.[0-9]+/ (regexp);
        ::hilti::rt::stream::View __ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_hello::CustomHttp::__ctor__regexp_7.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> __rc;
              __location__("hello.spicy:19:21-19:36");
            std::tie(__rc, __ncur) = ms.advance(__ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = __rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_18;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::spicy::rt::detail::waitForInputOrEod(__data, __ncur, (__lhs_18=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("hello.spicy:19:21-19:36");
                throw ::spicy::rt::ParseError("failed to match regular expression"sv, "hello.spicy:19:21-19:36");
            }

            else  {
                __captures = ms.captures(__cur);
                ::hilti::rt::optional::valueOrInit((*__self).number) = __cur.sub(__ncur.begin()).data();
                __cur = __ncur;
                if ( __trim ) {
                    (*__data).trim(__cur.begin());
                }

                break;
            }
        }

        // End parsing production: Ctor: number -> /[0-9]+\.[0-9]+/ (regexp);
    }

    ::hilti::rt::debug::dedent("spicy"sv);
    __result = std::make_tuple(__cur, __lah, __lahe, __error);
    return __result;
}

auto __hlt_hello::CustomHttp::Version::__parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = Version::__self();
    ::hilti::rt::detail::checkStack();
    __location__("hello.spicy:17:16-20:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;

    {
        ::hilti::rt::debug::indent("spicy"sv);
        ::hilti::rt::stream::SafeConstIterator __begin = __cur.begin();
        ::hilti::rt::StrongReference<::hilti::rt::Stream> filtered = ::hilti::rt::StrongReference<::hilti::rt::Stream>();
        if ( ! (::hilti::rt::Bool(static_cast<bool>(filtered))) ) {
            __result = (*__self).__parse_CustomHttp__Version_stage2(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        }
    }

    return __result;
}

extern void __hlt_hello::CustomHttp::__hook_Requestline___on_0x25_done_b543(::hilti::rt::ValueReference<Requestline>& __self) {
    ::hilti::rt::detail::checkStack();
      __location__("hello.spicy:34:9-34:57");
    ::hilti::rt::printValues(std::make_tuple(::hilti::rt::optional::value((*__self).method), ::hilti::rt::optional::value((*__self).uri), ::hilti::rt::optional::value((*::hilti::rt::optional::value((*__self).version)).number)), ::hilti::rt::Bool(true));
      __location__("hello.spicy:35:9-36:33");
    for ( const auto& h : ::hilti::rt::optional::value((*__self).headers) ) {
          __location__("hello.spicy:36:13-36:33");
        ::hilti::rt::printValues(std::make_tuple(::hilti::rt::optional::value(h.key), ::hilti::rt::optional::value(h.value)), ::hilti::rt::Bool(true));
    }

      __location__("hello.spicy:37:9-37:24");
    ::hilti::rt::print(::hilti::rt::optional::value((*__self).body), ::hilti::rt::Bool(true));
      __location__("hello.spicy:39:9-39:18");
    ::hilti::rt::print(""_b, ::hilti::rt::Bool(true));
      __location__("hello.spicy:40:9-40:18");
    ::hilti::rt::print(""_b, ::hilti::rt::Bool(true));
      __location__("hello.spicy:43:9-49:9");
    for ( const auto& h : ::hilti::rt::optional::value((*__self).headers) ) {
          __location__("hello.spicy:44:13-44:58");
        if ( ::hilti::rt::optional::value(h.key) == "Host"_b ) {
              __location__("hello.spicy:44:36-44:58");
            ::hilti::rt::printValues(std::make_tuple("Host:"s, ::hilti::rt::optional::value(h.value)), ::hilti::rt::Bool(true));
        }

          __location__("hello.spicy:45:13-45:69");
        if ( ::hilti::rt::optional::value(h.key) == "User-Agent"_b ) {
              __location__("hello.spicy:45:41-45:69");
            ::hilti::rt::printValues(std::make_tuple("User-Agent:"s, ::hilti::rt::optional::value(h.value)), ::hilti::rt::Bool(true));
        }

          __location__("hello.spicy:46:13-46:74");
        if ( ::hilti::rt::optional::value(h.key) == "Content-Type"_b ) {
              __location__("hello.spicy:46:44-46:74");
            ::hilti::rt::printValues(std::make_tuple("Content-Type:"s, ::hilti::rt::optional::value(h.value)), ::hilti::rt::Bool(true));
        }

          __location__("hello.spicy:47:13-47:77");
        if ( ::hilti::rt::optional::value(h.key) == "Content-Length"_b ) {
              __location__("hello.spicy:47:45-47:77");
            ::hilti::rt::printValues(std::make_tuple("Content-Length:"s, ::hilti::rt::optional::value(h.value)), ::hilti::rt::Bool(true));
        }

          __location__("hello.spicy:48:13-48:69");
        if ( ::hilti::rt::optional::value(h.key) == "Connection"_b ) {
              __location__("hello.spicy:48:41-48:69");
            ::hilti::rt::printValues(std::make_tuple("Connection:"s, ::hilti::rt::optional::value(h.value)), ::hilti::rt::Bool(true));
        }
    }
}

extern void __hlt_hello::CustomHttp::__init_module() {
    __hlt_hello::CustomHttp::__register_CustomHttp_Header();
    __hlt_hello::CustomHttp::__register_CustomHttp_Requestline();
    __hlt_hello::CustomHttp::__register_CustomHttp_Version();
}

extern void __hlt_hello::CustomHttp::__register_CustomHttp_Header() { ::hilti::rt::detail::checkStack(); }

extern void __hlt_hello::CustomHttp::__register_CustomHttp_Requestline() {
    ::hilti::rt::detail::checkStack();
    CustomHttp::Requestline::__parser = ::spicy::rt::Parser("CustomHttp::Requestline"sv, ::hilti::rt::Bool(true), hlt_hello::CustomHttp::Requestline::parse1, hlt_hello::CustomHttp::Requestline::parse2, hlt_hello::CustomHttp::Requestline::parse3, ::hilti::rt::Null(), &type_info::__ti_CustomHttp__Requestline_namex2aCustomHttp__Requestlinex2b, ""s, ::hilti::rt::Vector<::spicy::rt::MIMEType>({}), ::hilti::rt::Vector<::spicy::rt::ParserPort>({}));
    ::spicy::rt::detail::registerParser(CustomHttp::Requestline::__parser, std::string(__hlt_hello_hlto_scope), ::hilti::rt::StrongReference<__hlt_hello::CustomHttp::Requestline>());
}

extern void __hlt_hello::CustomHttp::__register_CustomHttp_Version() { ::hilti::rt::detail::checkStack(); }

extern void __hlt_hello::CustomHttp::__register_module() { ::hilti::rt::detail::registerModule({ "CustomHttp", __hlt_hello_hlto_scope, &__init_module, nullptr, nullptr, nullptr}); }

extern auto __hlt_hello::CustomHttp::operator<<(std::ostream& o, const __hlt_hello::CustomHttp::Header& x) -> std::ostream& { return o << ::hilti::rt::to_string(x);; }

extern auto __hlt_hello::CustomHttp::operator<<(std::ostream& o, const __hlt_hello::CustomHttp::Version& x) -> std::ostream& { return o << ::hilti::rt::to_string(x);; }

extern auto __hlt_hello::CustomHttp::operator<<(std::ostream& o, const __hlt_hello::CustomHttp::Requestline& x) -> std::ostream& { return o << ::hilti::rt::to_string(x);; }

extern auto hlt_hello::CustomHttp::Requestline::parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(__data), ::hilti::rt::resumable::detail::copyArg(__cur), ::hilti::rt::resumable::detail::copyArg(__context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap = std::move(args_on_heap)](::hilti::rt::resumable::Handle* r) -> ::hilti::rt::any {
        return __hlt_hello::CustomHttp::Requestline::parse1(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap));
    };

    auto r = std::make_unique<::hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt_hello::CustomHttp::Requestline::parse2(::hilti::rt::ValueReference<__hlt_hello::CustomHttp::Requestline>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(__unit), ::hilti::rt::resumable::detail::copyArg(__data), ::hilti::rt::resumable::detail::copyArg(__cur), ::hilti::rt::resumable::detail::copyArg(__context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap = std::move(args_on_heap)](::hilti::rt::resumable::Handle* r) -> ::hilti::rt::any {
        return __hlt_hello::CustomHttp::Requestline::parse2(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<::hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt_hello::CustomHttp::Requestline::parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(__gunit), ::hilti::rt::resumable::detail::copyArg(__data), ::hilti::rt::resumable::detail::copyArg(__cur), ::hilti::rt::resumable::detail::copyArg(__context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap = std::move(args_on_heap)](::hilti::rt::resumable::Handle* r) -> ::hilti::rt::any {
        return __hlt_hello::CustomHttp::Requestline::parse3(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<::hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

