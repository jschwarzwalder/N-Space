#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t2022420531;
// System.Text.EncoderFallback
struct EncoderFallback_t1756452756;
// System.Text.DecoderFallback
struct DecoderFallback_t1715117820;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T3783534247_H
#define U3CMODULEU3E_T3783534247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3783534247 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3783534247_H
#ifndef CONSTS_T2407773021_H
#define CONSTS_T2407773021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Consts
struct  Consts_t2407773021  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTS_T2407773021_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef ENCODING_T663144255_H
#define ENCODING_T663144255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t663144255  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t2022420531 * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t1756452756 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t1715117820 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t663144255, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t663144255, ___dataItem_10)); }
	inline CodePageDataItem_t2022420531 * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t2022420531 ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t2022420531 * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_10), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t663144255, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t663144255, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t663144255, ___encoderFallback_13)); }
	inline EncoderFallback_t1756452756 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t1756452756 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t1756452756 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_13), value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t663144255, ___decoderFallback_14)); }
	inline DecoderFallback_t1715117820 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t1715117820 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t1715117820 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_14), value);
	}
};

struct Encoding_t663144255_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t663144255 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t663144255 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t663144255 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t663144255 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t663144255 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t663144255 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t663144255 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t663144255 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t909839986 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t663144255 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t663144255 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t663144255 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t663144255 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t663144255 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t663144255 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t663144255 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t663144255 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t663144255 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t663144255 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t663144255 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t663144255 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t663144255 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t663144255 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t663144255 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t663144255 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t663144255 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t663144255 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t663144255 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t663144255 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t663144255 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t663144255 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t663144255 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t663144255 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___encodings_8)); }
	inline Hashtable_t909839986 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t909839986 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t909839986 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t663144255_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T663144255_H
#ifndef __STATICARRAYINITTYPESIZEU3D512_T2067141549_H
#define __STATICARRAYINITTYPESIZEU3D512_T2067141549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512
struct  __StaticArrayInitTypeSizeU3D512_t2067141549 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D512_t2067141549__padding[512];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D512_T2067141549_H
#ifndef MONOENCODING_T2723633290_H
#define MONOENCODING_T2723633290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.MonoEncoding
struct  MonoEncoding_t2723633290  : public Encoding_t663144255
{
public:
	// System.Int32 I18N.Common.MonoEncoding::win_code_page
	int32_t ___win_code_page_16;

public:
	inline static int32_t get_offset_of_win_code_page_16() { return static_cast<int32_t>(offsetof(MonoEncoding_t2723633290, ___win_code_page_16)); }
	inline int32_t get_win_code_page_16() const { return ___win_code_page_16; }
	inline int32_t* get_address_of_win_code_page_16() { return &___win_code_page_16; }
	inline void set_win_code_page_16(int32_t value)
	{
		___win_code_page_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOENCODING_T2723633290_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305147_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1486305147  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::05B1E1067273E188A50BA4342B4BC09ABEE669CD
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___05B1E1067273E188A50BA4342B4BC09ABEE669CD_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::09885C8B0840E863B3A14261999895D896677D5A
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___09885C8B0840E863B3A14261999895D896677D5A_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::0BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___0BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::271EF3D1C1F8136E08DBCAB443CE02538A4156F0
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::2E1C78D5F4666324672DFACDC9307935CF14E98F
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___2E1C78D5F4666324672DFACDC9307935CF14E98F_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::3551F16F8A11003B8289B76B9E3D97969B68E7D9
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___3551F16F8A11003B8289B76B9E3D97969B68E7D9_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::36A0A1CE2E522AB1D22668B38F6126D2F6E17D44
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___36A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::37C03949C69BDDA042205E1A573B349E75F693B8
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___37C03949C69BDDA042205E1A573B349E75F693B8_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::47DCC01E928630EBCC018C5E0285145985F92532
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___47DCC01E928630EBCC018C5E0285145985F92532_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::52623ED7F33E8C1C541F1C3101FA981B173D795E
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___52623ED7F33E8C1C541F1C3101FA981B173D795E_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::5EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___5EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::659C24C855D0E50CBD366B2774AF841E29202E70
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___659C24C855D0E50CBD366B2774AF841E29202E70_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::6B2745F3AD679B4F2E844D23C3EE0BAD49E1528D
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___6B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::71D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___71D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::7A827DA5CD16B7AC8DB4221BABFA420A2B8668E8
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___7A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::7AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___7AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::82273BF74F02F3FDFABEED76BCA4B82DDB2C2761
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___82273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::8C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___8C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::8E958C1847104F390F9C9B64F0F39C98ED4AC63F
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___8E958C1847104F390F9C9B64F0F39C98ED4AC63F_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::94F89F72CC0508D891A0C71DD7B57B703869A3FB
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___94F89F72CC0508D891A0C71DD7B57B703869A3FB_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::9E66CEC4FA557D4655353E0A4F5940FA0D71CF3A
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___9E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::9EF46C677634CB82C0BD475E372C71C5F68C981A
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___9EF46C677634CB82C0BD475E372C71C5F68C981A_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::A5A5BE77BD3D095389FABC21D18BB648787E6618
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___A5A5BE77BD3D095389FABC21D18BB648787E6618_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::B1D1CEE08985760776A35065014EAF3D4D3CDE8D
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::B2574B82126B684C0CB3CF93BF7473F0FBB34400
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___B2574B82126B684C0CB3CF93BF7473F0FBB34400_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::B6BD9A82204938ABFE97CF3FAB5A47824080EAA0
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::BC1CEF8131E7F0D8206029373157806126E21026
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___BC1CEF8131E7F0D8206029373157806126E21026_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::C14817C33562352073848F1A8EA633C19CF1A4F5
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___C14817C33562352073848F1A8EA633C19CF1A4F5_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::C392E993B9E622A36C30E0BB997A9F41293CD9EF
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___C392E993B9E622A36C30E0BB997A9F41293CD9EF_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::CFB85A64A0D1FAB523C3DE56096F8803CDFEA674
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::D257291FBF3DA6F5C38B3275534902BC9EDE92EA
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::D4795500A3D0F00D8EE85626648C3FBAFA4F70C3
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::DF4C38A5E59685BBEC109623762B6914BE00E866
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___DF4C38A5E59685BBEC109623762B6914BE00E866_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::F632BE2E03B27F265F779A5D3D217E5C14AB6CB5
	__StaticArrayInitTypeSizeU3D512_t2067141549  ___F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36;

public:
	inline static int32_t get_offset_of_U305B1E1067273E188A50BA4342B4BC09ABEE669CD_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___05B1E1067273E188A50BA4342B4BC09ABEE669CD_0)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U305B1E1067273E188A50BA4342B4BC09ABEE669CD_0() const { return ___05B1E1067273E188A50BA4342B4BC09ABEE669CD_0; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U305B1E1067273E188A50BA4342B4BC09ABEE669CD_0() { return &___05B1E1067273E188A50BA4342B4BC09ABEE669CD_0; }
	inline void set_U305B1E1067273E188A50BA4342B4BC09ABEE669CD_0(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___05B1E1067273E188A50BA4342B4BC09ABEE669CD_0 = value;
	}

	inline static int32_t get_offset_of_U309885C8B0840E863B3A14261999895D896677D5A_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___09885C8B0840E863B3A14261999895D896677D5A_1)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U309885C8B0840E863B3A14261999895D896677D5A_1() const { return ___09885C8B0840E863B3A14261999895D896677D5A_1; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U309885C8B0840E863B3A14261999895D896677D5A_1() { return &___09885C8B0840E863B3A14261999895D896677D5A_1; }
	inline void set_U309885C8B0840E863B3A14261999895D896677D5A_1(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___09885C8B0840E863B3A14261999895D896677D5A_1 = value;
	}

	inline static int32_t get_offset_of_U30BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___0BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U30BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2() const { return ___0BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U30BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2() { return &___0BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2; }
	inline void set_U30BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___0BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2 = value;
	}

	inline static int32_t get_offset_of_U3271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U3271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3() const { return ___271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U3271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3() { return &___271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3; }
	inline void set_U3271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3 = value;
	}

	inline static int32_t get_offset_of_U32E1C78D5F4666324672DFACDC9307935CF14E98F_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___2E1C78D5F4666324672DFACDC9307935CF14E98F_4)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U32E1C78D5F4666324672DFACDC9307935CF14E98F_4() const { return ___2E1C78D5F4666324672DFACDC9307935CF14E98F_4; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U32E1C78D5F4666324672DFACDC9307935CF14E98F_4() { return &___2E1C78D5F4666324672DFACDC9307935CF14E98F_4; }
	inline void set_U32E1C78D5F4666324672DFACDC9307935CF14E98F_4(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___2E1C78D5F4666324672DFACDC9307935CF14E98F_4 = value;
	}

	inline static int32_t get_offset_of_U33551F16F8A11003B8289B76B9E3D97969B68E7D9_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___3551F16F8A11003B8289B76B9E3D97969B68E7D9_5)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U33551F16F8A11003B8289B76B9E3D97969B68E7D9_5() const { return ___3551F16F8A11003B8289B76B9E3D97969B68E7D9_5; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U33551F16F8A11003B8289B76B9E3D97969B68E7D9_5() { return &___3551F16F8A11003B8289B76B9E3D97969B68E7D9_5; }
	inline void set_U33551F16F8A11003B8289B76B9E3D97969B68E7D9_5(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___3551F16F8A11003B8289B76B9E3D97969B68E7D9_5 = value;
	}

	inline static int32_t get_offset_of_U336A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___36A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U336A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6() const { return ___36A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U336A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6() { return &___36A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6; }
	inline void set_U336A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___36A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6 = value;
	}

	inline static int32_t get_offset_of_U337C03949C69BDDA042205E1A573B349E75F693B8_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___37C03949C69BDDA042205E1A573B349E75F693B8_7)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U337C03949C69BDDA042205E1A573B349E75F693B8_7() const { return ___37C03949C69BDDA042205E1A573B349E75F693B8_7; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U337C03949C69BDDA042205E1A573B349E75F693B8_7() { return &___37C03949C69BDDA042205E1A573B349E75F693B8_7; }
	inline void set_U337C03949C69BDDA042205E1A573B349E75F693B8_7(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___37C03949C69BDDA042205E1A573B349E75F693B8_7 = value;
	}

	inline static int32_t get_offset_of_U347DCC01E928630EBCC018C5E0285145985F92532_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___47DCC01E928630EBCC018C5E0285145985F92532_8)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U347DCC01E928630EBCC018C5E0285145985F92532_8() const { return ___47DCC01E928630EBCC018C5E0285145985F92532_8; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U347DCC01E928630EBCC018C5E0285145985F92532_8() { return &___47DCC01E928630EBCC018C5E0285145985F92532_8; }
	inline void set_U347DCC01E928630EBCC018C5E0285145985F92532_8(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___47DCC01E928630EBCC018C5E0285145985F92532_8 = value;
	}

	inline static int32_t get_offset_of_U352623ED7F33E8C1C541F1C3101FA981B173D795E_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___52623ED7F33E8C1C541F1C3101FA981B173D795E_9)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U352623ED7F33E8C1C541F1C3101FA981B173D795E_9() const { return ___52623ED7F33E8C1C541F1C3101FA981B173D795E_9; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U352623ED7F33E8C1C541F1C3101FA981B173D795E_9() { return &___52623ED7F33E8C1C541F1C3101FA981B173D795E_9; }
	inline void set_U352623ED7F33E8C1C541F1C3101FA981B173D795E_9(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___52623ED7F33E8C1C541F1C3101FA981B173D795E_9 = value;
	}

	inline static int32_t get_offset_of_U35EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___5EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U35EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10() const { return ___5EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U35EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10() { return &___5EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10; }
	inline void set_U35EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___5EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10 = value;
	}

	inline static int32_t get_offset_of_U3659C24C855D0E50CBD366B2774AF841E29202E70_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___659C24C855D0E50CBD366B2774AF841E29202E70_11)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U3659C24C855D0E50CBD366B2774AF841E29202E70_11() const { return ___659C24C855D0E50CBD366B2774AF841E29202E70_11; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U3659C24C855D0E50CBD366B2774AF841E29202E70_11() { return &___659C24C855D0E50CBD366B2774AF841E29202E70_11; }
	inline void set_U3659C24C855D0E50CBD366B2774AF841E29202E70_11(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___659C24C855D0E50CBD366B2774AF841E29202E70_11 = value;
	}

	inline static int32_t get_offset_of_U36B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___6B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U36B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12() const { return ___6B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U36B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12() { return &___6B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12; }
	inline void set_U36B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___6B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12 = value;
	}

	inline static int32_t get_offset_of_U371D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___71D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U371D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13() const { return ___71D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U371D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13() { return &___71D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13; }
	inline void set_U371D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___71D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13 = value;
	}

	inline static int32_t get_offset_of_U37A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___7A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U37A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14() const { return ___7A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U37A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14() { return &___7A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14; }
	inline void set_U37A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___7A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14 = value;
	}

	inline static int32_t get_offset_of_U37AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___7AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U37AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15() const { return ___7AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U37AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15() { return &___7AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15; }
	inline void set_U37AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___7AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15 = value;
	}

	inline static int32_t get_offset_of_U382273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___82273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U382273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16() const { return ___82273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U382273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16() { return &___82273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16; }
	inline void set_U382273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___82273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16 = value;
	}

	inline static int32_t get_offset_of_U38C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___8C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U38C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17() const { return ___8C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U38C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17() { return &___8C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17; }
	inline void set_U38C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___8C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17 = value;
	}

	inline static int32_t get_offset_of_U38E958C1847104F390F9C9B64F0F39C98ED4AC63F_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___8E958C1847104F390F9C9B64F0F39C98ED4AC63F_18)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U38E958C1847104F390F9C9B64F0F39C98ED4AC63F_18() const { return ___8E958C1847104F390F9C9B64F0F39C98ED4AC63F_18; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U38E958C1847104F390F9C9B64F0F39C98ED4AC63F_18() { return &___8E958C1847104F390F9C9B64F0F39C98ED4AC63F_18; }
	inline void set_U38E958C1847104F390F9C9B64F0F39C98ED4AC63F_18(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___8E958C1847104F390F9C9B64F0F39C98ED4AC63F_18 = value;
	}

	inline static int32_t get_offset_of_U394F89F72CC0508D891A0C71DD7B57B703869A3FB_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___94F89F72CC0508D891A0C71DD7B57B703869A3FB_19)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U394F89F72CC0508D891A0C71DD7B57B703869A3FB_19() const { return ___94F89F72CC0508D891A0C71DD7B57B703869A3FB_19; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U394F89F72CC0508D891A0C71DD7B57B703869A3FB_19() { return &___94F89F72CC0508D891A0C71DD7B57B703869A3FB_19; }
	inline void set_U394F89F72CC0508D891A0C71DD7B57B703869A3FB_19(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___94F89F72CC0508D891A0C71DD7B57B703869A3FB_19 = value;
	}

	inline static int32_t get_offset_of_U39E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___9E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U39E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20() const { return ___9E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U39E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20() { return &___9E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20; }
	inline void set_U39E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___9E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20 = value;
	}

	inline static int32_t get_offset_of_U39EF46C677634CB82C0BD475E372C71C5F68C981A_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___9EF46C677634CB82C0BD475E372C71C5F68C981A_21)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_U39EF46C677634CB82C0BD475E372C71C5F68C981A_21() const { return ___9EF46C677634CB82C0BD475E372C71C5F68C981A_21; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_U39EF46C677634CB82C0BD475E372C71C5F68C981A_21() { return &___9EF46C677634CB82C0BD475E372C71C5F68C981A_21; }
	inline void set_U39EF46C677634CB82C0BD475E372C71C5F68C981A_21(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___9EF46C677634CB82C0BD475E372C71C5F68C981A_21 = value;
	}

	inline static int32_t get_offset_of_A5A5BE77BD3D095389FABC21D18BB648787E6618_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___A5A5BE77BD3D095389FABC21D18BB648787E6618_22)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_A5A5BE77BD3D095389FABC21D18BB648787E6618_22() const { return ___A5A5BE77BD3D095389FABC21D18BB648787E6618_22; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_A5A5BE77BD3D095389FABC21D18BB648787E6618_22() { return &___A5A5BE77BD3D095389FABC21D18BB648787E6618_22; }
	inline void set_A5A5BE77BD3D095389FABC21D18BB648787E6618_22(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___A5A5BE77BD3D095389FABC21D18BB648787E6618_22 = value;
	}

	inline static int32_t get_offset_of_B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23() const { return ___B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23() { return &___B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23; }
	inline void set_B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23 = value;
	}

	inline static int32_t get_offset_of_B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24() const { return ___B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24() { return &___B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24; }
	inline void set_B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24 = value;
	}

	inline static int32_t get_offset_of_B2574B82126B684C0CB3CF93BF7473F0FBB34400_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___B2574B82126B684C0CB3CF93BF7473F0FBB34400_25)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_B2574B82126B684C0CB3CF93BF7473F0FBB34400_25() const { return ___B2574B82126B684C0CB3CF93BF7473F0FBB34400_25; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_B2574B82126B684C0CB3CF93BF7473F0FBB34400_25() { return &___B2574B82126B684C0CB3CF93BF7473F0FBB34400_25; }
	inline void set_B2574B82126B684C0CB3CF93BF7473F0FBB34400_25(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___B2574B82126B684C0CB3CF93BF7473F0FBB34400_25 = value;
	}

	inline static int32_t get_offset_of_B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26() const { return ___B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26() { return &___B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26; }
	inline void set_B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26 = value;
	}

	inline static int32_t get_offset_of_BC1CEF8131E7F0D8206029373157806126E21026_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___BC1CEF8131E7F0D8206029373157806126E21026_27)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_BC1CEF8131E7F0D8206029373157806126E21026_27() const { return ___BC1CEF8131E7F0D8206029373157806126E21026_27; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_BC1CEF8131E7F0D8206029373157806126E21026_27() { return &___BC1CEF8131E7F0D8206029373157806126E21026_27; }
	inline void set_BC1CEF8131E7F0D8206029373157806126E21026_27(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___BC1CEF8131E7F0D8206029373157806126E21026_27 = value;
	}

	inline static int32_t get_offset_of_C14817C33562352073848F1A8EA633C19CF1A4F5_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___C14817C33562352073848F1A8EA633C19CF1A4F5_28)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_C14817C33562352073848F1A8EA633C19CF1A4F5_28() const { return ___C14817C33562352073848F1A8EA633C19CF1A4F5_28; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_C14817C33562352073848F1A8EA633C19CF1A4F5_28() { return &___C14817C33562352073848F1A8EA633C19CF1A4F5_28; }
	inline void set_C14817C33562352073848F1A8EA633C19CF1A4F5_28(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___C14817C33562352073848F1A8EA633C19CF1A4F5_28 = value;
	}

	inline static int32_t get_offset_of_C392E993B9E622A36C30E0BB997A9F41293CD9EF_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___C392E993B9E622A36C30E0BB997A9F41293CD9EF_29)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_C392E993B9E622A36C30E0BB997A9F41293CD9EF_29() const { return ___C392E993B9E622A36C30E0BB997A9F41293CD9EF_29; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_C392E993B9E622A36C30E0BB997A9F41293CD9EF_29() { return &___C392E993B9E622A36C30E0BB997A9F41293CD9EF_29; }
	inline void set_C392E993B9E622A36C30E0BB997A9F41293CD9EF_29(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___C392E993B9E622A36C30E0BB997A9F41293CD9EF_29 = value;
	}

	inline static int32_t get_offset_of_C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30() const { return ___C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30() { return &___C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30; }
	inline void set_C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30 = value;
	}

	inline static int32_t get_offset_of_C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31() const { return ___C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31() { return &___C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31; }
	inline void set_C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31 = value;
	}

	inline static int32_t get_offset_of_CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32() const { return ___CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32() { return &___CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32; }
	inline void set_CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32 = value;
	}

	inline static int32_t get_offset_of_D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33() const { return ___D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33() { return &___D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33; }
	inline void set_D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33 = value;
	}

	inline static int32_t get_offset_of_D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34() const { return ___D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34() { return &___D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34; }
	inline void set_D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34 = value;
	}

	inline static int32_t get_offset_of_DF4C38A5E59685BBEC109623762B6914BE00E866_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___DF4C38A5E59685BBEC109623762B6914BE00E866_35)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_DF4C38A5E59685BBEC109623762B6914BE00E866_35() const { return ___DF4C38A5E59685BBEC109623762B6914BE00E866_35; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_DF4C38A5E59685BBEC109623762B6914BE00E866_35() { return &___DF4C38A5E59685BBEC109623762B6914BE00E866_35; }
	inline void set_DF4C38A5E59685BBEC109623762B6914BE00E866_35(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___DF4C38A5E59685BBEC109623762B6914BE00E866_35 = value;
	}

	inline static int32_t get_offset_of_F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields, ___F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36)); }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549  get_F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36() const { return ___F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36; }
	inline __StaticArrayInitTypeSizeU3D512_t2067141549 * get_address_of_F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36() { return &___F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36; }
	inline void set_F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36(__StaticArrayInitTypeSizeU3D512_t2067141549  value)
	{
		___F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305147_H
#ifndef BYTEENCODING_T1810358777_H
#define BYTEENCODING_T1810358777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.ByteEncoding
struct  ByteEncoding_t1810358777  : public MonoEncoding_t2723633290
{
public:
	// System.Char[] I18N.Common.ByteEncoding::toChars
	CharU5BU5D_t1328083999* ___toChars_17;
	// System.String I18N.Common.ByteEncoding::encodingName
	String_t* ___encodingName_18;
	// System.String I18N.Common.ByteEncoding::bodyName
	String_t* ___bodyName_19;
	// System.String I18N.Common.ByteEncoding::headerName
	String_t* ___headerName_20;
	// System.String I18N.Common.ByteEncoding::webName
	String_t* ___webName_21;
	// System.Boolean I18N.Common.ByteEncoding::isBrowserDisplay
	bool ___isBrowserDisplay_22;
	// System.Boolean I18N.Common.ByteEncoding::isBrowserSave
	bool ___isBrowserSave_23;
	// System.Boolean I18N.Common.ByteEncoding::isMailNewsDisplay
	bool ___isMailNewsDisplay_24;
	// System.Boolean I18N.Common.ByteEncoding::isMailNewsSave
	bool ___isMailNewsSave_25;
	// System.Int32 I18N.Common.ByteEncoding::windowsCodePage
	int32_t ___windowsCodePage_26;

public:
	inline static int32_t get_offset_of_toChars_17() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___toChars_17)); }
	inline CharU5BU5D_t1328083999* get_toChars_17() const { return ___toChars_17; }
	inline CharU5BU5D_t1328083999** get_address_of_toChars_17() { return &___toChars_17; }
	inline void set_toChars_17(CharU5BU5D_t1328083999* value)
	{
		___toChars_17 = value;
		Il2CppCodeGenWriteBarrier((&___toChars_17), value);
	}

	inline static int32_t get_offset_of_encodingName_18() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___encodingName_18)); }
	inline String_t* get_encodingName_18() const { return ___encodingName_18; }
	inline String_t** get_address_of_encodingName_18() { return &___encodingName_18; }
	inline void set_encodingName_18(String_t* value)
	{
		___encodingName_18 = value;
		Il2CppCodeGenWriteBarrier((&___encodingName_18), value);
	}

	inline static int32_t get_offset_of_bodyName_19() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___bodyName_19)); }
	inline String_t* get_bodyName_19() const { return ___bodyName_19; }
	inline String_t** get_address_of_bodyName_19() { return &___bodyName_19; }
	inline void set_bodyName_19(String_t* value)
	{
		___bodyName_19 = value;
		Il2CppCodeGenWriteBarrier((&___bodyName_19), value);
	}

	inline static int32_t get_offset_of_headerName_20() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___headerName_20)); }
	inline String_t* get_headerName_20() const { return ___headerName_20; }
	inline String_t** get_address_of_headerName_20() { return &___headerName_20; }
	inline void set_headerName_20(String_t* value)
	{
		___headerName_20 = value;
		Il2CppCodeGenWriteBarrier((&___headerName_20), value);
	}

	inline static int32_t get_offset_of_webName_21() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___webName_21)); }
	inline String_t* get_webName_21() const { return ___webName_21; }
	inline String_t** get_address_of_webName_21() { return &___webName_21; }
	inline void set_webName_21(String_t* value)
	{
		___webName_21 = value;
		Il2CppCodeGenWriteBarrier((&___webName_21), value);
	}

	inline static int32_t get_offset_of_isBrowserDisplay_22() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___isBrowserDisplay_22)); }
	inline bool get_isBrowserDisplay_22() const { return ___isBrowserDisplay_22; }
	inline bool* get_address_of_isBrowserDisplay_22() { return &___isBrowserDisplay_22; }
	inline void set_isBrowserDisplay_22(bool value)
	{
		___isBrowserDisplay_22 = value;
	}

	inline static int32_t get_offset_of_isBrowserSave_23() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___isBrowserSave_23)); }
	inline bool get_isBrowserSave_23() const { return ___isBrowserSave_23; }
	inline bool* get_address_of_isBrowserSave_23() { return &___isBrowserSave_23; }
	inline void set_isBrowserSave_23(bool value)
	{
		___isBrowserSave_23 = value;
	}

	inline static int32_t get_offset_of_isMailNewsDisplay_24() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___isMailNewsDisplay_24)); }
	inline bool get_isMailNewsDisplay_24() const { return ___isMailNewsDisplay_24; }
	inline bool* get_address_of_isMailNewsDisplay_24() { return &___isMailNewsDisplay_24; }
	inline void set_isMailNewsDisplay_24(bool value)
	{
		___isMailNewsDisplay_24 = value;
	}

	inline static int32_t get_offset_of_isMailNewsSave_25() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___isMailNewsSave_25)); }
	inline bool get_isMailNewsSave_25() const { return ___isMailNewsSave_25; }
	inline bool* get_address_of_isMailNewsSave_25() { return &___isMailNewsSave_25; }
	inline void set_isMailNewsSave_25(bool value)
	{
		___isMailNewsSave_25 = value;
	}

	inline static int32_t get_offset_of_windowsCodePage_26() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777, ___windowsCodePage_26)); }
	inline int32_t get_windowsCodePage_26() const { return ___windowsCodePage_26; }
	inline int32_t* get_address_of_windowsCodePage_26() { return &___windowsCodePage_26; }
	inline void set_windowsCodePage_26(int32_t value)
	{
		___windowsCodePage_26 = value;
	}
};

struct ByteEncoding_t1810358777_StaticFields
{
public:
	// System.Byte[] I18N.Common.ByteEncoding::isNormalized
	ByteU5BU5D_t3397334013* ___isNormalized_27;
	// System.Byte[] I18N.Common.ByteEncoding::isNormalizedComputed
	ByteU5BU5D_t3397334013* ___isNormalizedComputed_28;
	// System.Byte[] I18N.Common.ByteEncoding::normalization_bytes
	ByteU5BU5D_t3397334013* ___normalization_bytes_29;

public:
	inline static int32_t get_offset_of_isNormalized_27() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777_StaticFields, ___isNormalized_27)); }
	inline ByteU5BU5D_t3397334013* get_isNormalized_27() const { return ___isNormalized_27; }
	inline ByteU5BU5D_t3397334013** get_address_of_isNormalized_27() { return &___isNormalized_27; }
	inline void set_isNormalized_27(ByteU5BU5D_t3397334013* value)
	{
		___isNormalized_27 = value;
		Il2CppCodeGenWriteBarrier((&___isNormalized_27), value);
	}

	inline static int32_t get_offset_of_isNormalizedComputed_28() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777_StaticFields, ___isNormalizedComputed_28)); }
	inline ByteU5BU5D_t3397334013* get_isNormalizedComputed_28() const { return ___isNormalizedComputed_28; }
	inline ByteU5BU5D_t3397334013** get_address_of_isNormalizedComputed_28() { return &___isNormalizedComputed_28; }
	inline void set_isNormalizedComputed_28(ByteU5BU5D_t3397334013* value)
	{
		___isNormalizedComputed_28 = value;
		Il2CppCodeGenWriteBarrier((&___isNormalizedComputed_28), value);
	}

	inline static int32_t get_offset_of_normalization_bytes_29() { return static_cast<int32_t>(offsetof(ByteEncoding_t1810358777_StaticFields, ___normalization_bytes_29)); }
	inline ByteU5BU5D_t3397334013* get_normalization_bytes_29() const { return ___normalization_bytes_29; }
	inline ByteU5BU5D_t3397334013** get_address_of_normalization_bytes_29() { return &___normalization_bytes_29; }
	inline void set_normalization_bytes_29(ByteU5BU5D_t3397334013* value)
	{
		___normalization_bytes_29 = value;
		Il2CppCodeGenWriteBarrier((&___normalization_bytes_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEENCODING_T1810358777_H
#ifndef CP862_T3350971857_H
#define CP862_T3350971857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP862
struct  CP862_t3350971857  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP862_t3350971857_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP862::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP862_t3350971857_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP862_T3350971857_H
#ifndef CP857_T1784887911_H
#define CP857_T1784887911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP857
struct  CP857_t1784887911  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP857_t1784887911_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP857::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP857_t1784887911_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP857_T1784887911_H
#ifndef CP858_T1784887922_H
#define CP858_T1784887922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP858
struct  CP858_t1784887922  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP858_t1784887922_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP858::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP858_t1784887922_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP858_T1784887922_H
#ifndef CP37_T661932205_H
#define CP37_T661932205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP37
struct  CP37_t661932205  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP37_t661932205_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP37::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP37_t661932205_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP37_T661932205_H
#ifndef CP20290_T263193966_H
#define CP20290_T263193966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20290
struct  CP20290_t263193966  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20290_t263193966_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20290::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP20290_t263193966_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20290_T263193966_H
#ifndef CP20297_T263193963_H
#define CP20297_T263193963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20297
struct  CP20297_t263193963  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20297_t263193963_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20297::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP20297_t263193963_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20297_T263193963_H
#ifndef CP855_T1784887909_H
#define CP855_T1784887909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP855
struct  CP855_t1784887909  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP855_t1784887909_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP855::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP855_t1784887909_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP855_T1784887909_H
#ifndef CP21025_T3771795245_H
#define CP21025_T3771795245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP21025
struct  CP21025_t3771795245  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP21025_t3771795245_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP21025::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP21025_t3771795245_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP21025_T3771795245_H
#ifndef CP20871_T1782223541_H
#define CP20871_T1782223541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20871
struct  CP20871_t1782223541  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20871_t1782223541_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20871::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP20871_t1782223541_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20871_T1782223541_H
#ifndef CP20424_T2185508205_H
#define CP20424_T2185508205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20424
struct  CP20424_t2185508205  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20424_t2185508205_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20424::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP20424_t2185508205_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20424_T2185508205_H
#ifndef CP20420_T2185508201_H
#define CP20420_T2185508201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20420
struct  CP20420_t2185508201  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20420_t2185508201_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20420::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP20420_t2185508201_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20420_T2185508201_H
#ifndef CP852_T1784887916_H
#define CP852_T1784887916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP852
struct  CP852_t1784887916  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP852_t1784887916_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP852::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP852_t1784887916_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP852_T1784887916_H
#ifndef CP708_T2188172662_H
#define CP708_T2188172662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP708
struct  CP708_t2188172662  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP708_t2188172662_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP708::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP708_t2188172662_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP708_T2188172662_H
#ifndef CP500_T2188172604_H
#define CP500_T2188172604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP500
struct  CP500_t2188172604  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP500_t2188172604_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP500::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP500_t2188172604_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP500_T2188172604_H
#ifndef CP864_T3350971851_H
#define CP864_T3350971851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP864
struct  CP864_t3350971851  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP864_t3350971851_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP864::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP864_t3350971851_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP864_T3350971851_H
#ifndef CP437_T2775482021_H
#define CP437_T2775482021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP437
struct  CP437_t2775482021  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP437_t2775482021_StaticFields
{
public:
	// System.Char[] I18N.West.CP437::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP437_t2775482021_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP437_T2775482021_H
#ifndef CP28605_T311235100_H
#define CP28605_T311235100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP28605
struct  CP28605_t311235100  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP28605_t311235100_StaticFields
{
public:
	// System.Char[] I18N.West.CP28605::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP28605_t311235100_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP28605_T311235100_H
#ifndef CP28597_T2233549560_H
#define CP28597_T2233549560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP28597
struct  CP28597_t2233549560  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP28597_t2233549560_StaticFields
{
public:
	// System.Char[] I18N.West.CP28597::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP28597_t2233549560_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP28597_T2233549560_H
#ifndef CP850_T1612682212_H
#define CP850_T1612682212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP850
struct  CP850_t1612682212  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP850_t1612682212_StaticFields
{
public:
	// System.Char[] I18N.West.CP850::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP850_t1612682212_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP850_T1612682212_H
#ifndef CP869_T3350971862_H
#define CP869_T3350971862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP869
struct  CP869_t3350971862  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP869_t3350971862_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP869::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP869_t3350971862_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP869_T3350971862_H
#ifndef CP861_T3178766154_H
#define CP861_T3178766154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP861
struct  CP861_t3178766154  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP861_t3178766154_StaticFields
{
public:
	// System.Char[] I18N.West.CP861::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP861_t3178766154_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP861_T3178766154_H
#ifndef CP860_T3178766153_H
#define CP860_T3178766153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP860
struct  CP860_t3178766153  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP860_t3178766153_StaticFields
{
public:
	// System.Char[] I18N.West.CP860::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP860_t3178766153_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP860_T3178766153_H
#ifndef CP1250_T653777969_H
#define CP1250_T653777969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP1250
struct  CP1250_t653777969  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1250_t653777969_StaticFields
{
public:
	// System.Char[] I18N.West.CP1250::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1250_t653777969_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1250_T653777969_H
#ifndef CP10079_T1554584814_H
#define CP10079_T1554584814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP10079
struct  CP10079_t1554584814  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP10079_t1554584814_StaticFields
{
public:
	// System.Char[] I18N.West.CP10079::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP10079_t1554584814_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP10079_T1554584814_H
#ifndef CP10000_T3476899124_H
#define CP10000_T3476899124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP10000
struct  CP10000_t3476899124  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP10000_t3476899124_StaticFields
{
public:
	// System.Char[] I18N.West.CP10000::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP10000_t3476899124_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP10000_T3476899124_H
#ifndef CP1252_T1816577383_H
#define CP1252_T1816577383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP1252
struct  CP1252_t1816577383  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1252_t1816577383_StaticFields
{
public:
	// System.Char[] I18N.West.CP1252::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1252_t1816577383_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1252_T1816577383_H
#ifndef CP28593_T2233549564_H
#define CP28593_T2233549564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP28593
struct  CP28593_t2233549564  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP28593_t2233549564_StaticFields
{
public:
	// System.Char[] I18N.West.CP28593::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP28593_t2233549564_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP28593_T2233549564_H
#ifndef CP28592_T2233549565_H
#define CP28592_T2233549565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP28592
struct  CP28592_t2233549565  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP28592_t2233549565_StaticFields
{
public:
	// System.Char[] I18N.West.CP28592::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP28592_t2233549565_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP28592_T2233549565_H
#ifndef CP1253_T3382661324_H
#define CP1253_T3382661324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP1253
struct  CP1253_t3382661324  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1253_t3382661324_StaticFields
{
public:
	// System.Char[] I18N.West.CP1253::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1253_t3382661324_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1253_T3382661324_H
#ifndef CP20285_T2992077316_H
#define CP20285_T2992077316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20285
struct  CP20285_t2992077316  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20285_t2992077316_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20285::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP20285_t2992077316_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20285_T2992077316_H
#ifndef CP1140_T1954458769_H
#define CP1140_T1954458769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1140
struct  CP1140_t1954458769  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1140_t1954458769_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1140::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1140_t1954458769_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1140_T1954458769_H
#ifndef CP1147_T1551174242_H
#define CP1147_T1551174242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1147
struct  CP1147_t1551174242  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1147_t1551174242_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1147::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1147_t1551174242_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1147_T1551174242_H
#ifndef CP1142_T791659355_H
#define CP1142_T791659355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1142
struct  CP1142_t791659355  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1142_t791659355_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1142::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1142_t791659355_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1142_T791659355_H
#ifndef CP1146_T3117258183_H
#define CP1146_T3117258183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1146
struct  CP1146_t3117258183  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1146_t3117258183_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1146::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1146_t3117258183_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1146_T3117258183_H
#ifndef CP20278_T1782223732_H
#define CP20278_T1782223732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20278
struct  CP20278_t1782223732  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20278_t1782223732_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20278::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP20278_t1782223732_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20278_T1782223732_H
#ifndef CP1148_T1598228409_H
#define CP1148_T1598228409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1148
struct  CP1148_t1598228409  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1148_t1598228409_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1148::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1148_t1598228409_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1148_T1598228409_H
#ifndef CP1149_T32144468_H
#define CP1149_T32144468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1149
struct  CP1149_t32144468  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1149_t32144468_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1149::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1149_t32144468_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1149_T32144468_H
#ifndef CP20273_T1782223741_H
#define CP20273_T1782223741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20273
struct  CP20273_t1782223741  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20273_t1782223741_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20273::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP20273_t1782223741_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20273_T1782223741_H
#ifndef CP20277_T1782223737_H
#define CP20277_T1782223737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20277
struct  CP20277_t1782223737  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20277_t1782223737_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20277::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP20277_t1782223737_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20277_T1782223737_H
#ifndef CP1143_T3520542710_H
#define CP1143_T3520542710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1143
struct  CP1143_t3520542710  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1143_t3520542710_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1143::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1143_t3520542710_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1143_T3520542710_H
#ifndef CP875_T622088495_H
#define CP875_T622088495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP875
struct  CP875_t622088495  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP875_t622088495_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP875::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP875_t622088495_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP875_T622088495_H
#ifndef CP1144_T4280057597_H
#define CP1144_T4280057597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1144
struct  CP1144_t4280057597  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1144_t4280057597_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1144::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1144_t4280057597_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1144_T4280057597_H
#ifndef CP870_T622088500_H
#define CP870_T622088500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP870
struct  CP870_t622088500  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP870_t622088500_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP870::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP870_t622088500_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP870_T622088500_H
#ifndef CP1141_T388374828_H
#define CP1141_T388374828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1141
struct  CP1141_t388374828  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1141_t388374828_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1141::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1141_t388374828_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1141_T388374828_H
#ifndef CP1047_T3097055207_H
#define CP1047_T3097055207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1047
struct  CP1047_t3097055207  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1047_t3097055207_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1047::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1047_t3097055207_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1047_T3097055207_H
#ifndef CP20284_T2992077317_H
#define CP20284_T2992077317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20284
struct  CP20284_t2992077317  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20284_t2992077317_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20284::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP20284_t2992077317_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20284_T2992077317_H
#ifndef CP20280_T2992077321_H
#define CP20280_T2992077321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20280
struct  CP20280_t2992077321  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP20280_t2992077321_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20280::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP20280_t2992077321_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20280_T2992077321_H
#ifndef CP1145_T2713973656_H
#define CP1145_T2713973656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1145
struct  CP1145_t2713973656  : public ByteEncoding_t1810358777
{
public:

public:
};

struct CP1145_t2713973656_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1145::ToChars
	CharU5BU5D_t1328083999* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1145_t2713973656_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t1328083999* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t1328083999* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1145_T2713973656_H
#ifndef ENCIBM01143_T1622816623_H
#define ENCIBM01143_T1622816623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm01143
struct  ENCibm01143_t1622816623  : public CP1143_t3520542710
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM01143_T1622816623_H
#ifndef ENCIBM01142_T1622816624_H
#define ENCIBM01142_T1622816624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm01142
struct  ENCibm01142_t1622816624  : public CP1142_t791659355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM01142_T1622816624_H
#ifndef ENCISO_8859_2_T2126773855_H
#define ENCISO_8859_2_T2126773855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCiso_8859_2
struct  ENCiso_8859_2_t2126773855  : public CP28592_t2233549565
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCISO_8859_2_T2126773855_H
#ifndef ENCWINDOWS_1250_T336475776_H
#define ENCWINDOWS_1250_T336475776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCwindows_1250
struct  ENCwindows_1250_t336475776  : public CP1250_t653777969
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCWINDOWS_1250_T336475776_H
#ifndef ENCWINDOWS_1252_T336475774_H
#define ENCWINDOWS_1252_T336475774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCwindows_1252
struct  ENCwindows_1252_t336475774  : public CP1252_t1816577383
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCWINDOWS_1252_T336475774_H
#ifndef ENCX_MAC_ICELANDIC_T62238089_H
#define ENCX_MAC_ICELANDIC_T62238089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCx_mac_icelandic
struct  ENCx_mac_icelandic_t62238089  : public CP10079_t1554584814
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_MAC_ICELANDIC_T62238089_H
#ifndef ENCWINDOWS_1253_T336475775_H
#define ENCWINDOWS_1253_T336475775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCwindows_1253
struct  ENCwindows_1253_t336475775  : public CP1253_t3382661324
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCWINDOWS_1253_T336475775_H
#ifndef ENCIBM860_T3646173758_H
#define ENCIBM860_T3646173758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm860
struct  ENCibm860_t3646173758  : public CP860_t3178766153
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM860_T3646173758_H
#ifndef ENCIBM1047_T2943523452_H
#define ENCIBM1047_T2943523452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1047
struct  ENCibm1047_t2943523452  : public CP1047_t3097055207
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1047_T2943523452_H
#ifndef ENCIBM850_T4049458285_H
#define ENCIBM850_T4049458285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm850
struct  ENCibm850_t4049458285  : public CP850_t1612682212
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM850_T4049458285_H
#ifndef ENCIBM870_T130667871_H
#define ENCIBM870_T130667871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm870
struct  ENCibm870_t130667871  : public CP870_t622088500
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM870_T130667871_H
#ifndef ENCIBM875_T130667876_H
#define ENCIBM875_T130667876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm875
struct  ENCibm875_t130667876  : public CP875_t622088495
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM875_T130667876_H
#ifndef ENCIBM861_T3646173757_H
#define ENCIBM861_T3646173757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm861
struct  ENCibm861_t3646173757  : public CP861_t3178766154
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM861_T3646173757_H
#ifndef ENCIBM437_T3242889364_H
#define ENCIBM437_T3242889364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm437
struct  ENCibm437_t3242889364  : public CP437_t2775482021
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM437_T3242889364_H
#ifndef ENCISO_8859_7_T2126773860_H
#define ENCISO_8859_7_T2126773860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCiso_8859_7
struct  ENCiso_8859_7_t2126773860  : public CP28597_t2233549560
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCISO_8859_7_T2126773860_H
#ifndef ENCIBM01141_T1622816625_H
#define ENCIBM01141_T1622816625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm01141
struct  ENCibm01141_t1622816625  : public CP1141_t388374828
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM01141_T1622816625_H
#ifndef ENCISO_8859_3_T2126773856_H
#define ENCISO_8859_3_T2126773856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCiso_8859_3
struct  ENCiso_8859_3_t2126773856  : public CP28593_t2233549564
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCISO_8859_3_T2126773856_H
#ifndef ENCIBM01140_T1622816626_H
#define ENCIBM01140_T1622816626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm01140
struct  ENCibm01140_t1622816626  : public CP1140_t1954458769
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM01140_T1622816626_H
#ifndef ENCISO_8859_15_T1092500295_H
#define ENCISO_8859_15_T1092500295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCiso_8859_15
struct  ENCiso_8859_15_t1092500295  : public CP28605_t311235100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCISO_8859_15_T1092500295_H
#ifndef ENCIBM869_T2859551235_H
#define ENCIBM869_T2859551235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm869
struct  ENCibm869_t2859551235  : public CP869_t3350971862
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM869_T2859551235_H
#ifndef ENCIBM1025_T1780724032_H
#define ENCIBM1025_T1780724032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1025
struct  ENCibm1025_t1780724032  : public CP21025_t3771795245
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1025_T1780724032_H
#ifndef ENCIBM871_T130667872_H
#define ENCIBM871_T130667872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm871
struct  ENCibm871_t130667872  : public CP20871_t1782223541
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM871_T130667872_H
#ifndef ENCIBM278_T130668061_H
#define ENCIBM278_T130668061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm278
struct  ENCibm278_t130668061  : public CP20278_t1782223732
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM278_T130668061_H
#ifndef ENCIBM277_T130668076_H
#define ENCIBM277_T130668076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm277
struct  ENCibm277_t130668076  : public CP20277_t1782223737
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM277_T130668076_H
#ifndef ENCIBM273_T130668072_H
#define ENCIBM273_T130668072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm273
struct  ENCibm273_t130668072  : public CP20273_t1782223741
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM273_T130668072_H
#ifndef ENCIBM500_T3666120773_H
#define ENCIBM500_T3666120773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm500
struct  ENCibm500_t3666120773  : public CP500_t2188172604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM500_T3666120773_H
#ifndef ENCIBM037_T2100036606_H
#define ENCIBM037_T2100036606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm037
struct  ENCibm037_t2100036606  : public CP37_t661932205
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM037_T2100036606_H
#ifndef ENCIBM290_T1293467483_H
#define ENCIBM290_T1293467483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm290
struct  ENCibm290_t1293467483  : public CP20290_t263193966
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM290_T1293467483_H
#ifndef ENCIBM284_T4022350842_H
#define ENCIBM284_T4022350842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm284
struct  ENCibm284_t4022350842  : public CP20284_t2992077317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM284_T4022350842_H
#ifndef ENCIBM285_T4022350843_H
#define ENCIBM285_T4022350843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm285
struct  ENCibm285_t4022350843  : public CP20285_t2992077316
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM285_T4022350843_H
#ifndef ENCIBM297_T1293467490_H
#define ENCIBM297_T1293467490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm297
struct  ENCibm297_t1293467490  : public CP20297_t263193963
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM297_T1293467490_H
#ifndef ENCIBM424_T533952790_H
#define ENCIBM424_T533952790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm424
struct  ENCibm424_t533952790  : public CP20424_t2185508205
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM424_T533952790_H
#ifndef ENCIBM420_T533952794_H
#define ENCIBM420_T533952794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm420
struct  ENCibm420_t533952794  : public CP20420_t2185508201
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM420_T533952794_H
#ifndef ENCIBM280_T4022350838_H
#define ENCIBM280_T4022350838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm280
struct  ENCibm280_t4022350838  : public CP20280_t2992077321
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM280_T4022350838_H
#ifndef ENCIBM864_T2859551230_H
#define ENCIBM864_T2859551230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm864
struct  ENCibm864_t2859551230  : public CP864_t3350971851
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM864_T2859551230_H
#ifndef ENCIBM1147_T2802360951_H
#define ENCIBM1147_T2802360951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1147
struct  ENCibm1147_t2802360951  : public CP1147_t1551174242
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1147_T2802360951_H
#ifndef ENCIBM862_T2859551224_H
#define ENCIBM862_T2859551224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm862
struct  ENCibm862_t2859551224  : public CP862_t3350971857
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM862_T2859551224_H
#ifndef ENCIBM1146_T73477596_H
#define ENCIBM1146_T73477596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1146
struct  ENCibm1146_t73477596  : public CP1146_t3117258183
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1146_T73477596_H
#ifndef ENCIBM1144_T3205645478_H
#define ENCIBM1144_T3205645478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1144
struct  ENCibm1144_t3205645478  : public CP1144_t4280057597
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1144_T3205645478_H
#ifndef ENCMACINTOSH_T2108151194_H
#define ENCMACINTOSH_T2108151194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCmacintosh
struct  ENCmacintosh_t2108151194  : public CP10000_t3476899124
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCMACINTOSH_T2108151194_H
#ifndef ENCIBM1145_T1639561537_H
#define ENCIBM1145_T1639561537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1145
struct  ENCibm1145_t1639561537  : public CP1145_t2713973656
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1145_T1639561537_H
#ifndef ENCIBM1149_T3965160365_H
#define ENCIBM1149_T3965160365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1149
struct  ENCibm1149_t3965160365  : public CP1149_t32144468
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1149_T3965160365_H
#ifndef ENCIBM852_T3262835751_H
#define ENCIBM852_T3262835751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm852
struct  ENCibm852_t3262835751  : public CP852_t1784887916
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM852_T3262835751_H
#ifndef ENCASMO_708_T1618404456_H
#define ENCASMO_708_T1618404456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCasmo_708
struct  ENCasmo_708_t1618404456  : public CP708_t2188172662
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCASMO_708_T1618404456_H
#ifndef ENCIBM855_T3262835758_H
#define ENCIBM855_T3262835758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm855
struct  ENCibm855_t3262835758  : public CP855_t1784887909
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM855_T3262835758_H
#ifndef ENCIBM00858_T197894961_H
#define ENCIBM00858_T197894961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm00858
struct  ENCibm00858_t197894961  : public CP858_t1784887922
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM00858_T197894961_H
#ifndef ENCIBM1148_T1236277010_H
#define ENCIBM1148_T1236277010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1148
struct  ENCibm1148_t1236277010  : public CP1148_t1598228409
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1148_T1236277010_H
#ifndef ENCIBM857_T3262835756_H
#define ENCIBM857_T3262835756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm857
struct  ENCibm857_t3262835756  : public CP857_t1784887911
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM857_T3262835756_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3800 = { sizeof (CP869_t3350971862), -1, sizeof(CP869_t3350971862_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3800[1] = 
{
	CP869_t3350971862_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3801 = { sizeof (ENCibm869_t2859551235), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3802 = { sizeof (CP870_t622088500), -1, sizeof(CP870_t622088500_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3802[1] = 
{
	CP870_t622088500_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3803 = { sizeof (ENCibm870_t130667871), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3804 = { sizeof (CP875_t622088495), -1, sizeof(CP875_t622088495_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3804[1] = 
{
	CP875_t622088495_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3805 = { sizeof (ENCibm875_t130667876), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3806 = { sizeof (CP1047_t3097055207), -1, sizeof(CP1047_t3097055207_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3806[1] = 
{
	CP1047_t3097055207_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3807 = { sizeof (ENCibm1047_t2943523452), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3808 = { sizeof (CP1140_t1954458769), -1, sizeof(CP1140_t1954458769_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3808[1] = 
{
	CP1140_t1954458769_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3809 = { sizeof (ENCibm01140_t1622816626), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3810 = { sizeof (CP1141_t388374828), -1, sizeof(CP1141_t388374828_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3810[1] = 
{
	CP1141_t388374828_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3811 = { sizeof (ENCibm01141_t1622816625), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3812 = { sizeof (CP1142_t791659355), -1, sizeof(CP1142_t791659355_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3812[1] = 
{
	CP1142_t791659355_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3813 = { sizeof (ENCibm01142_t1622816624), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3814 = { sizeof (CP1143_t3520542710), -1, sizeof(CP1143_t3520542710_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3814[1] = 
{
	CP1143_t3520542710_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3815 = { sizeof (ENCibm01143_t1622816623), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3816 = { sizeof (CP1144_t4280057597), -1, sizeof(CP1144_t4280057597_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3816[1] = 
{
	CP1144_t4280057597_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3817 = { sizeof (ENCibm1144_t3205645478), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3818 = { sizeof (CP1145_t2713973656), -1, sizeof(CP1145_t2713973656_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3818[1] = 
{
	CP1145_t2713973656_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3819 = { sizeof (ENCibm1145_t1639561537), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3820 = { sizeof (CP1146_t3117258183), -1, sizeof(CP1146_t3117258183_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3820[1] = 
{
	CP1146_t3117258183_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3821 = { sizeof (ENCibm1146_t73477596), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3822 = { sizeof (CP1147_t1551174242), -1, sizeof(CP1147_t1551174242_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3822[1] = 
{
	CP1147_t1551174242_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3823 = { sizeof (ENCibm1147_t2802360951), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3824 = { sizeof (CP1148_t1598228409), -1, sizeof(CP1148_t1598228409_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3824[1] = 
{
	CP1148_t1598228409_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3825 = { sizeof (ENCibm1148_t1236277010), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3826 = { sizeof (CP1149_t32144468), -1, sizeof(CP1149_t32144468_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3826[1] = 
{
	CP1149_t32144468_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3827 = { sizeof (ENCibm1149_t3965160365), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3828 = { sizeof (CP20273_t1782223741), -1, sizeof(CP20273_t1782223741_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3828[1] = 
{
	CP20273_t1782223741_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3829 = { sizeof (ENCibm273_t130668072), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3830 = { sizeof (CP20277_t1782223737), -1, sizeof(CP20277_t1782223737_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3830[1] = 
{
	CP20277_t1782223737_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3831 = { sizeof (ENCibm277_t130668076), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3832 = { sizeof (CP20278_t1782223732), -1, sizeof(CP20278_t1782223732_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3832[1] = 
{
	CP20278_t1782223732_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3833 = { sizeof (ENCibm278_t130668061), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3834 = { sizeof (CP20280_t2992077321), -1, sizeof(CP20280_t2992077321_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3834[1] = 
{
	CP20280_t2992077321_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3835 = { sizeof (ENCibm280_t4022350838), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3836 = { sizeof (CP20284_t2992077317), -1, sizeof(CP20284_t2992077317_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3836[1] = 
{
	CP20284_t2992077317_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3837 = { sizeof (ENCibm284_t4022350842), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3838 = { sizeof (CP20285_t2992077316), -1, sizeof(CP20285_t2992077316_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3838[1] = 
{
	CP20285_t2992077316_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3839 = { sizeof (ENCibm285_t4022350843), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3840 = { sizeof (CP20290_t263193966), -1, sizeof(CP20290_t263193966_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3840[1] = 
{
	CP20290_t263193966_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3841 = { sizeof (ENCibm290_t1293467483), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3842 = { sizeof (CP20297_t263193963), -1, sizeof(CP20297_t263193963_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3842[1] = 
{
	CP20297_t263193963_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3843 = { sizeof (ENCibm297_t1293467490), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3844 = { sizeof (CP20420_t2185508201), -1, sizeof(CP20420_t2185508201_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3844[1] = 
{
	CP20420_t2185508201_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3845 = { sizeof (ENCibm420_t533952794), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3846 = { sizeof (CP20424_t2185508205), -1, sizeof(CP20424_t2185508205_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3846[1] = 
{
	CP20424_t2185508205_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3847 = { sizeof (ENCibm424_t533952790), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3848 = { sizeof (CP20871_t1782223541), -1, sizeof(CP20871_t1782223541_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3848[1] = 
{
	CP20871_t1782223541_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3849 = { sizeof (ENCibm871_t130667872), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3850 = { sizeof (CP21025_t3771795245), -1, sizeof(CP21025_t3771795245_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3850[1] = 
{
	CP21025_t3771795245_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3851 = { sizeof (ENCibm1025_t1780724032), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3852 = { sizeof (CP37_t661932205), -1, sizeof(CP37_t661932205_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3852[1] = 
{
	CP37_t661932205_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3853 = { sizeof (ENCibm037_t2100036606), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3854 = { sizeof (CP500_t2188172604), -1, sizeof(CP500_t2188172604_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3854[1] = 
{
	CP500_t2188172604_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3855 = { sizeof (ENCibm500_t3666120773), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3856 = { sizeof (CP708_t2188172662), -1, sizeof(CP708_t2188172662_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3856[1] = 
{
	CP708_t2188172662_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3857 = { sizeof (ENCasmo_708_t1618404456), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3858 = { sizeof (CP852_t1784887916), -1, sizeof(CP852_t1784887916_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3858[1] = 
{
	CP852_t1784887916_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3859 = { sizeof (ENCibm852_t3262835751), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3860 = { sizeof (CP855_t1784887909), -1, sizeof(CP855_t1784887909_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3860[1] = 
{
	CP855_t1784887909_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3861 = { sizeof (ENCibm855_t3262835758), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3862 = { sizeof (CP857_t1784887911), -1, sizeof(CP857_t1784887911_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3862[1] = 
{
	CP857_t1784887911_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3863 = { sizeof (ENCibm857_t3262835756), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3864 = { sizeof (CP858_t1784887922), -1, sizeof(CP858_t1784887922_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3864[1] = 
{
	CP858_t1784887922_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3865 = { sizeof (ENCibm00858_t197894961), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3866 = { sizeof (CP862_t3350971857), -1, sizeof(CP862_t3350971857_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3866[1] = 
{
	CP862_t3350971857_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3867 = { sizeof (ENCibm862_t2859551224), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3868 = { sizeof (CP864_t3350971851), -1, sizeof(CP864_t3350971851_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3868[1] = 
{
	CP864_t3350971851_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3869 = { sizeof (ENCibm864_t2859551230), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3870 = { sizeof (U3CPrivateImplementationDetailsU3E_t1486305147), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3870[37] = 
{
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U305B1E1067273E188A50BA4342B4BC09ABEE669CD_0(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U309885C8B0840E863B3A14261999895D896677D5A_1(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U30BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U3271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U32E1C78D5F4666324672DFACDC9307935CF14E98F_4(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U33551F16F8A11003B8289B76B9E3D97969B68E7D9_5(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U336A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U337C03949C69BDDA042205E1A573B349E75F693B8_7(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U347DCC01E928630EBCC018C5E0285145985F92532_8(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U352623ED7F33E8C1C541F1C3101FA981B173D795E_9(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U35EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U3659C24C855D0E50CBD366B2774AF841E29202E70_11(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U36B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U371D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U37A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U37AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U382273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U38C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U38E958C1847104F390F9C9B64F0F39C98ED4AC63F_18(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U394F89F72CC0508D891A0C71DD7B57B703869A3FB_19(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U39E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U39EF46C677634CB82C0BD475E372C71C5F68C981A_21(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_A5A5BE77BD3D095389FABC21D18BB648787E6618_22(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_B2574B82126B684C0CB3CF93BF7473F0FBB34400_25(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_BC1CEF8131E7F0D8206029373157806126E21026_27(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_C14817C33562352073848F1A8EA633C19CF1A4F5_28(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_C392E993B9E622A36C30E0BB997A9F41293CD9EF_29(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_DF4C38A5E59685BBEC109623762B6914BE00E866_35(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3871 = { sizeof (__StaticArrayInitTypeSizeU3D512_t2067141549)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D512_t2067141549 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3872 = { sizeof (U3CModuleU3E_t3783534247), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3873 = { sizeof (Consts_t2407773021), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3873[41] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3874 = { sizeof (CP10000_t3476899124), -1, sizeof(CP10000_t3476899124_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3874[1] = 
{
	CP10000_t3476899124_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3875 = { sizeof (ENCmacintosh_t2108151194), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3876 = { sizeof (CP10079_t1554584814), -1, sizeof(CP10079_t1554584814_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3876[1] = 
{
	CP10079_t1554584814_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3877 = { sizeof (ENCx_mac_icelandic_t62238089), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3878 = { sizeof (CP1250_t653777969), -1, sizeof(CP1250_t653777969_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3878[1] = 
{
	CP1250_t653777969_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3879 = { sizeof (ENCwindows_1250_t336475776), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3880 = { sizeof (CP1252_t1816577383), -1, sizeof(CP1252_t1816577383_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3880[1] = 
{
	CP1252_t1816577383_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3881 = { sizeof (ENCwindows_1252_t336475774), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3882 = { sizeof (CP1253_t3382661324), -1, sizeof(CP1253_t3382661324_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3882[1] = 
{
	CP1253_t3382661324_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3883 = { sizeof (ENCwindows_1253_t336475775), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3884 = { sizeof (CP28592_t2233549565), -1, sizeof(CP28592_t2233549565_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3884[1] = 
{
	CP28592_t2233549565_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3885 = { sizeof (ENCiso_8859_2_t2126773855), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3886 = { sizeof (CP28593_t2233549564), -1, sizeof(CP28593_t2233549564_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3886[1] = 
{
	CP28593_t2233549564_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3887 = { sizeof (ENCiso_8859_3_t2126773856), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3888 = { sizeof (CP28597_t2233549560), -1, sizeof(CP28597_t2233549560_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3888[1] = 
{
	CP28597_t2233549560_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3889 = { sizeof (ENCiso_8859_7_t2126773860), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3890 = { sizeof (CP28605_t311235100), -1, sizeof(CP28605_t311235100_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3890[1] = 
{
	CP28605_t311235100_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3891 = { sizeof (ENCiso_8859_15_t1092500295), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3892 = { sizeof (CP437_t2775482021), -1, sizeof(CP437_t2775482021_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3892[1] = 
{
	CP437_t2775482021_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3893 = { sizeof (ENCibm437_t3242889364), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3894 = { sizeof (CP850_t1612682212), -1, sizeof(CP850_t1612682212_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3894[1] = 
{
	CP850_t1612682212_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3895 = { sizeof (ENCibm850_t4049458285), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3896 = { sizeof (CP860_t3178766153), -1, sizeof(CP860_t3178766153_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3896[1] = 
{
	CP860_t3178766153_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3897 = { sizeof (ENCibm860_t3646173758), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3898 = { sizeof (CP861_t3178766154), -1, sizeof(CP861_t3178766154_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3898[1] = 
{
	CP861_t3178766154_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3899 = { sizeof (ENCibm861_t3646173757), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
