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
// System.Runtime.Serialization.ObjectHolder[]
struct ObjectHolderU5BU5D_t2337234454;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t3230389896;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.RuntimeType
struct RuntimeType_t2836228502;
// System.EventHandler`1<System.Runtime.Serialization.SafeSerializationEventArgs>
struct EventHandler_1_t3974377890;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t1473156697;
// System.Type
struct Type_t;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t2699667469;
// System.Int64[]
struct Int64U5BU5D_t717125112;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t1282780357;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.X509Certificates.INativeCertificateHelper
struct INativeCertificateHelper_t148226263;
// System.Runtime.Serialization.FixupHolder[]
struct FixupHolderU5BU5D_t332004861;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Runtime.Serialization.FixupHolderList
struct FixupHolderList_t438393606;
// System.Runtime.Serialization.LongList
struct LongList_t2406893678;
// System.Runtime.Serialization.ValueTypeFixupInfo
struct ValueTypeFixupInfo_t1676793155;
// System.Runtime.Serialization.TypeLoadExceptionHolder
struct TypeLoadExceptionHolder_t427439951;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1153004758;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t1975884510;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t2217612696;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_t3842064707;
// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t2688843926;
// System.Runtime.Serialization.ObjectHolderList
struct ObjectHolderList_t1856843635;
// System.Void
struct Void_t1841601450;
// System.Char[]
struct CharU5BU5D_t1328083999;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051957;
// System.Security.Cryptography.RSA
struct RSA_t3719518354;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.Collections.Generic.Dictionary`2<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct Dictionary_2_t2672672302;
// System.Reflection.Binder
struct Binder_t3404612058;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// System.Reflection.RuntimeFieldInfo
struct RuntimeFieldInfo_t1687134186;
// System.UInt64[]
struct UInt64U5BU5D_t1668688775;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1572802995;
// System.Delegate[]
struct DelegateU5BU5D_t1606206610;
// System.Exception
struct Exception_t1927440687;
// System.Runtime.Serialization.DeserializationEventHandler
struct DeserializationEventHandler_t1801856893;
// System.Runtime.Serialization.SerializationEventHandler
struct SerializationEventHandler_t2339848500;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1912587528;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;

struct Exception_t1927440687_marshaled_pinvoke;
struct Exception_t1927440687_marshaled_com;



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
#ifndef TYPELOADEXCEPTIONHOLDER_T427439951_H
#define TYPELOADEXCEPTIONHOLDER_T427439951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.TypeLoadExceptionHolder
struct  TypeLoadExceptionHolder_t427439951  : public RuntimeObject
{
public:
	// System.String System.Runtime.Serialization.TypeLoadExceptionHolder::m_typeName
	String_t* ___m_typeName_0;

public:
	inline static int32_t get_offset_of_m_typeName_0() { return static_cast<int32_t>(offsetof(TypeLoadExceptionHolder_t427439951, ___m_typeName_0)); }
	inline String_t* get_m_typeName_0() const { return ___m_typeName_0; }
	inline String_t** get_address_of_m_typeName_0() { return &___m_typeName_0; }
	inline void set_m_typeName_0(String_t* value)
	{
		___m_typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_typeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTIONHOLDER_T427439951_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef OBJECTHOLDERLIST_T1856843635_H
#define OBJECTHOLDERLIST_T1856843635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectHolderList
struct  ObjectHolderList_t1856843635  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectHolder[] System.Runtime.Serialization.ObjectHolderList::m_values
	ObjectHolderU5BU5D_t2337234454* ___m_values_0;
	// System.Int32 System.Runtime.Serialization.ObjectHolderList::m_count
	int32_t ___m_count_1;

public:
	inline static int32_t get_offset_of_m_values_0() { return static_cast<int32_t>(offsetof(ObjectHolderList_t1856843635, ___m_values_0)); }
	inline ObjectHolderU5BU5D_t2337234454* get_m_values_0() const { return ___m_values_0; }
	inline ObjectHolderU5BU5D_t2337234454** get_address_of_m_values_0() { return &___m_values_0; }
	inline void set_m_values_0(ObjectHolderU5BU5D_t2337234454* value)
	{
		___m_values_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_0), value);
	}

	inline static int32_t get_offset_of_m_count_1() { return static_cast<int32_t>(offsetof(ObjectHolderList_t1856843635, ___m_count_1)); }
	inline int32_t get_m_count_1() const { return ___m_count_1; }
	inline int32_t* get_address_of_m_count_1() { return &___m_count_1; }
	inline void set_m_count_1(int32_t value)
	{
		___m_count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTHOLDERLIST_T1856843635_H
#ifndef SAFESERIALIZATIONMANAGER_T1975884510_H
#define SAFESERIALIZATIONMANAGER_T1975884510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SafeSerializationManager
struct  SafeSerializationManager_t1975884510  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<System.Object> System.Runtime.Serialization.SafeSerializationManager::m_serializedStates
	RuntimeObject* ___m_serializedStates_0;
	// System.Runtime.Serialization.SerializationInfo System.Runtime.Serialization.SafeSerializationManager::m_savedSerializationInfo
	SerializationInfo_t228987430 * ___m_savedSerializationInfo_1;
	// System.Object System.Runtime.Serialization.SafeSerializationManager::m_realObject
	RuntimeObject * ___m_realObject_2;
	// System.RuntimeType System.Runtime.Serialization.SafeSerializationManager::m_realType
	RuntimeType_t2836228502 * ___m_realType_3;
	// System.EventHandler`1<System.Runtime.Serialization.SafeSerializationEventArgs> System.Runtime.Serialization.SafeSerializationManager::SerializeObjectState
	EventHandler_1_t3974377890 * ___SerializeObjectState_4;

public:
	inline static int32_t get_offset_of_m_serializedStates_0() { return static_cast<int32_t>(offsetof(SafeSerializationManager_t1975884510, ___m_serializedStates_0)); }
	inline RuntimeObject* get_m_serializedStates_0() const { return ___m_serializedStates_0; }
	inline RuntimeObject** get_address_of_m_serializedStates_0() { return &___m_serializedStates_0; }
	inline void set_m_serializedStates_0(RuntimeObject* value)
	{
		___m_serializedStates_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_serializedStates_0), value);
	}

	inline static int32_t get_offset_of_m_savedSerializationInfo_1() { return static_cast<int32_t>(offsetof(SafeSerializationManager_t1975884510, ___m_savedSerializationInfo_1)); }
	inline SerializationInfo_t228987430 * get_m_savedSerializationInfo_1() const { return ___m_savedSerializationInfo_1; }
	inline SerializationInfo_t228987430 ** get_address_of_m_savedSerializationInfo_1() { return &___m_savedSerializationInfo_1; }
	inline void set_m_savedSerializationInfo_1(SerializationInfo_t228987430 * value)
	{
		___m_savedSerializationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_savedSerializationInfo_1), value);
	}

	inline static int32_t get_offset_of_m_realObject_2() { return static_cast<int32_t>(offsetof(SafeSerializationManager_t1975884510, ___m_realObject_2)); }
	inline RuntimeObject * get_m_realObject_2() const { return ___m_realObject_2; }
	inline RuntimeObject ** get_address_of_m_realObject_2() { return &___m_realObject_2; }
	inline void set_m_realObject_2(RuntimeObject * value)
	{
		___m_realObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_realObject_2), value);
	}

	inline static int32_t get_offset_of_m_realType_3() { return static_cast<int32_t>(offsetof(SafeSerializationManager_t1975884510, ___m_realType_3)); }
	inline RuntimeType_t2836228502 * get_m_realType_3() const { return ___m_realType_3; }
	inline RuntimeType_t2836228502 ** get_address_of_m_realType_3() { return &___m_realType_3; }
	inline void set_m_realType_3(RuntimeType_t2836228502 * value)
	{
		___m_realType_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_realType_3), value);
	}

	inline static int32_t get_offset_of_SerializeObjectState_4() { return static_cast<int32_t>(offsetof(SafeSerializationManager_t1975884510, ___SerializeObjectState_4)); }
	inline EventHandler_1_t3974377890 * get_SerializeObjectState_4() const { return ___SerializeObjectState_4; }
	inline EventHandler_1_t3974377890 ** get_address_of_SerializeObjectState_4() { return &___SerializeObjectState_4; }
	inline void set_SerializeObjectState_4(EventHandler_1_t3974377890 * value)
	{
		___SerializeObjectState_4 = value;
		Il2CppCodeGenWriteBarrier((&___SerializeObjectState_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFESERIALIZATIONMANAGER_T1975884510_H
#ifndef SERIALIZATIONEVENTSCACHE_T1398947579_H
#define SERIALIZATIONEVENTSCACHE_T1398947579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationEventsCache
struct  SerializationEventsCache_t1398947579  : public RuntimeObject
{
public:

public:
};

struct SerializationEventsCache_t1398947579_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationEventsCache::cache
	Hashtable_t909839986 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(SerializationEventsCache_t1398947579_StaticFields, ___cache_0)); }
	inline Hashtable_t909839986 * get_cache_0() const { return ___cache_0; }
	inline Hashtable_t909839986 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(Hashtable_t909839986 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONEVENTSCACHE_T1398947579_H
#ifndef SERIALIZATIONINFO_T228987430_H
#define SERIALIZATIONINFO_T228987430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t228987430  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t1642385972* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t3614634134* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t1664964607* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t3986656710 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t228987430, ___m_members_3)); }
	inline StringU5BU5D_t1642385972* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_t1642385972** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_t1642385972* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_members_3), value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t228987430, ___m_data_4)); }
	inline ObjectU5BU5D_t3614634134* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_t3614634134** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_t3614634134* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_data_4), value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t228987430, ___m_types_5)); }
	inline TypeU5BU5D_t1664964607* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t1664964607** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t1664964607* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_types_5), value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t228987430, ___m_nameToIndex_6)); }
	inline Dictionary_2_t3986656710 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_t3986656710 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_t3986656710 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_nameToIndex_6), value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t228987430, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t228987430, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_converter_8), value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t228987430, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTypeName_9), value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t228987430, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_assemName_10), value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t228987430, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_11), value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t228987430, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t228987430, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t228987430, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T228987430_H
#ifndef SERIALIZATIONBINDER_T3985864818_H
#define SERIALIZATIONBINDER_T3985864818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationBinder
struct  SerializationBinder_t3985864818  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONBINDER_T3985864818_H
#ifndef SERIALIZATIONEVENTS_T30413825_H
#define SERIALIZATIONEVENTS_T30413825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationEvents
struct  SerializationEvents_t30413825  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Reflection.MethodInfo> System.Runtime.Serialization.SerializationEvents::m_OnSerializingMethods
	List_1_t2699667469 * ___m_OnSerializingMethods_0;
	// System.Collections.Generic.List`1<System.Reflection.MethodInfo> System.Runtime.Serialization.SerializationEvents::m_OnSerializedMethods
	List_1_t2699667469 * ___m_OnSerializedMethods_1;
	// System.Collections.Generic.List`1<System.Reflection.MethodInfo> System.Runtime.Serialization.SerializationEvents::m_OnDeserializingMethods
	List_1_t2699667469 * ___m_OnDeserializingMethods_2;
	// System.Collections.Generic.List`1<System.Reflection.MethodInfo> System.Runtime.Serialization.SerializationEvents::m_OnDeserializedMethods
	List_1_t2699667469 * ___m_OnDeserializedMethods_3;

public:
	inline static int32_t get_offset_of_m_OnSerializingMethods_0() { return static_cast<int32_t>(offsetof(SerializationEvents_t30413825, ___m_OnSerializingMethods_0)); }
	inline List_1_t2699667469 * get_m_OnSerializingMethods_0() const { return ___m_OnSerializingMethods_0; }
	inline List_1_t2699667469 ** get_address_of_m_OnSerializingMethods_0() { return &___m_OnSerializingMethods_0; }
	inline void set_m_OnSerializingMethods_0(List_1_t2699667469 * value)
	{
		___m_OnSerializingMethods_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnSerializingMethods_0), value);
	}

	inline static int32_t get_offset_of_m_OnSerializedMethods_1() { return static_cast<int32_t>(offsetof(SerializationEvents_t30413825, ___m_OnSerializedMethods_1)); }
	inline List_1_t2699667469 * get_m_OnSerializedMethods_1() const { return ___m_OnSerializedMethods_1; }
	inline List_1_t2699667469 ** get_address_of_m_OnSerializedMethods_1() { return &___m_OnSerializedMethods_1; }
	inline void set_m_OnSerializedMethods_1(List_1_t2699667469 * value)
	{
		___m_OnSerializedMethods_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnSerializedMethods_1), value);
	}

	inline static int32_t get_offset_of_m_OnDeserializingMethods_2() { return static_cast<int32_t>(offsetof(SerializationEvents_t30413825, ___m_OnDeserializingMethods_2)); }
	inline List_1_t2699667469 * get_m_OnDeserializingMethods_2() const { return ___m_OnDeserializingMethods_2; }
	inline List_1_t2699667469 ** get_address_of_m_OnDeserializingMethods_2() { return &___m_OnDeserializingMethods_2; }
	inline void set_m_OnDeserializingMethods_2(List_1_t2699667469 * value)
	{
		___m_OnDeserializingMethods_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDeserializingMethods_2), value);
	}

	inline static int32_t get_offset_of_m_OnDeserializedMethods_3() { return static_cast<int32_t>(offsetof(SerializationEvents_t30413825, ___m_OnDeserializedMethods_3)); }
	inline List_1_t2699667469 * get_m_OnDeserializedMethods_3() const { return ___m_OnDeserializedMethods_3; }
	inline List_1_t2699667469 ** get_address_of_m_OnDeserializedMethods_3() { return &___m_OnDeserializedMethods_3; }
	inline void set_m_OnDeserializedMethods_3(List_1_t2699667469 * value)
	{
		___m_OnDeserializedMethods_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDeserializedMethods_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONEVENTS_T30413825_H
#ifndef LONGLIST_T2406893678_H
#define LONGLIST_T2406893678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.LongList
struct  LongList_t2406893678  : public RuntimeObject
{
public:
	// System.Int64[] System.Runtime.Serialization.LongList::m_values
	Int64U5BU5D_t717125112* ___m_values_0;
	// System.Int32 System.Runtime.Serialization.LongList::m_count
	int32_t ___m_count_1;
	// System.Int32 System.Runtime.Serialization.LongList::m_totalItems
	int32_t ___m_totalItems_2;
	// System.Int32 System.Runtime.Serialization.LongList::m_currentItem
	int32_t ___m_currentItem_3;

public:
	inline static int32_t get_offset_of_m_values_0() { return static_cast<int32_t>(offsetof(LongList_t2406893678, ___m_values_0)); }
	inline Int64U5BU5D_t717125112* get_m_values_0() const { return ___m_values_0; }
	inline Int64U5BU5D_t717125112** get_address_of_m_values_0() { return &___m_values_0; }
	inline void set_m_values_0(Int64U5BU5D_t717125112* value)
	{
		___m_values_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_0), value);
	}

	inline static int32_t get_offset_of_m_count_1() { return static_cast<int32_t>(offsetof(LongList_t2406893678, ___m_count_1)); }
	inline int32_t get_m_count_1() const { return ___m_count_1; }
	inline int32_t* get_address_of_m_count_1() { return &___m_count_1; }
	inline void set_m_count_1(int32_t value)
	{
		___m_count_1 = value;
	}

	inline static int32_t get_offset_of_m_totalItems_2() { return static_cast<int32_t>(offsetof(LongList_t2406893678, ___m_totalItems_2)); }
	inline int32_t get_m_totalItems_2() const { return ___m_totalItems_2; }
	inline int32_t* get_address_of_m_totalItems_2() { return &___m_totalItems_2; }
	inline void set_m_totalItems_2(int32_t value)
	{
		___m_totalItems_2 = value;
	}

	inline static int32_t get_offset_of_m_currentItem_3() { return static_cast<int32_t>(offsetof(LongList_t2406893678, ___m_currentItem_3)); }
	inline int32_t get_m_currentItem_3() const { return ___m_currentItem_3; }
	inline int32_t* get_address_of_m_currentItem_3() { return &___m_currentItem_3; }
	inline void set_m_currentItem_3(int32_t value)
	{
		___m_currentItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LONGLIST_T2406893678_H
#ifndef FORMATTERCONVERTER_T764140214_H
#define FORMATTERCONVERTER_T764140214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterConverter
struct  FormatterConverter_t764140214  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERCONVERTER_T764140214_H
#ifndef SURROGATEFORCYCLICALREFERENCE_T2955664662_H
#define SURROGATEFORCYCLICALREFERENCE_T2955664662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SurrogateForCyclicalReference
struct  SurrogateForCyclicalReference_t2955664662  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.SurrogateForCyclicalReference::innerSurrogate
	RuntimeObject* ___innerSurrogate_0;

public:
	inline static int32_t get_offset_of_innerSurrogate_0() { return static_cast<int32_t>(offsetof(SurrogateForCyclicalReference_t2955664662, ___innerSurrogate_0)); }
	inline RuntimeObject* get_innerSurrogate_0() const { return ___innerSurrogate_0; }
	inline RuntimeObject** get_address_of_innerSurrogate_0() { return &___innerSurrogate_0; }
	inline void set_innerSurrogate_0(RuntimeObject* value)
	{
		___innerSurrogate_0 = value;
		Il2CppCodeGenWriteBarrier((&___innerSurrogate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURROGATEFORCYCLICALREFERENCE_T2955664662_H
#ifndef X509CERTIFICATEIMPL_T3842064707_H
#define X509CERTIFICATEIMPL_T3842064707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct  X509CertificateImpl_t3842064707  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509CertificateImpl::cachedCertificateHash
	ByteU5BU5D_t3397334013* ___cachedCertificateHash_0;

public:
	inline static int32_t get_offset_of_cachedCertificateHash_0() { return static_cast<int32_t>(offsetof(X509CertificateImpl_t3842064707, ___cachedCertificateHash_0)); }
	inline ByteU5BU5D_t3397334013* get_cachedCertificateHash_0() const { return ___cachedCertificateHash_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_cachedCertificateHash_0() { return &___cachedCertificateHash_0; }
	inline void set_cachedCertificateHash_0(ByteU5BU5D_t3397334013* value)
	{
		___cachedCertificateHash_0 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCertificateHash_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEIMPL_T3842064707_H
#ifndef X509HELPER_T1751628948_H
#define X509HELPER_T1751628948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Helper
struct  X509Helper_t1751628948  : public RuntimeObject
{
public:

public:
};

struct X509Helper_t1751628948_StaticFields
{
public:
	// System.Security.Cryptography.X509Certificates.INativeCertificateHelper System.Security.Cryptography.X509Certificates.X509Helper::nativeHelper
	RuntimeObject* ___nativeHelper_0;

public:
	inline static int32_t get_offset_of_nativeHelper_0() { return static_cast<int32_t>(offsetof(X509Helper_t1751628948_StaticFields, ___nativeHelper_0)); }
	inline RuntimeObject* get_nativeHelper_0() const { return ___nativeHelper_0; }
	inline RuntimeObject** get_address_of_nativeHelper_0() { return &___nativeHelper_0; }
	inline void set_nativeHelper_0(RuntimeObject* value)
	{
		___nativeHelper_0 = value;
		Il2CppCodeGenWriteBarrier((&___nativeHelper_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509HELPER_T1751628948_H
#ifndef FIXUPHOLDER_T2028025012_H
#define FIXUPHOLDER_T2028025012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FixupHolder
struct  FixupHolder_t2028025012  : public RuntimeObject
{
public:
	// System.Int64 System.Runtime.Serialization.FixupHolder::m_id
	int64_t ___m_id_0;
	// System.Object System.Runtime.Serialization.FixupHolder::m_fixupInfo
	RuntimeObject * ___m_fixupInfo_1;
	// System.Int32 System.Runtime.Serialization.FixupHolder::m_fixupType
	int32_t ___m_fixupType_2;

public:
	inline static int32_t get_offset_of_m_id_0() { return static_cast<int32_t>(offsetof(FixupHolder_t2028025012, ___m_id_0)); }
	inline int64_t get_m_id_0() const { return ___m_id_0; }
	inline int64_t* get_address_of_m_id_0() { return &___m_id_0; }
	inline void set_m_id_0(int64_t value)
	{
		___m_id_0 = value;
	}

	inline static int32_t get_offset_of_m_fixupInfo_1() { return static_cast<int32_t>(offsetof(FixupHolder_t2028025012, ___m_fixupInfo_1)); }
	inline RuntimeObject * get_m_fixupInfo_1() const { return ___m_fixupInfo_1; }
	inline RuntimeObject ** get_address_of_m_fixupInfo_1() { return &___m_fixupInfo_1; }
	inline void set_m_fixupInfo_1(RuntimeObject * value)
	{
		___m_fixupInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_fixupInfo_1), value);
	}

	inline static int32_t get_offset_of_m_fixupType_2() { return static_cast<int32_t>(offsetof(FixupHolder_t2028025012, ___m_fixupType_2)); }
	inline int32_t get_m_fixupType_2() const { return ___m_fixupType_2; }
	inline int32_t* get_address_of_m_fixupType_2() { return &___m_fixupType_2; }
	inline void set_m_fixupType_2(int32_t value)
	{
		___m_fixupType_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXUPHOLDER_T2028025012_H
#ifndef FIXUPHOLDERLIST_T438393606_H
#define FIXUPHOLDERLIST_T438393606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FixupHolderList
struct  FixupHolderList_t438393606  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.FixupHolder[] System.Runtime.Serialization.FixupHolderList::m_values
	FixupHolderU5BU5D_t332004861* ___m_values_0;
	// System.Int32 System.Runtime.Serialization.FixupHolderList::m_count
	int32_t ___m_count_1;

public:
	inline static int32_t get_offset_of_m_values_0() { return static_cast<int32_t>(offsetof(FixupHolderList_t438393606, ___m_values_0)); }
	inline FixupHolderU5BU5D_t332004861* get_m_values_0() const { return ___m_values_0; }
	inline FixupHolderU5BU5D_t332004861** get_address_of_m_values_0() { return &___m_values_0; }
	inline void set_m_values_0(FixupHolderU5BU5D_t332004861* value)
	{
		___m_values_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_0), value);
	}

	inline static int32_t get_offset_of_m_count_1() { return static_cast<int32_t>(offsetof(FixupHolderList_t438393606, ___m_count_1)); }
	inline int32_t get_m_count_1() const { return ___m_count_1; }
	inline int32_t* get_address_of_m_count_1() { return &___m_count_1; }
	inline void set_m_count_1(int32_t value)
	{
		___m_count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXUPHOLDERLIST_T438393606_H
#ifndef OBJECTIDGENERATOR_T3070747799_H
#define OBJECTIDGENERATOR_T3070747799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectIDGenerator
struct  ObjectIDGenerator_t3070747799  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Serialization.ObjectIDGenerator::m_currentCount
	int32_t ___m_currentCount_0;
	// System.Int32 System.Runtime.Serialization.ObjectIDGenerator::m_currentSize
	int32_t ___m_currentSize_1;
	// System.Int64[] System.Runtime.Serialization.ObjectIDGenerator::m_ids
	Int64U5BU5D_t717125112* ___m_ids_2;
	// System.Object[] System.Runtime.Serialization.ObjectIDGenerator::m_objs
	ObjectU5BU5D_t3614634134* ___m_objs_3;

public:
	inline static int32_t get_offset_of_m_currentCount_0() { return static_cast<int32_t>(offsetof(ObjectIDGenerator_t3070747799, ___m_currentCount_0)); }
	inline int32_t get_m_currentCount_0() const { return ___m_currentCount_0; }
	inline int32_t* get_address_of_m_currentCount_0() { return &___m_currentCount_0; }
	inline void set_m_currentCount_0(int32_t value)
	{
		___m_currentCount_0 = value;
	}

	inline static int32_t get_offset_of_m_currentSize_1() { return static_cast<int32_t>(offsetof(ObjectIDGenerator_t3070747799, ___m_currentSize_1)); }
	inline int32_t get_m_currentSize_1() const { return ___m_currentSize_1; }
	inline int32_t* get_address_of_m_currentSize_1() { return &___m_currentSize_1; }
	inline void set_m_currentSize_1(int32_t value)
	{
		___m_currentSize_1 = value;
	}

	inline static int32_t get_offset_of_m_ids_2() { return static_cast<int32_t>(offsetof(ObjectIDGenerator_t3070747799, ___m_ids_2)); }
	inline Int64U5BU5D_t717125112* get_m_ids_2() const { return ___m_ids_2; }
	inline Int64U5BU5D_t717125112** get_address_of_m_ids_2() { return &___m_ids_2; }
	inline void set_m_ids_2(Int64U5BU5D_t717125112* value)
	{
		___m_ids_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ids_2), value);
	}

	inline static int32_t get_offset_of_m_objs_3() { return static_cast<int32_t>(offsetof(ObjectIDGenerator_t3070747799, ___m_objs_3)); }
	inline ObjectU5BU5D_t3614634134* get_m_objs_3() const { return ___m_objs_3; }
	inline ObjectU5BU5D_t3614634134** get_address_of_m_objs_3() { return &___m_objs_3; }
	inline void set_m_objs_3(ObjectU5BU5D_t3614634134* value)
	{
		___m_objs_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_objs_3), value);
	}
};

struct ObjectIDGenerator_t3070747799_StaticFields
{
public:
	// System.Int32[] System.Runtime.Serialization.ObjectIDGenerator::sizes
	Int32U5BU5D_t3030399641* ___sizes_4;

public:
	inline static int32_t get_offset_of_sizes_4() { return static_cast<int32_t>(offsetof(ObjectIDGenerator_t3070747799_StaticFields, ___sizes_4)); }
	inline Int32U5BU5D_t3030399641* get_sizes_4() const { return ___sizes_4; }
	inline Int32U5BU5D_t3030399641** get_address_of_sizes_4() { return &___sizes_4; }
	inline void set_sizes_4(Int32U5BU5D_t3030399641* value)
	{
		___sizes_4 = value;
		Il2CppCodeGenWriteBarrier((&___sizes_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTIDGENERATOR_T3070747799_H
#ifndef OBJECTHOLDER_T2992553423_H
#define OBJECTHOLDER_T2992553423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectHolder
struct  ObjectHolder_t2992553423  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Serialization.ObjectHolder::m_object
	RuntimeObject * ___m_object_0;
	// System.Int64 System.Runtime.Serialization.ObjectHolder::m_id
	int64_t ___m_id_1;
	// System.Int32 System.Runtime.Serialization.ObjectHolder::m_missingElementsRemaining
	int32_t ___m_missingElementsRemaining_2;
	// System.Int32 System.Runtime.Serialization.ObjectHolder::m_missingDecendents
	int32_t ___m_missingDecendents_3;
	// System.Runtime.Serialization.SerializationInfo System.Runtime.Serialization.ObjectHolder::m_serInfo
	SerializationInfo_t228987430 * ___m_serInfo_4;
	// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ObjectHolder::m_surrogate
	RuntimeObject* ___m_surrogate_5;
	// System.Runtime.Serialization.FixupHolderList System.Runtime.Serialization.ObjectHolder::m_missingElements
	FixupHolderList_t438393606 * ___m_missingElements_6;
	// System.Runtime.Serialization.LongList System.Runtime.Serialization.ObjectHolder::m_dependentObjects
	LongList_t2406893678 * ___m_dependentObjects_7;
	// System.Runtime.Serialization.ObjectHolder System.Runtime.Serialization.ObjectHolder::m_next
	ObjectHolder_t2992553423 * ___m_next_8;
	// System.Int32 System.Runtime.Serialization.ObjectHolder::m_flags
	int32_t ___m_flags_9;
	// System.Boolean System.Runtime.Serialization.ObjectHolder::m_markForFixupWhenAvailable
	bool ___m_markForFixupWhenAvailable_10;
	// System.Runtime.Serialization.ValueTypeFixupInfo System.Runtime.Serialization.ObjectHolder::m_valueFixup
	ValueTypeFixupInfo_t1676793155 * ___m_valueFixup_11;
	// System.Runtime.Serialization.TypeLoadExceptionHolder System.Runtime.Serialization.ObjectHolder::m_typeLoad
	TypeLoadExceptionHolder_t427439951 * ___m_typeLoad_12;
	// System.Boolean System.Runtime.Serialization.ObjectHolder::m_reachable
	bool ___m_reachable_13;

public:
	inline static int32_t get_offset_of_m_object_0() { return static_cast<int32_t>(offsetof(ObjectHolder_t2992553423, ___m_object_0)); }
	inline RuntimeObject * get_m_object_0() const { return ___m_object_0; }
	inline RuntimeObject ** get_address_of_m_object_0() { return &___m_object_0; }
	inline void set_m_object_0(RuntimeObject * value)
	{
		___m_object_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_object_0), value);
	}

	inline static int32_t get_offset_of_m_id_1() { return static_cast<int32_t>(offsetof(ObjectHolder_t2992553423, ___m_id_1)); }
	inline int64_t get_m_id_1() const { return ___m_id_1; }
	inline int64_t* get_address_of_m_id_1() { return &___m_id_1; }
	inline void set_m_id_1(int64_t value)
	{
		___m_id_1 = value;
	}

	inline static int32_t get_offset_of_m_missingElementsRemaining_2() { return static_cast<int32_t>(offsetof(ObjectHolder_t2992553423, ___m_missingElementsRemaining_2)); }
	inline int32_t get_m_missingElementsRemaining_2() const { return ___m_missingElementsRemaining_2; }
	inline int32_t* get_address_of_m_missingElementsRemaining_2() { return &___m_missingElementsRemaining_2; }
	inline void set_m_missingElementsRemaining_2(int32_t value)
	{
		___m_missingElementsRemaining_2 = value;
	}

	inline static int32_t get_offset_of_m_missingDecendents_3() { return static_cast<int32_t>(offsetof(ObjectHolder_t2992553423, ___m_missingDecendents_3)); }
	inline int32_t get_m_missingDecendents_3() const { return ___m_missingDecendents_3; }
	inline int32_t* get_address_of_m_missingDecendents_3() { return &___m_missingDecendents_3; }
	inline void set_m_missingDecendents_3(int32_t value)
	{
		___m_missingDecendents_3 = value;
	}

	inline static int32_t get_offset_of_m_serInfo_4() { return static_cast<int32_t>(offsetof(ObjectHolder_t2992553423, ___m_serInfo_4)); }
	inline SerializationInfo_t228987430 * get_m_serInfo_4() const { return ___m_serInfo_4; }
	inline SerializationInfo_t228987430 ** get_address_of_m_serInfo_4() { return &___m_serInfo_4; }
	inline void set_m_serInfo_4(SerializationInfo_t228987430 * value)
	{
		___m_serInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_serInfo_4), value);
	}

	inline static int32_t get_offset_of_m_surrogate_5() { return static_cast<int32_t>(offsetof(ObjectHolder_t2992553423, ___m_surrogate_5)); }
	inline RuntimeObject* get_m_surrogate_5() const { return ___m_surrogate_5; }
	inline RuntimeObject** get_address_of_m_surrogate_5() { return &___m_surrogate_5; }
	inline void set_m_surrogate_5(RuntimeObject* value)
	{
		___m_surrogate_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_surrogate_5), value);
	}

	inline static int32_t get_offset_of_m_missingElements_6() { return static_cast<int32_t>(offsetof(ObjectHolder_t2992553423, ___m_missingElements_6)); }
	inline FixupHolderList_t438393606 * get_m_missingElements_6() const { return ___m_missingElements_6; }
	inline FixupHolderList_t438393606 ** get_address_of_m_missingElements_6() { return &___m_missingElements_6; }
	inline void set_m_missingElements_6(FixupHolderList_t438393606 * value)
	{
		___m_missingElements_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_missingElements_6), value);
	}

	inline static int32_t get_offset_of_m_dependentObjects_7() { return static_cast<int32_t>(offsetof(ObjectHolder_t2992553423, ___m_dependentObjects_7)); }
	inline LongList_t2406893678 * get_m_dependentObjects_7() const { return ___m_dependentObjects_7; }
	inline LongList_t2406893678 ** get_address_of_m_dependentObjects_7() { return &___m_dependentObjects_7; }
	inline void set_m_dependentObjects_7(LongList_t2406893678 * value)
	{
		___m_dependentObjects_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_dependentObjects_7), value);
	}

	inline static int32_t get_offset_of_m_next_8() { return static_cast<int32_t>(offsetof(ObjectHolder_t2992553423, ___m_next_8)); }
	inline ObjectHolder_t2992553423 * get_m_next_8() const { return ___m_next_8; }
	inline ObjectHolder_t2992553423 ** get_address_of_m_next_8() { return &___m_next_8; }
	inline void set_m_next_8(ObjectHolder_t2992553423 * value)
	{
		___m_next_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_next_8), value);
	}

	inline static int32_t get_offset_of_m_flags_9() { return static_cast<int32_t>(offsetof(ObjectHolder_t2992553423, ___m_flags_9)); }
	inline int32_t get_m_flags_9() const { return ___m_flags_9; }
	inline int32_t* get_address_of_m_flags_9() { return &___m_flags_9; }
	inline void set_m_flags_9(int32_t value)
	{
		___m_flags_9 = value;
	}

	inline static int32_t get_offset_of_m_markForFixupWhenAvailable_10() { return static_cast<int32_t>(offsetof(ObjectHolder_t2992553423, ___m_markForFixupWhenAvailable_10)); }
	inline bool get_m_markForFixupWhenAvailable_10() const { return ___m_markForFixupWhenAvailable_10; }
	inline bool* get_address_of_m_markForFixupWhenAvailable_10() { return &___m_markForFixupWhenAvailable_10; }
	inline void set_m_markForFixupWhenAvailable_10(bool value)
	{
		___m_markForFixupWhenAvailable_10 = value;
	}

	inline static int32_t get_offset_of_m_valueFixup_11() { return static_cast<int32_t>(offsetof(ObjectHolder_t2992553423, ___m_valueFixup_11)); }
	inline ValueTypeFixupInfo_t1676793155 * get_m_valueFixup_11() const { return ___m_valueFixup_11; }
	inline ValueTypeFixupInfo_t1676793155 ** get_address_of_m_valueFixup_11() { return &___m_valueFixup_11; }
	inline void set_m_valueFixup_11(ValueTypeFixupInfo_t1676793155 * value)
	{
		___m_valueFixup_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_valueFixup_11), value);
	}

	inline static int32_t get_offset_of_m_typeLoad_12() { return static_cast<int32_t>(offsetof(ObjectHolder_t2992553423, ___m_typeLoad_12)); }
	inline TypeLoadExceptionHolder_t427439951 * get_m_typeLoad_12() const { return ___m_typeLoad_12; }
	inline TypeLoadExceptionHolder_t427439951 ** get_address_of_m_typeLoad_12() { return &___m_typeLoad_12; }
	inline void set_m_typeLoad_12(TypeLoadExceptionHolder_t427439951 * value)
	{
		___m_typeLoad_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_typeLoad_12), value);
	}

	inline static int32_t get_offset_of_m_reachable_13() { return static_cast<int32_t>(offsetof(ObjectHolder_t2992553423, ___m_reachable_13)); }
	inline bool get_m_reachable_13() const { return ___m_reachable_13; }
	inline bool* get_address_of_m_reachable_13() { return &___m_reachable_13; }
	inline void set_m_reachable_13(bool value)
	{
		___m_reachable_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTHOLDER_T2992553423_H
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
#ifndef ASYMMETRICALGORITHM_T784058677_H
#define ASYMMETRICALGORITHM_T784058677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t784058677  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t1153004758* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t784058677, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t784058677, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t1153004758* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t1153004758** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t1153004758* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T784058677_H
#ifndef MASKGENERATIONMETHOD_T649190171_H
#define MASKGENERATIONMETHOD_T649190171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MaskGenerationMethod
struct  MaskGenerationMethod_t649190171  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKGENERATIONMETHOD_T649190171_H
#ifndef HASHALGORITHM_T2624936259_H
#define HASHALGORITHM_T2624936259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t2624936259  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_0;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t3397334013* ___HashValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::m_bDisposed
	bool ___m_bDisposed_3;

public:
	inline static int32_t get_offset_of_HashSizeValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2624936259, ___HashSizeValue_0)); }
	inline int32_t get_HashSizeValue_0() const { return ___HashSizeValue_0; }
	inline int32_t* get_address_of_HashSizeValue_0() { return &___HashSizeValue_0; }
	inline void set_HashSizeValue_0(int32_t value)
	{
		___HashSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_HashValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2624936259, ___HashValue_1)); }
	inline ByteU5BU5D_t3397334013* get_HashValue_1() const { return ___HashValue_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_HashValue_1() { return &___HashValue_1; }
	inline void set_HashValue_1(ByteU5BU5D_t3397334013* value)
	{
		___HashValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_1), value);
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2624936259, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_m_bDisposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2624936259, ___m_bDisposed_3)); }
	inline bool get_m_bDisposed_3() const { return ___m_bDisposed_3; }
	inline bool* get_address_of_m_bDisposed_3() { return &___m_bDisposed_3; }
	inline void set_m_bDisposed_3(bool value)
	{
		___m_bDisposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T2624936259_H
#ifndef ATTRIBUTE_T542643598_H
#define ATTRIBUTE_T542643598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t542643598  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T542643598_H
#ifndef EXCEPTION_T1927440687_H
#define EXCEPTION_T1927440687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1927440687  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t1927440687 * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t1975884510 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t2217612696* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t169632028* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____innerException_4)); }
	inline Exception_t1927440687 * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t1927440687 ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t1927440687 * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t1975884510 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t1975884510 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t1975884510 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t2217612696* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t2217612696** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t2217612696* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t169632028* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t169632028** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t169632028* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t1927440687_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t1927440687_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t1927440687_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t1927440687_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t1975884510 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t2217612696* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t1927440687_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t1927440687_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t1975884510 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t2217612696* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T1927440687_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T3339648384_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T3339648384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t3339648384  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T3339648384_H
#ifndef EVENTARGS_T3289624707_H
#define EVENTARGS_T3289624707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3289624707  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3289624707_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3289624707 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3289624707_StaticFields, ___Empty_0)); }
	inline EventArgs_t3289624707 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3289624707 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3289624707 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3289624707_H
#ifndef BINARYOBJECTSTRING_T2307902425_H
#define BINARYOBJECTSTRING_T2307902425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryObjectString
struct  BinaryObjectString_t2307902425  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.BinaryObjectString::objectId
	int32_t ___objectId_0;
	// System.String System.Runtime.Serialization.Formatters.Binary.BinaryObjectString::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_objectId_0() { return static_cast<int32_t>(offsetof(BinaryObjectString_t2307902425, ___objectId_0)); }
	inline int32_t get_objectId_0() const { return ___objectId_0; }
	inline int32_t* get_address_of_objectId_0() { return &___objectId_0; }
	inline void set_objectId_0(int32_t value)
	{
		___objectId_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(BinaryObjectString_t2307902425, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYOBJECTSTRING_T2307902425_H
#ifndef BINARYCONVERTER_T3092009747_H
#define BINARYCONVERTER_T3092009747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryConverter
struct  BinaryConverter_t3092009747  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYCONVERTER_T3092009747_H
#ifndef IOUTIL_T1159771836_H
#define IOUTIL_T1159771836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.IOUtil
struct  IOUtil_t1159771836  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOUTIL_T1159771836_H
#ifndef SERIALIZATIONINFOENUMERATOR_T589103770_H
#define SERIALIZATIONINFOENUMERATOR_T589103770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfoEnumerator
struct  SerializationInfoEnumerator_t589103770  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfoEnumerator::m_members
	StringU5BU5D_t1642385972* ___m_members_0;
	// System.Object[] System.Runtime.Serialization.SerializationInfoEnumerator::m_data
	ObjectU5BU5D_t3614634134* ___m_data_1;
	// System.Type[] System.Runtime.Serialization.SerializationInfoEnumerator::m_types
	TypeU5BU5D_t1664964607* ___m_types_2;
	// System.Int32 System.Runtime.Serialization.SerializationInfoEnumerator::m_numItems
	int32_t ___m_numItems_3;
	// System.Int32 System.Runtime.Serialization.SerializationInfoEnumerator::m_currItem
	int32_t ___m_currItem_4;
	// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::m_current
	bool ___m_current_5;

public:
	inline static int32_t get_offset_of_m_members_0() { return static_cast<int32_t>(offsetof(SerializationInfoEnumerator_t589103770, ___m_members_0)); }
	inline StringU5BU5D_t1642385972* get_m_members_0() const { return ___m_members_0; }
	inline StringU5BU5D_t1642385972** get_address_of_m_members_0() { return &___m_members_0; }
	inline void set_m_members_0(StringU5BU5D_t1642385972* value)
	{
		___m_members_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_members_0), value);
	}

	inline static int32_t get_offset_of_m_data_1() { return static_cast<int32_t>(offsetof(SerializationInfoEnumerator_t589103770, ___m_data_1)); }
	inline ObjectU5BU5D_t3614634134* get_m_data_1() const { return ___m_data_1; }
	inline ObjectU5BU5D_t3614634134** get_address_of_m_data_1() { return &___m_data_1; }
	inline void set_m_data_1(ObjectU5BU5D_t3614634134* value)
	{
		___m_data_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_data_1), value);
	}

	inline static int32_t get_offset_of_m_types_2() { return static_cast<int32_t>(offsetof(SerializationInfoEnumerator_t589103770, ___m_types_2)); }
	inline TypeU5BU5D_t1664964607* get_m_types_2() const { return ___m_types_2; }
	inline TypeU5BU5D_t1664964607** get_address_of_m_types_2() { return &___m_types_2; }
	inline void set_m_types_2(TypeU5BU5D_t1664964607* value)
	{
		___m_types_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_types_2), value);
	}

	inline static int32_t get_offset_of_m_numItems_3() { return static_cast<int32_t>(offsetof(SerializationInfoEnumerator_t589103770, ___m_numItems_3)); }
	inline int32_t get_m_numItems_3() const { return ___m_numItems_3; }
	inline int32_t* get_address_of_m_numItems_3() { return &___m_numItems_3; }
	inline void set_m_numItems_3(int32_t value)
	{
		___m_numItems_3 = value;
	}

	inline static int32_t get_offset_of_m_currItem_4() { return static_cast<int32_t>(offsetof(SerializationInfoEnumerator_t589103770, ___m_currItem_4)); }
	inline int32_t get_m_currItem_4() const { return ___m_currItem_4; }
	inline int32_t* get_address_of_m_currItem_4() { return &___m_currItem_4; }
	inline void set_m_currItem_4(int32_t value)
	{
		___m_currItem_4 = value;
	}

	inline static int32_t get_offset_of_m_current_5() { return static_cast<int32_t>(offsetof(SerializationInfoEnumerator_t589103770, ___m_current_5)); }
	inline bool get_m_current_5() const { return ___m_current_5; }
	inline bool* get_address_of_m_current_5() { return &___m_current_5; }
	inline void set_m_current_5(bool value)
	{
		___m_current_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFOENUMERATOR_T589103770_H
#ifndef VALUETYPEFIXUPINFO_T1676793155_H
#define VALUETYPEFIXUPINFO_T1676793155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ValueTypeFixupInfo
struct  ValueTypeFixupInfo_t1676793155  : public RuntimeObject
{
public:
	// System.Int64 System.Runtime.Serialization.ValueTypeFixupInfo::m_containerID
	int64_t ___m_containerID_0;
	// System.Reflection.FieldInfo System.Runtime.Serialization.ValueTypeFixupInfo::m_parentField
	FieldInfo_t * ___m_parentField_1;
	// System.Int32[] System.Runtime.Serialization.ValueTypeFixupInfo::m_parentIndex
	Int32U5BU5D_t3030399641* ___m_parentIndex_2;

public:
	inline static int32_t get_offset_of_m_containerID_0() { return static_cast<int32_t>(offsetof(ValueTypeFixupInfo_t1676793155, ___m_containerID_0)); }
	inline int64_t get_m_containerID_0() const { return ___m_containerID_0; }
	inline int64_t* get_address_of_m_containerID_0() { return &___m_containerID_0; }
	inline void set_m_containerID_0(int64_t value)
	{
		___m_containerID_0 = value;
	}

	inline static int32_t get_offset_of_m_parentField_1() { return static_cast<int32_t>(offsetof(ValueTypeFixupInfo_t1676793155, ___m_parentField_1)); }
	inline FieldInfo_t * get_m_parentField_1() const { return ___m_parentField_1; }
	inline FieldInfo_t ** get_address_of_m_parentField_1() { return &___m_parentField_1; }
	inline void set_m_parentField_1(FieldInfo_t * value)
	{
		___m_parentField_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_parentField_1), value);
	}

	inline static int32_t get_offset_of_m_parentIndex_2() { return static_cast<int32_t>(offsetof(ValueTypeFixupInfo_t1676793155, ___m_parentIndex_2)); }
	inline Int32U5BU5D_t3030399641* get_m_parentIndex_2() const { return ___m_parentIndex_2; }
	inline Int32U5BU5D_t3030399641** get_address_of_m_parentIndex_2() { return &___m_parentIndex_2; }
	inline void set_m_parentIndex_2(Int32U5BU5D_t3030399641* value)
	{
		___m_parentIndex_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_parentIndex_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUETYPEFIXUPINFO_T1676793155_H
#ifndef BINARYCROSSAPPDOMAINASSEMBLY_T3309678508_H
#define BINARYCROSSAPPDOMAINASSEMBLY_T3309678508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainAssembly
struct  BinaryCrossAppDomainAssembly_t3309678508  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainAssembly::assemId
	int32_t ___assemId_0;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainAssembly::assemblyIndex
	int32_t ___assemblyIndex_1;

public:
	inline static int32_t get_offset_of_assemId_0() { return static_cast<int32_t>(offsetof(BinaryCrossAppDomainAssembly_t3309678508, ___assemId_0)); }
	inline int32_t get_assemId_0() const { return ___assemId_0; }
	inline int32_t* get_address_of_assemId_0() { return &___assemId_0; }
	inline void set_assemId_0(int32_t value)
	{
		___assemId_0 = value;
	}

	inline static int32_t get_offset_of_assemblyIndex_1() { return static_cast<int32_t>(offsetof(BinaryCrossAppDomainAssembly_t3309678508, ___assemblyIndex_1)); }
	inline int32_t get_assemblyIndex_1() const { return ___assemblyIndex_1; }
	inline int32_t* get_address_of_assemblyIndex_1() { return &___assemblyIndex_1; }
	inline void set_assemblyIndex_1(int32_t value)
	{
		___assemblyIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYCROSSAPPDOMAINASSEMBLY_T3309678508_H
#ifndef BINARYOBJECT_T763496928_H
#define BINARYOBJECT_T763496928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryObject
struct  BinaryObject_t763496928  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.BinaryObject::objectId
	int32_t ___objectId_0;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.BinaryObject::mapId
	int32_t ___mapId_1;

public:
	inline static int32_t get_offset_of_objectId_0() { return static_cast<int32_t>(offsetof(BinaryObject_t763496928, ___objectId_0)); }
	inline int32_t get_objectId_0() const { return ___objectId_0; }
	inline int32_t* get_address_of_objectId_0() { return &___objectId_0; }
	inline void set_objectId_0(int32_t value)
	{
		___objectId_0 = value;
	}

	inline static int32_t get_offset_of_mapId_1() { return static_cast<int32_t>(offsetof(BinaryObject_t763496928, ___mapId_1)); }
	inline int32_t get_mapId_1() const { return ___mapId_1; }
	inline int32_t* get_address_of_mapId_1() { return &___mapId_1; }
	inline void set_mapId_1(int32_t value)
	{
		___mapId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYOBJECT_T763496928_H
#ifndef BINARYASSEMBLYINFO_T316080507_H
#define BINARYASSEMBLYINFO_T316080507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo
struct  BinaryAssemblyInfo_t316080507  : public RuntimeObject
{
public:
	// System.String System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo::assemblyString
	String_t* ___assemblyString_0;
	// System.Reflection.Assembly System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo::assembly
	Assembly_t4268412390 * ___assembly_1;

public:
	inline static int32_t get_offset_of_assemblyString_0() { return static_cast<int32_t>(offsetof(BinaryAssemblyInfo_t316080507, ___assemblyString_0)); }
	inline String_t* get_assemblyString_0() const { return ___assemblyString_0; }
	inline String_t** get_address_of_assemblyString_0() { return &___assemblyString_0; }
	inline void set_assemblyString_0(String_t* value)
	{
		___assemblyString_0 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyString_0), value);
	}

	inline static int32_t get_offset_of_assembly_1() { return static_cast<int32_t>(offsetof(BinaryAssemblyInfo_t316080507, ___assembly_1)); }
	inline Assembly_t4268412390 * get_assembly_1() const { return ___assembly_1; }
	inline Assembly_t4268412390 ** get_address_of_assembly_1() { return &___assembly_1; }
	inline void set_assembly_1(Assembly_t4268412390 * value)
	{
		___assembly_1 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYASSEMBLYINFO_T316080507_H
#ifndef BINARYASSEMBLY_T3375684671_H
#define BINARYASSEMBLY_T3375684671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryAssembly
struct  BinaryAssembly_t3375684671  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.BinaryAssembly::assemId
	int32_t ___assemId_0;
	// System.String System.Runtime.Serialization.Formatters.Binary.BinaryAssembly::assemblyString
	String_t* ___assemblyString_1;

public:
	inline static int32_t get_offset_of_assemId_0() { return static_cast<int32_t>(offsetof(BinaryAssembly_t3375684671, ___assemId_0)); }
	inline int32_t get_assemId_0() const { return ___assemId_0; }
	inline int32_t* get_address_of_assemId_0() { return &___assemId_0; }
	inline void set_assemId_0(int32_t value)
	{
		___assemId_0 = value;
	}

	inline static int32_t get_offset_of_assemblyString_1() { return static_cast<int32_t>(offsetof(BinaryAssembly_t3375684671, ___assemblyString_1)); }
	inline String_t* get_assemblyString_1() const { return ___assemblyString_1; }
	inline String_t** get_address_of_assemblyString_1() { return &___assemblyString_1; }
	inline void set_assemblyString_1(String_t* value)
	{
		___assemblyString_1 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYASSEMBLY_T3375684671_H
#ifndef X509CERTIFICATE_T283079845_H
#define X509CERTIFICATE_T283079845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t283079845  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_t3842064707 * ___impl_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_3;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(X509Certificate_t283079845, ___impl_0)); }
	inline X509CertificateImpl_t3842064707 * get_impl_0() const { return ___impl_0; }
	inline X509CertificateImpl_t3842064707 ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(X509CertificateImpl_t3842064707 * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier((&___impl_0), value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t283079845, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_issuer_name_2() { return static_cast<int32_t>(offsetof(X509Certificate_t283079845, ___issuer_name_2)); }
	inline String_t* get_issuer_name_2() const { return ___issuer_name_2; }
	inline String_t** get_address_of_issuer_name_2() { return &___issuer_name_2; }
	inline void set_issuer_name_2(String_t* value)
	{
		___issuer_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_2), value);
	}

	inline static int32_t get_offset_of_subject_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t283079845, ___subject_name_3)); }
	inline String_t* get_subject_name_3() const { return ___subject_name_3; }
	inline String_t** get_address_of_subject_name_3() { return &___subject_name_3; }
	inline void set_subject_name_3(String_t* value)
	{
		___subject_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T283079845_H
#ifndef RANDOMNUMBERGENERATOR_T2510243513_H
#define RANDOMNUMBERGENERATOR_T2510243513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t2510243513  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMNUMBERGENERATOR_T2510243513_H
#ifndef SIGNATUREDESCRIPTION_T89145500_H
#define SIGNATUREDESCRIPTION_T89145500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SignatureDescription
struct  SignatureDescription_t89145500  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.SignatureDescription::_strKey
	String_t* ____strKey_0;
	// System.String System.Security.Cryptography.SignatureDescription::_strDigest
	String_t* ____strDigest_1;
	// System.String System.Security.Cryptography.SignatureDescription::_strFormatter
	String_t* ____strFormatter_2;
	// System.String System.Security.Cryptography.SignatureDescription::_strDeformatter
	String_t* ____strDeformatter_3;

public:
	inline static int32_t get_offset_of__strKey_0() { return static_cast<int32_t>(offsetof(SignatureDescription_t89145500, ____strKey_0)); }
	inline String_t* get__strKey_0() const { return ____strKey_0; }
	inline String_t** get_address_of__strKey_0() { return &____strKey_0; }
	inline void set__strKey_0(String_t* value)
	{
		____strKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____strKey_0), value);
	}

	inline static int32_t get_offset_of__strDigest_1() { return static_cast<int32_t>(offsetof(SignatureDescription_t89145500, ____strDigest_1)); }
	inline String_t* get__strDigest_1() const { return ____strDigest_1; }
	inline String_t** get_address_of__strDigest_1() { return &____strDigest_1; }
	inline void set__strDigest_1(String_t* value)
	{
		____strDigest_1 = value;
		Il2CppCodeGenWriteBarrier((&____strDigest_1), value);
	}

	inline static int32_t get_offset_of__strFormatter_2() { return static_cast<int32_t>(offsetof(SignatureDescription_t89145500, ____strFormatter_2)); }
	inline String_t* get__strFormatter_2() const { return ____strFormatter_2; }
	inline String_t** get_address_of__strFormatter_2() { return &____strFormatter_2; }
	inline void set__strFormatter_2(String_t* value)
	{
		____strFormatter_2 = value;
		Il2CppCodeGenWriteBarrier((&____strFormatter_2), value);
	}

	inline static int32_t get_offset_of__strDeformatter_3() { return static_cast<int32_t>(offsetof(SignatureDescription_t89145500, ____strDeformatter_3)); }
	inline String_t* get__strDeformatter_3() const { return ____strDeformatter_3; }
	inline String_t** get_address_of__strDeformatter_3() { return &____strDeformatter_3; }
	inline void set__strDeformatter_3(String_t* value)
	{
		____strDeformatter_3 = value;
		Il2CppCodeGenWriteBarrier((&____strDeformatter_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNATUREDESCRIPTION_T89145500_H
#ifndef UTILS_T1602189171_H
#define UTILS_T1602189171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Utils
struct  Utils_t1602189171  : public RuntimeObject
{
public:

public:
};

struct Utils_t1602189171_StaticFields
{
public:
	// System.Security.Cryptography.RNGCryptoServiceProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.Utils::_rng
	RNGCryptoServiceProvider_t2688843926 * ____rng_0;

public:
	inline static int32_t get_offset_of__rng_0() { return static_cast<int32_t>(offsetof(Utils_t1602189171_StaticFields, ____rng_0)); }
	inline RNGCryptoServiceProvider_t2688843926 * get__rng_0() const { return ____rng_0; }
	inline RNGCryptoServiceProvider_t2688843926 ** get_address_of__rng_0() { return &____rng_0; }
	inline void set__rng_0(RNGCryptoServiceProvider_t2688843926 * value)
	{
		____rng_0 = value;
		Il2CppCodeGenWriteBarrier((&____rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILS_T1602189171_H
#ifndef OBJECTHOLDERLISTENUMERATOR_T1434580149_H
#define OBJECTHOLDERLISTENUMERATOR_T1434580149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectHolderListEnumerator
struct  ObjectHolderListEnumerator_t1434580149  : public RuntimeObject
{
public:
	// System.Boolean System.Runtime.Serialization.ObjectHolderListEnumerator::m_isFixupEnumerator
	bool ___m_isFixupEnumerator_0;
	// System.Runtime.Serialization.ObjectHolderList System.Runtime.Serialization.ObjectHolderListEnumerator::m_list
	ObjectHolderList_t1856843635 * ___m_list_1;
	// System.Int32 System.Runtime.Serialization.ObjectHolderListEnumerator::m_startingVersion
	int32_t ___m_startingVersion_2;
	// System.Int32 System.Runtime.Serialization.ObjectHolderListEnumerator::m_currPos
	int32_t ___m_currPos_3;

public:
	inline static int32_t get_offset_of_m_isFixupEnumerator_0() { return static_cast<int32_t>(offsetof(ObjectHolderListEnumerator_t1434580149, ___m_isFixupEnumerator_0)); }
	inline bool get_m_isFixupEnumerator_0() const { return ___m_isFixupEnumerator_0; }
	inline bool* get_address_of_m_isFixupEnumerator_0() { return &___m_isFixupEnumerator_0; }
	inline void set_m_isFixupEnumerator_0(bool value)
	{
		___m_isFixupEnumerator_0 = value;
	}

	inline static int32_t get_offset_of_m_list_1() { return static_cast<int32_t>(offsetof(ObjectHolderListEnumerator_t1434580149, ___m_list_1)); }
	inline ObjectHolderList_t1856843635 * get_m_list_1() const { return ___m_list_1; }
	inline ObjectHolderList_t1856843635 ** get_address_of_m_list_1() { return &___m_list_1; }
	inline void set_m_list_1(ObjectHolderList_t1856843635 * value)
	{
		___m_list_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_list_1), value);
	}

	inline static int32_t get_offset_of_m_startingVersion_2() { return static_cast<int32_t>(offsetof(ObjectHolderListEnumerator_t1434580149, ___m_startingVersion_2)); }
	inline int32_t get_m_startingVersion_2() const { return ___m_startingVersion_2; }
	inline int32_t* get_address_of_m_startingVersion_2() { return &___m_startingVersion_2; }
	inline void set_m_startingVersion_2(int32_t value)
	{
		___m_startingVersion_2 = value;
	}

	inline static int32_t get_offset_of_m_currPos_3() { return static_cast<int32_t>(offsetof(ObjectHolderListEnumerator_t1434580149, ___m_currPos_3)); }
	inline int32_t get_m_currPos_3() const { return ___m_currPos_3; }
	inline int32_t* get_address_of_m_currPos_3() { return &___m_currPos_3; }
	inline void set_m_currPos_3(int32_t value)
	{
		___m_currPos_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTHOLDERLISTENUMERATOR_T1434580149_H
#ifndef SHA256_T582564463_H
#define SHA256_T582564463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256
struct  SHA256_t582564463  : public HashAlgorithm_t2624936259
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256_T582564463_H
#ifndef SERIALIZATIONENTRY_T3485203212_H
#define SERIALIZATIONENTRY_T3485203212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationEntry
struct  SerializationEntry_t3485203212 
{
public:
	// System.Type System.Runtime.Serialization.SerializationEntry::m_type
	Type_t * ___m_type_0;
	// System.Object System.Runtime.Serialization.SerializationEntry::m_value
	RuntimeObject * ___m_value_1;
	// System.String System.Runtime.Serialization.SerializationEntry::m_name
	String_t* ___m_name_2;

public:
	inline static int32_t get_offset_of_m_type_0() { return static_cast<int32_t>(offsetof(SerializationEntry_t3485203212, ___m_type_0)); }
	inline Type_t * get_m_type_0() const { return ___m_type_0; }
	inline Type_t ** get_address_of_m_type_0() { return &___m_type_0; }
	inline void set_m_type_0(Type_t * value)
	{
		___m_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_type_0), value);
	}

	inline static int32_t get_offset_of_m_value_1() { return static_cast<int32_t>(offsetof(SerializationEntry_t3485203212, ___m_value_1)); }
	inline RuntimeObject * get_m_value_1() const { return ___m_value_1; }
	inline RuntimeObject ** get_address_of_m_value_1() { return &___m_value_1; }
	inline void set_m_value_1(RuntimeObject * value)
	{
		___m_value_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_value_1), value);
	}

	inline static int32_t get_offset_of_m_name_2() { return static_cast<int32_t>(offsetof(SerializationEntry_t3485203212, ___m_name_2)); }
	inline String_t* get_m_name_2() const { return ___m_name_2; }
	inline String_t** get_address_of_m_name_2() { return &___m_name_2; }
	inline void set_m_name_2(String_t* value)
	{
		___m_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t3485203212_marshaled_pinvoke
{
	Type_t * ___m_type_0;
	Il2CppIUnknown* ___m_value_1;
	char* ___m_name_2;
};
// Native definition for COM marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t3485203212_marshaled_com
{
	Type_t * ___m_type_0;
	Il2CppIUnknown* ___m_value_1;
	Il2CppChar* ___m_name_2;
};
#endif // SERIALIZATIONENTRY_T3485203212_H
#ifndef PKCS1MASKGENERATIONMETHOD_T3159630323_H
#define PKCS1MASKGENERATIONMETHOD_T3159630323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PKCS1MaskGenerationMethod
struct  PKCS1MaskGenerationMethod_t3159630323  : public MaskGenerationMethod_t649190171
{
public:
	// System.String System.Security.Cryptography.PKCS1MaskGenerationMethod::HashNameValue
	String_t* ___HashNameValue_0;

public:
	inline static int32_t get_offset_of_HashNameValue_0() { return static_cast<int32_t>(offsetof(PKCS1MaskGenerationMethod_t3159630323, ___HashNameValue_0)); }
	inline String_t* get_HashNameValue_0() const { return ___HashNameValue_0; }
	inline String_t** get_address_of_HashNameValue_0() { return &___HashNameValue_0; }
	inline void set_HashNameValue_0(String_t* value)
	{
		___HashNameValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashNameValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1MASKGENERATIONMETHOD_T3159630323_H
#ifndef SHA1_T3336793149_H
#define SHA1_T3336793149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1
struct  SHA1_t3336793149  : public HashAlgorithm_t2624936259
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1_T3336793149_H
#ifndef SHA384_T535510267_H
#define SHA384_T535510267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384
struct  SHA384_t535510267  : public HashAlgorithm_t2624936259
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384_T535510267_H
#ifndef ONSERIALIZEDATTRIBUTE_T3742956097_H
#define ONSERIALIZEDATTRIBUTE_T3742956097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializedAttribute
struct  OnSerializedAttribute_t3742956097  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZEDATTRIBUTE_T3742956097_H
#ifndef ONSERIALIZINGATTRIBUTE_T2011372116_H
#define ONSERIALIZINGATTRIBUTE_T2011372116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializingAttribute
struct  OnSerializingAttribute_t2011372116  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZINGATTRIBUTE_T2011372116_H
#ifndef ONDESERIALIZEDATTRIBUTE_T3172265744_H
#define ONDESERIALIZEDATTRIBUTE_T3172265744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializedAttribute
struct  OnDeserializedAttribute_t3172265744  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZEDATTRIBUTE_T3172265744_H
#ifndef ONDESERIALIZINGATTRIBUTE_T484921187_H
#define ONDESERIALIZINGATTRIBUTE_T484921187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializingAttribute
struct  OnDeserializingAttribute_t484921187  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZINGATTRIBUTE_T484921187_H
#ifndef RSA_T3719518354_H
#define RSA_T3719518354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t3719518354  : public AsymmetricAlgorithm_t784058677
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T3719518354_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1841601450__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
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
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef SYSTEMEXCEPTION_T3877406272_H
#define SYSTEMEXCEPTION_T3877406272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3877406272  : public Exception_t1927440687
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3877406272_H
#ifndef RIPEMD160_T1732039966_H
#define RIPEMD160_T1732039966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160
struct  RIPEMD160_t1732039966  : public HashAlgorithm_t2624936259
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160_T1732039966_H
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
#ifndef HASHALGORITHMNAME_T1682985260_H
#define HASHALGORITHMNAME_T1682985260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithmName
struct  HashAlgorithmName_t1682985260 
{
public:
	// System.String System.Security.Cryptography.HashAlgorithmName::_name
	String_t* ____name_0;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(HashAlgorithmName_t1682985260, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.HashAlgorithmName
struct HashAlgorithmName_t1682985260_marshaled_pinvoke
{
	char* ____name_0;
};
// Native definition for COM marshalling of System.Security.Cryptography.HashAlgorithmName
struct HashAlgorithmName_t1682985260_marshaled_com
{
	Il2CppChar* ____name_0;
};
#endif // HASHALGORITHMNAME_T1682985260_H
#ifndef NULLABLE_1_T2088641033_H
#define NULLABLE_1_T2088641033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t2088641033 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2088641033, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2088641033, ___has_value_1)); }
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
#endif // NULLABLE_1_T2088641033_H
#ifndef OPTIONALFIELDATTRIBUTE_T124318366_H
#define OPTIONALFIELDATTRIBUTE_T124318366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OptionalFieldAttribute
struct  OptionalFieldAttribute_t124318366  : public Attribute_t542643598
{
public:
	// System.Int32 System.Runtime.Serialization.OptionalFieldAttribute::versionAdded
	int32_t ___versionAdded_0;

public:
	inline static int32_t get_offset_of_versionAdded_0() { return static_cast<int32_t>(offsetof(OptionalFieldAttribute_t124318366, ___versionAdded_0)); }
	inline int32_t get_versionAdded_0() const { return ___versionAdded_0; }
	inline int32_t* get_address_of_versionAdded_0() { return &___versionAdded_0; }
	inline void set_versionAdded_0(int32_t value)
	{
		___versionAdded_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIONALFIELDATTRIBUTE_T124318366_H
#ifndef RSAPKCS1SIGNATUREDESCRIPTION_T2452358846_H
#define RSAPKCS1SIGNATUREDESCRIPTION_T2452358846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureDescription
struct  RSAPKCS1SignatureDescription_t2452358846  : public SignatureDescription_t89145500
{
public:
	// System.String System.Security.Cryptography.RSAPKCS1SignatureDescription::_hashAlgorithm
	String_t* ____hashAlgorithm_4;

public:
	inline static int32_t get_offset_of__hashAlgorithm_4() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDescription_t2452358846, ____hashAlgorithm_4)); }
	inline String_t* get__hashAlgorithm_4() const { return ____hashAlgorithm_4; }
	inline String_t** get_address_of__hashAlgorithm_4() { return &____hashAlgorithm_4; }
	inline void set__hashAlgorithm_4(String_t* value)
	{
		____hashAlgorithm_4 = value;
		Il2CppCodeGenWriteBarrier((&____hashAlgorithm_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREDESCRIPTION_T2452358846_H
#ifndef X509CERTIFICATEIMPLMONO_T2148381192_H
#define X509CERTIFICATEIMPLMONO_T2148381192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509CertificateImplMono
struct  X509CertificateImplMono_t2148381192  : public X509CertificateImpl_t3842064707
{
public:
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateImplMono::x509
	X509Certificate_t324051957 * ___x509_1;

public:
	inline static int32_t get_offset_of_x509_1() { return static_cast<int32_t>(offsetof(X509CertificateImplMono_t2148381192, ___x509_1)); }
	inline X509Certificate_t324051957 * get_x509_1() const { return ___x509_1; }
	inline X509Certificate_t324051957 ** get_address_of_x509_1() { return &___x509_1; }
	inline void set_x509_1(X509Certificate_t324051957 * value)
	{
		___x509_1 = value;
		Il2CppCodeGenWriteBarrier((&___x509_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEIMPLMONO_T2148381192_H
#ifndef DSASIGNATUREDESCRIPTION_T1998527418_H
#define DSASIGNATUREDESCRIPTION_T1998527418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDescription
struct  DSASignatureDescription_t1998527418  : public SignatureDescription_t89145500
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDESCRIPTION_T1998527418_H
#ifndef SHA512_T2908163326_H
#define SHA512_T2908163326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512
struct  SHA512_t2908163326  : public HashAlgorithm_t2624936259
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512_T2908163326_H
#ifndef RSAOAEPKEYEXCHANGEFORMATTER_T3166320901_H
#define RSAOAEPKEYEXCHANGEFORMATTER_T3166320901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAOAEPKeyExchangeFormatter
struct  RSAOAEPKeyExchangeFormatter_t3166320901  : public AsymmetricKeyExchangeFormatter_t3339648384
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::_rsaKey
	RSA_t3719518354 * ____rsaKey_0;
	// System.Nullable`1<System.Boolean> System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::_rsaOverridesEncrypt
	Nullable_1_t2088641033  ____rsaOverridesEncrypt_1;

public:
	inline static int32_t get_offset_of__rsaKey_0() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t3166320901, ____rsaKey_0)); }
	inline RSA_t3719518354 * get__rsaKey_0() const { return ____rsaKey_0; }
	inline RSA_t3719518354 ** get_address_of__rsaKey_0() { return &____rsaKey_0; }
	inline void set__rsaKey_0(RSA_t3719518354 * value)
	{
		____rsaKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____rsaKey_0), value);
	}

	inline static int32_t get_offset_of__rsaOverridesEncrypt_1() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t3166320901, ____rsaOverridesEncrypt_1)); }
	inline Nullable_1_t2088641033  get__rsaOverridesEncrypt_1() const { return ____rsaOverridesEncrypt_1; }
	inline Nullable_1_t2088641033 * get_address_of__rsaOverridesEncrypt_1() { return &____rsaOverridesEncrypt_1; }
	inline void set__rsaOverridesEncrypt_1(Nullable_1_t2088641033  value)
	{
		____rsaOverridesEncrypt_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAOAEPKEYEXCHANGEFORMATTER_T3166320901_H
#ifndef X509KEYSTORAGEFLAGS_T1216946873_H
#define X509KEYSTORAGEFLAGS_T1216946873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
struct  X509KeyStorageFlags_t1216946873 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509KeyStorageFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509KeyStorageFlags_t1216946873, ___value___2)); }
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
#endif // X509KEYSTORAGEFLAGS_T1216946873_H
#ifndef MESSAGEENUM_T1992316134_H
#define MESSAGEENUM_T1992316134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MessageEnum
struct  MessageEnum_t1992316134 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.MessageEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageEnum_t1992316134, ___value___2)); }
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
#endif // MESSAGEENUM_T1992316134_H
#ifndef RSAENCRYPTIONPADDINGMODE_T4275626723_H
#define RSAENCRYPTIONPADDINGMODE_T4275626723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAEncryptionPaddingMode
struct  RSAEncryptionPaddingMode_t4275626723 
{
public:
	// System.Int32 System.Security.Cryptography.RSAEncryptionPaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RSAEncryptionPaddingMode_t4275626723, ___value___2)); }
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
#endif // RSAENCRYPTIONPADDINGMODE_T4275626723_H
#ifndef BINARYHEADERENUM_T4279057407_H
#define BINARYHEADERENUM_T4279057407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
struct  BinaryHeaderEnum_t4279057407 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BinaryHeaderEnum_t4279057407, ___value___2)); }
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
#endif // BINARYHEADERENUM_T4279057407_H
#ifndef RSAPKCS1KEYEXCHANGEFORMATTER_T4167037264_H
#define RSAPKCS1KEYEXCHANGEFORMATTER_T4167037264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t4167037264  : public AsymmetricKeyExchangeFormatter_t3339648384
{
public:
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::RngValue
	RandomNumberGenerator_t2510243513 * ___RngValue_0;
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::_rsaKey
	RSA_t3719518354 * ____rsaKey_1;
	// System.Nullable`1<System.Boolean> System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::_rsaOverridesEncrypt
	Nullable_1_t2088641033  ____rsaOverridesEncrypt_2;

public:
	inline static int32_t get_offset_of_RngValue_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t4167037264, ___RngValue_0)); }
	inline RandomNumberGenerator_t2510243513 * get_RngValue_0() const { return ___RngValue_0; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of_RngValue_0() { return &___RngValue_0; }
	inline void set_RngValue_0(RandomNumberGenerator_t2510243513 * value)
	{
		___RngValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___RngValue_0), value);
	}

	inline static int32_t get_offset_of__rsaKey_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t4167037264, ____rsaKey_1)); }
	inline RSA_t3719518354 * get__rsaKey_1() const { return ____rsaKey_1; }
	inline RSA_t3719518354 ** get_address_of__rsaKey_1() { return &____rsaKey_1; }
	inline void set__rsaKey_1(RSA_t3719518354 * value)
	{
		____rsaKey_1 = value;
		Il2CppCodeGenWriteBarrier((&____rsaKey_1), value);
	}

	inline static int32_t get_offset_of__rsaOverridesEncrypt_2() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t4167037264, ____rsaOverridesEncrypt_2)); }
	inline Nullable_1_t2088641033  get__rsaOverridesEncrypt_2() const { return ____rsaOverridesEncrypt_2; }
	inline Nullable_1_t2088641033 * get_address_of__rsaOverridesEncrypt_2() { return &____rsaOverridesEncrypt_2; }
	inline void set__rsaOverridesEncrypt_2(Nullable_1_t2088641033  value)
	{
		____rsaOverridesEncrypt_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEFORMATTER_T4167037264_H
#ifndef CIPHERMODE_T162592484_H
#define CIPHERMODE_T162592484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t162592484 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherMode_t162592484, ___value___2)); }
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
#endif // CIPHERMODE_T162592484_H
#ifndef FORMATTERSERVICES_T3161112612_H
#define FORMATTERSERVICES_T3161112612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterServices
struct  FormatterServices_t3161112612  : public RuntimeObject
{
public:

public:
};

struct FormatterServices_t3161112612_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]> System.Runtime.Serialization.FormatterServices::m_MemberInfoTable
	Dictionary_2_t2672672302 * ___m_MemberInfoTable_0;
	// System.Boolean System.Runtime.Serialization.FormatterServices::unsafeTypeForwardersIsEnabled
	bool ___unsafeTypeForwardersIsEnabled_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.Serialization.FormatterServices::unsafeTypeForwardersIsEnabledInitialized
	bool ___unsafeTypeForwardersIsEnabledInitialized_2;
	// System.Object System.Runtime.Serialization.FormatterServices::s_FormatterServicesSyncObject
	RuntimeObject * ___s_FormatterServicesSyncObject_3;
	// System.Type[] System.Runtime.Serialization.FormatterServices::advancedTypes
	TypeU5BU5D_t1664964607* ___advancedTypes_4;
	// System.Reflection.Binder System.Runtime.Serialization.FormatterServices::s_binder
	Binder_t3404612058 * ___s_binder_5;

public:
	inline static int32_t get_offset_of_m_MemberInfoTable_0() { return static_cast<int32_t>(offsetof(FormatterServices_t3161112612_StaticFields, ___m_MemberInfoTable_0)); }
	inline Dictionary_2_t2672672302 * get_m_MemberInfoTable_0() const { return ___m_MemberInfoTable_0; }
	inline Dictionary_2_t2672672302 ** get_address_of_m_MemberInfoTable_0() { return &___m_MemberInfoTable_0; }
	inline void set_m_MemberInfoTable_0(Dictionary_2_t2672672302 * value)
	{
		___m_MemberInfoTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MemberInfoTable_0), value);
	}

	inline static int32_t get_offset_of_unsafeTypeForwardersIsEnabled_1() { return static_cast<int32_t>(offsetof(FormatterServices_t3161112612_StaticFields, ___unsafeTypeForwardersIsEnabled_1)); }
	inline bool get_unsafeTypeForwardersIsEnabled_1() const { return ___unsafeTypeForwardersIsEnabled_1; }
	inline bool* get_address_of_unsafeTypeForwardersIsEnabled_1() { return &___unsafeTypeForwardersIsEnabled_1; }
	inline void set_unsafeTypeForwardersIsEnabled_1(bool value)
	{
		___unsafeTypeForwardersIsEnabled_1 = value;
	}

	inline static int32_t get_offset_of_unsafeTypeForwardersIsEnabledInitialized_2() { return static_cast<int32_t>(offsetof(FormatterServices_t3161112612_StaticFields, ___unsafeTypeForwardersIsEnabledInitialized_2)); }
	inline bool get_unsafeTypeForwardersIsEnabledInitialized_2() const { return ___unsafeTypeForwardersIsEnabledInitialized_2; }
	inline bool* get_address_of_unsafeTypeForwardersIsEnabledInitialized_2() { return &___unsafeTypeForwardersIsEnabledInitialized_2; }
	inline void set_unsafeTypeForwardersIsEnabledInitialized_2(bool value)
	{
		___unsafeTypeForwardersIsEnabledInitialized_2 = value;
	}

	inline static int32_t get_offset_of_s_FormatterServicesSyncObject_3() { return static_cast<int32_t>(offsetof(FormatterServices_t3161112612_StaticFields, ___s_FormatterServicesSyncObject_3)); }
	inline RuntimeObject * get_s_FormatterServicesSyncObject_3() const { return ___s_FormatterServicesSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_FormatterServicesSyncObject_3() { return &___s_FormatterServicesSyncObject_3; }
	inline void set_s_FormatterServicesSyncObject_3(RuntimeObject * value)
	{
		___s_FormatterServicesSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_FormatterServicesSyncObject_3), value);
	}

	inline static int32_t get_offset_of_advancedTypes_4() { return static_cast<int32_t>(offsetof(FormatterServices_t3161112612_StaticFields, ___advancedTypes_4)); }
	inline TypeU5BU5D_t1664964607* get_advancedTypes_4() const { return ___advancedTypes_4; }
	inline TypeU5BU5D_t1664964607** get_address_of_advancedTypes_4() { return &___advancedTypes_4; }
	inline void set_advancedTypes_4(TypeU5BU5D_t1664964607* value)
	{
		___advancedTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&___advancedTypes_4), value);
	}

	inline static int32_t get_offset_of_s_binder_5() { return static_cast<int32_t>(offsetof(FormatterServices_t3161112612_StaticFields, ___s_binder_5)); }
	inline Binder_t3404612058 * get_s_binder_5() const { return ___s_binder_5; }
	inline Binder_t3404612058 ** get_address_of_s_binder_5() { return &___s_binder_5; }
	inline void set_s_binder_5(Binder_t3404612058 * value)
	{
		___s_binder_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_binder_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERSERVICES_T3161112612_H
#ifndef RIJNDAELMANAGEDTRANSFORMMODE_T4113989319_H
#define RIJNDAELMANAGEDTRANSFORMMODE_T4113989319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManagedTransformMode
struct  RijndaelManagedTransformMode_t4113989319 
{
public:
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransformMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RijndaelManagedTransformMode_t4113989319, ___value___2)); }
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
#endif // RIJNDAELMANAGEDTRANSFORMMODE_T4113989319_H
#ifndef PADDINGMODE_T3032142640_H
#define PADDINGMODE_T3032142640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t3032142640 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_t3032142640, ___value___2)); }
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
#endif // PADDINGMODE_T3032142640_H
#ifndef X509CERTIFICATEIMPLAPPLE_T333049723_H
#define X509CERTIFICATEIMPLAPPLE_T333049723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509CertificateImplApple
struct  X509CertificateImplApple_t333049723  : public X509CertificateImpl_t3842064707
{
public:
	// System.IntPtr System.Security.Cryptography.X509Certificates.X509CertificateImplApple::handle
	intptr_t ___handle_1;
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509CertificateImplApple::fallback
	X509CertificateImpl_t3842064707 * ___fallback_2;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(X509CertificateImplApple_t333049723, ___handle_1)); }
	inline intptr_t get_handle_1() const { return ___handle_1; }
	inline intptr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(intptr_t value)
	{
		___handle_1 = value;
	}

	inline static int32_t get_offset_of_fallback_2() { return static_cast<int32_t>(offsetof(X509CertificateImplApple_t333049723, ___fallback_2)); }
	inline X509CertificateImpl_t3842064707 * get_fallback_2() const { return ___fallback_2; }
	inline X509CertificateImpl_t3842064707 ** get_address_of_fallback_2() { return &___fallback_2; }
	inline void set_fallback_2(X509CertificateImpl_t3842064707 * value)
	{
		___fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEIMPLAPPLE_T333049723_H
#ifndef OIDGROUP_T3737064127_H
#define OIDGROUP_T3737064127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.OidGroup
struct  OidGroup_t3737064127 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.OidGroup::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OidGroup_t3737064127, ___value___2)); }
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
#endif // OIDGROUP_T3737064127_H
#ifndef REGISTRYRIGHTS_T427223974_H
#define REGISTRYRIGHTS_T427223974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AccessControl.RegistryRights
struct  RegistryRights_t427223974 
{
public:
	// System.Int32 System.Security.AccessControl.RegistryRights::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegistryRights_t427223974, ___value___2)); }
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
#endif // REGISTRYRIGHTS_T427223974_H
#ifndef RIPEMD160MANAGED_T1613307429_H
#define RIPEMD160MANAGED_T1613307429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160Managed
struct  RIPEMD160Managed_t1613307429  : public RIPEMD160_t1732039966
{
public:
	// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::_buffer
	ByteU5BU5D_t3397334013* ____buffer_4;
	// System.Int64 System.Security.Cryptography.RIPEMD160Managed::_count
	int64_t ____count_5;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_stateMD160
	UInt32U5BU5D_t59386216* ____stateMD160_6;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_blockDWords
	UInt32U5BU5D_t59386216* ____blockDWords_7;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t1613307429, ____buffer_4)); }
	inline ByteU5BU5D_t3397334013* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t3397334013** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t3397334013* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t1613307429, ____count_5)); }
	inline int64_t get__count_5() const { return ____count_5; }
	inline int64_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int64_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__stateMD160_6() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t1613307429, ____stateMD160_6)); }
	inline UInt32U5BU5D_t59386216* get__stateMD160_6() const { return ____stateMD160_6; }
	inline UInt32U5BU5D_t59386216** get_address_of__stateMD160_6() { return &____stateMD160_6; }
	inline void set__stateMD160_6(UInt32U5BU5D_t59386216* value)
	{
		____stateMD160_6 = value;
		Il2CppCodeGenWriteBarrier((&____stateMD160_6), value);
	}

	inline static int32_t get_offset_of__blockDWords_7() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t1613307429, ____blockDWords_7)); }
	inline UInt32U5BU5D_t59386216* get__blockDWords_7() const { return ____blockDWords_7; }
	inline UInt32U5BU5D_t59386216** get_address_of__blockDWords_7() { return &____blockDWords_7; }
	inline void set__blockDWords_7(UInt32U5BU5D_t59386216* value)
	{
		____blockDWords_7 = value;
		Il2CppCodeGenWriteBarrier((&____blockDWords_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160MANAGED_T1613307429_H
#ifndef TYPEFILTERLEVEL_T1182459634_H
#define TYPEFILTERLEVEL_T1182459634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_t1182459634 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t1182459634, ___value___2)); }
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
#endif // TYPEFILTERLEVEL_T1182459634_H
#ifndef SERIALIZATIONEXCEPTION_T753258759_H
#define SERIALIZATIONEXCEPTION_T753258759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationException
struct  SerializationException_t753258759  : public SystemException_t3877406272
{
public:

public:
};

struct SerializationException_t753258759_StaticFields
{
public:
	// System.String System.Runtime.Serialization.SerializationException::_nullMessage
	String_t* ____nullMessage_16;

public:
	inline static int32_t get_offset_of__nullMessage_16() { return static_cast<int32_t>(offsetof(SerializationException_t753258759_StaticFields, ____nullMessage_16)); }
	inline String_t* get__nullMessage_16() const { return ____nullMessage_16; }
	inline String_t** get_address_of__nullMessage_16() { return &____nullMessage_16; }
	inline void set__nullMessage_16(String_t* value)
	{
		____nullMessage_16 = value;
		Il2CppCodeGenWriteBarrier((&____nullMessage_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONEXCEPTION_T753258759_H
#ifndef SERIALIZATIONFIELDINFO_T2472586292_H
#define SERIALIZATIONFIELDINFO_T2472586292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationFieldInfo
struct  SerializationFieldInfo_t2472586292  : public FieldInfo_t
{
public:
	// System.Reflection.RuntimeFieldInfo System.Runtime.Serialization.SerializationFieldInfo::m_field
	RuntimeFieldInfo_t1687134186 * ___m_field_0;
	// System.String System.Runtime.Serialization.SerializationFieldInfo::m_serializationName
	String_t* ___m_serializationName_1;

public:
	inline static int32_t get_offset_of_m_field_0() { return static_cast<int32_t>(offsetof(SerializationFieldInfo_t2472586292, ___m_field_0)); }
	inline RuntimeFieldInfo_t1687134186 * get_m_field_0() const { return ___m_field_0; }
	inline RuntimeFieldInfo_t1687134186 ** get_address_of_m_field_0() { return &___m_field_0; }
	inline void set_m_field_0(RuntimeFieldInfo_t1687134186 * value)
	{
		___m_field_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_field_0), value);
	}

	inline static int32_t get_offset_of_m_serializationName_1() { return static_cast<int32_t>(offsetof(SerializationFieldInfo_t2472586292, ___m_serializationName_1)); }
	inline String_t* get_m_serializationName_1() const { return ___m_serializationName_1; }
	inline String_t** get_address_of_m_serializationName_1() { return &___m_serializationName_1; }
	inline void set_m_serializationName_1(String_t* value)
	{
		___m_serializationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_serializationName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONFIELDINFO_T2472586292_H
#ifndef RSAPKCS1SHA256SIGNATUREDESCRIPTION_T1667091043_H
#define RSAPKCS1SHA256SIGNATUREDESCRIPTION_T1667091043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA256SignatureDescription
struct  RSAPKCS1SHA256SignatureDescription_t1667091043  : public RSAPKCS1SignatureDescription_t2452358846
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA256SIGNATUREDESCRIPTION_T1667091043_H
#ifndef SHA256MANAGED_T2029745292_H
#define SHA256MANAGED_T2029745292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_t2029745292  : public SHA256_t582564463
{
public:
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_buffer
	ByteU5BU5D_t3397334013* ____buffer_4;
	// System.Int64 System.Security.Cryptography.SHA256Managed::_count
	int64_t ____count_5;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_stateSHA256
	UInt32U5BU5D_t59386216* ____stateSHA256_6;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_W
	UInt32U5BU5D_t59386216* ____W_7;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(SHA256Managed_t2029745292, ____buffer_4)); }
	inline ByteU5BU5D_t3397334013* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t3397334013** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t3397334013* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(SHA256Managed_t2029745292, ____count_5)); }
	inline int64_t get__count_5() const { return ____count_5; }
	inline int64_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int64_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__stateSHA256_6() { return static_cast<int32_t>(offsetof(SHA256Managed_t2029745292, ____stateSHA256_6)); }
	inline UInt32U5BU5D_t59386216* get__stateSHA256_6() const { return ____stateSHA256_6; }
	inline UInt32U5BU5D_t59386216** get_address_of__stateSHA256_6() { return &____stateSHA256_6; }
	inline void set__stateSHA256_6(UInt32U5BU5D_t59386216* value)
	{
		____stateSHA256_6 = value;
		Il2CppCodeGenWriteBarrier((&____stateSHA256_6), value);
	}

	inline static int32_t get_offset_of__W_7() { return static_cast<int32_t>(offsetof(SHA256Managed_t2029745292, ____W_7)); }
	inline UInt32U5BU5D_t59386216* get__W_7() const { return ____W_7; }
	inline UInt32U5BU5D_t59386216** get_address_of__W_7() { return &____W_7; }
	inline void set__W_7(UInt32U5BU5D_t59386216* value)
	{
		____W_7 = value;
		Il2CppCodeGenWriteBarrier((&____W_7), value);
	}
};

struct SHA256Managed_t2029745292_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_K
	UInt32U5BU5D_t59386216* ____K_8;

public:
	inline static int32_t get_offset_of__K_8() { return static_cast<int32_t>(offsetof(SHA256Managed_t2029745292_StaticFields, ____K_8)); }
	inline UInt32U5BU5D_t59386216* get__K_8() const { return ____K_8; }
	inline UInt32U5BU5D_t59386216** get_address_of__K_8() { return &____K_8; }
	inline void set__K_8(UInt32U5BU5D_t59386216* value)
	{
		____K_8 = value;
		Il2CppCodeGenWriteBarrier((&____K_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256MANAGED_T2029745292_H
#ifndef SHA512MANAGED_T3949709369_H
#define SHA512MANAGED_T3949709369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512Managed
struct  SHA512Managed_t3949709369  : public SHA512_t2908163326
{
public:
	// System.Byte[] System.Security.Cryptography.SHA512Managed::_buffer
	ByteU5BU5D_t3397334013* ____buffer_4;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::_count
	uint64_t ____count_5;
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::_stateSHA512
	UInt64U5BU5D_t1668688775* ____stateSHA512_6;
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::_W
	UInt64U5BU5D_t1668688775* ____W_7;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(SHA512Managed_t3949709369, ____buffer_4)); }
	inline ByteU5BU5D_t3397334013* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t3397334013** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t3397334013* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(SHA512Managed_t3949709369, ____count_5)); }
	inline uint64_t get__count_5() const { return ____count_5; }
	inline uint64_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(uint64_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__stateSHA512_6() { return static_cast<int32_t>(offsetof(SHA512Managed_t3949709369, ____stateSHA512_6)); }
	inline UInt64U5BU5D_t1668688775* get__stateSHA512_6() const { return ____stateSHA512_6; }
	inline UInt64U5BU5D_t1668688775** get_address_of__stateSHA512_6() { return &____stateSHA512_6; }
	inline void set__stateSHA512_6(UInt64U5BU5D_t1668688775* value)
	{
		____stateSHA512_6 = value;
		Il2CppCodeGenWriteBarrier((&____stateSHA512_6), value);
	}

	inline static int32_t get_offset_of__W_7() { return static_cast<int32_t>(offsetof(SHA512Managed_t3949709369, ____W_7)); }
	inline UInt64U5BU5D_t1668688775* get__W_7() const { return ____W_7; }
	inline UInt64U5BU5D_t1668688775** get_address_of__W_7() { return &____W_7; }
	inline void set__W_7(UInt64U5BU5D_t1668688775* value)
	{
		____W_7 = value;
		Il2CppCodeGenWriteBarrier((&____W_7), value);
	}
};

struct SHA512Managed_t3949709369_StaticFields
{
public:
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::_K
	UInt64U5BU5D_t1668688775* ____K_8;

public:
	inline static int32_t get_offset_of__K_8() { return static_cast<int32_t>(offsetof(SHA512Managed_t3949709369_StaticFields, ____K_8)); }
	inline UInt64U5BU5D_t1668688775* get__K_8() const { return ____K_8; }
	inline UInt64U5BU5D_t1668688775** get_address_of__K_8() { return &____K_8; }
	inline void set__K_8(UInt64U5BU5D_t1668688775* value)
	{
		____K_8 = value;
		Il2CppCodeGenWriteBarrier((&____K_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512MANAGED_T3949709369_H
#ifndef SHA384MANAGED_T741627254_H
#define SHA384MANAGED_T741627254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384Managed
struct  SHA384Managed_t741627254  : public SHA384_t535510267
{
public:
	// System.Byte[] System.Security.Cryptography.SHA384Managed::_buffer
	ByteU5BU5D_t3397334013* ____buffer_4;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::_count
	uint64_t ____count_5;
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::_stateSHA384
	UInt64U5BU5D_t1668688775* ____stateSHA384_6;
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::_W
	UInt64U5BU5D_t1668688775* ____W_7;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(SHA384Managed_t741627254, ____buffer_4)); }
	inline ByteU5BU5D_t3397334013* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t3397334013** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t3397334013* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(SHA384Managed_t741627254, ____count_5)); }
	inline uint64_t get__count_5() const { return ____count_5; }
	inline uint64_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(uint64_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__stateSHA384_6() { return static_cast<int32_t>(offsetof(SHA384Managed_t741627254, ____stateSHA384_6)); }
	inline UInt64U5BU5D_t1668688775* get__stateSHA384_6() const { return ____stateSHA384_6; }
	inline UInt64U5BU5D_t1668688775** get_address_of__stateSHA384_6() { return &____stateSHA384_6; }
	inline void set__stateSHA384_6(UInt64U5BU5D_t1668688775* value)
	{
		____stateSHA384_6 = value;
		Il2CppCodeGenWriteBarrier((&____stateSHA384_6), value);
	}

	inline static int32_t get_offset_of__W_7() { return static_cast<int32_t>(offsetof(SHA384Managed_t741627254, ____W_7)); }
	inline UInt64U5BU5D_t1668688775* get__W_7() const { return ____W_7; }
	inline UInt64U5BU5D_t1668688775** get_address_of__W_7() { return &____W_7; }
	inline void set__W_7(UInt64U5BU5D_t1668688775* value)
	{
		____W_7 = value;
		Il2CppCodeGenWriteBarrier((&____W_7), value);
	}
};

struct SHA384Managed_t741627254_StaticFields
{
public:
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::_K
	UInt64U5BU5D_t1668688775* ____K_8;

public:
	inline static int32_t get_offset_of__K_8() { return static_cast<int32_t>(offsetof(SHA384Managed_t741627254_StaticFields, ____K_8)); }
	inline UInt64U5BU5D_t1668688775* get__K_8() const { return ____K_8; }
	inline UInt64U5BU5D_t1668688775** get_address_of__K_8() { return &____K_8; }
	inline void set__K_8(UInt64U5BU5D_t1668688775* value)
	{
		____K_8 = value;
		Il2CppCodeGenWriteBarrier((&____K_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384MANAGED_T741627254_H
#ifndef RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2477284625_H
#define RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2477284625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA1SignatureDescription
struct  RSAPKCS1SHA1SignatureDescription_t2477284625  : public RSAPKCS1SignatureDescription_t2452358846
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2477284625_H
#ifndef DELEGATE_T3022476291_H
#define DELEGATE_T3022476291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3022476291  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1572802995 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___data_9)); }
	inline DelegateData_t1572802995 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1572802995 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1572802995 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t3022476291_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1572802995 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t3022476291_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1572802995 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T3022476291_H
#ifndef FORMATTERTYPESTYLE_T943306207_H
#define FORMATTERTYPESTYLE_T943306207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_t943306207 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_t943306207, ___value___2)); }
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
#endif // FORMATTERTYPESTYLE_T943306207_H
#ifndef FORMATTERASSEMBLYSTYLE_T999493661_H
#define FORMATTERASSEMBLYSTYLE_T999493661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t999493661 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t999493661, ___value___2)); }
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
#endif // FORMATTERASSEMBLYSTYLE_T999493661_H
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
#ifndef SHA1MANAGED_T7268864_H
#define SHA1MANAGED_T7268864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Managed
struct  SHA1Managed_t7268864  : public SHA1_t3336793149
{
public:
	// System.Byte[] System.Security.Cryptography.SHA1Managed::_buffer
	ByteU5BU5D_t3397334013* ____buffer_4;
	// System.Int64 System.Security.Cryptography.SHA1Managed::_count
	int64_t ____count_5;
	// System.UInt32[] System.Security.Cryptography.SHA1Managed::_stateSHA1
	UInt32U5BU5D_t59386216* ____stateSHA1_6;
	// System.UInt32[] System.Security.Cryptography.SHA1Managed::_expandedBuffer
	UInt32U5BU5D_t59386216* ____expandedBuffer_7;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(SHA1Managed_t7268864, ____buffer_4)); }
	inline ByteU5BU5D_t3397334013* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t3397334013** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t3397334013* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(SHA1Managed_t7268864, ____count_5)); }
	inline int64_t get__count_5() const { return ____count_5; }
	inline int64_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int64_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__stateSHA1_6() { return static_cast<int32_t>(offsetof(SHA1Managed_t7268864, ____stateSHA1_6)); }
	inline UInt32U5BU5D_t59386216* get__stateSHA1_6() const { return ____stateSHA1_6; }
	inline UInt32U5BU5D_t59386216** get_address_of__stateSHA1_6() { return &____stateSHA1_6; }
	inline void set__stateSHA1_6(UInt32U5BU5D_t59386216* value)
	{
		____stateSHA1_6 = value;
		Il2CppCodeGenWriteBarrier((&____stateSHA1_6), value);
	}

	inline static int32_t get_offset_of__expandedBuffer_7() { return static_cast<int32_t>(offsetof(SHA1Managed_t7268864, ____expandedBuffer_7)); }
	inline UInt32U5BU5D_t59386216* get__expandedBuffer_7() const { return ____expandedBuffer_7; }
	inline UInt32U5BU5D_t59386216** get_address_of__expandedBuffer_7() { return &____expandedBuffer_7; }
	inline void set__expandedBuffer_7(UInt32U5BU5D_t59386216* value)
	{
		____expandedBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((&____expandedBuffer_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1MANAGED_T7268864_H
#ifndef RSAPKCS1SHA384SIGNATUREDESCRIPTION_T3714880827_H
#define RSAPKCS1SHA384SIGNATUREDESCRIPTION_T3714880827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA384SignatureDescription
struct  RSAPKCS1SHA384SignatureDescription_t3714880827  : public RSAPKCS1SignatureDescription_t2452358846
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA384SIGNATUREDESCRIPTION_T3714880827_H
#ifndef RSAPKCS1SHA512SIGNATUREDESCRIPTION_T2743264430_H
#define RSAPKCS1SHA512SIGNATUREDESCRIPTION_T2743264430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA512SignatureDescription
struct  RSAPKCS1SHA512SignatureDescription_t2743264430  : public RSAPKCS1SignatureDescription_t2452358846
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA512SIGNATUREDESCRIPTION_T2743264430_H
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
#ifndef MULTICASTDELEGATE_T3201952435_H
#define MULTICASTDELEGATE_T3201952435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3201952435  : public Delegate_t3022476291
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1606206610* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___delegates_11)); }
	inline DelegateU5BU5D_t1606206610* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1606206610** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1606206610* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t3201952435_marshaled_pinvoke : public Delegate_t3022476291_marshaled_pinvoke
{
	DelegateU5BU5D_t1606206610* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t3201952435_marshaled_com : public Delegate_t3022476291_marshaled_com
{
	DelegateU5BU5D_t1606206610* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T3201952435_H
#ifndef RIJNDAELMANAGEDTRANSFORM_T135163252_H
#define RIJNDAELMANAGEDTRANSFORM_T135163252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManagedTransform
struct  RijndaelManagedTransform_t135163252  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.RijndaelManagedTransform::m_cipherMode
	int32_t ___m_cipherMode_0;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.RijndaelManagedTransform::m_paddingValue
	int32_t ___m_paddingValue_1;
	// System.Security.Cryptography.RijndaelManagedTransformMode System.Security.Cryptography.RijndaelManagedTransform::m_transformMode
	int32_t ___m_transformMode_2;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_blockSizeBits
	int32_t ___m_blockSizeBits_3;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_blockSizeBytes
	int32_t ___m_blockSizeBytes_4;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_inputBlockSize
	int32_t ___m_inputBlockSize_5;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_outputBlockSize
	int32_t ___m_outputBlockSize_6;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_encryptKeyExpansion
	Int32U5BU5D_t3030399641* ___m_encryptKeyExpansion_7;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_decryptKeyExpansion
	Int32U5BU5D_t3030399641* ___m_decryptKeyExpansion_8;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_Nr
	int32_t ___m_Nr_9;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_Nb
	int32_t ___m_Nb_10;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_Nk
	int32_t ___m_Nk_11;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_encryptindex
	Int32U5BU5D_t3030399641* ___m_encryptindex_12;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_decryptindex
	Int32U5BU5D_t3030399641* ___m_decryptindex_13;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_IV
	Int32U5BU5D_t3030399641* ___m_IV_14;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_lastBlockBuffer
	Int32U5BU5D_t3030399641* ___m_lastBlockBuffer_15;
	// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::m_depadBuffer
	ByteU5BU5D_t3397334013* ___m_depadBuffer_16;
	// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::m_shiftRegister
	ByteU5BU5D_t3397334013* ___m_shiftRegister_17;

public:
	inline static int32_t get_offset_of_m_cipherMode_0() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_cipherMode_0)); }
	inline int32_t get_m_cipherMode_0() const { return ___m_cipherMode_0; }
	inline int32_t* get_address_of_m_cipherMode_0() { return &___m_cipherMode_0; }
	inline void set_m_cipherMode_0(int32_t value)
	{
		___m_cipherMode_0 = value;
	}

	inline static int32_t get_offset_of_m_paddingValue_1() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_paddingValue_1)); }
	inline int32_t get_m_paddingValue_1() const { return ___m_paddingValue_1; }
	inline int32_t* get_address_of_m_paddingValue_1() { return &___m_paddingValue_1; }
	inline void set_m_paddingValue_1(int32_t value)
	{
		___m_paddingValue_1 = value;
	}

	inline static int32_t get_offset_of_m_transformMode_2() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_transformMode_2)); }
	inline int32_t get_m_transformMode_2() const { return ___m_transformMode_2; }
	inline int32_t* get_address_of_m_transformMode_2() { return &___m_transformMode_2; }
	inline void set_m_transformMode_2(int32_t value)
	{
		___m_transformMode_2 = value;
	}

	inline static int32_t get_offset_of_m_blockSizeBits_3() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_blockSizeBits_3)); }
	inline int32_t get_m_blockSizeBits_3() const { return ___m_blockSizeBits_3; }
	inline int32_t* get_address_of_m_blockSizeBits_3() { return &___m_blockSizeBits_3; }
	inline void set_m_blockSizeBits_3(int32_t value)
	{
		___m_blockSizeBits_3 = value;
	}

	inline static int32_t get_offset_of_m_blockSizeBytes_4() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_blockSizeBytes_4)); }
	inline int32_t get_m_blockSizeBytes_4() const { return ___m_blockSizeBytes_4; }
	inline int32_t* get_address_of_m_blockSizeBytes_4() { return &___m_blockSizeBytes_4; }
	inline void set_m_blockSizeBytes_4(int32_t value)
	{
		___m_blockSizeBytes_4 = value;
	}

	inline static int32_t get_offset_of_m_inputBlockSize_5() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_inputBlockSize_5)); }
	inline int32_t get_m_inputBlockSize_5() const { return ___m_inputBlockSize_5; }
	inline int32_t* get_address_of_m_inputBlockSize_5() { return &___m_inputBlockSize_5; }
	inline void set_m_inputBlockSize_5(int32_t value)
	{
		___m_inputBlockSize_5 = value;
	}

	inline static int32_t get_offset_of_m_outputBlockSize_6() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_outputBlockSize_6)); }
	inline int32_t get_m_outputBlockSize_6() const { return ___m_outputBlockSize_6; }
	inline int32_t* get_address_of_m_outputBlockSize_6() { return &___m_outputBlockSize_6; }
	inline void set_m_outputBlockSize_6(int32_t value)
	{
		___m_outputBlockSize_6 = value;
	}

	inline static int32_t get_offset_of_m_encryptKeyExpansion_7() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_encryptKeyExpansion_7)); }
	inline Int32U5BU5D_t3030399641* get_m_encryptKeyExpansion_7() const { return ___m_encryptKeyExpansion_7; }
	inline Int32U5BU5D_t3030399641** get_address_of_m_encryptKeyExpansion_7() { return &___m_encryptKeyExpansion_7; }
	inline void set_m_encryptKeyExpansion_7(Int32U5BU5D_t3030399641* value)
	{
		___m_encryptKeyExpansion_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_encryptKeyExpansion_7), value);
	}

	inline static int32_t get_offset_of_m_decryptKeyExpansion_8() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_decryptKeyExpansion_8)); }
	inline Int32U5BU5D_t3030399641* get_m_decryptKeyExpansion_8() const { return ___m_decryptKeyExpansion_8; }
	inline Int32U5BU5D_t3030399641** get_address_of_m_decryptKeyExpansion_8() { return &___m_decryptKeyExpansion_8; }
	inline void set_m_decryptKeyExpansion_8(Int32U5BU5D_t3030399641* value)
	{
		___m_decryptKeyExpansion_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_decryptKeyExpansion_8), value);
	}

	inline static int32_t get_offset_of_m_Nr_9() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_Nr_9)); }
	inline int32_t get_m_Nr_9() const { return ___m_Nr_9; }
	inline int32_t* get_address_of_m_Nr_9() { return &___m_Nr_9; }
	inline void set_m_Nr_9(int32_t value)
	{
		___m_Nr_9 = value;
	}

	inline static int32_t get_offset_of_m_Nb_10() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_Nb_10)); }
	inline int32_t get_m_Nb_10() const { return ___m_Nb_10; }
	inline int32_t* get_address_of_m_Nb_10() { return &___m_Nb_10; }
	inline void set_m_Nb_10(int32_t value)
	{
		___m_Nb_10 = value;
	}

	inline static int32_t get_offset_of_m_Nk_11() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_Nk_11)); }
	inline int32_t get_m_Nk_11() const { return ___m_Nk_11; }
	inline int32_t* get_address_of_m_Nk_11() { return &___m_Nk_11; }
	inline void set_m_Nk_11(int32_t value)
	{
		___m_Nk_11 = value;
	}

	inline static int32_t get_offset_of_m_encryptindex_12() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_encryptindex_12)); }
	inline Int32U5BU5D_t3030399641* get_m_encryptindex_12() const { return ___m_encryptindex_12; }
	inline Int32U5BU5D_t3030399641** get_address_of_m_encryptindex_12() { return &___m_encryptindex_12; }
	inline void set_m_encryptindex_12(Int32U5BU5D_t3030399641* value)
	{
		___m_encryptindex_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_encryptindex_12), value);
	}

	inline static int32_t get_offset_of_m_decryptindex_13() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_decryptindex_13)); }
	inline Int32U5BU5D_t3030399641* get_m_decryptindex_13() const { return ___m_decryptindex_13; }
	inline Int32U5BU5D_t3030399641** get_address_of_m_decryptindex_13() { return &___m_decryptindex_13; }
	inline void set_m_decryptindex_13(Int32U5BU5D_t3030399641* value)
	{
		___m_decryptindex_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_decryptindex_13), value);
	}

	inline static int32_t get_offset_of_m_IV_14() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_IV_14)); }
	inline Int32U5BU5D_t3030399641* get_m_IV_14() const { return ___m_IV_14; }
	inline Int32U5BU5D_t3030399641** get_address_of_m_IV_14() { return &___m_IV_14; }
	inline void set_m_IV_14(Int32U5BU5D_t3030399641* value)
	{
		___m_IV_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_IV_14), value);
	}

	inline static int32_t get_offset_of_m_lastBlockBuffer_15() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_lastBlockBuffer_15)); }
	inline Int32U5BU5D_t3030399641* get_m_lastBlockBuffer_15() const { return ___m_lastBlockBuffer_15; }
	inline Int32U5BU5D_t3030399641** get_address_of_m_lastBlockBuffer_15() { return &___m_lastBlockBuffer_15; }
	inline void set_m_lastBlockBuffer_15(Int32U5BU5D_t3030399641* value)
	{
		___m_lastBlockBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_lastBlockBuffer_15), value);
	}

	inline static int32_t get_offset_of_m_depadBuffer_16() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_depadBuffer_16)); }
	inline ByteU5BU5D_t3397334013* get_m_depadBuffer_16() const { return ___m_depadBuffer_16; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_depadBuffer_16() { return &___m_depadBuffer_16; }
	inline void set_m_depadBuffer_16(ByteU5BU5D_t3397334013* value)
	{
		___m_depadBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_depadBuffer_16), value);
	}

	inline static int32_t get_offset_of_m_shiftRegister_17() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252, ___m_shiftRegister_17)); }
	inline ByteU5BU5D_t3397334013* get_m_shiftRegister_17() const { return ___m_shiftRegister_17; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_shiftRegister_17() { return &___m_shiftRegister_17; }
	inline void set_m_shiftRegister_17(ByteU5BU5D_t3397334013* value)
	{
		___m_shiftRegister_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_shiftRegister_17), value);
	}
};

struct RijndaelManagedTransform_t135163252_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::s_Sbox
	ByteU5BU5D_t3397334013* ___s_Sbox_18;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::s_Rcon
	Int32U5BU5D_t3030399641* ___s_Rcon_19;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::s_T
	Int32U5BU5D_t3030399641* ___s_T_20;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::s_TF
	Int32U5BU5D_t3030399641* ___s_TF_21;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::s_iT
	Int32U5BU5D_t3030399641* ___s_iT_22;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::s_iTF
	Int32U5BU5D_t3030399641* ___s_iTF_23;

public:
	inline static int32_t get_offset_of_s_Sbox_18() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252_StaticFields, ___s_Sbox_18)); }
	inline ByteU5BU5D_t3397334013* get_s_Sbox_18() const { return ___s_Sbox_18; }
	inline ByteU5BU5D_t3397334013** get_address_of_s_Sbox_18() { return &___s_Sbox_18; }
	inline void set_s_Sbox_18(ByteU5BU5D_t3397334013* value)
	{
		___s_Sbox_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_Sbox_18), value);
	}

	inline static int32_t get_offset_of_s_Rcon_19() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252_StaticFields, ___s_Rcon_19)); }
	inline Int32U5BU5D_t3030399641* get_s_Rcon_19() const { return ___s_Rcon_19; }
	inline Int32U5BU5D_t3030399641** get_address_of_s_Rcon_19() { return &___s_Rcon_19; }
	inline void set_s_Rcon_19(Int32U5BU5D_t3030399641* value)
	{
		___s_Rcon_19 = value;
		Il2CppCodeGenWriteBarrier((&___s_Rcon_19), value);
	}

	inline static int32_t get_offset_of_s_T_20() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252_StaticFields, ___s_T_20)); }
	inline Int32U5BU5D_t3030399641* get_s_T_20() const { return ___s_T_20; }
	inline Int32U5BU5D_t3030399641** get_address_of_s_T_20() { return &___s_T_20; }
	inline void set_s_T_20(Int32U5BU5D_t3030399641* value)
	{
		___s_T_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_T_20), value);
	}

	inline static int32_t get_offset_of_s_TF_21() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252_StaticFields, ___s_TF_21)); }
	inline Int32U5BU5D_t3030399641* get_s_TF_21() const { return ___s_TF_21; }
	inline Int32U5BU5D_t3030399641** get_address_of_s_TF_21() { return &___s_TF_21; }
	inline void set_s_TF_21(Int32U5BU5D_t3030399641* value)
	{
		___s_TF_21 = value;
		Il2CppCodeGenWriteBarrier((&___s_TF_21), value);
	}

	inline static int32_t get_offset_of_s_iT_22() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252_StaticFields, ___s_iT_22)); }
	inline Int32U5BU5D_t3030399641* get_s_iT_22() const { return ___s_iT_22; }
	inline Int32U5BU5D_t3030399641** get_address_of_s_iT_22() { return &___s_iT_22; }
	inline void set_s_iT_22(Int32U5BU5D_t3030399641* value)
	{
		___s_iT_22 = value;
		Il2CppCodeGenWriteBarrier((&___s_iT_22), value);
	}

	inline static int32_t get_offset_of_s_iTF_23() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t135163252_StaticFields, ___s_iTF_23)); }
	inline Int32U5BU5D_t3030399641* get_s_iTF_23() const { return ___s_iTF_23; }
	inline Int32U5BU5D_t3030399641** get_address_of_s_iTF_23() { return &___s_iTF_23; }
	inline void set_s_iTF_23(Int32U5BU5D_t3030399641* value)
	{
		___s_iTF_23 = value;
		Il2CppCodeGenWriteBarrier((&___s_iTF_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGEDTRANSFORM_T135163252_H
#ifndef SERIALIZATIONHEADERRECORD_T2423901178_H
#define SERIALIZATIONHEADERRECORD_T2423901178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord
struct  SerializationHeaderRecord_t2423901178  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord::binaryFormatterMajorVersion
	int32_t ___binaryFormatterMajorVersion_0;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord::binaryFormatterMinorVersion
	int32_t ___binaryFormatterMinorVersion_1;
	// System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord::binaryHeaderEnum
	int32_t ___binaryHeaderEnum_2;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord::topId
	int32_t ___topId_3;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord::headerId
	int32_t ___headerId_4;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord::majorVersion
	int32_t ___majorVersion_5;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord::minorVersion
	int32_t ___minorVersion_6;

public:
	inline static int32_t get_offset_of_binaryFormatterMajorVersion_0() { return static_cast<int32_t>(offsetof(SerializationHeaderRecord_t2423901178, ___binaryFormatterMajorVersion_0)); }
	inline int32_t get_binaryFormatterMajorVersion_0() const { return ___binaryFormatterMajorVersion_0; }
	inline int32_t* get_address_of_binaryFormatterMajorVersion_0() { return &___binaryFormatterMajorVersion_0; }
	inline void set_binaryFormatterMajorVersion_0(int32_t value)
	{
		___binaryFormatterMajorVersion_0 = value;
	}

	inline static int32_t get_offset_of_binaryFormatterMinorVersion_1() { return static_cast<int32_t>(offsetof(SerializationHeaderRecord_t2423901178, ___binaryFormatterMinorVersion_1)); }
	inline int32_t get_binaryFormatterMinorVersion_1() const { return ___binaryFormatterMinorVersion_1; }
	inline int32_t* get_address_of_binaryFormatterMinorVersion_1() { return &___binaryFormatterMinorVersion_1; }
	inline void set_binaryFormatterMinorVersion_1(int32_t value)
	{
		___binaryFormatterMinorVersion_1 = value;
	}

	inline static int32_t get_offset_of_binaryHeaderEnum_2() { return static_cast<int32_t>(offsetof(SerializationHeaderRecord_t2423901178, ___binaryHeaderEnum_2)); }
	inline int32_t get_binaryHeaderEnum_2() const { return ___binaryHeaderEnum_2; }
	inline int32_t* get_address_of_binaryHeaderEnum_2() { return &___binaryHeaderEnum_2; }
	inline void set_binaryHeaderEnum_2(int32_t value)
	{
		___binaryHeaderEnum_2 = value;
	}

	inline static int32_t get_offset_of_topId_3() { return static_cast<int32_t>(offsetof(SerializationHeaderRecord_t2423901178, ___topId_3)); }
	inline int32_t get_topId_3() const { return ___topId_3; }
	inline int32_t* get_address_of_topId_3() { return &___topId_3; }
	inline void set_topId_3(int32_t value)
	{
		___topId_3 = value;
	}

	inline static int32_t get_offset_of_headerId_4() { return static_cast<int32_t>(offsetof(SerializationHeaderRecord_t2423901178, ___headerId_4)); }
	inline int32_t get_headerId_4() const { return ___headerId_4; }
	inline int32_t* get_address_of_headerId_4() { return &___headerId_4; }
	inline void set_headerId_4(int32_t value)
	{
		___headerId_4 = value;
	}

	inline static int32_t get_offset_of_majorVersion_5() { return static_cast<int32_t>(offsetof(SerializationHeaderRecord_t2423901178, ___majorVersion_5)); }
	inline int32_t get_majorVersion_5() const { return ___majorVersion_5; }
	inline int32_t* get_address_of_majorVersion_5() { return &___majorVersion_5; }
	inline void set_majorVersion_5(int32_t value)
	{
		___majorVersion_5 = value;
	}

	inline static int32_t get_offset_of_minorVersion_6() { return static_cast<int32_t>(offsetof(SerializationHeaderRecord_t2423901178, ___minorVersion_6)); }
	inline int32_t get_minorVersion_6() const { return ___minorVersion_6; }
	inline int32_t* get_address_of_minorVersion_6() { return &___minorVersion_6; }
	inline void set_minorVersion_6(int32_t value)
	{
		___minorVersion_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONHEADERRECORD_T2423901178_H
#ifndef BINARYMETHODCALL_T1773568836_H
#define BINARYMETHODCALL_T1773568836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall
struct  BinaryMethodCall_t1773568836  : public RuntimeObject
{
public:
	// System.String System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall::uri
	String_t* ___uri_0;
	// System.String System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall::methodName
	String_t* ___methodName_1;
	// System.String System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall::typeName
	String_t* ___typeName_2;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall::instArgs
	TypeU5BU5D_t1664964607* ___instArgs_3;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall::args
	ObjectU5BU5D_t3614634134* ___args_4;
	// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall::methodSignature
	RuntimeObject * ___methodSignature_5;
	// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall::callContext
	RuntimeObject * ___callContext_6;
	// System.String System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall::scallContext
	String_t* ___scallContext_7;
	// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall::properties
	RuntimeObject * ___properties_8;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall::argTypes
	TypeU5BU5D_t1664964607* ___argTypes_9;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall::bArgsPrimitive
	bool ___bArgsPrimitive_10;
	// System.Runtime.Serialization.Formatters.Binary.MessageEnum System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall::messageEnum
	int32_t ___messageEnum_11;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall::callA
	ObjectU5BU5D_t3614634134* ___callA_12;

public:
	inline static int32_t get_offset_of_uri_0() { return static_cast<int32_t>(offsetof(BinaryMethodCall_t1773568836, ___uri_0)); }
	inline String_t* get_uri_0() const { return ___uri_0; }
	inline String_t** get_address_of_uri_0() { return &___uri_0; }
	inline void set_uri_0(String_t* value)
	{
		___uri_0 = value;
		Il2CppCodeGenWriteBarrier((&___uri_0), value);
	}

	inline static int32_t get_offset_of_methodName_1() { return static_cast<int32_t>(offsetof(BinaryMethodCall_t1773568836, ___methodName_1)); }
	inline String_t* get_methodName_1() const { return ___methodName_1; }
	inline String_t** get_address_of_methodName_1() { return &___methodName_1; }
	inline void set_methodName_1(String_t* value)
	{
		___methodName_1 = value;
		Il2CppCodeGenWriteBarrier((&___methodName_1), value);
	}

	inline static int32_t get_offset_of_typeName_2() { return static_cast<int32_t>(offsetof(BinaryMethodCall_t1773568836, ___typeName_2)); }
	inline String_t* get_typeName_2() const { return ___typeName_2; }
	inline String_t** get_address_of_typeName_2() { return &___typeName_2; }
	inline void set_typeName_2(String_t* value)
	{
		___typeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeName_2), value);
	}

	inline static int32_t get_offset_of_instArgs_3() { return static_cast<int32_t>(offsetof(BinaryMethodCall_t1773568836, ___instArgs_3)); }
	inline TypeU5BU5D_t1664964607* get_instArgs_3() const { return ___instArgs_3; }
	inline TypeU5BU5D_t1664964607** get_address_of_instArgs_3() { return &___instArgs_3; }
	inline void set_instArgs_3(TypeU5BU5D_t1664964607* value)
	{
		___instArgs_3 = value;
		Il2CppCodeGenWriteBarrier((&___instArgs_3), value);
	}

	inline static int32_t get_offset_of_args_4() { return static_cast<int32_t>(offsetof(BinaryMethodCall_t1773568836, ___args_4)); }
	inline ObjectU5BU5D_t3614634134* get_args_4() const { return ___args_4; }
	inline ObjectU5BU5D_t3614634134** get_address_of_args_4() { return &___args_4; }
	inline void set_args_4(ObjectU5BU5D_t3614634134* value)
	{
		___args_4 = value;
		Il2CppCodeGenWriteBarrier((&___args_4), value);
	}

	inline static int32_t get_offset_of_methodSignature_5() { return static_cast<int32_t>(offsetof(BinaryMethodCall_t1773568836, ___methodSignature_5)); }
	inline RuntimeObject * get_methodSignature_5() const { return ___methodSignature_5; }
	inline RuntimeObject ** get_address_of_methodSignature_5() { return &___methodSignature_5; }
	inline void set_methodSignature_5(RuntimeObject * value)
	{
		___methodSignature_5 = value;
		Il2CppCodeGenWriteBarrier((&___methodSignature_5), value);
	}

	inline static int32_t get_offset_of_callContext_6() { return static_cast<int32_t>(offsetof(BinaryMethodCall_t1773568836, ___callContext_6)); }
	inline RuntimeObject * get_callContext_6() const { return ___callContext_6; }
	inline RuntimeObject ** get_address_of_callContext_6() { return &___callContext_6; }
	inline void set_callContext_6(RuntimeObject * value)
	{
		___callContext_6 = value;
		Il2CppCodeGenWriteBarrier((&___callContext_6), value);
	}

	inline static int32_t get_offset_of_scallContext_7() { return static_cast<int32_t>(offsetof(BinaryMethodCall_t1773568836, ___scallContext_7)); }
	inline String_t* get_scallContext_7() const { return ___scallContext_7; }
	inline String_t** get_address_of_scallContext_7() { return &___scallContext_7; }
	inline void set_scallContext_7(String_t* value)
	{
		___scallContext_7 = value;
		Il2CppCodeGenWriteBarrier((&___scallContext_7), value);
	}

	inline static int32_t get_offset_of_properties_8() { return static_cast<int32_t>(offsetof(BinaryMethodCall_t1773568836, ___properties_8)); }
	inline RuntimeObject * get_properties_8() const { return ___properties_8; }
	inline RuntimeObject ** get_address_of_properties_8() { return &___properties_8; }
	inline void set_properties_8(RuntimeObject * value)
	{
		___properties_8 = value;
		Il2CppCodeGenWriteBarrier((&___properties_8), value);
	}

	inline static int32_t get_offset_of_argTypes_9() { return static_cast<int32_t>(offsetof(BinaryMethodCall_t1773568836, ___argTypes_9)); }
	inline TypeU5BU5D_t1664964607* get_argTypes_9() const { return ___argTypes_9; }
	inline TypeU5BU5D_t1664964607** get_address_of_argTypes_9() { return &___argTypes_9; }
	inline void set_argTypes_9(TypeU5BU5D_t1664964607* value)
	{
		___argTypes_9 = value;
		Il2CppCodeGenWriteBarrier((&___argTypes_9), value);
	}

	inline static int32_t get_offset_of_bArgsPrimitive_10() { return static_cast<int32_t>(offsetof(BinaryMethodCall_t1773568836, ___bArgsPrimitive_10)); }
	inline bool get_bArgsPrimitive_10() const { return ___bArgsPrimitive_10; }
	inline bool* get_address_of_bArgsPrimitive_10() { return &___bArgsPrimitive_10; }
	inline void set_bArgsPrimitive_10(bool value)
	{
		___bArgsPrimitive_10 = value;
	}

	inline static int32_t get_offset_of_messageEnum_11() { return static_cast<int32_t>(offsetof(BinaryMethodCall_t1773568836, ___messageEnum_11)); }
	inline int32_t get_messageEnum_11() const { return ___messageEnum_11; }
	inline int32_t* get_address_of_messageEnum_11() { return &___messageEnum_11; }
	inline void set_messageEnum_11(int32_t value)
	{
		___messageEnum_11 = value;
	}

	inline static int32_t get_offset_of_callA_12() { return static_cast<int32_t>(offsetof(BinaryMethodCall_t1773568836, ___callA_12)); }
	inline ObjectU5BU5D_t3614634134* get_callA_12() const { return ___callA_12; }
	inline ObjectU5BU5D_t3614634134** get_address_of_callA_12() { return &___callA_12; }
	inline void set_callA_12(ObjectU5BU5D_t3614634134* value)
	{
		___callA_12 = value;
		Il2CppCodeGenWriteBarrier((&___callA_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYMETHODCALL_T1773568836_H
#ifndef SYMMETRICALGORITHM_T1108166522_H
#define SYMMETRICALGORITHM_T1108166522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t1108166522  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t3397334013* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t3397334013* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t1153004758* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t1153004758* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1108166522, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1108166522, ___FeedbackSizeValue_1)); }
	inline int32_t get_FeedbackSizeValue_1() const { return ___FeedbackSizeValue_1; }
	inline int32_t* get_address_of_FeedbackSizeValue_1() { return &___FeedbackSizeValue_1; }
	inline void set_FeedbackSizeValue_1(int32_t value)
	{
		___FeedbackSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_IVValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1108166522, ___IVValue_2)); }
	inline ByteU5BU5D_t3397334013* get_IVValue_2() const { return ___IVValue_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_IVValue_2() { return &___IVValue_2; }
	inline void set_IVValue_2(ByteU5BU5D_t3397334013* value)
	{
		___IVValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_2), value);
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1108166522, ___KeyValue_3)); }
	inline ByteU5BU5D_t3397334013* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t3397334013* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1108166522, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t1153004758* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t1153004758** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t1153004758* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1108166522, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t1153004758* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t1153004758** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t1153004758* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1108166522, ___KeySizeValue_6)); }
	inline int32_t get_KeySizeValue_6() const { return ___KeySizeValue_6; }
	inline int32_t* get_address_of_KeySizeValue_6() { return &___KeySizeValue_6; }
	inline void set_KeySizeValue_6(int32_t value)
	{
		___KeySizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1108166522, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1108166522, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T1108166522_H
#ifndef BINARYMETHODRETURN_T3366135632_H
#define BINARYMETHODRETURN_T3366135632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn
struct  BinaryMethodReturn_t3366135632  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn::returnValue
	RuntimeObject * ___returnValue_0;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn::args
	ObjectU5BU5D_t3614634134* ___args_1;
	// System.Exception System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn::exception
	Exception_t1927440687 * ___exception_2;
	// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn::callContext
	RuntimeObject * ___callContext_3;
	// System.String System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn::scallContext
	String_t* ___scallContext_4;
	// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn::properties
	RuntimeObject * ___properties_5;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn::argTypes
	TypeU5BU5D_t1664964607* ___argTypes_6;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn::bArgsPrimitive
	bool ___bArgsPrimitive_7;
	// System.Runtime.Serialization.Formatters.Binary.MessageEnum System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn::messageEnum
	int32_t ___messageEnum_8;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn::callA
	ObjectU5BU5D_t3614634134* ___callA_9;
	// System.Type System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn::returnType
	Type_t * ___returnType_10;

public:
	inline static int32_t get_offset_of_returnValue_0() { return static_cast<int32_t>(offsetof(BinaryMethodReturn_t3366135632, ___returnValue_0)); }
	inline RuntimeObject * get_returnValue_0() const { return ___returnValue_0; }
	inline RuntimeObject ** get_address_of_returnValue_0() { return &___returnValue_0; }
	inline void set_returnValue_0(RuntimeObject * value)
	{
		___returnValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___returnValue_0), value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(BinaryMethodReturn_t3366135632, ___args_1)); }
	inline ObjectU5BU5D_t3614634134* get_args_1() const { return ___args_1; }
	inline ObjectU5BU5D_t3614634134** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(ObjectU5BU5D_t3614634134* value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((&___args_1), value);
	}

	inline static int32_t get_offset_of_exception_2() { return static_cast<int32_t>(offsetof(BinaryMethodReturn_t3366135632, ___exception_2)); }
	inline Exception_t1927440687 * get_exception_2() const { return ___exception_2; }
	inline Exception_t1927440687 ** get_address_of_exception_2() { return &___exception_2; }
	inline void set_exception_2(Exception_t1927440687 * value)
	{
		___exception_2 = value;
		Il2CppCodeGenWriteBarrier((&___exception_2), value);
	}

	inline static int32_t get_offset_of_callContext_3() { return static_cast<int32_t>(offsetof(BinaryMethodReturn_t3366135632, ___callContext_3)); }
	inline RuntimeObject * get_callContext_3() const { return ___callContext_3; }
	inline RuntimeObject ** get_address_of_callContext_3() { return &___callContext_3; }
	inline void set_callContext_3(RuntimeObject * value)
	{
		___callContext_3 = value;
		Il2CppCodeGenWriteBarrier((&___callContext_3), value);
	}

	inline static int32_t get_offset_of_scallContext_4() { return static_cast<int32_t>(offsetof(BinaryMethodReturn_t3366135632, ___scallContext_4)); }
	inline String_t* get_scallContext_4() const { return ___scallContext_4; }
	inline String_t** get_address_of_scallContext_4() { return &___scallContext_4; }
	inline void set_scallContext_4(String_t* value)
	{
		___scallContext_4 = value;
		Il2CppCodeGenWriteBarrier((&___scallContext_4), value);
	}

	inline static int32_t get_offset_of_properties_5() { return static_cast<int32_t>(offsetof(BinaryMethodReturn_t3366135632, ___properties_5)); }
	inline RuntimeObject * get_properties_5() const { return ___properties_5; }
	inline RuntimeObject ** get_address_of_properties_5() { return &___properties_5; }
	inline void set_properties_5(RuntimeObject * value)
	{
		___properties_5 = value;
		Il2CppCodeGenWriteBarrier((&___properties_5), value);
	}

	inline static int32_t get_offset_of_argTypes_6() { return static_cast<int32_t>(offsetof(BinaryMethodReturn_t3366135632, ___argTypes_6)); }
	inline TypeU5BU5D_t1664964607* get_argTypes_6() const { return ___argTypes_6; }
	inline TypeU5BU5D_t1664964607** get_address_of_argTypes_6() { return &___argTypes_6; }
	inline void set_argTypes_6(TypeU5BU5D_t1664964607* value)
	{
		___argTypes_6 = value;
		Il2CppCodeGenWriteBarrier((&___argTypes_6), value);
	}

	inline static int32_t get_offset_of_bArgsPrimitive_7() { return static_cast<int32_t>(offsetof(BinaryMethodReturn_t3366135632, ___bArgsPrimitive_7)); }
	inline bool get_bArgsPrimitive_7() const { return ___bArgsPrimitive_7; }
	inline bool* get_address_of_bArgsPrimitive_7() { return &___bArgsPrimitive_7; }
	inline void set_bArgsPrimitive_7(bool value)
	{
		___bArgsPrimitive_7 = value;
	}

	inline static int32_t get_offset_of_messageEnum_8() { return static_cast<int32_t>(offsetof(BinaryMethodReturn_t3366135632, ___messageEnum_8)); }
	inline int32_t get_messageEnum_8() const { return ___messageEnum_8; }
	inline int32_t* get_address_of_messageEnum_8() { return &___messageEnum_8; }
	inline void set_messageEnum_8(int32_t value)
	{
		___messageEnum_8 = value;
	}

	inline static int32_t get_offset_of_callA_9() { return static_cast<int32_t>(offsetof(BinaryMethodReturn_t3366135632, ___callA_9)); }
	inline ObjectU5BU5D_t3614634134* get_callA_9() const { return ___callA_9; }
	inline ObjectU5BU5D_t3614634134** get_address_of_callA_9() { return &___callA_9; }
	inline void set_callA_9(ObjectU5BU5D_t3614634134* value)
	{
		___callA_9 = value;
		Il2CppCodeGenWriteBarrier((&___callA_9), value);
	}

	inline static int32_t get_offset_of_returnType_10() { return static_cast<int32_t>(offsetof(BinaryMethodReturn_t3366135632, ___returnType_10)); }
	inline Type_t * get_returnType_10() const { return ___returnType_10; }
	inline Type_t ** get_address_of_returnType_10() { return &___returnType_10; }
	inline void set_returnType_10(Type_t * value)
	{
		___returnType_10 = value;
		Il2CppCodeGenWriteBarrier((&___returnType_10), value);
	}
};

struct BinaryMethodReturn_t3366135632_StaticFields
{
public:
	// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn::instanceOfVoid
	RuntimeObject * ___instanceOfVoid_11;

public:
	inline static int32_t get_offset_of_instanceOfVoid_11() { return static_cast<int32_t>(offsetof(BinaryMethodReturn_t3366135632_StaticFields, ___instanceOfVoid_11)); }
	inline RuntimeObject * get_instanceOfVoid_11() const { return ___instanceOfVoid_11; }
	inline RuntimeObject ** get_address_of_instanceOfVoid_11() { return &___instanceOfVoid_11; }
	inline void set_instanceOfVoid_11(RuntimeObject * value)
	{
		___instanceOfVoid_11 = value;
		Il2CppCodeGenWriteBarrier((&___instanceOfVoid_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYMETHODRETURN_T3366135632_H
#ifndef RSAENCRYPTIONPADDING_T1083150860_H
#define RSAENCRYPTIONPADDING_T1083150860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAEncryptionPadding
struct  RSAEncryptionPadding_t1083150860  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RSAEncryptionPaddingMode System.Security.Cryptography.RSAEncryptionPadding::_mode
	int32_t ____mode_5;
	// System.Security.Cryptography.HashAlgorithmName System.Security.Cryptography.RSAEncryptionPadding::_oaepHashAlgorithm
	HashAlgorithmName_t1682985260  ____oaepHashAlgorithm_6;

public:
	inline static int32_t get_offset_of__mode_5() { return static_cast<int32_t>(offsetof(RSAEncryptionPadding_t1083150860, ____mode_5)); }
	inline int32_t get__mode_5() const { return ____mode_5; }
	inline int32_t* get_address_of__mode_5() { return &____mode_5; }
	inline void set__mode_5(int32_t value)
	{
		____mode_5 = value;
	}

	inline static int32_t get_offset_of__oaepHashAlgorithm_6() { return static_cast<int32_t>(offsetof(RSAEncryptionPadding_t1083150860, ____oaepHashAlgorithm_6)); }
	inline HashAlgorithmName_t1682985260  get__oaepHashAlgorithm_6() const { return ____oaepHashAlgorithm_6; }
	inline HashAlgorithmName_t1682985260 * get_address_of__oaepHashAlgorithm_6() { return &____oaepHashAlgorithm_6; }
	inline void set__oaepHashAlgorithm_6(HashAlgorithmName_t1682985260  value)
	{
		____oaepHashAlgorithm_6 = value;
	}
};

struct RSAEncryptionPadding_t1083150860_StaticFields
{
public:
	// System.Security.Cryptography.RSAEncryptionPadding System.Security.Cryptography.RSAEncryptionPadding::s_pkcs1
	RSAEncryptionPadding_t1083150860 * ___s_pkcs1_0;
	// System.Security.Cryptography.RSAEncryptionPadding System.Security.Cryptography.RSAEncryptionPadding::s_oaepSHA1
	RSAEncryptionPadding_t1083150860 * ___s_oaepSHA1_1;
	// System.Security.Cryptography.RSAEncryptionPadding System.Security.Cryptography.RSAEncryptionPadding::s_oaepSHA256
	RSAEncryptionPadding_t1083150860 * ___s_oaepSHA256_2;
	// System.Security.Cryptography.RSAEncryptionPadding System.Security.Cryptography.RSAEncryptionPadding::s_oaepSHA384
	RSAEncryptionPadding_t1083150860 * ___s_oaepSHA384_3;
	// System.Security.Cryptography.RSAEncryptionPadding System.Security.Cryptography.RSAEncryptionPadding::s_oaepSHA512
	RSAEncryptionPadding_t1083150860 * ___s_oaepSHA512_4;

public:
	inline static int32_t get_offset_of_s_pkcs1_0() { return static_cast<int32_t>(offsetof(RSAEncryptionPadding_t1083150860_StaticFields, ___s_pkcs1_0)); }
	inline RSAEncryptionPadding_t1083150860 * get_s_pkcs1_0() const { return ___s_pkcs1_0; }
	inline RSAEncryptionPadding_t1083150860 ** get_address_of_s_pkcs1_0() { return &___s_pkcs1_0; }
	inline void set_s_pkcs1_0(RSAEncryptionPadding_t1083150860 * value)
	{
		___s_pkcs1_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_pkcs1_0), value);
	}

	inline static int32_t get_offset_of_s_oaepSHA1_1() { return static_cast<int32_t>(offsetof(RSAEncryptionPadding_t1083150860_StaticFields, ___s_oaepSHA1_1)); }
	inline RSAEncryptionPadding_t1083150860 * get_s_oaepSHA1_1() const { return ___s_oaepSHA1_1; }
	inline RSAEncryptionPadding_t1083150860 ** get_address_of_s_oaepSHA1_1() { return &___s_oaepSHA1_1; }
	inline void set_s_oaepSHA1_1(RSAEncryptionPadding_t1083150860 * value)
	{
		___s_oaepSHA1_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_oaepSHA1_1), value);
	}

	inline static int32_t get_offset_of_s_oaepSHA256_2() { return static_cast<int32_t>(offsetof(RSAEncryptionPadding_t1083150860_StaticFields, ___s_oaepSHA256_2)); }
	inline RSAEncryptionPadding_t1083150860 * get_s_oaepSHA256_2() const { return ___s_oaepSHA256_2; }
	inline RSAEncryptionPadding_t1083150860 ** get_address_of_s_oaepSHA256_2() { return &___s_oaepSHA256_2; }
	inline void set_s_oaepSHA256_2(RSAEncryptionPadding_t1083150860 * value)
	{
		___s_oaepSHA256_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_oaepSHA256_2), value);
	}

	inline static int32_t get_offset_of_s_oaepSHA384_3() { return static_cast<int32_t>(offsetof(RSAEncryptionPadding_t1083150860_StaticFields, ___s_oaepSHA384_3)); }
	inline RSAEncryptionPadding_t1083150860 * get_s_oaepSHA384_3() const { return ___s_oaepSHA384_3; }
	inline RSAEncryptionPadding_t1083150860 ** get_address_of_s_oaepSHA384_3() { return &___s_oaepSHA384_3; }
	inline void set_s_oaepSHA384_3(RSAEncryptionPadding_t1083150860 * value)
	{
		___s_oaepSHA384_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_oaepSHA384_3), value);
	}

	inline static int32_t get_offset_of_s_oaepSHA512_4() { return static_cast<int32_t>(offsetof(RSAEncryptionPadding_t1083150860_StaticFields, ___s_oaepSHA512_4)); }
	inline RSAEncryptionPadding_t1083150860 * get_s_oaepSHA512_4() const { return ___s_oaepSHA512_4; }
	inline RSAEncryptionPadding_t1083150860 ** get_address_of_s_oaepSHA512_4() { return &___s_oaepSHA512_4; }
	inline void set_s_oaepSHA512_4(RSAEncryptionPadding_t1083150860 * value)
	{
		___s_oaepSHA512_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_oaepSHA512_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAENCRYPTIONPADDING_T1083150860_H
#ifndef OBJECTMANAGER_T2645893724_H
#define OBJECTMANAGER_T2645893724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectManager
struct  ObjectManager_t2645893724  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.DeserializationEventHandler System.Runtime.Serialization.ObjectManager::m_onDeserializationHandler
	DeserializationEventHandler_t1801856893 * ___m_onDeserializationHandler_0;
	// System.Runtime.Serialization.SerializationEventHandler System.Runtime.Serialization.ObjectManager::m_onDeserializedHandler
	SerializationEventHandler_t2339848500 * ___m_onDeserializedHandler_1;
	// System.Runtime.Serialization.ObjectHolder[] System.Runtime.Serialization.ObjectManager::m_objects
	ObjectHolderU5BU5D_t2337234454* ___m_objects_2;
	// System.Object System.Runtime.Serialization.ObjectManager::m_topObject
	RuntimeObject * ___m_topObject_3;
	// System.Runtime.Serialization.ObjectHolderList System.Runtime.Serialization.ObjectManager::m_specialFixupObjects
	ObjectHolderList_t1856843635 * ___m_specialFixupObjects_4;
	// System.Int64 System.Runtime.Serialization.ObjectManager::m_fixupCount
	int64_t ___m_fixupCount_5;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectManager::m_selector
	RuntimeObject* ___m_selector_6;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.ObjectManager::m_context
	StreamingContext_t1417235061  ___m_context_7;

public:
	inline static int32_t get_offset_of_m_onDeserializationHandler_0() { return static_cast<int32_t>(offsetof(ObjectManager_t2645893724, ___m_onDeserializationHandler_0)); }
	inline DeserializationEventHandler_t1801856893 * get_m_onDeserializationHandler_0() const { return ___m_onDeserializationHandler_0; }
	inline DeserializationEventHandler_t1801856893 ** get_address_of_m_onDeserializationHandler_0() { return &___m_onDeserializationHandler_0; }
	inline void set_m_onDeserializationHandler_0(DeserializationEventHandler_t1801856893 * value)
	{
		___m_onDeserializationHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_onDeserializationHandler_0), value);
	}

	inline static int32_t get_offset_of_m_onDeserializedHandler_1() { return static_cast<int32_t>(offsetof(ObjectManager_t2645893724, ___m_onDeserializedHandler_1)); }
	inline SerializationEventHandler_t2339848500 * get_m_onDeserializedHandler_1() const { return ___m_onDeserializedHandler_1; }
	inline SerializationEventHandler_t2339848500 ** get_address_of_m_onDeserializedHandler_1() { return &___m_onDeserializedHandler_1; }
	inline void set_m_onDeserializedHandler_1(SerializationEventHandler_t2339848500 * value)
	{
		___m_onDeserializedHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_onDeserializedHandler_1), value);
	}

	inline static int32_t get_offset_of_m_objects_2() { return static_cast<int32_t>(offsetof(ObjectManager_t2645893724, ___m_objects_2)); }
	inline ObjectHolderU5BU5D_t2337234454* get_m_objects_2() const { return ___m_objects_2; }
	inline ObjectHolderU5BU5D_t2337234454** get_address_of_m_objects_2() { return &___m_objects_2; }
	inline void set_m_objects_2(ObjectHolderU5BU5D_t2337234454* value)
	{
		___m_objects_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_objects_2), value);
	}

	inline static int32_t get_offset_of_m_topObject_3() { return static_cast<int32_t>(offsetof(ObjectManager_t2645893724, ___m_topObject_3)); }
	inline RuntimeObject * get_m_topObject_3() const { return ___m_topObject_3; }
	inline RuntimeObject ** get_address_of_m_topObject_3() { return &___m_topObject_3; }
	inline void set_m_topObject_3(RuntimeObject * value)
	{
		___m_topObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_topObject_3), value);
	}

	inline static int32_t get_offset_of_m_specialFixupObjects_4() { return static_cast<int32_t>(offsetof(ObjectManager_t2645893724, ___m_specialFixupObjects_4)); }
	inline ObjectHolderList_t1856843635 * get_m_specialFixupObjects_4() const { return ___m_specialFixupObjects_4; }
	inline ObjectHolderList_t1856843635 ** get_address_of_m_specialFixupObjects_4() { return &___m_specialFixupObjects_4; }
	inline void set_m_specialFixupObjects_4(ObjectHolderList_t1856843635 * value)
	{
		___m_specialFixupObjects_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_specialFixupObjects_4), value);
	}

	inline static int32_t get_offset_of_m_fixupCount_5() { return static_cast<int32_t>(offsetof(ObjectManager_t2645893724, ___m_fixupCount_5)); }
	inline int64_t get_m_fixupCount_5() const { return ___m_fixupCount_5; }
	inline int64_t* get_address_of_m_fixupCount_5() { return &___m_fixupCount_5; }
	inline void set_m_fixupCount_5(int64_t value)
	{
		___m_fixupCount_5 = value;
	}

	inline static int32_t get_offset_of_m_selector_6() { return static_cast<int32_t>(offsetof(ObjectManager_t2645893724, ___m_selector_6)); }
	inline RuntimeObject* get_m_selector_6() const { return ___m_selector_6; }
	inline RuntimeObject** get_address_of_m_selector_6() { return &___m_selector_6; }
	inline void set_m_selector_6(RuntimeObject* value)
	{
		___m_selector_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_selector_6), value);
	}

	inline static int32_t get_offset_of_m_context_7() { return static_cast<int32_t>(offsetof(ObjectManager_t2645893724, ___m_context_7)); }
	inline StreamingContext_t1417235061  get_m_context_7() const { return ___m_context_7; }
	inline StreamingContext_t1417235061 * get_address_of_m_context_7() { return &___m_context_7; }
	inline void set_m_context_7(StreamingContext_t1417235061  value)
	{
		___m_context_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTMANAGER_T2645893724_H
#ifndef SERIALIZATIONOBJECTMANAGER_T4052555190_H
#define SERIALIZATIONOBJECTMANAGER_T4052555190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationObjectManager
struct  SerializationObjectManager_t4052555190  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationObjectManager::m_objectSeenTable
	Hashtable_t909839986 * ___m_objectSeenTable_0;
	// System.Runtime.Serialization.SerializationEventHandler System.Runtime.Serialization.SerializationObjectManager::m_onSerializedHandler
	SerializationEventHandler_t2339848500 * ___m_onSerializedHandler_1;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.SerializationObjectManager::m_context
	StreamingContext_t1417235061  ___m_context_2;

public:
	inline static int32_t get_offset_of_m_objectSeenTable_0() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t4052555190, ___m_objectSeenTable_0)); }
	inline Hashtable_t909839986 * get_m_objectSeenTable_0() const { return ___m_objectSeenTable_0; }
	inline Hashtable_t909839986 ** get_address_of_m_objectSeenTable_0() { return &___m_objectSeenTable_0; }
	inline void set_m_objectSeenTable_0(Hashtable_t909839986 * value)
	{
		___m_objectSeenTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_objectSeenTable_0), value);
	}

	inline static int32_t get_offset_of_m_onSerializedHandler_1() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t4052555190, ___m_onSerializedHandler_1)); }
	inline SerializationEventHandler_t2339848500 * get_m_onSerializedHandler_1() const { return ___m_onSerializedHandler_1; }
	inline SerializationEventHandler_t2339848500 ** get_address_of_m_onSerializedHandler_1() { return &___m_onSerializedHandler_1; }
	inline void set_m_onSerializedHandler_1(SerializationEventHandler_t2339848500 * value)
	{
		___m_onSerializedHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_onSerializedHandler_1), value);
	}

	inline static int32_t get_offset_of_m_context_2() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t4052555190, ___m_context_2)); }
	inline StreamingContext_t1417235061  get_m_context_2() const { return ___m_context_2; }
	inline StreamingContext_t1417235061 * get_address_of_m_context_2() { return &___m_context_2; }
	inline void set_m_context_2(StreamingContext_t1417235061  value)
	{
		___m_context_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONOBJECTMANAGER_T4052555190_H
#ifndef MEMBERHOLDER_T3720434074_H
#define MEMBERHOLDER_T3720434074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.MemberHolder
struct  MemberHolder_t3720434074  : public RuntimeObject
{
public:
	// System.Type System.Runtime.Serialization.MemberHolder::memberType
	Type_t * ___memberType_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.MemberHolder::context
	StreamingContext_t1417235061  ___context_1;

public:
	inline static int32_t get_offset_of_memberType_0() { return static_cast<int32_t>(offsetof(MemberHolder_t3720434074, ___memberType_0)); }
	inline Type_t * get_memberType_0() const { return ___memberType_0; }
	inline Type_t ** get_address_of_memberType_0() { return &___memberType_0; }
	inline void set_memberType_0(Type_t * value)
	{
		___memberType_0 = value;
		Il2CppCodeGenWriteBarrier((&___memberType_0), value);
	}

	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(MemberHolder_t3720434074, ___context_1)); }
	inline StreamingContext_t1417235061  get_context_1() const { return ___context_1; }
	inline StreamingContext_t1417235061 * get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(StreamingContext_t1417235061  value)
	{
		___context_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERHOLDER_T3720434074_H
#ifndef RC2_T3410342145_H
#define RC2_T3410342145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2
struct  RC2_t3410342145  : public SymmetricAlgorithm_t1108166522
{
public:
	// System.Int32 System.Security.Cryptography.RC2::EffectiveKeySizeValue
	int32_t ___EffectiveKeySizeValue_9;

public:
	inline static int32_t get_offset_of_EffectiveKeySizeValue_9() { return static_cast<int32_t>(offsetof(RC2_t3410342145, ___EffectiveKeySizeValue_9)); }
	inline int32_t get_EffectiveKeySizeValue_9() const { return ___EffectiveKeySizeValue_9; }
	inline int32_t* get_address_of_EffectiveKeySizeValue_9() { return &___EffectiveKeySizeValue_9; }
	inline void set_EffectiveKeySizeValue_9(int32_t value)
	{
		___EffectiveKeySizeValue_9 = value;
	}
};

struct RC2_t3410342145_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.RC2::s_legalBlockSizes
	KeySizesU5BU5D_t1153004758* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.RC2::s_legalKeySizes
	KeySizesU5BU5D_t1153004758* ___s_legalKeySizes_11;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_10() { return static_cast<int32_t>(offsetof(RC2_t3410342145_StaticFields, ___s_legalBlockSizes_10)); }
	inline KeySizesU5BU5D_t1153004758* get_s_legalBlockSizes_10() const { return ___s_legalBlockSizes_10; }
	inline KeySizesU5BU5D_t1153004758** get_address_of_s_legalBlockSizes_10() { return &___s_legalBlockSizes_10; }
	inline void set_s_legalBlockSizes_10(KeySizesU5BU5D_t1153004758* value)
	{
		___s_legalBlockSizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_10), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_11() { return static_cast<int32_t>(offsetof(RC2_t3410342145_StaticFields, ___s_legalKeySizes_11)); }
	inline KeySizesU5BU5D_t1153004758* get_s_legalKeySizes_11() const { return ___s_legalKeySizes_11; }
	inline KeySizesU5BU5D_t1153004758** get_address_of_s_legalKeySizes_11() { return &___s_legalKeySizes_11; }
	inline void set_s_legalKeySizes_11(KeySizesU5BU5D_t1153004758* value)
	{
		___s_legalKeySizes_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2_T3410342145_H
#ifndef SERIALIZATIONEVENTHANDLER_T2339848500_H
#define SERIALIZATIONEVENTHANDLER_T2339848500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationEventHandler
struct  SerializationEventHandler_t2339848500  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONEVENTHANDLER_T2339848500_H
#ifndef TRIPLEDES_T243950698_H
#define TRIPLEDES_T243950698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDES
struct  TripleDES_t243950698  : public SymmetricAlgorithm_t1108166522
{
public:

public:
};

struct TripleDES_t243950698_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.TripleDES::s_legalBlockSizes
	KeySizesU5BU5D_t1153004758* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.TripleDES::s_legalKeySizes
	KeySizesU5BU5D_t1153004758* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(TripleDES_t243950698_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_t1153004758* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_t1153004758** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_t1153004758* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_9), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(TripleDES_t243950698_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_t1153004758* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_t1153004758** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_t1153004758* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDES_T243950698_H
#ifndef RIJNDAEL_T2154803531_H
#define RIJNDAEL_T2154803531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rijndael
struct  Rijndael_t2154803531  : public SymmetricAlgorithm_t1108166522
{
public:

public:
};

struct Rijndael_t2154803531_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalBlockSizes
	KeySizesU5BU5D_t1153004758* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalKeySizes
	KeySizesU5BU5D_t1153004758* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(Rijndael_t2154803531_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_t1153004758* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_t1153004758** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_t1153004758* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_9), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(Rijndael_t2154803531_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_t1153004758* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_t1153004758** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_t1153004758* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAEL_T2154803531_H
#ifndef SAFESERIALIZATIONEVENTARGS_T1088103422_H
#define SAFESERIALIZATIONEVENTARGS_T1088103422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SafeSerializationEventArgs
struct  SafeSerializationEventArgs_t1088103422  : public EventArgs_t3289624707
{
public:
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.SafeSerializationEventArgs::m_streamingContext
	StreamingContext_t1417235061  ___m_streamingContext_1;
	// System.Collections.Generic.List`1<System.Object> System.Runtime.Serialization.SafeSerializationEventArgs::m_serializedStates
	List_1_t2058570427 * ___m_serializedStates_2;

public:
	inline static int32_t get_offset_of_m_streamingContext_1() { return static_cast<int32_t>(offsetof(SafeSerializationEventArgs_t1088103422, ___m_streamingContext_1)); }
	inline StreamingContext_t1417235061  get_m_streamingContext_1() const { return ___m_streamingContext_1; }
	inline StreamingContext_t1417235061 * get_address_of_m_streamingContext_1() { return &___m_streamingContext_1; }
	inline void set_m_streamingContext_1(StreamingContext_t1417235061  value)
	{
		___m_streamingContext_1 = value;
	}

	inline static int32_t get_offset_of_m_serializedStates_2() { return static_cast<int32_t>(offsetof(SafeSerializationEventArgs_t1088103422, ___m_serializedStates_2)); }
	inline List_1_t2058570427 * get_m_serializedStates_2() const { return ___m_serializedStates_2; }
	inline List_1_t2058570427 ** get_address_of_m_serializedStates_2() { return &___m_serializedStates_2; }
	inline void set_m_serializedStates_2(List_1_t2058570427 * value)
	{
		___m_serializedStates_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_serializedStates_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFESERIALIZATIONEVENTARGS_T1088103422_H
#ifndef DESERIALIZATIONEVENTHANDLER_T1801856893_H
#define DESERIALIZATIONEVENTHANDLER_T1801856893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DeserializationEventHandler
struct  DeserializationEventHandler_t1801856893  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESERIALIZATIONEVENTHANDLER_T1801856893_H
#ifndef RIJNDAELMANAGED_T1034060848_H
#define RIJNDAELMANAGED_T1034060848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManaged
struct  RijndaelManaged_t1034060848  : public Rijndael_t2154803531
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGED_T1034060848_H
#ifndef TRIPLEDESCRYPTOSERVICEPROVIDER_T2380467305_H
#define TRIPLEDESCRYPTOSERVICEPROVIDER_T2380467305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct  TripleDESCryptoServiceProvider_t2380467305  : public TripleDES_t243950698
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESCRYPTOSERVICEPROVIDER_T2380467305_H
#ifndef RC2CRYPTOSERVICEPROVIDER_T663781682_H
#define RC2CRYPTOSERVICEPROVIDER_T663781682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2CryptoServiceProvider
struct  RC2CryptoServiceProvider_t663781682  : public RC2_t3410342145
{
public:
	// System.Boolean System.Security.Cryptography.RC2CryptoServiceProvider::m_use40bitSalt
	bool ___m_use40bitSalt_12;

public:
	inline static int32_t get_offset_of_m_use40bitSalt_12() { return static_cast<int32_t>(offsetof(RC2CryptoServiceProvider_t663781682, ___m_use40bitSalt_12)); }
	inline bool get_m_use40bitSalt_12() const { return ___m_use40bitSalt_12; }
	inline bool* get_address_of_m_use40bitSalt_12() { return &___m_use40bitSalt_12; }
	inline void set_m_use40bitSalt_12(bool value)
	{
		___m_use40bitSalt_12 = value;
	}
};

struct RC2CryptoServiceProvider_t663781682_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.RC2CryptoServiceProvider::s_legalKeySizes
	KeySizesU5BU5D_t1153004758* ___s_legalKeySizes_13;

public:
	inline static int32_t get_offset_of_s_legalKeySizes_13() { return static_cast<int32_t>(offsetof(RC2CryptoServiceProvider_t663781682_StaticFields, ___s_legalKeySizes_13)); }
	inline KeySizesU5BU5D_t1153004758* get_s_legalKeySizes_13() const { return ___s_legalKeySizes_13; }
	inline KeySizesU5BU5D_t1153004758** get_address_of_s_legalKeySizes_13() { return &___s_legalKeySizes_13; }
	inline void set_s_legalKeySizes_13(KeySizesU5BU5D_t1153004758* value)
	{
		___s_legalKeySizes_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2CRYPTOSERVICEPROVIDER_T663781682_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize700 = { sizeof (PKCS1MaskGenerationMethod_t3159630323), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable700[1] = 
{
	PKCS1MaskGenerationMethod_t3159630323::get_offset_of_HashNameValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize701 = { sizeof (RandomNumberGenerator_t2510243513), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize702 = { sizeof (RC2_t3410342145), -1, sizeof(RC2_t3410342145_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable702[3] = 
{
	RC2_t3410342145::get_offset_of_EffectiveKeySizeValue_9(),
	RC2_t3410342145_StaticFields::get_offset_of_s_legalBlockSizes_10(),
	RC2_t3410342145_StaticFields::get_offset_of_s_legalKeySizes_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize703 = { sizeof (RC2CryptoServiceProvider_t663781682), -1, sizeof(RC2CryptoServiceProvider_t663781682_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable703[2] = 
{
	RC2CryptoServiceProvider_t663781682::get_offset_of_m_use40bitSalt_12(),
	RC2CryptoServiceProvider_t663781682_StaticFields::get_offset_of_s_legalKeySizes_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize704 = { sizeof (Rijndael_t2154803531), -1, sizeof(Rijndael_t2154803531_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable704[2] = 
{
	Rijndael_t2154803531_StaticFields::get_offset_of_s_legalBlockSizes_9(),
	Rijndael_t2154803531_StaticFields::get_offset_of_s_legalKeySizes_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize705 = { sizeof (RijndaelManaged_t1034060848), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize706 = { sizeof (RijndaelManagedTransformMode_t4113989319)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable706[3] = 
{
	RijndaelManagedTransformMode_t4113989319::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize707 = { sizeof (RijndaelManagedTransform_t135163252), -1, sizeof(RijndaelManagedTransform_t135163252_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable707[24] = 
{
	RijndaelManagedTransform_t135163252::get_offset_of_m_cipherMode_0(),
	RijndaelManagedTransform_t135163252::get_offset_of_m_paddingValue_1(),
	RijndaelManagedTransform_t135163252::get_offset_of_m_transformMode_2(),
	RijndaelManagedTransform_t135163252::get_offset_of_m_blockSizeBits_3(),
	RijndaelManagedTransform_t135163252::get_offset_of_m_blockSizeBytes_4(),
	RijndaelManagedTransform_t135163252::get_offset_of_m_inputBlockSize_5(),
	RijndaelManagedTransform_t135163252::get_offset_of_m_outputBlockSize_6(),
	RijndaelManagedTransform_t135163252::get_offset_of_m_encryptKeyExpansion_7(),
	RijndaelManagedTransform_t135163252::get_offset_of_m_decryptKeyExpansion_8(),
	RijndaelManagedTransform_t135163252::get_offset_of_m_Nr_9(),
	RijndaelManagedTransform_t135163252::get_offset_of_m_Nb_10(),
	RijndaelManagedTransform_t135163252::get_offset_of_m_Nk_11(),
	RijndaelManagedTransform_t135163252::get_offset_of_m_encryptindex_12(),
	RijndaelManagedTransform_t135163252::get_offset_of_m_decryptindex_13(),
	RijndaelManagedTransform_t135163252::get_offset_of_m_IV_14(),
	RijndaelManagedTransform_t135163252::get_offset_of_m_lastBlockBuffer_15(),
	RijndaelManagedTransform_t135163252::get_offset_of_m_depadBuffer_16(),
	RijndaelManagedTransform_t135163252::get_offset_of_m_shiftRegister_17(),
	RijndaelManagedTransform_t135163252_StaticFields::get_offset_of_s_Sbox_18(),
	RijndaelManagedTransform_t135163252_StaticFields::get_offset_of_s_Rcon_19(),
	RijndaelManagedTransform_t135163252_StaticFields::get_offset_of_s_T_20(),
	RijndaelManagedTransform_t135163252_StaticFields::get_offset_of_s_TF_21(),
	RijndaelManagedTransform_t135163252_StaticFields::get_offset_of_s_iT_22(),
	RijndaelManagedTransform_t135163252_StaticFields::get_offset_of_s_iTF_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize708 = { sizeof (RIPEMD160_t1732039966), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize709 = { sizeof (RIPEMD160Managed_t1613307429), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable709[4] = 
{
	RIPEMD160Managed_t1613307429::get_offset_of__buffer_4(),
	RIPEMD160Managed_t1613307429::get_offset_of__count_5(),
	RIPEMD160Managed_t1613307429::get_offset_of__stateMD160_6(),
	RIPEMD160Managed_t1613307429::get_offset_of__blockDWords_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize710 = { sizeof (RSAParameters_t1462703416)+ sizeof (RuntimeObject), sizeof(RSAParameters_t1462703416_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable710[8] = 
{
	RSAParameters_t1462703416::get_offset_of_Exponent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1462703416::get_offset_of_Modulus_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1462703416::get_offset_of_P_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1462703416::get_offset_of_Q_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1462703416::get_offset_of_DP_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1462703416::get_offset_of_DQ_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1462703416::get_offset_of_InverseQ_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1462703416::get_offset_of_D_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize711 = { sizeof (RSA_t3719518354), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize712 = { sizeof (RSAOAEPKeyExchangeFormatter_t3166320901), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable712[2] = 
{
	RSAOAEPKeyExchangeFormatter_t3166320901::get_offset_of__rsaKey_0(),
	RSAOAEPKeyExchangeFormatter_t3166320901::get_offset_of__rsaOverridesEncrypt_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize713 = { sizeof (RSAPKCS1KeyExchangeFormatter_t4167037264), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable713[3] = 
{
	RSAPKCS1KeyExchangeFormatter_t4167037264::get_offset_of_RngValue_0(),
	RSAPKCS1KeyExchangeFormatter_t4167037264::get_offset_of__rsaKey_1(),
	RSAPKCS1KeyExchangeFormatter_t4167037264::get_offset_of__rsaOverridesEncrypt_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize714 = { sizeof (RSAEncryptionPadding_t1083150860), -1, sizeof(RSAEncryptionPadding_t1083150860_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable714[7] = 
{
	RSAEncryptionPadding_t1083150860_StaticFields::get_offset_of_s_pkcs1_0(),
	RSAEncryptionPadding_t1083150860_StaticFields::get_offset_of_s_oaepSHA1_1(),
	RSAEncryptionPadding_t1083150860_StaticFields::get_offset_of_s_oaepSHA256_2(),
	RSAEncryptionPadding_t1083150860_StaticFields::get_offset_of_s_oaepSHA384_3(),
	RSAEncryptionPadding_t1083150860_StaticFields::get_offset_of_s_oaepSHA512_4(),
	RSAEncryptionPadding_t1083150860::get_offset_of__mode_5(),
	RSAEncryptionPadding_t1083150860::get_offset_of__oaepHashAlgorithm_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize715 = { sizeof (RSAEncryptionPaddingMode_t4275626723)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable715[3] = 
{
	RSAEncryptionPaddingMode_t4275626723::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize716 = { sizeof (SHA1_t3336793149), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize717 = { sizeof (SHA1Managed_t7268864), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable717[4] = 
{
	SHA1Managed_t7268864::get_offset_of__buffer_4(),
	SHA1Managed_t7268864::get_offset_of__count_5(),
	SHA1Managed_t7268864::get_offset_of__stateSHA1_6(),
	SHA1Managed_t7268864::get_offset_of__expandedBuffer_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize718 = { sizeof (SHA256_t582564463), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize719 = { sizeof (SHA256Managed_t2029745292), -1, sizeof(SHA256Managed_t2029745292_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable719[5] = 
{
	SHA256Managed_t2029745292::get_offset_of__buffer_4(),
	SHA256Managed_t2029745292::get_offset_of__count_5(),
	SHA256Managed_t2029745292::get_offset_of__stateSHA256_6(),
	SHA256Managed_t2029745292::get_offset_of__W_7(),
	SHA256Managed_t2029745292_StaticFields::get_offset_of__K_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize720 = { sizeof (SHA384_t535510267), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize721 = { sizeof (SHA384Managed_t741627254), -1, sizeof(SHA384Managed_t741627254_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable721[5] = 
{
	SHA384Managed_t741627254::get_offset_of__buffer_4(),
	SHA384Managed_t741627254::get_offset_of__count_5(),
	SHA384Managed_t741627254::get_offset_of__stateSHA384_6(),
	SHA384Managed_t741627254::get_offset_of__W_7(),
	SHA384Managed_t741627254_StaticFields::get_offset_of__K_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize722 = { sizeof (SHA512_t2908163326), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize723 = { sizeof (SHA512Managed_t3949709369), -1, sizeof(SHA512Managed_t3949709369_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable723[5] = 
{
	SHA512Managed_t3949709369::get_offset_of__buffer_4(),
	SHA512Managed_t3949709369::get_offset_of__count_5(),
	SHA512Managed_t3949709369::get_offset_of__stateSHA512_6(),
	SHA512Managed_t3949709369::get_offset_of__W_7(),
	SHA512Managed_t3949709369_StaticFields::get_offset_of__K_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize724 = { sizeof (SignatureDescription_t89145500), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable724[4] = 
{
	SignatureDescription_t89145500::get_offset_of__strKey_0(),
	SignatureDescription_t89145500::get_offset_of__strDigest_1(),
	SignatureDescription_t89145500::get_offset_of__strFormatter_2(),
	SignatureDescription_t89145500::get_offset_of__strDeformatter_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize725 = { sizeof (RSAPKCS1SignatureDescription_t2452358846), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable725[1] = 
{
	RSAPKCS1SignatureDescription_t2452358846::get_offset_of__hashAlgorithm_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize726 = { sizeof (RSAPKCS1SHA1SignatureDescription_t2477284625), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize727 = { sizeof (RSAPKCS1SHA256SignatureDescription_t1667091043), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize728 = { sizeof (RSAPKCS1SHA384SignatureDescription_t3714880827), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize729 = { sizeof (RSAPKCS1SHA512SignatureDescription_t2743264430), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize730 = { sizeof (DSASignatureDescription_t1998527418), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize731 = { sizeof (SymmetricAlgorithm_t1108166522), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable731[9] = 
{
	SymmetricAlgorithm_t1108166522::get_offset_of_BlockSizeValue_0(),
	SymmetricAlgorithm_t1108166522::get_offset_of_FeedbackSizeValue_1(),
	SymmetricAlgorithm_t1108166522::get_offset_of_IVValue_2(),
	SymmetricAlgorithm_t1108166522::get_offset_of_KeyValue_3(),
	SymmetricAlgorithm_t1108166522::get_offset_of_LegalBlockSizesValue_4(),
	SymmetricAlgorithm_t1108166522::get_offset_of_LegalKeySizesValue_5(),
	SymmetricAlgorithm_t1108166522::get_offset_of_KeySizeValue_6(),
	SymmetricAlgorithm_t1108166522::get_offset_of_ModeValue_7(),
	SymmetricAlgorithm_t1108166522::get_offset_of_PaddingValue_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize732 = { sizeof (TripleDES_t243950698), -1, sizeof(TripleDES_t243950698_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable732[2] = 
{
	TripleDES_t243950698_StaticFields::get_offset_of_s_legalBlockSizes_9(),
	TripleDES_t243950698_StaticFields::get_offset_of_s_legalKeySizes_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize733 = { sizeof (TripleDESCryptoServiceProvider_t2380467305), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize734 = { sizeof (Utils_t1602189171), -1, sizeof(Utils_t1602189171_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable734[1] = 
{
	Utils_t1602189171_StaticFields::get_offset_of__rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize735 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize736 = { sizeof (X509Certificate_t283079845), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable736[4] = 
{
	X509Certificate_t283079845::get_offset_of_impl_0(),
	X509Certificate_t283079845::get_offset_of_hideDates_1(),
	X509Certificate_t283079845::get_offset_of_issuer_name_2(),
	X509Certificate_t283079845::get_offset_of_subject_name_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize737 = { sizeof (X509CertificateImpl_t3842064707), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable737[1] = 
{
	X509CertificateImpl_t3842064707::get_offset_of_cachedCertificateHash_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize738 = { sizeof (X509CertificateImplMono_t2148381192), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable738[1] = 
{
	X509CertificateImplMono_t2148381192::get_offset_of_x509_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize739 = { sizeof (X509Helper_t1751628948), -1, sizeof(X509Helper_t1751628948_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable739[1] = 
{
	X509Helper_t1751628948_StaticFields::get_offset_of_nativeHelper_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize740 = { sizeof (X509KeyStorageFlags_t1216946873)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable740[7] = 
{
	X509KeyStorageFlags_t1216946873::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize741 = { sizeof (OidGroup_t3737064127)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable741[13] = 
{
	OidGroup_t3737064127::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize742 = { sizeof (X509CertificateImplApple_t333049723), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable742[2] = 
{
	X509CertificateImplApple_t333049723::get_offset_of_handle_1(),
	X509CertificateImplApple_t333049723::get_offset_of_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize743 = { sizeof (RegistryRights_t427223974)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable743[15] = 
{
	RegistryRights_t427223974::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize744 = { sizeof (DeserializationEventHandler_t1801856893), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize745 = { sizeof (SerializationEventHandler_t2339848500), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize746 = { sizeof (FormatterConverter_t764140214), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize747 = { sizeof (FormatterServices_t3161112612), -1, sizeof(FormatterServices_t3161112612_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable747[6] = 
{
	FormatterServices_t3161112612_StaticFields::get_offset_of_m_MemberInfoTable_0(),
	FormatterServices_t3161112612_StaticFields::get_offset_of_unsafeTypeForwardersIsEnabled_1(),
	FormatterServices_t3161112612_StaticFields::get_offset_of_unsafeTypeForwardersIsEnabledInitialized_2(),
	FormatterServices_t3161112612_StaticFields::get_offset_of_s_FormatterServicesSyncObject_3(),
	FormatterServices_t3161112612_StaticFields::get_offset_of_advancedTypes_4(),
	FormatterServices_t3161112612_StaticFields::get_offset_of_s_binder_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize748 = { sizeof (SurrogateForCyclicalReference_t2955664662), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable748[1] = 
{
	SurrogateForCyclicalReference_t2955664662::get_offset_of_innerSurrogate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize749 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize750 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize751 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize752 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize753 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize754 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize755 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize756 = { sizeof (MemberHolder_t3720434074), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable756[2] = 
{
	MemberHolder_t3720434074::get_offset_of_memberType_0(),
	MemberHolder_t3720434074::get_offset_of_context_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize757 = { sizeof (ObjectIDGenerator_t3070747799), -1, sizeof(ObjectIDGenerator_t3070747799_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable757[5] = 
{
	ObjectIDGenerator_t3070747799::get_offset_of_m_currentCount_0(),
	ObjectIDGenerator_t3070747799::get_offset_of_m_currentSize_1(),
	ObjectIDGenerator_t3070747799::get_offset_of_m_ids_2(),
	ObjectIDGenerator_t3070747799::get_offset_of_m_objs_3(),
	ObjectIDGenerator_t3070747799_StaticFields::get_offset_of_sizes_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize758 = { sizeof (ObjectManager_t2645893724), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable758[8] = 
{
	ObjectManager_t2645893724::get_offset_of_m_onDeserializationHandler_0(),
	ObjectManager_t2645893724::get_offset_of_m_onDeserializedHandler_1(),
	ObjectManager_t2645893724::get_offset_of_m_objects_2(),
	ObjectManager_t2645893724::get_offset_of_m_topObject_3(),
	ObjectManager_t2645893724::get_offset_of_m_specialFixupObjects_4(),
	ObjectManager_t2645893724::get_offset_of_m_fixupCount_5(),
	ObjectManager_t2645893724::get_offset_of_m_selector_6(),
	ObjectManager_t2645893724::get_offset_of_m_context_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize759 = { sizeof (ObjectHolder_t2992553423), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable759[14] = 
{
	ObjectHolder_t2992553423::get_offset_of_m_object_0(),
	ObjectHolder_t2992553423::get_offset_of_m_id_1(),
	ObjectHolder_t2992553423::get_offset_of_m_missingElementsRemaining_2(),
	ObjectHolder_t2992553423::get_offset_of_m_missingDecendents_3(),
	ObjectHolder_t2992553423::get_offset_of_m_serInfo_4(),
	ObjectHolder_t2992553423::get_offset_of_m_surrogate_5(),
	ObjectHolder_t2992553423::get_offset_of_m_missingElements_6(),
	ObjectHolder_t2992553423::get_offset_of_m_dependentObjects_7(),
	ObjectHolder_t2992553423::get_offset_of_m_next_8(),
	ObjectHolder_t2992553423::get_offset_of_m_flags_9(),
	ObjectHolder_t2992553423::get_offset_of_m_markForFixupWhenAvailable_10(),
	ObjectHolder_t2992553423::get_offset_of_m_valueFixup_11(),
	ObjectHolder_t2992553423::get_offset_of_m_typeLoad_12(),
	ObjectHolder_t2992553423::get_offset_of_m_reachable_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize760 = { sizeof (FixupHolder_t2028025012), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable760[3] = 
{
	FixupHolder_t2028025012::get_offset_of_m_id_0(),
	FixupHolder_t2028025012::get_offset_of_m_fixupInfo_1(),
	FixupHolder_t2028025012::get_offset_of_m_fixupType_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize761 = { sizeof (FixupHolderList_t438393606), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable761[2] = 
{
	FixupHolderList_t438393606::get_offset_of_m_values_0(),
	FixupHolderList_t438393606::get_offset_of_m_count_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize762 = { sizeof (LongList_t2406893678), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable762[4] = 
{
	LongList_t2406893678::get_offset_of_m_values_0(),
	LongList_t2406893678::get_offset_of_m_count_1(),
	LongList_t2406893678::get_offset_of_m_totalItems_2(),
	LongList_t2406893678::get_offset_of_m_currentItem_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize763 = { sizeof (ObjectHolderList_t1856843635), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable763[2] = 
{
	ObjectHolderList_t1856843635::get_offset_of_m_values_0(),
	ObjectHolderList_t1856843635::get_offset_of_m_count_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize764 = { sizeof (ObjectHolderListEnumerator_t1434580149), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable764[4] = 
{
	ObjectHolderListEnumerator_t1434580149::get_offset_of_m_isFixupEnumerator_0(),
	ObjectHolderListEnumerator_t1434580149::get_offset_of_m_list_1(),
	ObjectHolderListEnumerator_t1434580149::get_offset_of_m_startingVersion_2(),
	ObjectHolderListEnumerator_t1434580149::get_offset_of_m_currPos_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize765 = { sizeof (TypeLoadExceptionHolder_t427439951), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable765[1] = 
{
	TypeLoadExceptionHolder_t427439951::get_offset_of_m_typeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize766 = { sizeof (SafeSerializationEventArgs_t1088103422), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable766[2] = 
{
	SafeSerializationEventArgs_t1088103422::get_offset_of_m_streamingContext_1(),
	SafeSerializationEventArgs_t1088103422::get_offset_of_m_serializedStates_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize767 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize768 = { sizeof (SafeSerializationManager_t1975884510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable768[5] = 
{
	SafeSerializationManager_t1975884510::get_offset_of_m_serializedStates_0(),
	SafeSerializationManager_t1975884510::get_offset_of_m_savedSerializationInfo_1(),
	SafeSerializationManager_t1975884510::get_offset_of_m_realObject_2(),
	SafeSerializationManager_t1975884510::get_offset_of_m_realType_3(),
	SafeSerializationManager_t1975884510::get_offset_of_SerializeObjectState_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize769 = { sizeof (OptionalFieldAttribute_t124318366), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable769[1] = 
{
	OptionalFieldAttribute_t124318366::get_offset_of_versionAdded_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize770 = { sizeof (OnSerializingAttribute_t2011372116), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize771 = { sizeof (OnSerializedAttribute_t3742956097), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize772 = { sizeof (OnDeserializingAttribute_t484921187), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize773 = { sizeof (OnDeserializedAttribute_t3172265744), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize774 = { sizeof (SerializationBinder_t3985864818), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize775 = { sizeof (SerializationEvents_t30413825), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable775[4] = 
{
	SerializationEvents_t30413825::get_offset_of_m_OnSerializingMethods_0(),
	SerializationEvents_t30413825::get_offset_of_m_OnSerializedMethods_1(),
	SerializationEvents_t30413825::get_offset_of_m_OnDeserializingMethods_2(),
	SerializationEvents_t30413825::get_offset_of_m_OnDeserializedMethods_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize776 = { sizeof (SerializationEventsCache_t1398947579), -1, sizeof(SerializationEventsCache_t1398947579_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable776[1] = 
{
	SerializationEventsCache_t1398947579_StaticFields::get_offset_of_cache_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize777 = { sizeof (SerializationException_t753258759), -1, sizeof(SerializationException_t753258759_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable777[1] = 
{
	SerializationException_t753258759_StaticFields::get_offset_of__nullMessage_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize778 = { sizeof (SerializationFieldInfo_t2472586292), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable778[2] = 
{
	SerializationFieldInfo_t2472586292::get_offset_of_m_field_0(),
	SerializationFieldInfo_t2472586292::get_offset_of_m_serializationName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize779 = { sizeof (SerializationInfo_t228987430), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable779[15] = 
{
	0,
	0,
	0,
	SerializationInfo_t228987430::get_offset_of_m_members_3(),
	SerializationInfo_t228987430::get_offset_of_m_data_4(),
	SerializationInfo_t228987430::get_offset_of_m_types_5(),
	SerializationInfo_t228987430::get_offset_of_m_nameToIndex_6(),
	SerializationInfo_t228987430::get_offset_of_m_currMember_7(),
	SerializationInfo_t228987430::get_offset_of_m_converter_8(),
	SerializationInfo_t228987430::get_offset_of_m_fullTypeName_9(),
	SerializationInfo_t228987430::get_offset_of_m_assemName_10(),
	SerializationInfo_t228987430::get_offset_of_objectType_11(),
	SerializationInfo_t228987430::get_offset_of_isFullTypeNameSetExplicit_12(),
	SerializationInfo_t228987430::get_offset_of_isAssemblyNameSetExplicit_13(),
	SerializationInfo_t228987430::get_offset_of_requireSameTokenInPartialTrust_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize780 = { sizeof (SerializationEntry_t3485203212)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable780[3] = 
{
	SerializationEntry_t3485203212::get_offset_of_m_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SerializationEntry_t3485203212::get_offset_of_m_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SerializationEntry_t3485203212::get_offset_of_m_name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize781 = { sizeof (SerializationInfoEnumerator_t589103770), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable781[6] = 
{
	SerializationInfoEnumerator_t589103770::get_offset_of_m_members_0(),
	SerializationInfoEnumerator_t589103770::get_offset_of_m_data_1(),
	SerializationInfoEnumerator_t589103770::get_offset_of_m_types_2(),
	SerializationInfoEnumerator_t589103770::get_offset_of_m_numItems_3(),
	SerializationInfoEnumerator_t589103770::get_offset_of_m_currItem_4(),
	SerializationInfoEnumerator_t589103770::get_offset_of_m_current_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize782 = { sizeof (SerializationObjectManager_t4052555190), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable782[3] = 
{
	SerializationObjectManager_t4052555190::get_offset_of_m_objectSeenTable_0(),
	SerializationObjectManager_t4052555190::get_offset_of_m_onSerializedHandler_1(),
	SerializationObjectManager_t4052555190::get_offset_of_m_context_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize783 = { sizeof (StreamingContext_t1417235061)+ sizeof (RuntimeObject), sizeof(StreamingContext_t1417235061_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable783[2] = 
{
	StreamingContext_t1417235061::get_offset_of_m_additionalContext_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StreamingContext_t1417235061::get_offset_of_m_state_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize784 = { sizeof (StreamingContextStates_t4264247603)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable784[10] = 
{
	StreamingContextStates_t4264247603::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize785 = { sizeof (ValueTypeFixupInfo_t1676793155), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable785[3] = 
{
	ValueTypeFixupInfo_t1676793155::get_offset_of_m_containerID_0(),
	ValueTypeFixupInfo_t1676793155::get_offset_of_m_parentField_1(),
	ValueTypeFixupInfo_t1676793155::get_offset_of_m_parentIndex_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize786 = { sizeof (FormatterTypeStyle_t943306207)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable786[4] = 
{
	FormatterTypeStyle_t943306207::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize787 = { sizeof (FormatterAssemblyStyle_t999493661)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable787[3] = 
{
	FormatterAssemblyStyle_t999493661::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize788 = { sizeof (TypeFilterLevel_t1182459634)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable788[3] = 
{
	TypeFilterLevel_t1182459634::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize789 = { sizeof (BinaryConverter_t3092009747), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize790 = { sizeof (IOUtil_t1159771836), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize791 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize792 = { sizeof (BinaryAssemblyInfo_t316080507), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable792[2] = 
{
	BinaryAssemblyInfo_t316080507::get_offset_of_assemblyString_0(),
	BinaryAssemblyInfo_t316080507::get_offset_of_assembly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize793 = { sizeof (SerializationHeaderRecord_t2423901178), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable793[7] = 
{
	SerializationHeaderRecord_t2423901178::get_offset_of_binaryFormatterMajorVersion_0(),
	SerializationHeaderRecord_t2423901178::get_offset_of_binaryFormatterMinorVersion_1(),
	SerializationHeaderRecord_t2423901178::get_offset_of_binaryHeaderEnum_2(),
	SerializationHeaderRecord_t2423901178::get_offset_of_topId_3(),
	SerializationHeaderRecord_t2423901178::get_offset_of_headerId_4(),
	SerializationHeaderRecord_t2423901178::get_offset_of_majorVersion_5(),
	SerializationHeaderRecord_t2423901178::get_offset_of_minorVersion_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize794 = { sizeof (BinaryAssembly_t3375684671), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable794[2] = 
{
	BinaryAssembly_t3375684671::get_offset_of_assemId_0(),
	BinaryAssembly_t3375684671::get_offset_of_assemblyString_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize795 = { sizeof (BinaryCrossAppDomainAssembly_t3309678508), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable795[2] = 
{
	BinaryCrossAppDomainAssembly_t3309678508::get_offset_of_assemId_0(),
	BinaryCrossAppDomainAssembly_t3309678508::get_offset_of_assemblyIndex_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize796 = { sizeof (BinaryObject_t763496928), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable796[2] = 
{
	BinaryObject_t763496928::get_offset_of_objectId_0(),
	BinaryObject_t763496928::get_offset_of_mapId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize797 = { sizeof (BinaryMethodCall_t1773568836), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable797[13] = 
{
	BinaryMethodCall_t1773568836::get_offset_of_uri_0(),
	BinaryMethodCall_t1773568836::get_offset_of_methodName_1(),
	BinaryMethodCall_t1773568836::get_offset_of_typeName_2(),
	BinaryMethodCall_t1773568836::get_offset_of_instArgs_3(),
	BinaryMethodCall_t1773568836::get_offset_of_args_4(),
	BinaryMethodCall_t1773568836::get_offset_of_methodSignature_5(),
	BinaryMethodCall_t1773568836::get_offset_of_callContext_6(),
	BinaryMethodCall_t1773568836::get_offset_of_scallContext_7(),
	BinaryMethodCall_t1773568836::get_offset_of_properties_8(),
	BinaryMethodCall_t1773568836::get_offset_of_argTypes_9(),
	BinaryMethodCall_t1773568836::get_offset_of_bArgsPrimitive_10(),
	BinaryMethodCall_t1773568836::get_offset_of_messageEnum_11(),
	BinaryMethodCall_t1773568836::get_offset_of_callA_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize798 = { sizeof (BinaryMethodReturn_t3366135632), -1, sizeof(BinaryMethodReturn_t3366135632_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable798[12] = 
{
	BinaryMethodReturn_t3366135632::get_offset_of_returnValue_0(),
	BinaryMethodReturn_t3366135632::get_offset_of_args_1(),
	BinaryMethodReturn_t3366135632::get_offset_of_exception_2(),
	BinaryMethodReturn_t3366135632::get_offset_of_callContext_3(),
	BinaryMethodReturn_t3366135632::get_offset_of_scallContext_4(),
	BinaryMethodReturn_t3366135632::get_offset_of_properties_5(),
	BinaryMethodReturn_t3366135632::get_offset_of_argTypes_6(),
	BinaryMethodReturn_t3366135632::get_offset_of_bArgsPrimitive_7(),
	BinaryMethodReturn_t3366135632::get_offset_of_messageEnum_8(),
	BinaryMethodReturn_t3366135632::get_offset_of_callA_9(),
	BinaryMethodReturn_t3366135632::get_offset_of_returnType_10(),
	BinaryMethodReturn_t3366135632_StaticFields::get_offset_of_instanceOfVoid_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize799 = { sizeof (BinaryObjectString_t2307902425), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable799[2] = 
{
	BinaryObjectString_t2307902425::get_offset_of_objectId_0(),
	BinaryObjectString_t2307902425::get_offset_of_value_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
