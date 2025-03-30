// Prototypes for module CustomHttp

#ifndef HILTI_PROTOTYPES_CUSTOMHTTP_H
#define HILTI_PROTOTYPES_CUSTOMHTTP_H

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
    extern auto operator<<(std::ostream& o, const __hlt_hello::CustomHttp::Version& x) -> std::ostream&;
    extern auto operator<<(std::ostream& o, const __hlt_hello::CustomHttp::Requestline& x) -> std::ostream&;
    extern void __hook_Requestline___on_0x25_done(::hilti::rt::ValueReference<__hlt_hello::CustomHttp::Requestline>& __self);
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

#endif
