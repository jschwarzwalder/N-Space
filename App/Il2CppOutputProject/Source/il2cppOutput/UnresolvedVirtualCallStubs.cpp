#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Xml.Schema.BitSet
struct BitSet_t1062448123;
// System.Decimal[]
struct DecimalU5BU5D_t624008824;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2050913741;
// System.Char[]
struct CharU5BU5D_t1328083999;
// InteractionManagerController
struct InteractionManagerController_t3158324719;
// MS.Internal.Xml.Cache.XPathNode[]
struct XPathNodeU5BU5D_t339325318;
// UnityEngine.Sprite
struct Sprite_t309593783;
// System.Void
struct Void_t1841601450;
// System.Type
struct Type_t;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t1795361321;
// System.Action`1<System.Object>
struct Action_1_t2491248677;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t2336171397;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.UI.Selectable
struct Selectable_t1490392188;

struct Decimal_t724701077 ;
struct XPathNode_t3118381855_marshaled_pinvoke;
struct XPathNode_t3118381855_marshaled_com;



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
#ifndef RANGEPOSITIONINFO_T2780802922_H
#define RANGEPOSITIONINFO_T2780802922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.RangePositionInfo
struct  RangePositionInfo_t2780802922 
{
public:
	// System.Xml.Schema.BitSet System.Xml.Schema.RangePositionInfo::curpos
	BitSet_t1062448123 * ___curpos_0;
	// System.Decimal[] System.Xml.Schema.RangePositionInfo::rangeCounters
	DecimalU5BU5D_t624008824* ___rangeCounters_1;

public:
	inline static int32_t get_offset_of_curpos_0() { return static_cast<int32_t>(offsetof(RangePositionInfo_t2780802922, ___curpos_0)); }
	inline BitSet_t1062448123 * get_curpos_0() const { return ___curpos_0; }
	inline BitSet_t1062448123 ** get_address_of_curpos_0() { return &___curpos_0; }
	inline void set_curpos_0(BitSet_t1062448123 * value)
	{
		___curpos_0 = value;
		Il2CppCodeGenWriteBarrier((&___curpos_0), value);
	}

	inline static int32_t get_offset_of_rangeCounters_1() { return static_cast<int32_t>(offsetof(RangePositionInfo_t2780802922, ___rangeCounters_1)); }
	inline DecimalU5BU5D_t624008824* get_rangeCounters_1() const { return ___rangeCounters_1; }
	inline DecimalU5BU5D_t624008824** get_address_of_rangeCounters_1() { return &___rangeCounters_1; }
	inline void set_rangeCounters_1(DecimalU5BU5D_t624008824* value)
	{
		___rangeCounters_1 = value;
		Il2CppCodeGenWriteBarrier((&___rangeCounters_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Schema.RangePositionInfo
struct RangePositionInfo_t2780802922_marshaled_pinvoke
{
	BitSet_t1062448123 * ___curpos_0;
	Decimal_t724701077 * ___rangeCounters_1;
};
// Native definition for COM marshalling of System.Xml.Schema.RangePositionInfo
struct RangePositionInfo_t2780802922_marshaled_com
{
	BitSet_t1062448123 * ___curpos_0;
	Decimal_t724701077 * ___rangeCounters_1;
};
#endif // RANGEPOSITIONINFO_T2780802922_H
#ifndef STICK_T1862091779_H
#define STICK_T1862091779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ControllerMapping/Stick
struct  Stick_t1862091779 
{
public:
	// System.String ControllerMapping/Stick::label
	String_t* ___label_0;
	// System.String ControllerMapping/Stick::buttonId
	String_t* ___buttonId_1;
	// System.String ControllerMapping/Stick::xAxisId
	String_t* ___xAxisId_2;
	// System.String ControllerMapping/Stick::yAxisId
	String_t* ___yAxisId_3;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(Stick_t1862091779, ___label_0)); }
	inline String_t* get_label_0() const { return ___label_0; }
	inline String_t** get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(String_t* value)
	{
		___label_0 = value;
		Il2CppCodeGenWriteBarrier((&___label_0), value);
	}

	inline static int32_t get_offset_of_buttonId_1() { return static_cast<int32_t>(offsetof(Stick_t1862091779, ___buttonId_1)); }
	inline String_t* get_buttonId_1() const { return ___buttonId_1; }
	inline String_t** get_address_of_buttonId_1() { return &___buttonId_1; }
	inline void set_buttonId_1(String_t* value)
	{
		___buttonId_1 = value;
		Il2CppCodeGenWriteBarrier((&___buttonId_1), value);
	}

	inline static int32_t get_offset_of_xAxisId_2() { return static_cast<int32_t>(offsetof(Stick_t1862091779, ___xAxisId_2)); }
	inline String_t* get_xAxisId_2() const { return ___xAxisId_2; }
	inline String_t** get_address_of_xAxisId_2() { return &___xAxisId_2; }
	inline void set_xAxisId_2(String_t* value)
	{
		___xAxisId_2 = value;
		Il2CppCodeGenWriteBarrier((&___xAxisId_2), value);
	}

	inline static int32_t get_offset_of_yAxisId_3() { return static_cast<int32_t>(offsetof(Stick_t1862091779, ___yAxisId_3)); }
	inline String_t* get_yAxisId_3() const { return ___yAxisId_3; }
	inline String_t** get_address_of_yAxisId_3() { return &___yAxisId_3; }
	inline void set_yAxisId_3(String_t* value)
	{
		___yAxisId_3 = value;
		Il2CppCodeGenWriteBarrier((&___yAxisId_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of ControllerMapping/Stick
struct Stick_t1862091779_marshaled_pinvoke
{
	char* ___label_0;
	char* ___buttonId_1;
	char* ___xAxisId_2;
	char* ___yAxisId_3;
};
// Native definition for COM marshalling of ControllerMapping/Stick
struct Stick_t1862091779_marshaled_com
{
	Il2CppChar* ___label_0;
	Il2CppChar* ___buttonId_1;
	Il2CppChar* ___xAxisId_2;
	Il2CppChar* ___yAxisId_3;
};
#endif // STICK_T1862091779_H
#ifndef XMLSCHEMAOBJECTENTRY_T2510586510_H
#define XMLSCHEMAOBJECTENTRY_T2510586510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry
struct  XmlSchemaObjectEntry_t2510586510 
{
public:
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry::qname
	XmlQualifiedName_t1944712516 * ___qname_0;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry::xso
	XmlSchemaObject_t2050913741 * ___xso_1;

public:
	inline static int32_t get_offset_of_qname_0() { return static_cast<int32_t>(offsetof(XmlSchemaObjectEntry_t2510586510, ___qname_0)); }
	inline XmlQualifiedName_t1944712516 * get_qname_0() const { return ___qname_0; }
	inline XmlQualifiedName_t1944712516 ** get_address_of_qname_0() { return &___qname_0; }
	inline void set_qname_0(XmlQualifiedName_t1944712516 * value)
	{
		___qname_0 = value;
		Il2CppCodeGenWriteBarrier((&___qname_0), value);
	}

	inline static int32_t get_offset_of_xso_1() { return static_cast<int32_t>(offsetof(XmlSchemaObjectEntry_t2510586510, ___xso_1)); }
	inline XmlSchemaObject_t2050913741 * get_xso_1() const { return ___xso_1; }
	inline XmlSchemaObject_t2050913741 ** get_address_of_xso_1() { return &___xso_1; }
	inline void set_xso_1(XmlSchemaObject_t2050913741 * value)
	{
		___xso_1 = value;
		Il2CppCodeGenWriteBarrier((&___xso_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry
struct XmlSchemaObjectEntry_t2510586510_marshaled_pinvoke
{
	XmlQualifiedName_t1944712516 * ___qname_0;
	XmlSchemaObject_t2050913741 * ___xso_1;
};
// Native definition for COM marshalling of System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry
struct XmlSchemaObjectEntry_t2510586510_marshaled_com
{
	XmlQualifiedName_t1944712516 * ___qname_0;
	XmlSchemaObject_t2050913741 * ___xso_1;
};
#endif // XMLSCHEMAOBJECTENTRY_T2510586510_H
#ifndef VECTOR4_T2243707581_H
#define VECTOR4_T2243707581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t2243707581 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t2243707581, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t2243707581, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t2243707581, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t2243707581, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t2243707581_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t2243707581  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t2243707581  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t2243707581  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t2243707581  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t2243707581_StaticFields, ___zeroVector_5)); }
	inline Vector4_t2243707581  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t2243707581 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t2243707581  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t2243707581_StaticFields, ___oneVector_6)); }
	inline Vector4_t2243707581  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t2243707581 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t2243707581  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t2243707581_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t2243707581  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t2243707581 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t2243707581  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t2243707581_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t2243707581  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t2243707581 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t2243707581  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T2243707581_H
#ifndef VECTOR3_T2243707580_H
#define VECTOR3_T2243707580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2243707580 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2243707580_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2243707580  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2243707580  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2243707580  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2243707580  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2243707580  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2243707580  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2243707580  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2243707580  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2243707580  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2243707580  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2243707580  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2243707580 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2243707580  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___oneVector_5)); }
	inline Vector3_t2243707580  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2243707580 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2243707580  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___upVector_6)); }
	inline Vector3_t2243707580  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2243707580 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2243707580  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___downVector_7)); }
	inline Vector3_t2243707580  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2243707580 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2243707580  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___leftVector_8)); }
	inline Vector3_t2243707580  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2243707580 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2243707580  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___rightVector_9)); }
	inline Vector3_t2243707580  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2243707580 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2243707580  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2243707580  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2243707580 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2243707580  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___backVector_11)); }
	inline Vector3_t2243707580  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2243707580 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2243707580  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2243707580  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2243707580 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2243707580  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2243707580  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2243707580 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2243707580  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2243707580_H
#ifndef COLOR32_T874517518_H
#define COLOR32_T874517518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct ALIGN_TYPE(4) Color32_t874517518 
{
public:
	// System.Byte UnityEngine.Color32::r
	uint8_t ___r_0;
	// System.Byte UnityEngine.Color32::g
	uint8_t ___g_1;
	// System.Byte UnityEngine.Color32::b
	uint8_t ___b_2;
	// System.Byte UnityEngine.Color32::a
	uint8_t ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color32_t874517518, ___r_0)); }
	inline uint8_t get_r_0() const { return ___r_0; }
	inline uint8_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(uint8_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color32_t874517518, ___g_1)); }
	inline uint8_t get_g_1() const { return ___g_1; }
	inline uint8_t* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(uint8_t value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color32_t874517518, ___b_2)); }
	inline uint8_t get_b_2() const { return ___b_2; }
	inline uint8_t* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(uint8_t value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color32_t874517518, ___a_3)); }
	inline uint8_t get_a_3() const { return ___a_3; }
	inline uint8_t* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(uint8_t value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T874517518_H
#ifndef BUTTON_T1215063635_H
#define BUTTON_T1215063635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ControllerMapping/Button
struct  Button_t1215063635 
{
public:
	// System.String ControllerMapping/Button::label
	String_t* ___label_0;
	// System.String ControllerMapping/Button::buttonId
	String_t* ___buttonId_1;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(Button_t1215063635, ___label_0)); }
	inline String_t* get_label_0() const { return ___label_0; }
	inline String_t** get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(String_t* value)
	{
		___label_0 = value;
		Il2CppCodeGenWriteBarrier((&___label_0), value);
	}

	inline static int32_t get_offset_of_buttonId_1() { return static_cast<int32_t>(offsetof(Button_t1215063635, ___buttonId_1)); }
	inline String_t* get_buttonId_1() const { return ___buttonId_1; }
	inline String_t** get_address_of_buttonId_1() { return &___buttonId_1; }
	inline void set_buttonId_1(String_t* value)
	{
		___buttonId_1 = value;
		Il2CppCodeGenWriteBarrier((&___buttonId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of ControllerMapping/Button
struct Button_t1215063635_marshaled_pinvoke
{
	char* ___label_0;
	char* ___buttonId_1;
};
// Native definition for COM marshalling of ControllerMapping/Button
struct Button_t1215063635_marshaled_com
{
	Il2CppChar* ___label_0;
	Il2CppChar* ___buttonId_1;
};
#endif // BUTTON_T1215063635_H
#ifndef COLOR_T2020392075_H
#define COLOR_T2020392075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2020392075 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2020392075_H
#ifndef VECTOR2_T2243707579_H
#define VECTOR2_T2243707579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2243707579 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2243707579_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2243707579  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2243707579  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2243707579  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2243707579  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2243707579  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2243707579  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2243707579  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2243707579  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2243707579  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2243707579 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2243707579  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___oneVector_3)); }
	inline Vector2_t2243707579  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2243707579 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2243707579  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___upVector_4)); }
	inline Vector2_t2243707579  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2243707579 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2243707579  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___downVector_5)); }
	inline Vector2_t2243707579  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2243707579 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2243707579  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___leftVector_6)); }
	inline Vector2_t2243707579  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2243707579 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2243707579  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___rightVector_7)); }
	inline Vector2_t2243707579  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2243707579 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2243707579  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2243707579  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2243707579 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2243707579  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2243707579  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2243707579 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2243707579  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2243707579_H
#ifndef KEYVALUEPAIR_2_T38854645_H
#define KEYVALUEPAIR_2_T38854645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t38854645 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t38854645, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t38854645, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T38854645_H
#ifndef QUATERNION_T4030073918_H
#define QUATERNION_T4030073918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t4030073918 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t4030073918_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t4030073918  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t4030073918  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t4030073918 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t4030073918  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T4030073918_H
#ifndef RECT_T3681755626_H
#define RECT_T3681755626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t3681755626 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t3681755626, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t3681755626, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t3681755626, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t3681755626, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T3681755626_H
#ifndef UILINEINFO_T3621277874_H
#define UILINEINFO_T3621277874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UILineInfo
struct  UILineInfo_t3621277874 
{
public:
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;

public:
	inline static int32_t get_offset_of_startCharIdx_0() { return static_cast<int32_t>(offsetof(UILineInfo_t3621277874, ___startCharIdx_0)); }
	inline int32_t get_startCharIdx_0() const { return ___startCharIdx_0; }
	inline int32_t* get_address_of_startCharIdx_0() { return &___startCharIdx_0; }
	inline void set_startCharIdx_0(int32_t value)
	{
		___startCharIdx_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(UILineInfo_t3621277874, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_topY_2() { return static_cast<int32_t>(offsetof(UILineInfo_t3621277874, ___topY_2)); }
	inline float get_topY_2() const { return ___topY_2; }
	inline float* get_address_of_topY_2() { return &___topY_2; }
	inline void set_topY_2(float value)
	{
		___topY_2 = value;
	}

	inline static int32_t get_offset_of_leading_3() { return static_cast<int32_t>(offsetof(UILineInfo_t3621277874, ___leading_3)); }
	inline float get_leading_3() const { return ___leading_3; }
	inline float* get_address_of_leading_3() { return &___leading_3; }
	inline void set_leading_3(float value)
	{
		___leading_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UILINEINFO_T3621277874_H
#ifndef ALIGNMENTUNION_T707470070_H
#define ALIGNMENTUNION_T707470070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.AlignmentUnion
struct  AlignmentUnion_t707470070 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Net.NetworkInformation.AlignmentUnion::Alignment
			uint64_t ___Alignment_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Alignment_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::Length
			int32_t ___Length_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Length_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IfIndex_2_OffsetPadding[4];
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::IfIndex
			int32_t ___IfIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IfIndex_2_OffsetPadding_forAlignmentOnly[4];
			int32_t ___IfIndex_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Alignment_0() { return static_cast<int32_t>(offsetof(AlignmentUnion_t707470070, ___Alignment_0)); }
	inline uint64_t get_Alignment_0() const { return ___Alignment_0; }
	inline uint64_t* get_address_of_Alignment_0() { return &___Alignment_0; }
	inline void set_Alignment_0(uint64_t value)
	{
		___Alignment_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(AlignmentUnion_t707470070, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_IfIndex_2() { return static_cast<int32_t>(offsetof(AlignmentUnion_t707470070, ___IfIndex_2)); }
	inline int32_t get_IfIndex_2() const { return ___IfIndex_2; }
	inline int32_t* get_address_of_IfIndex_2() { return &___IfIndex_2; }
	inline void set_IfIndex_2(int32_t value)
	{
		___IfIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALIGNMENTUNION_T707470070_H
#ifndef BOOLEAN_T3825574718_H
#define BOOLEAN_T3825574718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3825574718 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t3825574718, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t3825574718_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3825574718_H
#ifndef KEYVALUEPAIR_2_T778574023_H
#define KEYVALUEPAIR_2_T778574023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>
struct  KeyValuePair_2_t778574023 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t778574023, ___key_0)); }
	inline uint32_t get_key_0() const { return ___key_0; }
	inline uint32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t778574023, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T778574023_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t1328083999* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t1328083999* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t1328083999** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t1328083999* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef UINT32_T2149682021_H
#define UINT32_T2149682021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2149682021 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2149682021, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2149682021_H
#ifndef BYTE_T3683104436_H
#define BYTE_T3683104436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t3683104436 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t3683104436, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T3683104436_H
#ifndef INTERACTIONSOURCEDATA_T4105625862_H
#define INTERACTIONSOURCEDATA_T4105625862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConsoleManager/InteractionSourceData
struct  InteractionSourceData_t4105625862 
{
public:
	// InteractionManagerController ConsoleManager/InteractionSourceData::controllerView
	InteractionManagerController_t3158324719 * ___controllerView_0;

public:
	inline static int32_t get_offset_of_controllerView_0() { return static_cast<int32_t>(offsetof(InteractionSourceData_t4105625862, ___controllerView_0)); }
	inline InteractionManagerController_t3158324719 * get_controllerView_0() const { return ___controllerView_0; }
	inline InteractionManagerController_t3158324719 ** get_address_of_controllerView_0() { return &___controllerView_0; }
	inline void set_controllerView_0(InteractionManagerController_t3158324719 * value)
	{
		___controllerView_0 = value;
		Il2CppCodeGenWriteBarrier((&___controllerView_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of ConsoleManager/InteractionSourceData
struct InteractionSourceData_t4105625862_marshaled_pinvoke
{
	InteractionManagerController_t3158324719 * ___controllerView_0;
};
// Native definition for COM marshalling of ConsoleManager/InteractionSourceData
struct InteractionSourceData_t4105625862_marshaled_com
{
	InteractionManagerController_t3158324719 * ___controllerView_0;
};
#endif // INTERACTIONSOURCEDATA_T4105625862_H
#ifndef KEYVALUEPAIR_2_T3749587448_H
#define KEYVALUEPAIR_2_T3749587448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t3749587448 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3749587448, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3749587448, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3749587448_H
#ifndef XPATHNODEREF_T2092605142_H
#define XPATHNODEREF_T2092605142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MS.Internal.Xml.Cache.XPathNodeRef
struct  XPathNodeRef_t2092605142 
{
public:
	// MS.Internal.Xml.Cache.XPathNode[] MS.Internal.Xml.Cache.XPathNodeRef::page
	XPathNodeU5BU5D_t339325318* ___page_0;
	// System.Int32 MS.Internal.Xml.Cache.XPathNodeRef::idx
	int32_t ___idx_1;

public:
	inline static int32_t get_offset_of_page_0() { return static_cast<int32_t>(offsetof(XPathNodeRef_t2092605142, ___page_0)); }
	inline XPathNodeU5BU5D_t339325318* get_page_0() const { return ___page_0; }
	inline XPathNodeU5BU5D_t339325318** get_address_of_page_0() { return &___page_0; }
	inline void set_page_0(XPathNodeU5BU5D_t339325318* value)
	{
		___page_0 = value;
		Il2CppCodeGenWriteBarrier((&___page_0), value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(XPathNodeRef_t2092605142, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of MS.Internal.Xml.Cache.XPathNodeRef
struct XPathNodeRef_t2092605142_marshaled_pinvoke
{
	XPathNode_t3118381855_marshaled_pinvoke* ___page_0;
	int32_t ___idx_1;
};
// Native definition for COM marshalling of MS.Internal.Xml.Cache.XPathNodeRef
struct XPathNodeRef_t2092605142_marshaled_com
{
	XPathNode_t3118381855_marshaled_com* ___page_0;
	int32_t ___idx_1;
};
#endif // XPATHNODEREF_T2092605142_H
#ifndef SPRITESTATE_T1353336012_H
#define SPRITESTATE_T1353336012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1353336012 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t309593783 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t309593783 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t309593783 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1353336012, ___m_HighlightedSprite_0)); }
	inline Sprite_t309593783 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t309593783 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t309593783 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1353336012, ___m_PressedSprite_1)); }
	inline Sprite_t309593783 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t309593783 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t309593783 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1353336012, ___m_DisabledSprite_2)); }
	inline Sprite_t309593783 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t309593783 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t309593783 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1353336012_marshaled_pinvoke
{
	Sprite_t309593783 * ___m_HighlightedSprite_0;
	Sprite_t309593783 * ___m_PressedSprite_1;
	Sprite_t309593783 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1353336012_marshaled_com
{
	Sprite_t309593783 * ___m_HighlightedSprite_0;
	Sprite_t309593783 * ___m_PressedSprite_1;
	Sprite_t309593783 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1353336012_H
#ifndef RESOURCELOCATOR_T2156390884_H
#define RESOURCELOCATOR_T2156390884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceLocator
struct  ResourceLocator_t2156390884 
{
public:
	// System.Object System.Resources.ResourceLocator::_value
	RuntimeObject * ____value_0;
	// System.Int32 System.Resources.ResourceLocator::_dataPos
	int32_t ____dataPos_1;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ResourceLocator_t2156390884, ____value_0)); }
	inline RuntimeObject * get__value_0() const { return ____value_0; }
	inline RuntimeObject ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(RuntimeObject * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((&____value_0), value);
	}

	inline static int32_t get_offset_of__dataPos_1() { return static_cast<int32_t>(offsetof(ResourceLocator_t2156390884, ____dataPos_1)); }
	inline int32_t get__dataPos_1() const { return ____dataPos_1; }
	inline int32_t* get_address_of__dataPos_1() { return &____dataPos_1; }
	inline void set__dataPos_1(int32_t value)
	{
		____dataPos_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t2156390884_marshaled_pinvoke
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
// Native definition for COM marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t2156390884_marshaled_com
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
#endif // RESOURCELOCATOR_T2156390884_H
#ifndef KEYVALUEPAIR_2_T3716250094_H
#define KEYVALUEPAIR_2_T3716250094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
struct  KeyValuePair_2_t3716250094 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3716250094, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3716250094, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3716250094_H
#ifndef KEYVALUEPAIR_2_T1174980068_H
#define KEYVALUEPAIR_2_T1174980068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct  KeyValuePair_2_t1174980068 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1174980068, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1174980068, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1174980068_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T1498197914_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T1498197914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t1498197914 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t1498197914, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t1498197914, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t1498197914_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t1498197914_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T1498197914_H
#ifndef OPCODE_T2247480392_H
#define OPCODE_T2247480392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCode
struct  OpCode_t2247480392 
{
public:
	// System.Byte System.Reflection.Emit.OpCode::op1
	uint8_t ___op1_0;
	// System.Byte System.Reflection.Emit.OpCode::op2
	uint8_t ___op2_1;
	// System.Byte System.Reflection.Emit.OpCode::push
	uint8_t ___push_2;
	// System.Byte System.Reflection.Emit.OpCode::pop
	uint8_t ___pop_3;
	// System.Byte System.Reflection.Emit.OpCode::size
	uint8_t ___size_4;
	// System.Byte System.Reflection.Emit.OpCode::type
	uint8_t ___type_5;
	// System.Byte System.Reflection.Emit.OpCode::args
	uint8_t ___args_6;
	// System.Byte System.Reflection.Emit.OpCode::flow
	uint8_t ___flow_7;

public:
	inline static int32_t get_offset_of_op1_0() { return static_cast<int32_t>(offsetof(OpCode_t2247480392, ___op1_0)); }
	inline uint8_t get_op1_0() const { return ___op1_0; }
	inline uint8_t* get_address_of_op1_0() { return &___op1_0; }
	inline void set_op1_0(uint8_t value)
	{
		___op1_0 = value;
	}

	inline static int32_t get_offset_of_op2_1() { return static_cast<int32_t>(offsetof(OpCode_t2247480392, ___op2_1)); }
	inline uint8_t get_op2_1() const { return ___op2_1; }
	inline uint8_t* get_address_of_op2_1() { return &___op2_1; }
	inline void set_op2_1(uint8_t value)
	{
		___op2_1 = value;
	}

	inline static int32_t get_offset_of_push_2() { return static_cast<int32_t>(offsetof(OpCode_t2247480392, ___push_2)); }
	inline uint8_t get_push_2() const { return ___push_2; }
	inline uint8_t* get_address_of_push_2() { return &___push_2; }
	inline void set_push_2(uint8_t value)
	{
		___push_2 = value;
	}

	inline static int32_t get_offset_of_pop_3() { return static_cast<int32_t>(offsetof(OpCode_t2247480392, ___pop_3)); }
	inline uint8_t get_pop_3() const { return ___pop_3; }
	inline uint8_t* get_address_of_pop_3() { return &___pop_3; }
	inline void set_pop_3(uint8_t value)
	{
		___pop_3 = value;
	}

	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(OpCode_t2247480392, ___size_4)); }
	inline uint8_t get_size_4() const { return ___size_4; }
	inline uint8_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(uint8_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(OpCode_t2247480392, ___type_5)); }
	inline uint8_t get_type_5() const { return ___type_5; }
	inline uint8_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(uint8_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_args_6() { return static_cast<int32_t>(offsetof(OpCode_t2247480392, ___args_6)); }
	inline uint8_t get_args_6() const { return ___args_6; }
	inline uint8_t* get_address_of_args_6() { return &___args_6; }
	inline void set_args_6(uint8_t value)
	{
		___args_6 = value;
	}

	inline static int32_t get_offset_of_flow_7() { return static_cast<int32_t>(offsetof(OpCode_t2247480392, ___flow_7)); }
	inline uint8_t get_flow_7() const { return ___flow_7; }
	inline uint8_t* get_address_of_flow_7() { return &___flow_7; }
	inline void set_flow_7(uint8_t value)
	{
		___flow_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODE_T2247480392_H
#ifndef CANCELLATIONTOKEN_T1851405782_H
#define CANCELLATIONTOKEN_T1851405782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationToken
struct  CancellationToken_t1851405782 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t1795361321 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t1851405782, ___m_source_0)); }
	inline CancellationTokenSource_t1795361321 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t1795361321 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t1795361321 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}
};

struct CancellationToken_t1851405782_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t2491248677 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t1851405782_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t2491248677 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t2491248677 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t2491248677 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_ActionToActionObjShunt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t1851405782_marshaled_pinvoke
{
	CancellationTokenSource_t1795361321 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t1851405782_marshaled_com
{
	CancellationTokenSource_t1795361321 * ___m_source_0;
};
#endif // CANCELLATIONTOKEN_T1851405782_H
#ifndef DICTIONARYENTRY_T3048875398_H
#define DICTIONARYENTRY_T3048875398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryEntry
struct  DictionaryEntry_t3048875398 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3048875398, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3048875398, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3048875398_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3048875398_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
#endif // DICTIONARYENTRY_T3048875398_H
#ifndef NULLABLE_1_T334943763_H
#define NULLABLE_1_T334943763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t334943763 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t334943763, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t334943763, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T334943763_H
#ifndef DSAPARAMETERS_T1872138834_H
#define DSAPARAMETERS_T1872138834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSAParameters
struct  DSAParameters_t1872138834 
{
public:
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_t3397334013* ___P_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_t3397334013* ___Q_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_t3397334013* ___G_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_t3397334013* ___Y_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_t3397334013* ___J_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_t3397334013* ___X_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_t3397334013* ___Seed_6;
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(DSAParameters_t1872138834, ___P_0)); }
	inline ByteU5BU5D_t3397334013* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_t3397334013* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((&___P_0), value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(DSAParameters_t1872138834, ___Q_1)); }
	inline ByteU5BU5D_t3397334013* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_t3397334013* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((&___Q_1), value);
	}

	inline static int32_t get_offset_of_G_2() { return static_cast<int32_t>(offsetof(DSAParameters_t1872138834, ___G_2)); }
	inline ByteU5BU5D_t3397334013* get_G_2() const { return ___G_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_G_2() { return &___G_2; }
	inline void set_G_2(ByteU5BU5D_t3397334013* value)
	{
		___G_2 = value;
		Il2CppCodeGenWriteBarrier((&___G_2), value);
	}

	inline static int32_t get_offset_of_Y_3() { return static_cast<int32_t>(offsetof(DSAParameters_t1872138834, ___Y_3)); }
	inline ByteU5BU5D_t3397334013* get_Y_3() const { return ___Y_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_Y_3() { return &___Y_3; }
	inline void set_Y_3(ByteU5BU5D_t3397334013* value)
	{
		___Y_3 = value;
		Il2CppCodeGenWriteBarrier((&___Y_3), value);
	}

	inline static int32_t get_offset_of_J_4() { return static_cast<int32_t>(offsetof(DSAParameters_t1872138834, ___J_4)); }
	inline ByteU5BU5D_t3397334013* get_J_4() const { return ___J_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_J_4() { return &___J_4; }
	inline void set_J_4(ByteU5BU5D_t3397334013* value)
	{
		___J_4 = value;
		Il2CppCodeGenWriteBarrier((&___J_4), value);
	}

	inline static int32_t get_offset_of_X_5() { return static_cast<int32_t>(offsetof(DSAParameters_t1872138834, ___X_5)); }
	inline ByteU5BU5D_t3397334013* get_X_5() const { return ___X_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_X_5() { return &___X_5; }
	inline void set_X_5(ByteU5BU5D_t3397334013* value)
	{
		___X_5 = value;
		Il2CppCodeGenWriteBarrier((&___X_5), value);
	}

	inline static int32_t get_offset_of_Seed_6() { return static_cast<int32_t>(offsetof(DSAParameters_t1872138834, ___Seed_6)); }
	inline ByteU5BU5D_t3397334013* get_Seed_6() const { return ___Seed_6; }
	inline ByteU5BU5D_t3397334013** get_address_of_Seed_6() { return &___Seed_6; }
	inline void set_Seed_6(ByteU5BU5D_t3397334013* value)
	{
		___Seed_6 = value;
		Il2CppCodeGenWriteBarrier((&___Seed_6), value);
	}

	inline static int32_t get_offset_of_Counter_7() { return static_cast<int32_t>(offsetof(DSAParameters_t1872138834, ___Counter_7)); }
	inline int32_t get_Counter_7() const { return ___Counter_7; }
	inline int32_t* get_address_of_Counter_7() { return &___Counter_7; }
	inline void set_Counter_7(int32_t value)
	{
		___Counter_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t1872138834_marshaled_pinvoke
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___G_2;
	uint8_t* ___Y_3;
	uint8_t* ___J_4;
	uint8_t* ___X_5;
	uint8_t* ___Seed_6;
	int32_t ___Counter_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t1872138834_marshaled_com
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___G_2;
	uint8_t* ___Y_3;
	uint8_t* ___J_4;
	uint8_t* ___X_5;
	uint8_t* ___Seed_6;
	int32_t ___Counter_7;
};
#endif // DSAPARAMETERS_T1872138834_H
#ifndef RSAPARAMETERS_T1462703416_H
#define RSAPARAMETERS_T1462703416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAParameters
struct  RSAParameters_t1462703416 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_t3397334013* ___Exponent_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_t3397334013* ___Modulus_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_t3397334013* ___P_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_t3397334013* ___Q_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_t3397334013* ___DP_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_t3397334013* ___DQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_t3397334013* ___InverseQ_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_t3397334013* ___D_7;

public:
	inline static int32_t get_offset_of_Exponent_0() { return static_cast<int32_t>(offsetof(RSAParameters_t1462703416, ___Exponent_0)); }
	inline ByteU5BU5D_t3397334013* get_Exponent_0() const { return ___Exponent_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_Exponent_0() { return &___Exponent_0; }
	inline void set_Exponent_0(ByteU5BU5D_t3397334013* value)
	{
		___Exponent_0 = value;
		Il2CppCodeGenWriteBarrier((&___Exponent_0), value);
	}

	inline static int32_t get_offset_of_Modulus_1() { return static_cast<int32_t>(offsetof(RSAParameters_t1462703416, ___Modulus_1)); }
	inline ByteU5BU5D_t3397334013* get_Modulus_1() const { return ___Modulus_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_Modulus_1() { return &___Modulus_1; }
	inline void set_Modulus_1(ByteU5BU5D_t3397334013* value)
	{
		___Modulus_1 = value;
		Il2CppCodeGenWriteBarrier((&___Modulus_1), value);
	}

	inline static int32_t get_offset_of_P_2() { return static_cast<int32_t>(offsetof(RSAParameters_t1462703416, ___P_2)); }
	inline ByteU5BU5D_t3397334013* get_P_2() const { return ___P_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_P_2() { return &___P_2; }
	inline void set_P_2(ByteU5BU5D_t3397334013* value)
	{
		___P_2 = value;
		Il2CppCodeGenWriteBarrier((&___P_2), value);
	}

	inline static int32_t get_offset_of_Q_3() { return static_cast<int32_t>(offsetof(RSAParameters_t1462703416, ___Q_3)); }
	inline ByteU5BU5D_t3397334013* get_Q_3() const { return ___Q_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_Q_3() { return &___Q_3; }
	inline void set_Q_3(ByteU5BU5D_t3397334013* value)
	{
		___Q_3 = value;
		Il2CppCodeGenWriteBarrier((&___Q_3), value);
	}

	inline static int32_t get_offset_of_DP_4() { return static_cast<int32_t>(offsetof(RSAParameters_t1462703416, ___DP_4)); }
	inline ByteU5BU5D_t3397334013* get_DP_4() const { return ___DP_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_DP_4() { return &___DP_4; }
	inline void set_DP_4(ByteU5BU5D_t3397334013* value)
	{
		___DP_4 = value;
		Il2CppCodeGenWriteBarrier((&___DP_4), value);
	}

	inline static int32_t get_offset_of_DQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_t1462703416, ___DQ_5)); }
	inline ByteU5BU5D_t3397334013* get_DQ_5() const { return ___DQ_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_DQ_5() { return &___DQ_5; }
	inline void set_DQ_5(ByteU5BU5D_t3397334013* value)
	{
		___DQ_5 = value;
		Il2CppCodeGenWriteBarrier((&___DQ_5), value);
	}

	inline static int32_t get_offset_of_InverseQ_6() { return static_cast<int32_t>(offsetof(RSAParameters_t1462703416, ___InverseQ_6)); }
	inline ByteU5BU5D_t3397334013* get_InverseQ_6() const { return ___InverseQ_6; }
	inline ByteU5BU5D_t3397334013** get_address_of_InverseQ_6() { return &___InverseQ_6; }
	inline void set_InverseQ_6(ByteU5BU5D_t3397334013* value)
	{
		___InverseQ_6 = value;
		Il2CppCodeGenWriteBarrier((&___InverseQ_6), value);
	}

	inline static int32_t get_offset_of_D_7() { return static_cast<int32_t>(offsetof(RSAParameters_t1462703416, ___D_7)); }
	inline ByteU5BU5D_t3397334013* get_D_7() const { return ___D_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_D_7() { return &___D_7; }
	inline void set_D_7(ByteU5BU5D_t3397334013* value)
	{
		___D_7 = value;
		Il2CppCodeGenWriteBarrier((&___D_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t1462703416_marshaled_pinvoke
{
	uint8_t* ___Exponent_0;
	uint8_t* ___Modulus_1;
	uint8_t* ___P_2;
	uint8_t* ___Q_3;
	uint8_t* ___DP_4;
	uint8_t* ___DQ_5;
	uint8_t* ___InverseQ_6;
	uint8_t* ___D_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t1462703416_marshaled_com
{
	uint8_t* ___Exponent_0;
	uint8_t* ___Modulus_1;
	uint8_t* ___P_2;
	uint8_t* ___Q_3;
	uint8_t* ___DP_4;
	uint8_t* ___DQ_5;
	uint8_t* ___InverseQ_6;
	uint8_t* ___D_7;
};
#endif // RSAPARAMETERS_T1462703416_H
#ifndef DATETIME_T693205669_H
#define DATETIME_T693205669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t693205669 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_4;

public:
	inline static int32_t get_offset_of_dateData_4() { return static_cast<int32_t>(offsetof(DateTime_t693205669, ___dateData_4)); }
	inline uint64_t get_dateData_4() const { return ___dateData_4; }
	inline uint64_t* get_address_of_dateData_4() { return &___dateData_4; }
	inline void set_dateData_4(uint64_t value)
	{
		___dateData_4 = value;
	}
};

struct DateTime_t693205669_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t3030399641* ___DaysToMonth365_0;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t3030399641* ___DaysToMonth366_1;
	// System.DateTime System.DateTime::MinValue
	DateTime_t693205669  ___MinValue_2;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t693205669  ___MaxValue_3;

public:
	inline static int32_t get_offset_of_DaysToMonth365_0() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___DaysToMonth365_0)); }
	inline Int32U5BU5D_t3030399641* get_DaysToMonth365_0() const { return ___DaysToMonth365_0; }
	inline Int32U5BU5D_t3030399641** get_address_of_DaysToMonth365_0() { return &___DaysToMonth365_0; }
	inline void set_DaysToMonth365_0(Int32U5BU5D_t3030399641* value)
	{
		___DaysToMonth365_0 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_0), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_1() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___DaysToMonth366_1)); }
	inline Int32U5BU5D_t3030399641* get_DaysToMonth366_1() const { return ___DaysToMonth366_1; }
	inline Int32U5BU5D_t3030399641** get_address_of_DaysToMonth366_1() { return &___DaysToMonth366_1; }
	inline void set_DaysToMonth366_1(Int32U5BU5D_t3030399641* value)
	{
		___DaysToMonth366_1 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_1), value);
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___MinValue_2)); }
	inline DateTime_t693205669  get_MinValue_2() const { return ___MinValue_2; }
	inline DateTime_t693205669 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(DateTime_t693205669  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of_MaxValue_3() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___MaxValue_3)); }
	inline DateTime_t693205669  get_MaxValue_3() const { return ___MaxValue_3; }
	inline DateTime_t693205669 * get_address_of_MaxValue_3() { return &___MaxValue_3; }
	inline void set_MaxValue_3(DateTime_t693205669  value)
	{
		___MaxValue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T693205669_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_4;
	// System.Int16 System.Guid::_b
	int16_t ____b_5;
	// System.Int16 System.Guid::_c
	int16_t ____c_6;
	// System.Byte System.Guid::_d
	uint8_t ____d_7;
	// System.Byte System.Guid::_e
	uint8_t ____e_8;
	// System.Byte System.Guid::_f
	uint8_t ____f_9;
	// System.Byte System.Guid::_g
	uint8_t ____g_10;
	// System.Byte System.Guid::_h
	uint8_t ____h_11;
	// System.Byte System.Guid::_i
	uint8_t ____i_12;
	// System.Byte System.Guid::_j
	uint8_t ____j_13;
	// System.Byte System.Guid::_k
	uint8_t ____k_14;

public:
	inline static int32_t get_offset_of__a_4() { return static_cast<int32_t>(offsetof(Guid_t, ____a_4)); }
	inline int32_t get__a_4() const { return ____a_4; }
	inline int32_t* get_address_of__a_4() { return &____a_4; }
	inline void set__a_4(int32_t value)
	{
		____a_4 = value;
	}

	inline static int32_t get_offset_of__b_5() { return static_cast<int32_t>(offsetof(Guid_t, ____b_5)); }
	inline int16_t get__b_5() const { return ____b_5; }
	inline int16_t* get_address_of__b_5() { return &____b_5; }
	inline void set__b_5(int16_t value)
	{
		____b_5 = value;
	}

	inline static int32_t get_offset_of__c_6() { return static_cast<int32_t>(offsetof(Guid_t, ____c_6)); }
	inline int16_t get__c_6() const { return ____c_6; }
	inline int16_t* get_address_of__c_6() { return &____c_6; }
	inline void set__c_6(int16_t value)
	{
		____c_6 = value;
	}

	inline static int32_t get_offset_of__d_7() { return static_cast<int32_t>(offsetof(Guid_t, ____d_7)); }
	inline uint8_t get__d_7() const { return ____d_7; }
	inline uint8_t* get_address_of__d_7() { return &____d_7; }
	inline void set__d_7(uint8_t value)
	{
		____d_7 = value;
	}

	inline static int32_t get_offset_of__e_8() { return static_cast<int32_t>(offsetof(Guid_t, ____e_8)); }
	inline uint8_t get__e_8() const { return ____e_8; }
	inline uint8_t* get_address_of__e_8() { return &____e_8; }
	inline void set__e_8(uint8_t value)
	{
		____e_8 = value;
	}

	inline static int32_t get_offset_of__f_9() { return static_cast<int32_t>(offsetof(Guid_t, ____f_9)); }
	inline uint8_t get__f_9() const { return ____f_9; }
	inline uint8_t* get_address_of__f_9() { return &____f_9; }
	inline void set__f_9(uint8_t value)
	{
		____f_9 = value;
	}

	inline static int32_t get_offset_of__g_10() { return static_cast<int32_t>(offsetof(Guid_t, ____g_10)); }
	inline uint8_t get__g_10() const { return ____g_10; }
	inline uint8_t* get_address_of__g_10() { return &____g_10; }
	inline void set__g_10(uint8_t value)
	{
		____g_10 = value;
	}

	inline static int32_t get_offset_of__h_11() { return static_cast<int32_t>(offsetof(Guid_t, ____h_11)); }
	inline uint8_t get__h_11() const { return ____h_11; }
	inline uint8_t* get_address_of__h_11() { return &____h_11; }
	inline void set__h_11(uint8_t value)
	{
		____h_11 = value;
	}

	inline static int32_t get_offset_of__i_12() { return static_cast<int32_t>(offsetof(Guid_t, ____i_12)); }
	inline uint8_t get__i_12() const { return ____i_12; }
	inline uint8_t* get_address_of__i_12() { return &____i_12; }
	inline void set__i_12(uint8_t value)
	{
		____i_12 = value;
	}

	inline static int32_t get_offset_of__j_13() { return static_cast<int32_t>(offsetof(Guid_t, ____j_13)); }
	inline uint8_t get__j_13() const { return ____j_13; }
	inline uint8_t* get_address_of__j_13() { return &____j_13; }
	inline void set__j_13(uint8_t value)
	{
		____j_13 = value;
	}

	inline static int32_t get_offset_of__k_14() { return static_cast<int32_t>(offsetof(Guid_t, ____k_14)); }
	inline uint8_t get__k_14() const { return ____k_14; }
	inline uint8_t* get_address_of__k_14() { return &____k_14; }
	inline void set__k_14(uint8_t value)
	{
		____k_14 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2510243513 * ____rng_1;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2510243513 * ____fastRng_2;
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_3;

public:
	inline static int32_t get_offset_of__rngAccess_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_0)); }
	inline RuntimeObject * get__rngAccess_0() const { return ____rngAccess_0; }
	inline RuntimeObject ** get_address_of__rngAccess_0() { return &____rngAccess_0; }
	inline void set__rngAccess_0(RuntimeObject * value)
	{
		____rngAccess_0 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_0), value);
	}

	inline static int32_t get_offset_of__rng_1() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_1)); }
	inline RandomNumberGenerator_t2510243513 * get__rng_1() const { return ____rng_1; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of__rng_1() { return &____rng_1; }
	inline void set__rng_1(RandomNumberGenerator_t2510243513 * value)
	{
		____rng_1 = value;
		Il2CppCodeGenWriteBarrier((&____rng_1), value);
	}

	inline static int32_t get_offset_of__fastRng_2() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_2)); }
	inline RandomNumberGenerator_t2510243513 * get__fastRng_2() const { return ____fastRng_2; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of__fastRng_2() { return &____fastRng_2; }
	inline void set__fastRng_2(RandomNumberGenerator_t2510243513 * value)
	{
		____fastRng_2 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_2), value);
	}

	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_3)); }
	inline Guid_t  get_Empty_3() const { return ___Empty_3; }
	inline Guid_t * get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(Guid_t  value)
	{
		___Empty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef DECIMAL_T724701077_H
#define DECIMAL_T724701077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t724701077 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t724701077, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t724701077, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t724701077, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t724701077, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t724701077_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t59386216* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t724701077  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t724701077  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t724701077  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t724701077  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t724701077  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t724701077  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t724701077  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t59386216* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t59386216** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t59386216* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___Zero_7)); }
	inline Decimal_t724701077  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t724701077 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t724701077  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___One_8)); }
	inline Decimal_t724701077  get_One_8() const { return ___One_8; }
	inline Decimal_t724701077 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t724701077  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___MinusOne_9)); }
	inline Decimal_t724701077  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t724701077 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t724701077  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___MaxValue_10)); }
	inline Decimal_t724701077  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t724701077 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t724701077  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___MinValue_11)); }
	inline Decimal_t724701077  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t724701077 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t724701077  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t724701077  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t724701077 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t724701077  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t724701077  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t724701077 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t724701077  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T724701077_H
#ifndef LINEINFO_T1429635508_H
#define LINEINFO_T1429635508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.LineInfo
struct  LineInfo_t1429635508 
{
public:
	// System.Int32 System.Xml.LineInfo::lineNo
	int32_t ___lineNo_0;
	// System.Int32 System.Xml.LineInfo::linePos
	int32_t ___linePos_1;

public:
	inline static int32_t get_offset_of_lineNo_0() { return static_cast<int32_t>(offsetof(LineInfo_t1429635508, ___lineNo_0)); }
	inline int32_t get_lineNo_0() const { return ___lineNo_0; }
	inline int32_t* get_address_of_lineNo_0() { return &___lineNo_0; }
	inline void set_lineNo_0(int32_t value)
	{
		___lineNo_0 = value;
	}

	inline static int32_t get_offset_of_linePos_1() { return static_cast<int32_t>(offsetof(LineInfo_t1429635508, ___linePos_1)); }
	inline int32_t get_linePos_1() const { return ___linePos_1; }
	inline int32_t* get_address_of_linePos_1() { return &___linePos_1; }
	inline void set_linePos_1(int32_t value)
	{
		___linePos_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINEINFO_T1429635508_H
#ifndef PROPERTYNAME_T217228410_H
#define PROPERTYNAME_T217228410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyName
struct  PropertyName_t217228410 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t217228410, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAME_T217228410_H
#ifndef ARRAYSEGMENT_1_T2594217482_H
#define ARRAYSEGMENT_1_T2594217482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArraySegment`1<System.Byte>
struct  ArraySegment_1_t2594217482 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_t3397334013* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t2594217482, ____array_0)); }
	inline ByteU5BU5D_t3397334013* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_t3397334013* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t2594217482, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t2594217482, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYSEGMENT_1_T2594217482_H
#ifndef LABEL_T4243202660_H
#define LABEL_T4243202660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.Label
struct  Label_t4243202660 
{
public:
	// System.Int32 System.Reflection.Emit.Label::label
	int32_t ___label_0;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(Label_t4243202660, ___label_0)); }
	inline int32_t get_label_0() const { return ___label_0; }
	inline int32_t* get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(int32_t value)
	{
		___label_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABEL_T4243202660_H
#ifndef CONSOLEMODIFIERS_T118142373_H
#define CONSOLEMODIFIERS_T118142373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleModifiers
struct  ConsoleModifiers_t118142373 
{
public:
	// System.Int32 System.ConsoleModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleModifiers_t118142373, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLEMODIFIERS_T118142373_H
#ifndef CONSOLEKEY_T1768883954_H
#define CONSOLEKEY_T1768883954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleKey
struct  ConsoleKey_t1768883954 
{
public:
	// System.Int32 System.ConsoleKey::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleKey_t1768883954, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLEKEY_T1768883954_H
#ifndef STREAMINGCONTEXTSTATES_T4264247603_H
#define STREAMINGCONTEXTSTATES_T4264247603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t4264247603 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t4264247603, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_T4264247603_H
#ifndef KEYVALUEPAIR_2_T2194750590_H
#define KEYVALUEPAIR_2_T2194750590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.UInt32,ConsoleManager/InteractionSourceData>
struct  KeyValuePair_2_t2194750590 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	InteractionSourceData_t4105625862  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2194750590, ___key_0)); }
	inline uint32_t get_key_0() const { return ___key_0; }
	inline uint32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2194750590, ___value_1)); }
	inline InteractionSourceData_t4105625862  get_value_1() const { return ___value_1; }
	inline InteractionSourceData_t4105625862 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(InteractionSourceData_t4105625862  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2194750590_H
#ifndef KEYVALUEPAIR_2_T888819835_H
#define KEYVALUEPAIR_2_T888819835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct  KeyValuePair_2_t888819835 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	intptr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t888819835, ___key_0)); }
	inline intptr_t get_key_0() const { return ___key_0; }
	inline intptr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(intptr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t888819835, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T888819835_H
#ifndef SCRIPTABLERENDERCONTEXT_T4271526_H
#define SCRIPTABLERENDERCONTEXT_T4271526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_t4271526 
{
public:
	// System.IntPtr UnityEngine.Experimental.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_t4271526, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTABLERENDERCONTEXT_T4271526_H
#ifndef UICHARINFO_T3056636800_H
#define UICHARINFO_T3056636800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UICharInfo
struct  UICharInfo_t3056636800 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_t2243707579  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_t3056636800, ___cursorPos_0)); }
	inline Vector2_t2243707579  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_t2243707579 * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_t2243707579  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_t3056636800, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UICHARINFO_T3056636800_H
#ifndef PLAYABLEHANDLE_T213697122_H
#define PLAYABLEHANDLE_T213697122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t213697122 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t213697122, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t213697122, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T213697122_H
#ifndef PLAYABLEGRAPH_T1041204988_H
#define PLAYABLEGRAPH_T1041204988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t1041204988 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableGraph::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t1041204988, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t1041204988, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_T1041204988_H
#ifndef OPERATIONALSTATUS_T2833345236_H
#define OPERATIONALSTATUS_T2833345236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.OperationalStatus
struct  OperationalStatus_t2833345236 
{
public:
	// System.Int32 System.Net.NetworkInformation.OperationalStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OperationalStatus_t2833345236, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATIONALSTATUS_T2833345236_H
#ifndef SWITCHVALUESTATE_T1956731294_H
#define SWITCHVALUESTATE_T1956731294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContext/SwitchValueState
struct  SwitchValueState_t1956731294 
{
public:
	// System.Int32 System.AppContext/SwitchValueState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SwitchValueState_t1956731294, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCHVALUESTATE_T1956731294_H
#ifndef MODE_T1081683921_H
#define MODE_T1081683921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1081683921 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t1081683921, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1081683921_H
#ifndef XRNODE_T2038335044_H
#define XRNODE_T2038335044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.XRNode
struct  XRNode_t2038335044 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRNode_t2038335044, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRNODE_T2038335044_H
#ifndef TOUCHPHASE_T2458120420_H
#define TOUCHPHASE_T2458120420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t2458120420 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_t2458120420, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPHASE_T2458120420_H
#ifndef NETWORKINTERFACETYPE_T4226883065_H
#define NETWORKINTERFACETYPE_T4226883065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceType
struct  NetworkInterfaceType_t4226883065 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkInterfaceType_t4226883065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINTERFACETYPE_T4226883065_H
#ifndef TOUCHTYPE_T2732027771_H
#define TOUCHTYPE_T2732027771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2732027771 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2732027771, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHTYPE_T2732027771_H
#ifndef KEYVALUEPAIR_2_T3800763530_H
#define KEYVALUEPAIR_2_T3800763530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Resources.ResourceLocator>
struct  KeyValuePair_2_t3800763530 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ResourceLocator_t2156390884  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3800763530, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3800763530, ___value_1)); }
	inline ResourceLocator_t2156390884  get_value_1() const { return ___value_1; }
	inline ResourceLocator_t2156390884 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ResourceLocator_t2156390884  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3800763530_H
#ifndef KEYVALUEPAIR_2_T3110600289_H
#define KEYVALUEPAIR_2_T3110600289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<ControllerMapping/Button,System.Object>
struct  KeyValuePair_2_t3110600289 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Button_t1215063635  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3110600289, ___key_0)); }
	inline Button_t1215063635  get_key_0() const { return ___key_0; }
	inline Button_t1215063635 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Button_t1215063635  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3110600289, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3110600289_H
#ifndef COLORBLOCK_T2652774230_H
#define COLORBLOCK_T2652774230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2652774230 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2020392075  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2020392075  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2020392075  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2020392075  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2652774230, ___m_NormalColor_0)); }
	inline Color_t2020392075  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2020392075 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2020392075  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2652774230, ___m_HighlightedColor_1)); }
	inline Color_t2020392075  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2020392075 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2020392075  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2652774230, ___m_PressedColor_2)); }
	inline Color_t2020392075  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2020392075 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2020392075  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2652774230, ___m_DisabledColor_3)); }
	inline Color_t2020392075  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2020392075 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2020392075  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2652774230, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2652774230, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2652774230_H
#ifndef KEYVALUEPAIR_2_T1483742713_H
#define KEYVALUEPAIR_2_T1483742713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>
struct  KeyValuePair_2_t1483742713 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	XPathNodeRef_t2092605142  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	XPathNodeRef_t2092605142  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1483742713, ___key_0)); }
	inline XPathNodeRef_t2092605142  get_key_0() const { return ___key_0; }
	inline XPathNodeRef_t2092605142 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(XPathNodeRef_t2092605142  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1483742713, ___value_1)); }
	inline XPathNodeRef_t2092605142  get_value_1() const { return ___value_1; }
	inline XPathNodeRef_t2092605142 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(XPathNodeRef_t2092605142  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1483742713_H
#ifndef KEYVALUEPAIR_2_T561972209_H
#define KEYVALUEPAIR_2_T561972209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<ControllerMapping/Stick,System.Object>
struct  KeyValuePair_2_t561972209 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Stick_t1862091779  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t561972209, ___key_0)); }
	inline Stick_t1862091779  get_key_0() const { return ___key_0; }
	inline Stick_t1862091779 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Stick_t1862091779  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t561972209, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T561972209_H
#ifndef RUNTIMEFIELDHANDLE_T2331729674_H
#define RUNTIMEFIELDHANDLE_T2331729674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t2331729674 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t2331729674, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T2331729674_H
#ifndef DATETIMEOFFSET_T1362988906_H
#define DATETIMEOFFSET_T1362988906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t1362988906 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t693205669  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1362988906, ___m_dateTime_2)); }
	inline DateTime_t693205669  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t693205669 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t693205669  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1362988906, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t1362988906_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t1362988906  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t1362988906  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1362988906_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t1362988906  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t1362988906 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t1362988906  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1362988906_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t1362988906  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t1362988906 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t1362988906  value)
	{
		___MaxValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T1362988906_H
#ifndef TIMESPAN_T3430258949_H
#define TIMESPAN_T3430258949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t3430258949 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t3430258949_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t3430258949  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t3430258949  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t3430258949  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___Zero_0)); }
	inline TimeSpan_t3430258949  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t3430258949 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t3430258949  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t3430258949  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t3430258949 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t3430258949  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t3430258949  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t3430258949 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t3430258949  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T3430258949_H
#ifndef RAYCASTRESULT_T21186376_H
#define RAYCASTRESULT_T21186376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t21186376 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1756533147 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t2336171397 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t2243707580  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t2243707580  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2243707579  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___m_GameObject_0)); }
	inline GameObject_t1756533147 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1756533147 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1756533147 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___module_1)); }
	inline BaseRaycaster_t2336171397 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t2336171397 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t2336171397 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___worldPosition_7)); }
	inline Vector3_t2243707580  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t2243707580 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t2243707580  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___worldNormal_8)); }
	inline Vector3_t2243707580  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t2243707580 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t2243707580  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t21186376, ___screenPosition_9)); }
	inline Vector2_t2243707579  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2243707579 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2243707579  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t21186376_marshaled_pinvoke
{
	GameObject_t1756533147 * ___m_GameObject_0;
	BaseRaycaster_t2336171397 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t2243707580  ___worldPosition_7;
	Vector3_t2243707580  ___worldNormal_8;
	Vector2_t2243707579  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t21186376_marshaled_com
{
	GameObject_t1756533147 * ___m_GameObject_0;
	BaseRaycaster_t2336171397 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t2243707580  ___worldPosition_7;
	Vector3_t2243707580  ___worldNormal_8;
	Vector2_t2243707579  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T21186376_H
#ifndef RUNTIMETYPEHANDLE_T2330101084_H
#define RUNTIMETYPEHANDLE_T2330101084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t2330101084 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t2330101084, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T2330101084_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T94157543_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T94157543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t94157543 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t1498197914  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t94157543, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t1498197914  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t1498197914 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t1498197914  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t94157543, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t94157543_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t1498197914_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t94157543_marshaled_com
{
	CustomAttributeTypedArgument_t1498197914_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T94157543_H
#ifndef RUNTIMEMETHODHANDLE_T894824333_H
#define RUNTIMEMETHODHANDLE_T894824333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
struct  RuntimeMethodHandle_t894824333 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t894824333, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEMETHODHANDLE_T894824333_H
#ifndef UIVERTEX_T1204258818_H
#define UIVERTEX_T1204258818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIVertex
struct  UIVertex_t1204258818 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t2243707580  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t2243707580  ___normal_1;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t874517518  ___color_2;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_t2243707579  ___uv0_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_t2243707579  ___uv1_4;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv2
	Vector2_t2243707579  ___uv2_5;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv3
	Vector2_t2243707579  ___uv3_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t2243707581  ___tangent_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_t1204258818, ___position_0)); }
	inline Vector3_t2243707580  get_position_0() const { return ___position_0; }
	inline Vector3_t2243707580 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t2243707580  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_t1204258818, ___normal_1)); }
	inline Vector3_t2243707580  get_normal_1() const { return ___normal_1; }
	inline Vector3_t2243707580 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t2243707580  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(UIVertex_t1204258818, ___color_2)); }
	inline Color32_t874517518  get_color_2() const { return ___color_2; }
	inline Color32_t874517518 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color32_t874517518  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_uv0_3() { return static_cast<int32_t>(offsetof(UIVertex_t1204258818, ___uv0_3)); }
	inline Vector2_t2243707579  get_uv0_3() const { return ___uv0_3; }
	inline Vector2_t2243707579 * get_address_of_uv0_3() { return &___uv0_3; }
	inline void set_uv0_3(Vector2_t2243707579  value)
	{
		___uv0_3 = value;
	}

	inline static int32_t get_offset_of_uv1_4() { return static_cast<int32_t>(offsetof(UIVertex_t1204258818, ___uv1_4)); }
	inline Vector2_t2243707579  get_uv1_4() const { return ___uv1_4; }
	inline Vector2_t2243707579 * get_address_of_uv1_4() { return &___uv1_4; }
	inline void set_uv1_4(Vector2_t2243707579  value)
	{
		___uv1_4 = value;
	}

	inline static int32_t get_offset_of_uv2_5() { return static_cast<int32_t>(offsetof(UIVertex_t1204258818, ___uv2_5)); }
	inline Vector2_t2243707579  get_uv2_5() const { return ___uv2_5; }
	inline Vector2_t2243707579 * get_address_of_uv2_5() { return &___uv2_5; }
	inline void set_uv2_5(Vector2_t2243707579  value)
	{
		___uv2_5 = value;
	}

	inline static int32_t get_offset_of_uv3_6() { return static_cast<int32_t>(offsetof(UIVertex_t1204258818, ___uv3_6)); }
	inline Vector2_t2243707579  get_uv3_6() const { return ___uv3_6; }
	inline Vector2_t2243707579 * get_address_of_uv3_6() { return &___uv3_6; }
	inline void set_uv3_6(Vector2_t2243707579  value)
	{
		___uv3_6 = value;
	}

	inline static int32_t get_offset_of_tangent_7() { return static_cast<int32_t>(offsetof(UIVertex_t1204258818, ___tangent_7)); }
	inline Vector4_t2243707581  get_tangent_7() const { return ___tangent_7; }
	inline Vector4_t2243707581 * get_address_of_tangent_7() { return &___tangent_7; }
	inline void set_tangent_7(Vector4_t2243707581  value)
	{
		___tangent_7 = value;
	}
};

struct UIVertex_t1204258818_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t874517518  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t2243707581  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t1204258818  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_t1204258818_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_t874517518  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_t874517518 * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_t874517518  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_t1204258818_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t2243707581  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t2243707581 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t2243707581  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_t1204258818_StaticFields, ___simpleVert_10)); }
	inline UIVertex_t1204258818  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_t1204258818 * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_t1204258818  value)
	{
		___simpleVert_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIVERTEX_T1204258818_H
#ifndef KEYVALUEPAIR_2_T4275477795_H
#define KEYVALUEPAIR_2_T4275477795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>
struct  KeyValuePair_2_t4275477795 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4275477795, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4275477795, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4275477795_H
#ifndef STREAMINGCONTEXT_T1417235061_H
#define STREAMINGCONTEXT_T1417235061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t1417235061 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t1417235061, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_additionalContext_0), value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t1417235061, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t1417235061_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t1417235061_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
#endif // STREAMINGCONTEXT_T1417235061_H
#ifndef TYPEDREFERENCE_T1025199857_H
#define TYPEDREFERENCE_T1025199857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypedReference
struct  TypedReference_t1025199857 
{
public:
	// System.RuntimeTypeHandle System.TypedReference::type
	RuntimeTypeHandle_t2330101084  ___type_0;
	// System.IntPtr System.TypedReference::Value
	intptr_t ___Value_1;
	// System.IntPtr System.TypedReference::Type
	intptr_t ___Type_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TypedReference_t1025199857, ___type_0)); }
	inline RuntimeTypeHandle_t2330101084  get_type_0() const { return ___type_0; }
	inline RuntimeTypeHandle_t2330101084 * get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(RuntimeTypeHandle_t2330101084  value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(TypedReference_t1025199857, ___Value_1)); }
	inline intptr_t get_Value_1() const { return ___Value_1; }
	inline intptr_t* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(intptr_t value)
	{
		___Value_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(TypedReference_t1025199857, ___Type_2)); }
	inline intptr_t get_Type_2() const { return ___Type_2; }
	inline intptr_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(intptr_t value)
	{
		___Type_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDREFERENCE_T1025199857_H
#ifndef WIN32_IP_ADAPTER_ADDRESSES_T680756680_H
#define WIN32_IP_ADAPTER_ADDRESSES_T680756680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct  Win32_IP_ADAPTER_ADDRESSES_t680756680 
{
public:
	// System.Net.NetworkInformation.AlignmentUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Alignment
	AlignmentUnion_t707470070  ___Alignment_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Next
	intptr_t ___Next_1;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::AdapterName
	String_t* ___AdapterName_2;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstUnicastAddress
	intptr_t ___FirstUnicastAddress_3;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstAnycastAddress
	intptr_t ___FirstAnycastAddress_4;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstMulticastAddress
	intptr_t ___FirstMulticastAddress_5;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstDnsServerAddress
	intptr_t ___FirstDnsServerAddress_6;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::DnsSuffix
	String_t* ___DnsSuffix_7;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Description
	String_t* ___Description_8;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FriendlyName
	String_t* ___FriendlyName_9;
	// System.Byte[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddress
	ByteU5BU5D_t3397334013* ___PhysicalAddress_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddressLength
	uint32_t ___PhysicalAddressLength_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Flags
	uint32_t ___Flags_12;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Mtu
	uint32_t ___Mtu_13;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::IfType
	int32_t ___IfType_14;
	// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::OperStatus
	int32_t ___OperStatus_15;
	// System.Int32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Ipv6IfIndex
	int32_t ___Ipv6IfIndex_16;
	// System.UInt32[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::ZoneIndices
	UInt32U5BU5D_t59386216* ___ZoneIndices_17;

public:
	inline static int32_t get_offset_of_Alignment_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___Alignment_0)); }
	inline AlignmentUnion_t707470070  get_Alignment_0() const { return ___Alignment_0; }
	inline AlignmentUnion_t707470070 * get_address_of_Alignment_0() { return &___Alignment_0; }
	inline void set_Alignment_0(AlignmentUnion_t707470070  value)
	{
		___Alignment_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___Next_1)); }
	inline intptr_t get_Next_1() const { return ___Next_1; }
	inline intptr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(intptr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_AdapterName_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___AdapterName_2)); }
	inline String_t* get_AdapterName_2() const { return ___AdapterName_2; }
	inline String_t** get_address_of_AdapterName_2() { return &___AdapterName_2; }
	inline void set_AdapterName_2(String_t* value)
	{
		___AdapterName_2 = value;
		Il2CppCodeGenWriteBarrier((&___AdapterName_2), value);
	}

	inline static int32_t get_offset_of_FirstUnicastAddress_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___FirstUnicastAddress_3)); }
	inline intptr_t get_FirstUnicastAddress_3() const { return ___FirstUnicastAddress_3; }
	inline intptr_t* get_address_of_FirstUnicastAddress_3() { return &___FirstUnicastAddress_3; }
	inline void set_FirstUnicastAddress_3(intptr_t value)
	{
		___FirstUnicastAddress_3 = value;
	}

	inline static int32_t get_offset_of_FirstAnycastAddress_4() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___FirstAnycastAddress_4)); }
	inline intptr_t get_FirstAnycastAddress_4() const { return ___FirstAnycastAddress_4; }
	inline intptr_t* get_address_of_FirstAnycastAddress_4() { return &___FirstAnycastAddress_4; }
	inline void set_FirstAnycastAddress_4(intptr_t value)
	{
		___FirstAnycastAddress_4 = value;
	}

	inline static int32_t get_offset_of_FirstMulticastAddress_5() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___FirstMulticastAddress_5)); }
	inline intptr_t get_FirstMulticastAddress_5() const { return ___FirstMulticastAddress_5; }
	inline intptr_t* get_address_of_FirstMulticastAddress_5() { return &___FirstMulticastAddress_5; }
	inline void set_FirstMulticastAddress_5(intptr_t value)
	{
		___FirstMulticastAddress_5 = value;
	}

	inline static int32_t get_offset_of_FirstDnsServerAddress_6() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___FirstDnsServerAddress_6)); }
	inline intptr_t get_FirstDnsServerAddress_6() const { return ___FirstDnsServerAddress_6; }
	inline intptr_t* get_address_of_FirstDnsServerAddress_6() { return &___FirstDnsServerAddress_6; }
	inline void set_FirstDnsServerAddress_6(intptr_t value)
	{
		___FirstDnsServerAddress_6 = value;
	}

	inline static int32_t get_offset_of_DnsSuffix_7() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___DnsSuffix_7)); }
	inline String_t* get_DnsSuffix_7() const { return ___DnsSuffix_7; }
	inline String_t** get_address_of_DnsSuffix_7() { return &___DnsSuffix_7; }
	inline void set_DnsSuffix_7(String_t* value)
	{
		___DnsSuffix_7 = value;
		Il2CppCodeGenWriteBarrier((&___DnsSuffix_7), value);
	}

	inline static int32_t get_offset_of_Description_8() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___Description_8)); }
	inline String_t* get_Description_8() const { return ___Description_8; }
	inline String_t** get_address_of_Description_8() { return &___Description_8; }
	inline void set_Description_8(String_t* value)
	{
		___Description_8 = value;
		Il2CppCodeGenWriteBarrier((&___Description_8), value);
	}

	inline static int32_t get_offset_of_FriendlyName_9() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___FriendlyName_9)); }
	inline String_t* get_FriendlyName_9() const { return ___FriendlyName_9; }
	inline String_t** get_address_of_FriendlyName_9() { return &___FriendlyName_9; }
	inline void set_FriendlyName_9(String_t* value)
	{
		___FriendlyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___FriendlyName_9), value);
	}

	inline static int32_t get_offset_of_PhysicalAddress_10() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___PhysicalAddress_10)); }
	inline ByteU5BU5D_t3397334013* get_PhysicalAddress_10() const { return ___PhysicalAddress_10; }
	inline ByteU5BU5D_t3397334013** get_address_of_PhysicalAddress_10() { return &___PhysicalAddress_10; }
	inline void set_PhysicalAddress_10(ByteU5BU5D_t3397334013* value)
	{
		___PhysicalAddress_10 = value;
		Il2CppCodeGenWriteBarrier((&___PhysicalAddress_10), value);
	}

	inline static int32_t get_offset_of_PhysicalAddressLength_11() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___PhysicalAddressLength_11)); }
	inline uint32_t get_PhysicalAddressLength_11() const { return ___PhysicalAddressLength_11; }
	inline uint32_t* get_address_of_PhysicalAddressLength_11() { return &___PhysicalAddressLength_11; }
	inline void set_PhysicalAddressLength_11(uint32_t value)
	{
		___PhysicalAddressLength_11 = value;
	}

	inline static int32_t get_offset_of_Flags_12() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___Flags_12)); }
	inline uint32_t get_Flags_12() const { return ___Flags_12; }
	inline uint32_t* get_address_of_Flags_12() { return &___Flags_12; }
	inline void set_Flags_12(uint32_t value)
	{
		___Flags_12 = value;
	}

	inline static int32_t get_offset_of_Mtu_13() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___Mtu_13)); }
	inline uint32_t get_Mtu_13() const { return ___Mtu_13; }
	inline uint32_t* get_address_of_Mtu_13() { return &___Mtu_13; }
	inline void set_Mtu_13(uint32_t value)
	{
		___Mtu_13 = value;
	}

	inline static int32_t get_offset_of_IfType_14() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___IfType_14)); }
	inline int32_t get_IfType_14() const { return ___IfType_14; }
	inline int32_t* get_address_of_IfType_14() { return &___IfType_14; }
	inline void set_IfType_14(int32_t value)
	{
		___IfType_14 = value;
	}

	inline static int32_t get_offset_of_OperStatus_15() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___OperStatus_15)); }
	inline int32_t get_OperStatus_15() const { return ___OperStatus_15; }
	inline int32_t* get_address_of_OperStatus_15() { return &___OperStatus_15; }
	inline void set_OperStatus_15(int32_t value)
	{
		___OperStatus_15 = value;
	}

	inline static int32_t get_offset_of_Ipv6IfIndex_16() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___Ipv6IfIndex_16)); }
	inline int32_t get_Ipv6IfIndex_16() const { return ___Ipv6IfIndex_16; }
	inline int32_t* get_address_of_Ipv6IfIndex_16() { return &___Ipv6IfIndex_16; }
	inline void set_Ipv6IfIndex_16(int32_t value)
	{
		___Ipv6IfIndex_16 = value;
	}

	inline static int32_t get_offset_of_ZoneIndices_17() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___ZoneIndices_17)); }
	inline UInt32U5BU5D_t59386216* get_ZoneIndices_17() const { return ___ZoneIndices_17; }
	inline UInt32U5BU5D_t59386216** get_address_of_ZoneIndices_17() { return &___ZoneIndices_17; }
	inline void set_ZoneIndices_17(UInt32U5BU5D_t59386216* value)
	{
		___ZoneIndices_17 = value;
		Il2CppCodeGenWriteBarrier((&___ZoneIndices_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t680756680_marshaled_pinvoke
{
	AlignmentUnion_t707470070  ___Alignment_0;
	intptr_t ___Next_1;
	char* ___AdapterName_2;
	intptr_t ___FirstUnicastAddress_3;
	intptr_t ___FirstAnycastAddress_4;
	intptr_t ___FirstMulticastAddress_5;
	intptr_t ___FirstDnsServerAddress_6;
	Il2CppChar* ___DnsSuffix_7;
	Il2CppChar* ___Description_8;
	Il2CppChar* ___FriendlyName_9;
	uint8_t ___PhysicalAddress_10[8];
	uint32_t ___PhysicalAddressLength_11;
	uint32_t ___Flags_12;
	uint32_t ___Mtu_13;
	int32_t ___IfType_14;
	int32_t ___OperStatus_15;
	int32_t ___Ipv6IfIndex_16;
	uint32_t ___ZoneIndices_17[64];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t680756680_marshaled_com
{
	AlignmentUnion_t707470070  ___Alignment_0;
	intptr_t ___Next_1;
	char* ___AdapterName_2;
	intptr_t ___FirstUnicastAddress_3;
	intptr_t ___FirstAnycastAddress_4;
	intptr_t ___FirstMulticastAddress_5;
	intptr_t ___FirstDnsServerAddress_6;
	Il2CppChar* ___DnsSuffix_7;
	Il2CppChar* ___Description_8;
	Il2CppChar* ___FriendlyName_9;
	uint8_t ___PhysicalAddress_10[8];
	uint32_t ___PhysicalAddressLength_11;
	uint32_t ___Flags_12;
	uint32_t ___Mtu_13;
	int32_t ___IfType_14;
	int32_t ___OperStatus_15;
	int32_t ___Ipv6IfIndex_16;
	uint32_t ___ZoneIndices_17[64];
};
#endif // WIN32_IP_ADAPTER_ADDRESSES_T680756680_H
#ifndef KEYVALUEPAIR_2_T3682707690_H
#define KEYVALUEPAIR_2_T3682707690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.XR.XRNode>
struct  KeyValuePair_2_t3682707690 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3682707690, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3682707690, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3682707690_H
#ifndef NAVIGATION_T1571958496_H
#define NAVIGATION_T1571958496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t1571958496 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t1490392188 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t1490392188 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t1490392188 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t1490392188 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1571958496, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t1571958496, ___m_SelectOnUp_1)); }
	inline Selectable_t1490392188 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t1490392188 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t1490392188 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t1571958496, ___m_SelectOnDown_2)); }
	inline Selectable_t1490392188 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t1490392188 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t1490392188 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t1571958496, ___m_SelectOnLeft_3)); }
	inline Selectable_t1490392188 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t1490392188 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t1490392188 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t1571958496, ___m_SelectOnRight_4)); }
	inline Selectable_t1490392188 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t1490392188 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t1490392188 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1571958496_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t1490392188 * ___m_SelectOnUp_1;
	Selectable_t1490392188 * ___m_SelectOnDown_2;
	Selectable_t1490392188 * ___m_SelectOnLeft_3;
	Selectable_t1490392188 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1571958496_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t1490392188 * ___m_SelectOnUp_1;
	Selectable_t1490392188 * ___m_SelectOnDown_2;
	Selectable_t1490392188 * ___m_SelectOnLeft_3;
	Selectable_t1490392188 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T1571958496_H
#ifndef KEYVALUEPAIR_2_T3111768972_H
#define KEYVALUEPAIR_2_T3111768972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.XRNode,System.Object>
struct  KeyValuePair_2_t3111768972 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3111768972, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3111768972, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3111768972_H
#ifndef PLAYABLE_T1896841784_H
#define PLAYABLE_T1896841784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t1896841784 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t213697122  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t1896841784, ___m_Handle_0)); }
	inline PlayableHandle_t213697122  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t213697122 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t213697122  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t1896841784_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t1896841784  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t1896841784_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t1896841784  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t1896841784 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t1896841784  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T1896841784_H
#ifndef KEYVALUEPAIR_2_T3601103940_H
#define KEYVALUEPAIR_2_T3601103940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.AppContext/SwitchValueState>
struct  KeyValuePair_2_t3601103940 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3601103940, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3601103940, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3601103940_H
#ifndef CONSOLEKEYINFO_T3124575640_H
#define CONSOLEKEYINFO_T3124575640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleKeyInfo
struct  ConsoleKeyInfo_t3124575640 
{
public:
	// System.Char System.ConsoleKeyInfo::_keyChar
	Il2CppChar ____keyChar_0;
	// System.ConsoleKey System.ConsoleKeyInfo::_key
	int32_t ____key_1;
	// System.ConsoleModifiers System.ConsoleKeyInfo::_mods
	int32_t ____mods_2;

public:
	inline static int32_t get_offset_of__keyChar_0() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t3124575640, ____keyChar_0)); }
	inline Il2CppChar get__keyChar_0() const { return ____keyChar_0; }
	inline Il2CppChar* get_address_of__keyChar_0() { return &____keyChar_0; }
	inline void set__keyChar_0(Il2CppChar value)
	{
		____keyChar_0 = value;
	}

	inline static int32_t get_offset_of__key_1() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t3124575640, ____key_1)); }
	inline int32_t get__key_1() const { return ____key_1; }
	inline int32_t* get_address_of__key_1() { return &____key_1; }
	inline void set__key_1(int32_t value)
	{
		____key_1 = value;
	}

	inline static int32_t get_offset_of__mods_2() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t3124575640, ____mods_2)); }
	inline int32_t get__mods_2() const { return ____mods_2; }
	inline int32_t* get_address_of__mods_2() { return &____mods_2; }
	inline void set__mods_2(int32_t value)
	{
		____mods_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t3124575640_marshaled_pinvoke
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};
// Native definition for COM marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t3124575640_marshaled_com
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};
#endif // CONSOLEKEYINFO_T3124575640_H
#ifndef TOUCH_T407273883_H
#define TOUCH_T407273883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t407273883 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2243707579  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2243707579  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2243707579  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t407273883, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t407273883, ___m_Position_1)); }
	inline Vector2_t2243707579  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2243707579 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2243707579  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t407273883, ___m_RawPosition_2)); }
	inline Vector2_t2243707579  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2243707579 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2243707579  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t407273883, ___m_PositionDelta_3)); }
	inline Vector2_t2243707579  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2243707579 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2243707579  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t407273883, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t407273883, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t407273883, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t407273883, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t407273883, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t407273883, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t407273883, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t407273883, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t407273883, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t407273883, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T407273883_H



static  RuntimeObject * UnresolvedVirtualCall_0 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_1 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_2 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_3 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_4 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_5 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_6 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_7 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_8 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  intptr_t UnresolvedVirtualCall_9 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_10 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_11 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_12 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_13 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_14 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_15 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_16 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_17 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_18 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_19 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_20 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_21 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RSAParameters_t1462703416  UnresolvedVirtualCall_22 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_23 (RuntimeObject * __this, RSAParameters_t1462703416  ___RSAParameters1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_24 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_25 (RuntimeObject * __this, DSAParameters_t1872138834  ___DSAParameters1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_26 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_27 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, int32_t ___Int325, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_28 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DSAParameters_t1872138834  UnresolvedVirtualCall_29 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTime_t693205669  UnresolvedVirtualCall_30 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_31 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_32 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, int32_t ___Int325, int32_t ___Int326, int32_t ___Int327, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_33 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_34 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_35 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_36 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_37 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_38 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_39 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ConsoleKeyInfo_t3124575640  UnresolvedVirtualCall_40 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_41 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_42 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_43 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_44 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_45 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_46 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_47 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  double UnresolvedVirtualCall_48 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Decimal_t724701077  UnresolvedVirtualCall_49 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTime_t693205669  UnresolvedVirtualCall_50 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_51 (RuntimeObject * __this, DateTime_t693205669  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_52 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_53 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_54 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_55 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int32_t ___Int323, int32_t ___Int324, int32_t ___Int325, int32_t ___Int326, int32_t ___Int327, int32_t ___Int328, RuntimeObject * ___Object9, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_56 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Guid_t  UnresolvedVirtualCall_57 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_58 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTime_t693205669  UnresolvedVirtualCall_59 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int32_t ___Int323, int32_t ___Int324, int32_t ___Int325, int32_t ___Int326, int32_t ___Int327, int32_t ___Int328, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_60 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_61 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_62 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_63 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Nullable_1_t334943763  UnresolvedVirtualCall_64 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_65 (RuntimeObject * __this, int64_t ___Int641, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_66 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, int32_t ___Int324, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_67 (RuntimeObject * __this, int64_t ___Int641, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_68 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_69 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_70 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_71 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_72 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, int32_t ___Int325, int8_t ___SByte6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_73 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_74 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  double UnresolvedVirtualCall_75 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_76 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_77 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CustomAttributeTypedArgument_t1498197914  UnresolvedVirtualCall_78 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CustomAttributeNamedArgument_t94157543  UnresolvedVirtualCall_79 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_80 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_81 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeMethodHandle_t894824333  UnresolvedVirtualCall_82 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_83 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_84 (RuntimeObject * __this, intptr_t ___IntPtr1, RuntimeObject * ___Object2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_85 (RuntimeObject * __this, OpCode_t2247480392  ___OpCode1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_86 (RuntimeObject * __this, OpCode_t2247480392  ___OpCode1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_87 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, RuntimeObject * ___Object7, RuntimeObject * ___Object8, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeTypeHandle_t2330101084  UnresolvedVirtualCall_88 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_89 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_90 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_91 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, RuntimeObject * ___Object4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_92 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_93 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_94 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_95 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_96 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Decimal_t724701077  UnresolvedVirtualCall_97 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DictionaryEntry_t3048875398  UnresolvedVirtualCall_98 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_99 (RuntimeObject * __this, TimeSpan_t3430258949  ___TimeSpan1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_100 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_101 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_102 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_103 (RuntimeObject * __this, RuntimeObject * ___Object1, StreamingContext_t1417235061  ___StreamingContext2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_104 (RuntimeObject * __this, RuntimeObject * ___Object1, StreamingContext_t1417235061  ___StreamingContext2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_105 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_106 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_107 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_108 (RuntimeObject * __this, uint16_t ___UInt161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_109 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_110 (RuntimeObject * __this, uint64_t ___UInt641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_111 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_112 (RuntimeObject * __this, StreamingContext_t1417235061  ___StreamingContext1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_113 (RuntimeObject * __this, int64_t ___Int641, RuntimeObject * ___Object2, int64_t ___Int643, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_114 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_115 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, StreamingContext_t1417235061  ___StreamingContext3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_116 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, StreamingContext_t1417235061  ___StreamingContext3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_117 (RuntimeObject * __this, TypedReference_t1025199857  ___TypedReference1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeFieldHandle_t2331729674  UnresolvedVirtualCall_118 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_119 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_120 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, RuntimeObject * ___Object7, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_121 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, CancellationToken_t1851405782  ___CancellationToken4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_122 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_123 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_124 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, int32_t ___Int324, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_125 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, int32_t ___Int324, int32_t ___Int325, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_126 (RuntimeObject * __this, int16_t ___Int161, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_127 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_128 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_129 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_130 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, int32_t ___Int324, int8_t ___SByte5, RuntimeObject * ___Object6, RuntimeObject * ___Object7, RuntimeObject * ___Object8, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_131 (RuntimeObject * __this, int16_t ___Int161, int16_t ___Int162, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_132 (RuntimeObject * __this, int16_t ___Int161, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_133 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_134 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_135 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_136 (RuntimeObject * __this, intptr_t ___IntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  intptr_t UnresolvedVirtualCall_137 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_138 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_139 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, int32_t ___Int325, int32_t ___Int326, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_140 (RuntimeObject * __this, int32_t ___Int321, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_141 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, int32_t ___Int323, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_142 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, int32_t ___Int324, RuntimeObject * ___Object5, RuntimeObject * ___Object6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_143 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_144 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int8_t ___SByte3, RuntimeObject * ___Object4, int8_t ___SByte5, RuntimeObject * ___Object6, RuntimeObject * ___Object7, RuntimeObject * ___Object8, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_145 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_146 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_147 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_148 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_149 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, int8_t ___SByte4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ArraySegment_1_t2594217482  UnresolvedVirtualCall_150 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_151 (RuntimeObject * __this, int32_t ___Int321, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_152 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Label_t4243202660  UnresolvedVirtualCall_153 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_154 (RuntimeObject * __this, Label_t4243202660  ___Label1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_155 (RuntimeObject * __this, OpCode_t2247480392  ___OpCode1, uint8_t ___Byte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_156 (RuntimeObject * __this, OpCode_t2247480392  ___OpCode1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_157 (RuntimeObject * __this, OpCode_t2247480392  ___OpCode1, Label_t4243202660  ___Label2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_158 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, int32_t ___Int324, int32_t ___Int325, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_159 (RuntimeObject * __this, RuntimeObject * ___Object1, LineInfo_t1429635508  ___LineInfo2, LineInfo_t1429635508  ___LineInfo3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_160 (RuntimeObject * __this, int8_t ___SByte1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_161 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_162 (RuntimeObject * __this, int16_t ___Int161, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_163 (RuntimeObject * __this, DateTime_t693205669  ___DateTime1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_164 (RuntimeObject * __this, TimeSpan_t3430258949  ___TimeSpan1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_165 (RuntimeObject * __this, Decimal_t724701077  ___Decimal1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_166 (RuntimeObject * __this, double ___Double1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_167 (RuntimeObject * __this, float ___Single1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_168 (RuntimeObject * __this, int64_t ___Int641, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_169 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_170 (RuntimeObject * __this, int8_t ___SByte1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_171 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_172 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_173 (RuntimeObject * __this, DateTime_t693205669  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTime_t693205669  UnresolvedVirtualCall_174 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTime_t693205669  UnresolvedVirtualCall_175 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTime_t693205669  UnresolvedVirtualCall_176 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTime_t693205669  UnresolvedVirtualCall_177 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  double UnresolvedVirtualCall_178 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  double UnresolvedVirtualCall_179 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  double UnresolvedVirtualCall_180 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  double UnresolvedVirtualCall_181 (RuntimeObject * __this, DateTime_t693205669  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_182 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_183 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_184 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_185 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_186 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_187 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_188 (RuntimeObject * __this, DateTime_t693205669  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_189 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_190 (RuntimeObject * __this, DateTime_t693205669  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTime_t693205669  UnresolvedVirtualCall_191 (RuntimeObject * __this, DateTimeOffset_t1362988906  ___DateTimeOffset1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTimeOffset_t1362988906  UnresolvedVirtualCall_192 (RuntimeObject * __this, DateTime_t693205669  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTimeOffset_t1362988906  UnresolvedVirtualCall_193 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_194 (RuntimeObject * __this, DateTimeOffset_t1362988906  ___DateTimeOffset1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_195 (RuntimeObject * __this, Decimal_t724701077  ___Decimal1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_196 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_197 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_198 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, int32_t ___Int326, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_199 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_200 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, int32_t ___Int325, int32_t ___Int326, int8_t ___SByte7, RuntimeObject * ___Object8, RuntimeObject * ___Object9, RuntimeObject * ___Object10, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_201 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_202 (RuntimeObject * __this, uint8_t ___Byte1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_203 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_204 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_205 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_206 (RuntimeObject * __this, ScriptableRenderContext_t4271526  ___ScriptableRenderContext1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Playable_t1896841784  UnresolvedVirtualCall_207 (RuntimeObject * __this, PlayableGraph_t1041204988  ___PlayableGraph1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_208 (RuntimeObject * __this, PropertyName_t217228410  ___PropertyName1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_209 (RuntimeObject * __this, float ___Single1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t38854645  UnresolvedVirtualCall_210 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_211 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_212 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, int32_t ___Int325, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_213 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, int32_t ___Int324, int8_t ___SByte5, RuntimeObject * ___Object6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_214 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, int32_t ___Int325, int8_t ___SByte6, RuntimeObject * ___Object7, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector2_t2243707579  UnresolvedVirtualCall_215 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Touch_t407273883  UnresolvedVirtualCall_216 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_217 (RuntimeObject * __this, float ___Single1, float ___Single2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_218 (RuntimeObject * __this, int32_t ___Int321, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_219 (RuntimeObject * __this, Color_t2020392075  ___Color1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color_t2020392075  UnresolvedVirtualCall_220 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_221 (RuntimeObject * __this, Vector2_t2243707579  ___Vector21, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_222 (RuntimeObject * __this, Color_t2020392075  ___Color1, float ___Single2, int8_t ___SByte3, int8_t ___SByte4, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UILineInfo_t3621277874  UnresolvedVirtualCall_223 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UICharInfo_t3056636800  UnresolvedVirtualCall_224 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_225 (RuntimeObject * __this, Vector2_t2243707579  ___Vector21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_226 (RuntimeObject * __this, Rect_t3681755626  ___Rect1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_227 (RuntimeObject * __this, float ___Single1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_228 (RuntimeObject * __this, Color_t2020392075  ___Color1, float ___Single2, int8_t ___SByte3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_229 (RuntimeObject * __this, float ___Single1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UIVertex_t1204258818  UnresolvedVirtualCall_230 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_231 (RuntimeObject * __this, float ___Single1, float ___Single2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Quaternion_t4030073918  UnresolvedVirtualCall_232 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_233 (RuntimeObject * __this, Button_t1215063635  ___Button1, Button_t1215063635  ___Button2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_234 (RuntimeObject * __this, Button_t1215063635  ___Button1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_235 (RuntimeObject * __this, Stick_t1862091779  ___Stick1, Stick_t1862091779  ___Stick2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_236 (RuntimeObject * __this, Stick_t1862091779  ___Stick1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_237 (RuntimeObject * __this, int8_t ___SByte1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_238 (RuntimeObject * __this, uint8_t ___Byte1, uint8_t ___Byte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_239 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_240 (RuntimeObject * __this, DateTime_t693205669  ___DateTime1, DateTime_t693205669  ___DateTime2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_241 (RuntimeObject * __this, DateTimeOffset_t1362988906  ___DateTimeOffset1, DateTimeOffset_t1362988906  ___DateTimeOffset2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_242 (RuntimeObject * __this, DateTimeOffset_t1362988906  ___DateTimeOffset1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_243 (RuntimeObject * __this, Decimal_t724701077  ___Decimal1, Decimal_t724701077  ___Decimal2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_244 (RuntimeObject * __this, Decimal_t724701077  ___Decimal1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_245 (RuntimeObject * __this, double ___Double1, double ___Double2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_246 (RuntimeObject * __this, int16_t ___Int161, int16_t ___Int162, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_247 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_248 (RuntimeObject * __this, int64_t ___Int641, int64_t ___Int642, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_249 (RuntimeObject * __this, Win32_IP_ADAPTER_ADDRESSES_t680756680  ___Win32_IP_ADAPTER_ADDRESSES1, Win32_IP_ADAPTER_ADDRESSES_t680756680  ___Win32_IP_ADAPTER_ADDRESSES2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_250 (RuntimeObject * __this, Win32_IP_ADAPTER_ADDRESSES_t680756680  ___Win32_IP_ADAPTER_ADDRESSES1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_251 (RuntimeObject * __this, float ___Single1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_252 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_253 (RuntimeObject * __this, TimeSpan_t3430258949  ___TimeSpan1, TimeSpan_t3430258949  ___TimeSpan2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_254 (RuntimeObject * __this, TimeSpan_t3430258949  ___TimeSpan1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_255 (RuntimeObject * __this, uint16_t ___UInt161, uint16_t ___UInt162, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_256 (RuntimeObject * __this, uint16_t ___UInt161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_257 (RuntimeObject * __this, uint32_t ___UInt321, uint32_t ___UInt322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_258 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_259 (RuntimeObject * __this, uint64_t ___UInt641, uint64_t ___UInt642, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_260 (RuntimeObject * __this, uint64_t ___UInt641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_261 (RuntimeObject * __this, RangePositionInfo_t2780802922  ___RangePositionInfo1, RangePositionInfo_t2780802922  ___RangePositionInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_262 (RuntimeObject * __this, RangePositionInfo_t2780802922  ___RangePositionInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_263 (RuntimeObject * __this, XmlSchemaObjectEntry_t2510586510  ___XmlSchemaObjectEntry1, XmlSchemaObjectEntry_t2510586510  ___XmlSchemaObjectEntry2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_264 (RuntimeObject * __this, XmlSchemaObjectEntry_t2510586510  ___XmlSchemaObjectEntry1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_265 (RuntimeObject * __this, Color_t2020392075  ___Color1, Color_t2020392075  ___Color2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_266 (RuntimeObject * __this, Color_t2020392075  ___Color1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_267 (RuntimeObject * __this, Color32_t874517518  ___Color321, Color32_t874517518  ___Color322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_268 (RuntimeObject * __this, Color32_t874517518  ___Color321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_269 (RuntimeObject * __this, RaycastResult_t21186376  ___RaycastResult1, RaycastResult_t21186376  ___RaycastResult2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_270 (RuntimeObject * __this, RaycastResult_t21186376  ___RaycastResult1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_271 (RuntimeObject * __this, UICharInfo_t3056636800  ___UICharInfo1, UICharInfo_t3056636800  ___UICharInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_272 (RuntimeObject * __this, UICharInfo_t3056636800  ___UICharInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_273 (RuntimeObject * __this, UILineInfo_t3621277874  ___UILineInfo1, UILineInfo_t3621277874  ___UILineInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_274 (RuntimeObject * __this, UILineInfo_t3621277874  ___UILineInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_275 (RuntimeObject * __this, UIVertex_t1204258818  ___UIVertex1, UIVertex_t1204258818  ___UIVertex2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_276 (RuntimeObject * __this, UIVertex_t1204258818  ___UIVertex1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_277 (RuntimeObject * __this, Vector2_t2243707579  ___Vector21, Vector2_t2243707579  ___Vector22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_278 (RuntimeObject * __this, Vector2_t2243707579  ___Vector21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_279 (RuntimeObject * __this, Vector3_t2243707580  ___Vector31, Vector3_t2243707580  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_280 (RuntimeObject * __this, Vector3_t2243707580  ___Vector31, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_281 (RuntimeObject * __this, Vector4_t2243707581  ___Vector41, Vector4_t2243707581  ___Vector42, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_282 (RuntimeObject * __this, Vector4_t2243707581  ___Vector41, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_283 (RuntimeObject * __this, int8_t ___SByte1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_284 (RuntimeObject * __this, int16_t ___Int161, int16_t ___Int162, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_285 (RuntimeObject * __this, float ___Single1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_286 (RuntimeObject * __this, ColorBlock_t2652774230  ___ColorBlock1, ColorBlock_t2652774230  ___ColorBlock2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_287 (RuntimeObject * __this, Navigation_t1571958496  ___Navigation1, Navigation_t1571958496  ___Navigation2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_288 (RuntimeObject * __this, SpriteState_t1353336012  ___SpriteState1, SpriteState_t1353336012  ___SpriteState2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Button_t1215063635  UnresolvedVirtualCall_289 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Stick_t1862091779  UnresolvedVirtualCall_290 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_291 (RuntimeObject * __this, RuntimeObject * ___Object1, Button_t1215063635  ___Button2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_292 (RuntimeObject * __this, RuntimeObject * ___Object1, Stick_t1862091779  ___Stick2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_293 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_294 (RuntimeObject * __this, RuntimeObject * ___Object1, uint8_t ___Byte2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_295 (RuntimeObject * __this, RuntimeObject * ___Object1, DateTime_t693205669  ___DateTime2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_296 (RuntimeObject * __this, RuntimeObject * ___Object1, DateTimeOffset_t1362988906  ___DateTimeOffset2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_297 (RuntimeObject * __this, RuntimeObject * ___Object1, Decimal_t724701077  ___Decimal2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_298 (RuntimeObject * __this, RuntimeObject * ___Object1, double ___Double2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_299 (RuntimeObject * __this, RuntimeObject * ___Object1, int16_t ___Int162, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_300 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_301 (RuntimeObject * __this, RuntimeObject * ___Object1, int64_t ___Int642, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_302 (RuntimeObject * __this, RuntimeObject * ___Object1, Win32_IP_ADAPTER_ADDRESSES_t680756680  ___Win32_IP_ADAPTER_ADDRESSES2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_303 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_304 (RuntimeObject * __this, RuntimeObject * ___Object1, float ___Single2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_305 (RuntimeObject * __this, RuntimeObject * ___Object1, TimeSpan_t3430258949  ___TimeSpan2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_306 (RuntimeObject * __this, RuntimeObject * ___Object1, uint16_t ___UInt162, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_307 (RuntimeObject * __this, RuntimeObject * ___Object1, uint32_t ___UInt322, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_308 (RuntimeObject * __this, RuntimeObject * ___Object1, uint64_t ___UInt642, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_309 (RuntimeObject * __this, RuntimeObject * ___Object1, RangePositionInfo_t2780802922  ___RangePositionInfo2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_310 (RuntimeObject * __this, RuntimeObject * ___Object1, XmlSchemaObjectEntry_t2510586510  ___XmlSchemaObjectEntry2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_311 (RuntimeObject * __this, RuntimeObject * ___Object1, Color_t2020392075  ___Color2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_312 (RuntimeObject * __this, RuntimeObject * ___Object1, Color32_t874517518  ___Color322, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_313 (RuntimeObject * __this, RuntimeObject * ___Object1, RaycastResult_t21186376  ___RaycastResult2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_314 (RuntimeObject * __this, RuntimeObject * ___Object1, UICharInfo_t3056636800  ___UICharInfo2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_315 (RuntimeObject * __this, RuntimeObject * ___Object1, UILineInfo_t3621277874  ___UILineInfo2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_316 (RuntimeObject * __this, RuntimeObject * ___Object1, UIVertex_t1204258818  ___UIVertex2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_317 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector2_t2243707579  ___Vector22, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_318 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector3_t2243707580  ___Vector32, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_319 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector4_t2243707581  ___Vector42, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t3110600289  UnresolvedVirtualCall_320 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_321 (RuntimeObject * __this, Button_t1215063635  ___Button1, Button_t1215063635  ___Button2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t561972209  UnresolvedVirtualCall_322 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_323 (RuntimeObject * __this, Stick_t1862091779  ___Stick1, Stick_t1862091779  ___Stick2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t1483742713  UnresolvedVirtualCall_324 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_325 (RuntimeObject * __this, XPathNodeRef_t2092605142  ___XPathNodeRef1, XPathNodeRef_t2092605142  ___XPathNodeRef2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_326 (RuntimeObject * __this, XPathNodeRef_t2092605142  ___XPathNodeRef1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t4275477795  UnresolvedVirtualCall_327 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_328 (RuntimeObject * __this, Guid_t  ___Guid1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_329 (RuntimeObject * __this, Guid_t  ___Guid1, Guid_t  ___Guid2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t3749587448  UnresolvedVirtualCall_330 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t888819835  UnresolvedVirtualCall_331 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_332 (RuntimeObject * __this, intptr_t ___IntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_333 (RuntimeObject * __this, intptr_t ___IntPtr1, intptr_t ___IntPtr2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t3601103940  UnresolvedVirtualCall_334 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t1174980068  UnresolvedVirtualCall_335 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t3716250094  UnresolvedVirtualCall_336 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t3800763530  UnresolvedVirtualCall_337 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_338 (RuntimeObject * __this, ResourceLocator_t2156390884  ___ResourceLocator1, ResourceLocator_t2156390884  ___ResourceLocator2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t3682707690  UnresolvedVirtualCall_339 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t2194750590  UnresolvedVirtualCall_340 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_341 (RuntimeObject * __this, InteractionSourceData_t4105625862  ___InteractionSourceData1, InteractionSourceData_t4105625862  ___InteractionSourceData2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_342 (RuntimeObject * __this, uint32_t ___UInt321, uint32_t ___UInt322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t778574023  UnresolvedVirtualCall_343 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t3111768972  UnresolvedVirtualCall_344 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_345 (RuntimeObject * __this, InteractionSourceData_t4105625862  ___InteractionSourceData1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_346 (RuntimeObject * __this, uint8_t ___Byte1, uint8_t ___Byte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_347 (RuntimeObject * __this, DateTime_t693205669  ___DateTime1, DateTime_t693205669  ___DateTime2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_348 (RuntimeObject * __this, DateTimeOffset_t1362988906  ___DateTimeOffset1, DateTimeOffset_t1362988906  ___DateTimeOffset2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_349 (RuntimeObject * __this, Decimal_t724701077  ___Decimal1, Decimal_t724701077  ___Decimal2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_350 (RuntimeObject * __this, double ___Double1, double ___Double2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_351 (RuntimeObject * __this, int64_t ___Int641, int64_t ___Int642, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_352 (RuntimeObject * __this, Win32_IP_ADAPTER_ADDRESSES_t680756680  ___Win32_IP_ADAPTER_ADDRESSES1, Win32_IP_ADAPTER_ADDRESSES_t680756680  ___Win32_IP_ADAPTER_ADDRESSES2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_353 (RuntimeObject * __this, ResourceLocator_t2156390884  ___ResourceLocator1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_354 (RuntimeObject * __this, TimeSpan_t3430258949  ___TimeSpan1, TimeSpan_t3430258949  ___TimeSpan2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_355 (RuntimeObject * __this, uint16_t ___UInt161, uint16_t ___UInt162, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_356 (RuntimeObject * __this, uint64_t ___UInt641, uint64_t ___UInt642, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_357 (RuntimeObject * __this, RangePositionInfo_t2780802922  ___RangePositionInfo1, RangePositionInfo_t2780802922  ___RangePositionInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_358 (RuntimeObject * __this, XmlSchemaObjectEntry_t2510586510  ___XmlSchemaObjectEntry1, XmlSchemaObjectEntry_t2510586510  ___XmlSchemaObjectEntry2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_359 (RuntimeObject * __this, Color_t2020392075  ___Color1, Color_t2020392075  ___Color2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_360 (RuntimeObject * __this, Color32_t874517518  ___Color321, Color32_t874517518  ___Color322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_361 (RuntimeObject * __this, RaycastResult_t21186376  ___RaycastResult1, RaycastResult_t21186376  ___RaycastResult2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_362 (RuntimeObject * __this, ColorBlock_t2652774230  ___ColorBlock1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_363 (RuntimeObject * __this, Navigation_t1571958496  ___Navigation1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_364 (RuntimeObject * __this, SpriteState_t1353336012  ___SpriteState1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_365 (RuntimeObject * __this, UICharInfo_t3056636800  ___UICharInfo1, UICharInfo_t3056636800  ___UICharInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_366 (RuntimeObject * __this, UILineInfo_t3621277874  ___UILineInfo1, UILineInfo_t3621277874  ___UILineInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_367 (RuntimeObject * __this, UIVertex_t1204258818  ___UIVertex1, UIVertex_t1204258818  ___UIVertex2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_368 (RuntimeObject * __this, Vector2_t2243707579  ___Vector21, Vector2_t2243707579  ___Vector22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_369 (RuntimeObject * __this, Vector3_t2243707580  ___Vector31, Vector3_t2243707580  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_370 (RuntimeObject * __this, Vector4_t2243707581  ___Vector41, Vector4_t2243707581  ___Vector42, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTimeOffset_t1362988906  UnresolvedVirtualCall_371 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Win32_IP_ADAPTER_ADDRESSES_t680756680  UnresolvedVirtualCall_372 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  TimeSpan_t3430258949  UnresolvedVirtualCall_373 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RangePositionInfo_t2780802922  UnresolvedVirtualCall_374 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  XmlSchemaObjectEntry_t2510586510  UnresolvedVirtualCall_375 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color32_t874517518  UnresolvedVirtualCall_376 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RaycastResult_t21186376  UnresolvedVirtualCall_377 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UICharInfo_t3056636800  UnresolvedVirtualCall_378 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UILineInfo_t3621277874  UnresolvedVirtualCall_379 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UIVertex_t1204258818  UnresolvedVirtualCall_380 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t2243707580  UnresolvedVirtualCall_381 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector4_t2243707581  UnresolvedVirtualCall_382 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Button_t1215063635  UnresolvedVirtualCall_383 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_384 (RuntimeObject * __this, Button_t1215063635  ___Button1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Stick_t1862091779  UnresolvedVirtualCall_385 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_386 (RuntimeObject * __this, Stick_t1862091779  ___Stick1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_387 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_388 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_389 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTimeOffset_t1362988906  UnresolvedVirtualCall_390 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_391 (RuntimeObject * __this, DateTimeOffset_t1362988906  ___DateTimeOffset1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Decimal_t724701077  UnresolvedVirtualCall_392 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_393 (RuntimeObject * __this, Decimal_t724701077  ___Decimal1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_394 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_395 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Win32_IP_ADAPTER_ADDRESSES_t680756680  UnresolvedVirtualCall_396 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_397 (RuntimeObject * __this, Win32_IP_ADAPTER_ADDRESSES_t680756680  ___Win32_IP_ADAPTER_ADDRESSES1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_398 (RuntimeObject * __this, CustomAttributeNamedArgument_t94157543  ___CustomAttributeNamedArgument1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_399 (RuntimeObject * __this, CustomAttributeNamedArgument_t94157543  ___CustomAttributeNamedArgument1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_400 (RuntimeObject * __this, CustomAttributeTypedArgument_t1498197914  ___CustomAttributeTypedArgument1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_401 (RuntimeObject * __this, CustomAttributeTypedArgument_t1498197914  ___CustomAttributeTypedArgument1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_402 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_403 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  TimeSpan_t3430258949  UnresolvedVirtualCall_404 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_405 (RuntimeObject * __this, TimeSpan_t3430258949  ___TimeSpan1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_406 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_407 (RuntimeObject * __this, uint16_t ___UInt161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_408 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_409 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_410 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_411 (RuntimeObject * __this, uint64_t ___UInt641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RangePositionInfo_t2780802922  UnresolvedVirtualCall_412 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_413 (RuntimeObject * __this, RangePositionInfo_t2780802922  ___RangePositionInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  XmlSchemaObjectEntry_t2510586510  UnresolvedVirtualCall_414 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_415 (RuntimeObject * __this, XmlSchemaObjectEntry_t2510586510  ___XmlSchemaObjectEntry1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color_t2020392075  UnresolvedVirtualCall_416 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_417 (RuntimeObject * __this, Color_t2020392075  ___Color1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color32_t874517518  UnresolvedVirtualCall_418 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_419 (RuntimeObject * __this, Color32_t874517518  ___Color321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RaycastResult_t21186376  UnresolvedVirtualCall_420 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_421 (RuntimeObject * __this, RaycastResult_t21186376  ___RaycastResult1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_422 (RuntimeObject * __this, UICharInfo_t3056636800  ___UICharInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_423 (RuntimeObject * __this, UILineInfo_t3621277874  ___UILineInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_424 (RuntimeObject * __this, UIVertex_t1204258818  ___UIVertex1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector2_t2243707579  UnresolvedVirtualCall_425 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_426 (RuntimeObject * __this, Vector2_t2243707579  ___Vector21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t2243707580  UnresolvedVirtualCall_427 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_428 (RuntimeObject * __this, Vector3_t2243707580  ___Vector31, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector4_t2243707581  UnresolvedVirtualCall_429 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_430 (RuntimeObject * __this, Vector4_t2243707581  ___Vector41, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_431 (RuntimeObject * __this, KeyValuePair_2_t38854645  ___KeyValuePair_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

extern const Il2CppMethodPointer g_UnresolvedVirtualMethodPointers[432] = 
{
	(const Il2CppMethodPointer) UnresolvedVirtualCall_0,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_1,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_2,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_3,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_4,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_5,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_6,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_7,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_8,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_9,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_10,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_11,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_12,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_13,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_14,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_15,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_16,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_17,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_18,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_19,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_20,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_21,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_22,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_23,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_24,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_25,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_26,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_27,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_28,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_29,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_30,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_31,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_32,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_33,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_34,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_35,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_36,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_37,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_38,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_39,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_40,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_41,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_42,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_43,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_44,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_45,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_46,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_47,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_48,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_49,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_50,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_51,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_52,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_53,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_54,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_55,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_56,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_57,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_58,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_59,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_60,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_61,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_62,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_63,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_64,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_65,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_66,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_67,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_68,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_69,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_70,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_71,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_72,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_73,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_74,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_75,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_76,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_77,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_78,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_79,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_80,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_81,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_82,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_83,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_84,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_85,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_86,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_87,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_88,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_89,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_90,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_91,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_92,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_93,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_94,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_95,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_96,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_97,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_98,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_99,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_100,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_101,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_102,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_103,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_104,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_105,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_106,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_107,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_108,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_109,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_110,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_111,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_112,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_113,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_114,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_115,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_116,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_117,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_118,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_119,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_120,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_121,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_122,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_123,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_124,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_125,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_126,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_127,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_128,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_129,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_130,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_131,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_132,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_133,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_134,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_135,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_136,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_137,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_138,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_139,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_140,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_141,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_142,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_143,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_144,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_145,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_146,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_147,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_148,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_149,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_150,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_151,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_152,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_153,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_154,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_155,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_156,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_157,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_158,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_159,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_160,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_161,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_162,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_163,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_164,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_165,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_166,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_167,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_168,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_169,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_170,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_171,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_172,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_173,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_174,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_175,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_176,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_177,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_178,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_179,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_180,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_181,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_182,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_183,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_184,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_185,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_186,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_187,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_188,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_189,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_190,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_191,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_192,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_193,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_194,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_195,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_196,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_197,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_198,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_199,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_200,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_201,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_202,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_203,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_204,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_205,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_206,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_207,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_208,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_209,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_210,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_211,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_212,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_213,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_214,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_215,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_216,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_217,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_218,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_219,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_220,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_221,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_222,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_223,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_224,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_225,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_226,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_227,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_228,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_229,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_230,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_231,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_232,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_233,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_234,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_235,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_236,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_237,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_238,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_239,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_240,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_241,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_242,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_243,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_244,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_245,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_246,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_247,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_248,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_249,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_250,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_251,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_252,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_253,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_254,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_255,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_256,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_257,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_258,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_259,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_260,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_261,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_262,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_263,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_264,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_265,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_266,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_267,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_268,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_269,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_270,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_271,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_272,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_273,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_274,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_275,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_276,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_277,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_278,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_279,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_280,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_281,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_282,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_283,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_284,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_285,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_286,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_287,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_288,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_289,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_290,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_291,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_292,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_293,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_294,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_295,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_296,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_297,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_298,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_299,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_300,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_301,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_302,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_303,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_304,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_305,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_306,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_307,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_308,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_309,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_310,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_311,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_312,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_313,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_314,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_315,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_316,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_317,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_318,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_319,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_320,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_321,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_322,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_323,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_324,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_325,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_326,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_327,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_328,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_329,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_330,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_331,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_332,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_333,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_334,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_335,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_336,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_337,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_338,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_339,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_340,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_341,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_342,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_343,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_344,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_345,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_346,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_347,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_348,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_349,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_350,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_351,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_352,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_353,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_354,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_355,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_356,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_357,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_358,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_359,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_360,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_361,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_362,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_363,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_364,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_365,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_366,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_367,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_368,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_369,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_370,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_371,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_372,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_373,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_374,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_375,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_376,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_377,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_378,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_379,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_380,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_381,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_382,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_383,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_384,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_385,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_386,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_387,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_388,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_389,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_390,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_391,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_392,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_393,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_394,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_395,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_396,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_397,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_398,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_399,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_400,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_401,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_402,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_403,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_404,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_405,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_406,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_407,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_408,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_409,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_410,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_411,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_412,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_413,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_414,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_415,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_416,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_417,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_418,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_419,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_420,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_421,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_422,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_423,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_424,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_425,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_426,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_427,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_428,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_429,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_430,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_431,
};
