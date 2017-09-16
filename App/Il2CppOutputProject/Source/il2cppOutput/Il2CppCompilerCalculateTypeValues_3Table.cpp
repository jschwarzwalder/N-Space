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

// System.Collections.SortedList
struct SortedList_t3004938869;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.IComparer
struct IComparer_t3952557350;
// System.Collections.SortedList/KeyList
struct KeyList_t1496669825;
// System.Collections.SortedList/ValueList
struct ValueList_t1155029929;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t3364649222;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t1975884510;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t2217612696;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// System.Collections.Queue
struct Queue_t1288490777;
// System.Collections.Stack
struct Stack_t1043988394;
// System.Globalization.TextInfo
struct TextInfo_t3620182823;
// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t2307530285;
// System.Globalization.CompareInfo
struct CompareInfo_t2310920157;
// System.Collections.CaseInsensitiveComparer
struct CaseInsensitiveComparer_t157661140;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1980576455;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Collections.IList
struct IList_t3321498491;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t2149607518;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t2716208158;

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
#ifndef SORTEDLISTENUMERATOR_T410146509_H
#define SORTEDLISTENUMERATOR_T410146509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SortedListEnumerator
struct  SortedListEnumerator_t410146509  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/SortedListEnumerator::sortedList
	SortedList_t3004938869 * ___sortedList_0;
	// System.Object System.Collections.SortedList/SortedListEnumerator::key
	RuntimeObject * ___key_1;
	// System.Object System.Collections.SortedList/SortedListEnumerator::value
	RuntimeObject * ___value_2;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::index
	int32_t ___index_3;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::startIndex
	int32_t ___startIndex_4;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::endIndex
	int32_t ___endIndex_5;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::version
	int32_t ___version_6;
	// System.Boolean System.Collections.SortedList/SortedListEnumerator::current
	bool ___current_7;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::getObjectRetType
	int32_t ___getObjectRetType_8;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t410146509, ___sortedList_0)); }
	inline SortedList_t3004938869 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t3004938869 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t3004938869 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t410146509, ___key_1)); }
	inline RuntimeObject * get_key_1() const { return ___key_1; }
	inline RuntimeObject ** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(RuntimeObject * value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t410146509, ___value_2)); }
	inline RuntimeObject * get_value_2() const { return ___value_2; }
	inline RuntimeObject ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(RuntimeObject * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t410146509, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_startIndex_4() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t410146509, ___startIndex_4)); }
	inline int32_t get_startIndex_4() const { return ___startIndex_4; }
	inline int32_t* get_address_of_startIndex_4() { return &___startIndex_4; }
	inline void set_startIndex_4(int32_t value)
	{
		___startIndex_4 = value;
	}

	inline static int32_t get_offset_of_endIndex_5() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t410146509, ___endIndex_5)); }
	inline int32_t get_endIndex_5() const { return ___endIndex_5; }
	inline int32_t* get_address_of_endIndex_5() { return &___endIndex_5; }
	inline void set_endIndex_5(int32_t value)
	{
		___endIndex_5 = value;
	}

	inline static int32_t get_offset_of_version_6() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t410146509, ___version_6)); }
	inline int32_t get_version_6() const { return ___version_6; }
	inline int32_t* get_address_of_version_6() { return &___version_6; }
	inline void set_version_6(int32_t value)
	{
		___version_6 = value;
	}

	inline static int32_t get_offset_of_current_7() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t410146509, ___current_7)); }
	inline bool get_current_7() const { return ___current_7; }
	inline bool* get_address_of_current_7() { return &___current_7; }
	inline void set_current_7(bool value)
	{
		___current_7 = value;
	}

	inline static int32_t get_offset_of_getObjectRetType_8() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t410146509, ___getObjectRetType_8)); }
	inline int32_t get_getObjectRetType_8() const { return ___getObjectRetType_8; }
	inline int32_t* get_address_of_getObjectRetType_8() { return &___getObjectRetType_8; }
	inline void set_getObjectRetType_8(int32_t value)
	{
		___getObjectRetType_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLISTENUMERATOR_T410146509_H
#ifndef SORTEDLIST_T3004938869_H
#define SORTEDLIST_T3004938869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList
struct  SortedList_t3004938869  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.SortedList::keys
	ObjectU5BU5D_t3614634134* ___keys_0;
	// System.Object[] System.Collections.SortedList::values
	ObjectU5BU5D_t3614634134* ___values_1;
	// System.Int32 System.Collections.SortedList::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.SortedList::version
	int32_t ___version_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.SortedList/KeyList System.Collections.SortedList::keyList
	KeyList_t1496669825 * ___keyList_5;
	// System.Collections.SortedList/ValueList System.Collections.SortedList::valueList
	ValueList_t1155029929 * ___valueList_6;
	// System.Object System.Collections.SortedList::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SortedList_t3004938869, ___keys_0)); }
	inline ObjectU5BU5D_t3614634134* get_keys_0() const { return ___keys_0; }
	inline ObjectU5BU5D_t3614634134** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(ObjectU5BU5D_t3614634134* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((&___keys_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SortedList_t3004938869, ___values_1)); }
	inline ObjectU5BU5D_t3614634134* get_values_1() const { return ___values_1; }
	inline ObjectU5BU5D_t3614634134** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ObjectU5BU5D_t3614634134* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(SortedList_t3004938869, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(SortedList_t3004938869, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_t3004938869, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_4), value);
	}

	inline static int32_t get_offset_of_keyList_5() { return static_cast<int32_t>(offsetof(SortedList_t3004938869, ___keyList_5)); }
	inline KeyList_t1496669825 * get_keyList_5() const { return ___keyList_5; }
	inline KeyList_t1496669825 ** get_address_of_keyList_5() { return &___keyList_5; }
	inline void set_keyList_5(KeyList_t1496669825 * value)
	{
		___keyList_5 = value;
		Il2CppCodeGenWriteBarrier((&___keyList_5), value);
	}

	inline static int32_t get_offset_of_valueList_6() { return static_cast<int32_t>(offsetof(SortedList_t3004938869, ___valueList_6)); }
	inline ValueList_t1155029929 * get_valueList_6() const { return ___valueList_6; }
	inline ValueList_t1155029929 ** get_address_of_valueList_6() { return &___valueList_6; }
	inline void set_valueList_6(ValueList_t1155029929 * value)
	{
		___valueList_6 = value;
		Il2CppCodeGenWriteBarrier((&___valueList_6), value);
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(SortedList_t3004938869, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_7), value);
	}
};

struct SortedList_t3004938869_StaticFields
{
public:
	// System.Object[] System.Collections.SortedList::emptyArray
	ObjectU5BU5D_t3614634134* ___emptyArray_8;

public:
	inline static int32_t get_offset_of_emptyArray_8() { return static_cast<int32_t>(offsetof(SortedList_t3004938869_StaticFields, ___emptyArray_8)); }
	inline ObjectU5BU5D_t3614634134* get_emptyArray_8() const { return ___emptyArray_8; }
	inline ObjectU5BU5D_t3614634134** get_address_of_emptyArray_8() { return &___emptyArray_8; }
	inline void set_emptyArray_8(ObjectU5BU5D_t3614634134* value)
	{
		___emptyArray_8 = value;
		Il2CppCodeGenWriteBarrier((&___emptyArray_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLIST_T3004938869_H
#ifndef KEYLIST_T1496669825_H
#define KEYLIST_T1496669825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/KeyList
struct  KeyList_t1496669825  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/KeyList::sortedList
	SortedList_t3004938869 * ___sortedList_0;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(KeyList_t1496669825, ___sortedList_0)); }
	inline SortedList_t3004938869 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t3004938869 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t3004938869 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYLIST_T1496669825_H
#ifndef VALUELIST_T1155029929_H
#define VALUELIST_T1155029929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/ValueList
struct  ValueList_t1155029929  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/ValueList::sortedList
	SortedList_t3004938869 * ___sortedList_0;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(ValueList_t1155029929, ___sortedList_0)); }
	inline SortedList_t3004938869 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t3004938869 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t3004938869 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUELIST_T1155029929_H
#ifndef READONLYCOLLECTIONBASE_T22281769_H
#define READONLYCOLLECTIONBASE_T22281769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t22281769  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t4252133567 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t22281769, ___list_0)); }
	inline ArrayList_t4252133567 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4252133567 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4252133567 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T22281769_H
#ifndef QUEUE_T1288490777_H
#define QUEUE_T1288490777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue
struct  Queue_t1288490777  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_t3614634134* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;
	// System.Object System.Collections.Queue::_syncRoot
	RuntimeObject * ____syncRoot_6;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_t1288490777, ____array_0)); }
	inline ObjectU5BU5D_t3614634134* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3614634134** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3614634134* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_t1288490777, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_t1288490777, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_t1288490777, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__growFactor_4() { return static_cast<int32_t>(offsetof(Queue_t1288490777, ____growFactor_4)); }
	inline int32_t get__growFactor_4() const { return ____growFactor_4; }
	inline int32_t* get_address_of__growFactor_4() { return &____growFactor_4; }
	inline void set__growFactor_4(int32_t value)
	{
		____growFactor_4 = value;
	}

	inline static int32_t get_offset_of__version_5() { return static_cast<int32_t>(offsetof(Queue_t1288490777, ____version_5)); }
	inline int32_t get__version_5() const { return ____version_5; }
	inline int32_t* get_address_of__version_5() { return &____version_5; }
	inline void set__version_5(int32_t value)
	{
		____version_5 = value;
	}

	inline static int32_t get_offset_of__syncRoot_6() { return static_cast<int32_t>(offsetof(Queue_t1288490777, ____syncRoot_6)); }
	inline RuntimeObject * get__syncRoot_6() const { return ____syncRoot_6; }
	inline RuntimeObject ** get_address_of__syncRoot_6() { return &____syncRoot_6; }
	inline void set__syncRoot_6(RuntimeObject * value)
	{
		____syncRoot_6 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_T1288490777_H
#ifndef HASHHELPERS_T2236981683_H
#define HASHHELPERS_T2236981683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.HashHelpers
struct  HashHelpers_t2236981683  : public RuntimeObject
{
public:

public:
};

struct HashHelpers_t2236981683_StaticFields
{
public:
	// System.Int32[] System.Collections.HashHelpers::primes
	Int32U5BU5D_t3030399641* ___primes_0;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.HashHelpers::s_SerializationInfoTable
	ConditionalWeakTable_2_t3364649222 * ___s_SerializationInfoTable_1;

public:
	inline static int32_t get_offset_of_primes_0() { return static_cast<int32_t>(offsetof(HashHelpers_t2236981683_StaticFields, ___primes_0)); }
	inline Int32U5BU5D_t3030399641* get_primes_0() const { return ___primes_0; }
	inline Int32U5BU5D_t3030399641** get_address_of_primes_0() { return &___primes_0; }
	inline void set_primes_0(Int32U5BU5D_t3030399641* value)
	{
		___primes_0 = value;
		Il2CppCodeGenWriteBarrier((&___primes_0), value);
	}

	inline static int32_t get_offset_of_s_SerializationInfoTable_1() { return static_cast<int32_t>(offsetof(HashHelpers_t2236981683_StaticFields, ___s_SerializationInfoTable_1)); }
	inline ConditionalWeakTable_2_t3364649222 * get_s_SerializationInfoTable_1() const { return ___s_SerializationInfoTable_1; }
	inline ConditionalWeakTable_2_t3364649222 ** get_address_of_s_SerializationInfoTable_1() { return &___s_SerializationInfoTable_1; }
	inline void set_s_SerializationInfoTable_1(ConditionalWeakTable_2_t3364649222 * value)
	{
		___s_SerializationInfoTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_SerializationInfoTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHHELPERS_T2236981683_H
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
#ifndef QUEUEENUMERATOR_T644509261_H
#define QUEUEENUMERATOR_T644509261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue/QueueEnumerator
struct  QueueEnumerator_t644509261  : public RuntimeObject
{
public:
	// System.Collections.Queue System.Collections.Queue/QueueEnumerator::_q
	Queue_t1288490777 * ____q_0;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_version
	int32_t ____version_2;
	// System.Object System.Collections.Queue/QueueEnumerator::currentElement
	RuntimeObject * ___currentElement_3;

public:
	inline static int32_t get_offset_of__q_0() { return static_cast<int32_t>(offsetof(QueueEnumerator_t644509261, ____q_0)); }
	inline Queue_t1288490777 * get__q_0() const { return ____q_0; }
	inline Queue_t1288490777 ** get_address_of__q_0() { return &____q_0; }
	inline void set__q_0(Queue_t1288490777 * value)
	{
		____q_0 = value;
		Il2CppCodeGenWriteBarrier((&____q_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(QueueEnumerator_t644509261, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(QueueEnumerator_t644509261, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(QueueEnumerator_t644509261, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEENUMERATOR_T644509261_H
#ifndef SORTEDLISTDEBUGVIEW_T2499465029_H
#define SORTEDLISTDEBUGVIEW_T2499465029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SortedListDebugView
struct  SortedListDebugView_t2499465029  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLISTDEBUGVIEW_T2499465029_H
#ifndef HASHHELPERS_T3596672541_H
#define HASHHELPERS_T3596672541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.HashHelpers
struct  HashHelpers_t3596672541  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHHELPERS_T3596672541_H
#ifndef READONLYDICTIONARYHELPERS_T2959715541_H
#define READONLYDICTIONARYHELPERS_T2959715541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionaryHelpers
struct  ReadOnlyDictionaryHelpers_t2959715541  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARYHELPERS_T2959715541_H
#ifndef EQUALITYCOMPARER_1_T2256739707_H
#define EQUALITYCOMPARER_1_T2256739707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct  EqualityComparer_1_t2256739707  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t2256739707_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t2256739707 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t2256739707_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t2256739707 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t2256739707 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t2256739707 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T2256739707_H
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
#ifndef OBJECTEQUALITYCOMPARER_T4055411110_H
#define OBJECTEQUALITYCOMPARER_T4055411110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ObjectEqualityComparer
struct  ObjectEqualityComparer_t4055411110  : public RuntimeObject
{
public:

public:
};

struct ObjectEqualityComparer_t4055411110_StaticFields
{
public:
	// System.Collections.Generic.ObjectEqualityComparer System.Collections.Generic.ObjectEqualityComparer::Default
	ObjectEqualityComparer_t4055411110 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ObjectEqualityComparer_t4055411110_StaticFields, ___Default_0)); }
	inline ObjectEqualityComparer_t4055411110 * get_Default_0() const { return ___Default_0; }
	inline ObjectEqualityComparer_t4055411110 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ObjectEqualityComparer_t4055411110 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTEQUALITYCOMPARER_T4055411110_H
#ifndef STACKENUMERATOR_T1617648877_H
#define STACKENUMERATOR_T1617648877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack/StackEnumerator
struct  StackEnumerator_t1617648877  : public RuntimeObject
{
public:
	// System.Collections.Stack System.Collections.Stack/StackEnumerator::_stack
	Stack_t1043988394 * ____stack_0;
	// System.Int32 System.Collections.Stack/StackEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Stack/StackEnumerator::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack/StackEnumerator::currentElement
	RuntimeObject * ___currentElement_3;

public:
	inline static int32_t get_offset_of__stack_0() { return static_cast<int32_t>(offsetof(StackEnumerator_t1617648877, ____stack_0)); }
	inline Stack_t1043988394 * get__stack_0() const { return ____stack_0; }
	inline Stack_t1043988394 ** get_address_of__stack_0() { return &____stack_0; }
	inline void set__stack_0(Stack_t1043988394 * value)
	{
		____stack_0 = value;
		Il2CppCodeGenWriteBarrier((&____stack_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(StackEnumerator_t1617648877, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(StackEnumerator_t1617648877, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(StackEnumerator_t1617648877, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKENUMERATOR_T1617648877_H
#ifndef STACK_T1043988394_H
#define STACK_T1043988394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t1043988394  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_t3614634134* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_t1043988394, ____array_0)); }
	inline ObjectU5BU5D_t3614634134* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3614634134** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3614634134* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_t1043988394, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_t1043988394, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_t1043988394, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T1043988394_H
#ifndef LOWLEVELCOMPARER_T3802636147_H
#define LOWLEVELCOMPARER_T3802636147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.LowLevelComparer
struct  LowLevelComparer_t3802636147  : public RuntimeObject
{
public:

public:
};

struct LowLevelComparer_t3802636147_StaticFields
{
public:
	// System.Collections.LowLevelComparer System.Collections.LowLevelComparer::Default
	LowLevelComparer_t3802636147 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LowLevelComparer_t3802636147_StaticFields, ___Default_0)); }
	inline LowLevelComparer_t3802636147 * get_Default_0() const { return ___Default_0; }
	inline LowLevelComparer_t3802636147 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LowLevelComparer_t3802636147 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWLEVELCOMPARER_T3802636147_H
#ifndef STACKDEBUGVIEW_T2528224053_H
#define STACKDEBUGVIEW_T2528224053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack/StackDebugView
struct  StackDebugView_t2528224053  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKDEBUGVIEW_T2528224053_H
#ifndef HASHTABLEDEBUGVIEW_T3834546805_H
#define HASHTABLEDEBUGVIEW_T3834546805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/HashtableDebugView
struct  HashtableDebugView_t3834546805  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLEDEBUGVIEW_T3834546805_H
#ifndef CASEINSENSITIVEHASHCODEPROVIDER_T2307530285_H
#define CASEINSENSITIVEHASHCODEPROVIDER_T2307530285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveHashCodeProvider
struct  CaseInsensitiveHashCodeProvider_t2307530285  : public RuntimeObject
{
public:
	// System.Globalization.TextInfo System.Collections.CaseInsensitiveHashCodeProvider::m_text
	TextInfo_t3620182823 * ___m_text_0;

public:
	inline static int32_t get_offset_of_m_text_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t2307530285, ___m_text_0)); }
	inline TextInfo_t3620182823 * get_m_text_0() const { return ___m_text_0; }
	inline TextInfo_t3620182823 ** get_address_of_m_text_0() { return &___m_text_0; }
	inline void set_m_text_0(TextInfo_t3620182823 * value)
	{
		___m_text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_text_0), value);
	}
};

struct CaseInsensitiveHashCodeProvider_t2307530285_StaticFields
{
public:
	// System.Collections.CaseInsensitiveHashCodeProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.CaseInsensitiveHashCodeProvider::m_InvariantCaseInsensitiveHashCodeProvider
	CaseInsensitiveHashCodeProvider_t2307530285 * ___m_InvariantCaseInsensitiveHashCodeProvider_1;

public:
	inline static int32_t get_offset_of_m_InvariantCaseInsensitiveHashCodeProvider_1() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t2307530285_StaticFields, ___m_InvariantCaseInsensitiveHashCodeProvider_1)); }
	inline CaseInsensitiveHashCodeProvider_t2307530285 * get_m_InvariantCaseInsensitiveHashCodeProvider_1() const { return ___m_InvariantCaseInsensitiveHashCodeProvider_1; }
	inline CaseInsensitiveHashCodeProvider_t2307530285 ** get_address_of_m_InvariantCaseInsensitiveHashCodeProvider_1() { return &___m_InvariantCaseInsensitiveHashCodeProvider_1; }
	inline void set_m_InvariantCaseInsensitiveHashCodeProvider_1(CaseInsensitiveHashCodeProvider_t2307530285 * value)
	{
		___m_InvariantCaseInsensitiveHashCodeProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvariantCaseInsensitiveHashCodeProvider_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASEINSENSITIVEHASHCODEPROVIDER_T2307530285_H
#ifndef CASEINSENSITIVECOMPARER_T157661140_H
#define CASEINSENSITIVECOMPARER_T157661140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveComparer
struct  CaseInsensitiveComparer_t157661140  : public RuntimeObject
{
public:
	// System.Globalization.CompareInfo System.Collections.CaseInsensitiveComparer::m_compareInfo
	CompareInfo_t2310920157 * ___m_compareInfo_0;

public:
	inline static int32_t get_offset_of_m_compareInfo_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t157661140, ___m_compareInfo_0)); }
	inline CompareInfo_t2310920157 * get_m_compareInfo_0() const { return ___m_compareInfo_0; }
	inline CompareInfo_t2310920157 ** get_address_of_m_compareInfo_0() { return &___m_compareInfo_0; }
	inline void set_m_compareInfo_0(CompareInfo_t2310920157 * value)
	{
		___m_compareInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_0), value);
	}
};

struct CaseInsensitiveComparer_t157661140_StaticFields
{
public:
	// System.Collections.CaseInsensitiveComparer modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.CaseInsensitiveComparer::m_InvariantCaseInsensitiveComparer
	CaseInsensitiveComparer_t157661140 * ___m_InvariantCaseInsensitiveComparer_1;

public:
	inline static int32_t get_offset_of_m_InvariantCaseInsensitiveComparer_1() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t157661140_StaticFields, ___m_InvariantCaseInsensitiveComparer_1)); }
	inline CaseInsensitiveComparer_t157661140 * get_m_InvariantCaseInsensitiveComparer_1() const { return ___m_InvariantCaseInsensitiveComparer_1; }
	inline CaseInsensitiveComparer_t157661140 ** get_address_of_m_InvariantCaseInsensitiveComparer_1() { return &___m_InvariantCaseInsensitiveComparer_1; }
	inline void set_m_InvariantCaseInsensitiveComparer_1(CaseInsensitiveComparer_t157661140 * value)
	{
		___m_InvariantCaseInsensitiveComparer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvariantCaseInsensitiveComparer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASEINSENSITIVECOMPARER_T157661140_H
#ifndef COMPARER_T3673668605_H
#define COMPARER_T3673668605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Comparer
struct  Comparer_t3673668605  : public RuntimeObject
{
public:
	// System.Globalization.CompareInfo System.Collections.Comparer::m_compareInfo
	CompareInfo_t2310920157 * ___m_compareInfo_0;

public:
	inline static int32_t get_offset_of_m_compareInfo_0() { return static_cast<int32_t>(offsetof(Comparer_t3673668605, ___m_compareInfo_0)); }
	inline CompareInfo_t2310920157 * get_m_compareInfo_0() const { return ___m_compareInfo_0; }
	inline CompareInfo_t2310920157 ** get_address_of_m_compareInfo_0() { return &___m_compareInfo_0; }
	inline void set_m_compareInfo_0(CompareInfo_t2310920157 * value)
	{
		___m_compareInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_0), value);
	}
};

struct Comparer_t3673668605_StaticFields
{
public:
	// System.Collections.Comparer System.Collections.Comparer::Default
	Comparer_t3673668605 * ___Default_1;
	// System.Collections.Comparer System.Collections.Comparer::DefaultInvariant
	Comparer_t3673668605 * ___DefaultInvariant_2;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(Comparer_t3673668605_StaticFields, ___Default_1)); }
	inline Comparer_t3673668605 * get_Default_1() const { return ___Default_1; }
	inline Comparer_t3673668605 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(Comparer_t3673668605 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_DefaultInvariant_2() { return static_cast<int32_t>(offsetof(Comparer_t3673668605_StaticFields, ___DefaultInvariant_2)); }
	inline Comparer_t3673668605 * get_DefaultInvariant_2() const { return ___DefaultInvariant_2; }
	inline Comparer_t3673668605 ** get_address_of_DefaultInvariant_2() { return &___DefaultInvariant_2; }
	inline void set_DefaultInvariant_2(Comparer_t3673668605 * value)
	{
		___DefaultInvariant_2 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultInvariant_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARER_T3673668605_H
#ifndef COLLECTIONBASE_T1101587467_H
#define COLLECTIONBASE_T1101587467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t1101587467  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t4252133567 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t1101587467, ___list_0)); }
	inline ArrayList_t4252133567 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4252133567 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4252133567 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T1101587467_H
#ifndef ARRAYLISTDEBUGVIEW_T2931531541_H
#define ARRAYLISTDEBUGVIEW_T2931531541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListDebugView
struct  ArrayListDebugView_t2931531541  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLISTDEBUGVIEW_T2931531541_H
#ifndef TUPLE_T3195304974_H
#define TUPLE_T3195304974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple
struct  Tuple_t3195304974  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_T3195304974_H
#ifndef QUEUEDEBUGVIEW_T3545126293_H
#define QUEUEDEBUGVIEW_T3545126293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue/QueueDebugView
struct  QueueDebugView_t3545126293  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEDEBUGVIEW_T3545126293_H
#ifndef ARRAYLISTENUMERATORSIMPLE_T1425333127_H
#define ARRAYLISTENUMERATORSIMPLE_T1425333127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListEnumeratorSimple
struct  ArrayListEnumeratorSimple_t1425333127  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ArrayListEnumeratorSimple::list
	ArrayList_t4252133567 * ___list_0;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::index
	int32_t ___index_1;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::version
	int32_t ___version_2;
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::currentElement
	RuntimeObject * ___currentElement_3;
	// System.Boolean System.Collections.ArrayList/ArrayListEnumeratorSimple::isArrayList
	bool ___isArrayList_4;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t1425333127, ___list_0)); }
	inline ArrayList_t4252133567 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4252133567 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4252133567 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t1425333127, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t1425333127, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t1425333127, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}

	inline static int32_t get_offset_of_isArrayList_4() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t1425333127, ___isArrayList_4)); }
	inline bool get_isArrayList_4() const { return ___isArrayList_4; }
	inline bool* get_address_of_isArrayList_4() { return &___isArrayList_4; }
	inline void set_isArrayList_4(bool value)
	{
		___isArrayList_4 = value;
	}
};

struct ArrayListEnumeratorSimple_t1425333127_StaticFields
{
public:
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::dummyObject
	RuntimeObject * ___dummyObject_5;

public:
	inline static int32_t get_offset_of_dummyObject_5() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t1425333127_StaticFields, ___dummyObject_5)); }
	inline RuntimeObject * get_dummyObject_5() const { return ___dummyObject_5; }
	inline RuntimeObject ** get_address_of_dummyObject_5() { return &___dummyObject_5; }
	inline void set_dummyObject_5(RuntimeObject * value)
	{
		___dummyObject_5 = value;
		Il2CppCodeGenWriteBarrier((&___dummyObject_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLISTENUMERATORSIMPLE_T1425333127_H
#ifndef ARRAYLIST_T4252133567_H
#define ARRAYLIST_T4252133567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t4252133567  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t3614634134* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t4252133567, ____items_0)); }
	inline ObjectU5BU5D_t3614634134* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_t3614634134** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_t3614634134* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t4252133567, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t4252133567, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t4252133567, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct ArrayList_t4252133567_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_t3614634134* ___emptyArray_4;

public:
	inline static int32_t get_offset_of_emptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t4252133567_StaticFields, ___emptyArray_4)); }
	inline ObjectU5BU5D_t3614634134* get_emptyArray_4() const { return ___emptyArray_4; }
	inline ObjectU5BU5D_t3614634134** get_address_of_emptyArray_4() { return &___emptyArray_4; }
	inline void set_emptyArray_4(ObjectU5BU5D_t3614634134* value)
	{
		___emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T4252133567_H
#ifndef VALUECOLLECTION_T3757008326_H
#define VALUECOLLECTION_T3757008326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/ValueCollection
struct  ValueCollection_t3757008326  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/ValueCollection::_hashtable
	Hashtable_t909839986 * ____hashtable_0;

public:
	inline static int32_t get_offset_of__hashtable_0() { return static_cast<int32_t>(offsetof(ValueCollection_t3757008326, ____hashtable_0)); }
	inline Hashtable_t909839986 * get__hashtable_0() const { return ____hashtable_0; }
	inline Hashtable_t909839986 ** get_address_of__hashtable_0() { return &____hashtable_0; }
	inline void set__hashtable_0(Hashtable_t909839986 * value)
	{
		____hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&____hashtable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T3757008326_H
#ifndef KEYCOLLECTION_T145059300_H
#define KEYCOLLECTION_T145059300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/KeyCollection
struct  KeyCollection_t145059300  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/KeyCollection::_hashtable
	Hashtable_t909839986 * ____hashtable_0;

public:
	inline static int32_t get_offset_of__hashtable_0() { return static_cast<int32_t>(offsetof(KeyCollection_t145059300, ____hashtable_0)); }
	inline Hashtable_t909839986 * get__hashtable_0() const { return ____hashtable_0; }
	inline Hashtable_t909839986 ** get_address_of__hashtable_0() { return &____hashtable_0; }
	inline void set__hashtable_0(Hashtable_t909839986 * value)
	{
		____hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&____hashtable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T145059300_H
#ifndef HASHTABLEENUMERATOR_T2328195885_H
#define HASHTABLEENUMERATOR_T2328195885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/HashtableEnumerator
struct  HashtableEnumerator_t2328195885  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/HashtableEnumerator::hashtable
	Hashtable_t909839986 * ___hashtable_0;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::bucket
	int32_t ___bucket_1;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.Hashtable/HashtableEnumerator::current
	bool ___current_3;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::getObjectRetType
	int32_t ___getObjectRetType_4;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::currentKey
	RuntimeObject * ___currentKey_5;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::currentValue
	RuntimeObject * ___currentValue_6;

public:
	inline static int32_t get_offset_of_hashtable_0() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t2328195885, ___hashtable_0)); }
	inline Hashtable_t909839986 * get_hashtable_0() const { return ___hashtable_0; }
	inline Hashtable_t909839986 ** get_address_of_hashtable_0() { return &___hashtable_0; }
	inline void set_hashtable_0(Hashtable_t909839986 * value)
	{
		___hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_0), value);
	}

	inline static int32_t get_offset_of_bucket_1() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t2328195885, ___bucket_1)); }
	inline int32_t get_bucket_1() const { return ___bucket_1; }
	inline int32_t* get_address_of_bucket_1() { return &___bucket_1; }
	inline void set_bucket_1(int32_t value)
	{
		___bucket_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t2328195885, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t2328195885, ___current_3)); }
	inline bool get_current_3() const { return ___current_3; }
	inline bool* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(bool value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getObjectRetType_4() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t2328195885, ___getObjectRetType_4)); }
	inline int32_t get_getObjectRetType_4() const { return ___getObjectRetType_4; }
	inline int32_t* get_address_of_getObjectRetType_4() { return &___getObjectRetType_4; }
	inline void set_getObjectRetType_4(int32_t value)
	{
		___getObjectRetType_4 = value;
	}

	inline static int32_t get_offset_of_currentKey_5() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t2328195885, ___currentKey_5)); }
	inline RuntimeObject * get_currentKey_5() const { return ___currentKey_5; }
	inline RuntimeObject ** get_address_of_currentKey_5() { return &___currentKey_5; }
	inline void set_currentKey_5(RuntimeObject * value)
	{
		___currentKey_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentKey_5), value);
	}

	inline static int32_t get_offset_of_currentValue_6() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t2328195885, ___currentValue_6)); }
	inline RuntimeObject * get_currentValue_6() const { return ___currentValue_6; }
	inline RuntimeObject ** get_address_of_currentValue_6() { return &___currentValue_6; }
	inline void set_currentValue_6(RuntimeObject * value)
	{
		___currentValue_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentValue_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLEENUMERATOR_T2328195885_H
#ifndef COMPATIBLECOMPARER_T2934985531_H
#define COMPATIBLECOMPARER_T2934985531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CompatibleComparer
struct  CompatibleComparer_t2934985531  : public RuntimeObject
{
public:
	// System.Collections.IComparer System.Collections.CompatibleComparer::_comparer
	RuntimeObject* ____comparer_0;
	// System.Collections.IHashCodeProvider System.Collections.CompatibleComparer::_hcp
	RuntimeObject* ____hcp_1;

public:
	inline static int32_t get_offset_of__comparer_0() { return static_cast<int32_t>(offsetof(CompatibleComparer_t2934985531, ____comparer_0)); }
	inline RuntimeObject* get__comparer_0() const { return ____comparer_0; }
	inline RuntimeObject** get_address_of__comparer_0() { return &____comparer_0; }
	inline void set__comparer_0(RuntimeObject* value)
	{
		____comparer_0 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_0), value);
	}

	inline static int32_t get_offset_of__hcp_1() { return static_cast<int32_t>(offsetof(CompatibleComparer_t2934985531, ____hcp_1)); }
	inline RuntimeObject* get__hcp_1() const { return ____hcp_1; }
	inline RuntimeObject** get_address_of__hcp_1() { return &____hcp_1; }
	inline void set__hcp_1(RuntimeObject* value)
	{
		____hcp_1 = value;
		Il2CppCodeGenWriteBarrier((&____hcp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPATIBLECOMPARER_T2934985531_H
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
#ifndef ILISTWRAPPER_T2368627560_H
#define ILISTWRAPPER_T2368627560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/IListWrapper
struct  IListWrapper_t2368627560  : public ArrayList_t4252133567
{
public:
	// System.Collections.IList System.Collections.ArrayList/IListWrapper::_list
	RuntimeObject* ____list_5;

public:
	inline static int32_t get_offset_of__list_5() { return static_cast<int32_t>(offsetof(IListWrapper_t2368627560, ____list_5)); }
	inline RuntimeObject* get__list_5() const { return ____list_5; }
	inline RuntimeObject** get_address_of__list_5() { return &____list_5; }
	inline void set__list_5(RuntimeObject* value)
	{
		____list_5 = value;
		Il2CppCodeGenWriteBarrier((&____list_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ILISTWRAPPER_T2368627560_H
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
#ifndef INT32_T2071877448_H
#define INT32_T2071877448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2071877448 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2071877448, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2071877448_H
#ifndef SYNCARRAYLIST_T249867678_H
#define SYNCARRAYLIST_T249867678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/SyncArrayList
struct  SyncArrayList_t249867678  : public ArrayList_t4252133567
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/SyncArrayList::_list
	ArrayList_t4252133567 * ____list_5;
	// System.Object System.Collections.ArrayList/SyncArrayList::_root
	RuntimeObject * ____root_6;

public:
	inline static int32_t get_offset_of__list_5() { return static_cast<int32_t>(offsetof(SyncArrayList_t249867678, ____list_5)); }
	inline ArrayList_t4252133567 * get__list_5() const { return ____list_5; }
	inline ArrayList_t4252133567 ** get_address_of__list_5() { return &____list_5; }
	inline void set__list_5(ArrayList_t4252133567 * value)
	{
		____list_5 = value;
		Il2CppCodeGenWriteBarrier((&____list_5), value);
	}

	inline static int32_t get_offset_of__root_6() { return static_cast<int32_t>(offsetof(SyncArrayList_t249867678, ____root_6)); }
	inline RuntimeObject * get__root_6() const { return ____root_6; }
	inline RuntimeObject ** get_address_of__root_6() { return &____root_6; }
	inline void set__root_6(RuntimeObject * value)
	{
		____root_6 = value;
		Il2CppCodeGenWriteBarrier((&____root_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCARRAYLIST_T249867678_H
#ifndef BUCKET_T976591655_H
#define BUCKET_T976591655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/bucket
struct  bucket_t976591655 
{
public:
	// System.Object System.Collections.Hashtable/bucket::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Hashtable/bucket::val
	RuntimeObject * ___val_1;
	// System.Int32 System.Collections.Hashtable/bucket::hash_coll
	int32_t ___hash_coll_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(bucket_t976591655, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_val_1() { return static_cast<int32_t>(offsetof(bucket_t976591655, ___val_1)); }
	inline RuntimeObject * get_val_1() const { return ___val_1; }
	inline RuntimeObject ** get_address_of_val_1() { return &___val_1; }
	inline void set_val_1(RuntimeObject * value)
	{
		___val_1 = value;
		Il2CppCodeGenWriteBarrier((&___val_1), value);
	}

	inline static int32_t get_offset_of_hash_coll_2() { return static_cast<int32_t>(offsetof(bucket_t976591655, ___hash_coll_2)); }
	inline int32_t get_hash_coll_2() const { return ___hash_coll_2; }
	inline int32_t* get_address_of_hash_coll_2() { return &___hash_coll_2; }
	inline void set_hash_coll_2(int32_t value)
	{
		___hash_coll_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.Hashtable/bucket
struct bucket_t976591655_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
// Native definition for COM marshalling of System.Collections.Hashtable/bucket
struct bucket_t976591655_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
#endif // BUCKET_T976591655_H
#ifndef SYNCSORTEDLIST_T465004772_H
#define SYNCSORTEDLIST_T465004772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SyncSortedList
struct  SyncSortedList_t465004772  : public SortedList_t3004938869
{
public:
	// System.Collections.SortedList System.Collections.SortedList/SyncSortedList::_list
	SortedList_t3004938869 * ____list_9;
	// System.Object System.Collections.SortedList/SyncSortedList::_root
	RuntimeObject * ____root_10;

public:
	inline static int32_t get_offset_of__list_9() { return static_cast<int32_t>(offsetof(SyncSortedList_t465004772, ____list_9)); }
	inline SortedList_t3004938869 * get__list_9() const { return ____list_9; }
	inline SortedList_t3004938869 ** get_address_of__list_9() { return &____list_9; }
	inline void set__list_9(SortedList_t3004938869 * value)
	{
		____list_9 = value;
		Il2CppCodeGenWriteBarrier((&____list_9), value);
	}

	inline static int32_t get_offset_of__root_10() { return static_cast<int32_t>(offsetof(SyncSortedList_t465004772, ____root_10)); }
	inline RuntimeObject * get__root_10() const { return ____root_10; }
	inline RuntimeObject ** get_address_of__root_10() { return &____root_10; }
	inline void set__root_10(RuntimeObject * value)
	{
		____root_10 = value;
		Il2CppCodeGenWriteBarrier((&____root_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCSORTEDLIST_T465004772_H
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
#ifndef BYTEEQUALITYCOMPARER_T1095452717_H
#define BYTEEQUALITYCOMPARER_T1095452717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ByteEqualityComparer
struct  ByteEqualityComparer_t1095452717  : public EqualityComparer_1_t2256739707
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEEQUALITYCOMPARER_T1095452717_H
#ifndef READONLYARRAYLIST_T1065935995_H
#define READONLYARRAYLIST_T1065935995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ReadOnlyArrayList
struct  ReadOnlyArrayList_t1065935995  : public ArrayList_t4252133567
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ReadOnlyArrayList::_list
	ArrayList_t4252133567 * ____list_5;

public:
	inline static int32_t get_offset_of__list_5() { return static_cast<int32_t>(offsetof(ReadOnlyArrayList_t1065935995, ____list_5)); }
	inline ArrayList_t4252133567 * get__list_5() const { return ____list_5; }
	inline ArrayList_t4252133567 ** get_address_of__list_5() { return &____list_5; }
	inline void set__list_5(ArrayList_t4252133567 * value)
	{
		____list_5 = value;
		Il2CppCodeGenWriteBarrier((&____list_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYARRAYLIST_T1065935995_H
#ifndef KEYNOTFOUNDEXCEPTION_T1722175009_H
#define KEYNOTFOUNDEXCEPTION_T1722175009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_t1722175009  : public SystemException_t3877406272
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYNOTFOUNDEXCEPTION_T1722175009_H
#ifndef HASHTABLE_T909839986_H
#define HASHTABLE_T909839986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t909839986  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_t2149607518* ___buckets_0;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_2;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_3;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_6;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_7;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_8;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_9;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_10;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___buckets_0)); }
	inline bucketU5BU5D_t2149607518* get_buckets_0() const { return ___buckets_0; }
	inline bucketU5BU5D_t2149607518** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(bucketU5BU5D_t2149607518* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_occupancy_2() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___occupancy_2)); }
	inline int32_t get_occupancy_2() const { return ___occupancy_2; }
	inline int32_t* get_address_of_occupancy_2() { return &___occupancy_2; }
	inline void set_occupancy_2(int32_t value)
	{
		___occupancy_2 = value;
	}

	inline static int32_t get_offset_of_loadsize_3() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___loadsize_3)); }
	inline int32_t get_loadsize_3() const { return ___loadsize_3; }
	inline int32_t* get_address_of_loadsize_3() { return &___loadsize_3; }
	inline void set_loadsize_3(int32_t value)
	{
		___loadsize_3 = value;
	}

	inline static int32_t get_offset_of_loadFactor_4() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___loadFactor_4)); }
	inline float get_loadFactor_4() const { return ___loadFactor_4; }
	inline float* get_address_of_loadFactor_4() { return &___loadFactor_4; }
	inline void set_loadFactor_4(float value)
	{
		___loadFactor_4 = value;
	}

	inline static int32_t get_offset_of_version_5() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___version_5)); }
	inline int32_t get_version_5() const { return ___version_5; }
	inline int32_t* get_address_of_version_5() { return &___version_5; }
	inline void set_version_5(int32_t value)
	{
		___version_5 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_6() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___isWriterInProgress_6)); }
	inline bool get_isWriterInProgress_6() const { return ___isWriterInProgress_6; }
	inline bool* get_address_of_isWriterInProgress_6() { return &___isWriterInProgress_6; }
	inline void set_isWriterInProgress_6(bool value)
	{
		___isWriterInProgress_6 = value;
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___keys_7)); }
	inline RuntimeObject* get_keys_7() const { return ___keys_7; }
	inline RuntimeObject** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(RuntimeObject* value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___values_8)); }
	inline RuntimeObject* get_values_8() const { return ___values_8; }
	inline RuntimeObject** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(RuntimeObject* value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__keycomparer_9() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ____keycomparer_9)); }
	inline RuntimeObject* get__keycomparer_9() const { return ____keycomparer_9; }
	inline RuntimeObject** get_address_of__keycomparer_9() { return &____keycomparer_9; }
	inline void set__keycomparer_9(RuntimeObject* value)
	{
		____keycomparer_9 = value;
		Il2CppCodeGenWriteBarrier((&____keycomparer_9), value);
	}

	inline static int32_t get_offset_of__syncRoot_10() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ____syncRoot_10)); }
	inline RuntimeObject * get__syncRoot_10() const { return ____syncRoot_10; }
	inline RuntimeObject ** get_address_of__syncRoot_10() { return &____syncRoot_10; }
	inline void set__syncRoot_10(RuntimeObject * value)
	{
		____syncRoot_10 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T909839986_H
#ifndef TOKENTYPE_T854809643_H
#define TOKENTYPE_T854809643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TokenType
struct  TokenType_t854809643 
{
public:
	// System.Int32 System.TokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenType_t854809643, ___value___2)); }
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
#endif // TOKENTYPE_T854809643_H
#ifndef SYNCHASHTABLE_T1343674558_H
#define SYNCHASHTABLE_T1343674558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/SyncHashtable
struct  SyncHashtable_t1343674558  : public Hashtable_t909839986
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/SyncHashtable::_table
	Hashtable_t909839986 * ____table_11;

public:
	inline static int32_t get_offset_of__table_11() { return static_cast<int32_t>(offsetof(SyncHashtable_t1343674558, ____table_11)); }
	inline Hashtable_t909839986 * get__table_11() const { return ____table_11; }
	inline Hashtable_t909839986 ** get_address_of__table_11() { return &____table_11; }
	inline void set__table_11(Hashtable_t909839986 * value)
	{
		____table_11 = value;
		Il2CppCodeGenWriteBarrier((&____table_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHASHTABLE_T1343674558_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize300 = { sizeof (TokenType_t854809643)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable300[33] = 
{
	TokenType_t854809643::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize301 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize302 = { sizeof (Tuple_t3195304974), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize303 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable303[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize304 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable304[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize305 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable305[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize306 = { sizeof (ArrayList_t4252133567), -1, sizeof(ArrayList_t4252133567_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable306[5] = 
{
	ArrayList_t4252133567::get_offset_of__items_0(),
	ArrayList_t4252133567::get_offset_of__size_1(),
	ArrayList_t4252133567::get_offset_of__version_2(),
	ArrayList_t4252133567::get_offset_of__syncRoot_3(),
	ArrayList_t4252133567_StaticFields::get_offset_of_emptyArray_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize307 = { sizeof (IListWrapper_t2368627560), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable307[1] = 
{
	IListWrapper_t2368627560::get_offset_of__list_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize308 = { sizeof (SyncArrayList_t249867678), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable308[2] = 
{
	SyncArrayList_t249867678::get_offset_of__list_5(),
	SyncArrayList_t249867678::get_offset_of__root_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize309 = { sizeof (ReadOnlyArrayList_t1065935995), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable309[1] = 
{
	ReadOnlyArrayList_t1065935995::get_offset_of__list_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize310 = { sizeof (ArrayListEnumeratorSimple_t1425333127), -1, sizeof(ArrayListEnumeratorSimple_t1425333127_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable310[6] = 
{
	ArrayListEnumeratorSimple_t1425333127::get_offset_of_list_0(),
	ArrayListEnumeratorSimple_t1425333127::get_offset_of_index_1(),
	ArrayListEnumeratorSimple_t1425333127::get_offset_of_version_2(),
	ArrayListEnumeratorSimple_t1425333127::get_offset_of_currentElement_3(),
	ArrayListEnumeratorSimple_t1425333127::get_offset_of_isArrayList_4(),
	ArrayListEnumeratorSimple_t1425333127_StaticFields::get_offset_of_dummyObject_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize311 = { sizeof (ArrayListDebugView_t2931531541), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize312 = { sizeof (CaseInsensitiveComparer_t157661140), -1, sizeof(CaseInsensitiveComparer_t157661140_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable312[2] = 
{
	CaseInsensitiveComparer_t157661140::get_offset_of_m_compareInfo_0(),
	CaseInsensitiveComparer_t157661140_StaticFields::get_offset_of_m_InvariantCaseInsensitiveComparer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize313 = { sizeof (CaseInsensitiveHashCodeProvider_t2307530285), -1, sizeof(CaseInsensitiveHashCodeProvider_t2307530285_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable313[2] = 
{
	CaseInsensitiveHashCodeProvider_t2307530285::get_offset_of_m_text_0(),
	CaseInsensitiveHashCodeProvider_t2307530285_StaticFields::get_offset_of_m_InvariantCaseInsensitiveHashCodeProvider_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize314 = { sizeof (CollectionBase_t1101587467), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable314[1] = 
{
	CollectionBase_t1101587467::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize315 = { sizeof (Comparer_t3673668605), -1, sizeof(Comparer_t3673668605_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable315[3] = 
{
	Comparer_t3673668605::get_offset_of_m_compareInfo_0(),
	Comparer_t3673668605_StaticFields::get_offset_of_Default_1(),
	Comparer_t3673668605_StaticFields::get_offset_of_DefaultInvariant_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize316 = { sizeof (CompatibleComparer_t2934985531), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable316[2] = 
{
	CompatibleComparer_t2934985531::get_offset_of__comparer_0(),
	CompatibleComparer_t2934985531::get_offset_of__hcp_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize317 = { sizeof (DictionaryEntry_t3048875398)+ sizeof (RuntimeObject), sizeof(DictionaryEntry_t3048875398_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable317[2] = 
{
	DictionaryEntry_t3048875398::get_offset_of__key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DictionaryEntry_t3048875398::get_offset_of__value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize318 = { sizeof (Hashtable_t909839986), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable318[11] = 
{
	Hashtable_t909839986::get_offset_of_buckets_0(),
	Hashtable_t909839986::get_offset_of_count_1(),
	Hashtable_t909839986::get_offset_of_occupancy_2(),
	Hashtable_t909839986::get_offset_of_loadsize_3(),
	Hashtable_t909839986::get_offset_of_loadFactor_4(),
	Hashtable_t909839986::get_offset_of_version_5(),
	Hashtable_t909839986::get_offset_of_isWriterInProgress_6(),
	Hashtable_t909839986::get_offset_of_keys_7(),
	Hashtable_t909839986::get_offset_of_values_8(),
	Hashtable_t909839986::get_offset_of__keycomparer_9(),
	Hashtable_t909839986::get_offset_of__syncRoot_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize319 = { sizeof (bucket_t976591655)+ sizeof (RuntimeObject), sizeof(bucket_t976591655_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable319[3] = 
{
	bucket_t976591655::get_offset_of_key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	bucket_t976591655::get_offset_of_val_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	bucket_t976591655::get_offset_of_hash_coll_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize320 = { sizeof (KeyCollection_t145059300), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable320[1] = 
{
	KeyCollection_t145059300::get_offset_of__hashtable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize321 = { sizeof (ValueCollection_t3757008326), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable321[1] = 
{
	ValueCollection_t3757008326::get_offset_of__hashtable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize322 = { sizeof (SyncHashtable_t1343674558), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable322[1] = 
{
	SyncHashtable_t1343674558::get_offset_of__table_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize323 = { sizeof (HashtableEnumerator_t2328195885), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable323[7] = 
{
	HashtableEnumerator_t2328195885::get_offset_of_hashtable_0(),
	HashtableEnumerator_t2328195885::get_offset_of_bucket_1(),
	HashtableEnumerator_t2328195885::get_offset_of_version_2(),
	HashtableEnumerator_t2328195885::get_offset_of_current_3(),
	HashtableEnumerator_t2328195885::get_offset_of_getObjectRetType_4(),
	HashtableEnumerator_t2328195885::get_offset_of_currentKey_5(),
	HashtableEnumerator_t2328195885::get_offset_of_currentValue_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize324 = { sizeof (HashtableDebugView_t3834546805), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize325 = { sizeof (HashHelpers_t2236981683), -1, sizeof(HashHelpers_t2236981683_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable325[2] = 
{
	HashHelpers_t2236981683_StaticFields::get_offset_of_primes_0(),
	HashHelpers_t2236981683_StaticFields::get_offset_of_s_SerializationInfoTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize326 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize327 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize328 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize329 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize330 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize331 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize332 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize333 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize334 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize335 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize336 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize337 = { sizeof (Queue_t1288490777), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable337[7] = 
{
	Queue_t1288490777::get_offset_of__array_0(),
	Queue_t1288490777::get_offset_of__head_1(),
	Queue_t1288490777::get_offset_of__tail_2(),
	Queue_t1288490777::get_offset_of__size_3(),
	Queue_t1288490777::get_offset_of__growFactor_4(),
	Queue_t1288490777::get_offset_of__version_5(),
	Queue_t1288490777::get_offset_of__syncRoot_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize338 = { sizeof (QueueEnumerator_t644509261), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable338[4] = 
{
	QueueEnumerator_t644509261::get_offset_of__q_0(),
	QueueEnumerator_t644509261::get_offset_of__index_1(),
	QueueEnumerator_t644509261::get_offset_of__version_2(),
	QueueEnumerator_t644509261::get_offset_of_currentElement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize339 = { sizeof (QueueDebugView_t3545126293), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize340 = { sizeof (ReadOnlyCollectionBase_t22281769), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable340[1] = 
{
	ReadOnlyCollectionBase_t22281769::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize341 = { sizeof (SortedList_t3004938869), -1, sizeof(SortedList_t3004938869_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable341[9] = 
{
	SortedList_t3004938869::get_offset_of_keys_0(),
	SortedList_t3004938869::get_offset_of_values_1(),
	SortedList_t3004938869::get_offset_of__size_2(),
	SortedList_t3004938869::get_offset_of_version_3(),
	SortedList_t3004938869::get_offset_of_comparer_4(),
	SortedList_t3004938869::get_offset_of_keyList_5(),
	SortedList_t3004938869::get_offset_of_valueList_6(),
	SortedList_t3004938869::get_offset_of__syncRoot_7(),
	SortedList_t3004938869_StaticFields::get_offset_of_emptyArray_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize342 = { sizeof (SyncSortedList_t465004772), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable342[2] = 
{
	SyncSortedList_t465004772::get_offset_of__list_9(),
	SyncSortedList_t465004772::get_offset_of__root_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize343 = { sizeof (SortedListEnumerator_t410146509), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable343[9] = 
{
	SortedListEnumerator_t410146509::get_offset_of_sortedList_0(),
	SortedListEnumerator_t410146509::get_offset_of_key_1(),
	SortedListEnumerator_t410146509::get_offset_of_value_2(),
	SortedListEnumerator_t410146509::get_offset_of_index_3(),
	SortedListEnumerator_t410146509::get_offset_of_startIndex_4(),
	SortedListEnumerator_t410146509::get_offset_of_endIndex_5(),
	SortedListEnumerator_t410146509::get_offset_of_version_6(),
	SortedListEnumerator_t410146509::get_offset_of_current_7(),
	SortedListEnumerator_t410146509::get_offset_of_getObjectRetType_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize344 = { sizeof (KeyList_t1496669825), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable344[1] = 
{
	KeyList_t1496669825::get_offset_of_sortedList_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize345 = { sizeof (ValueList_t1155029929), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable345[1] = 
{
	ValueList_t1155029929::get_offset_of_sortedList_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize346 = { sizeof (SortedListDebugView_t2499465029), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize347 = { sizeof (Stack_t1043988394), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable347[4] = 
{
	Stack_t1043988394::get_offset_of__array_0(),
	Stack_t1043988394::get_offset_of__size_1(),
	Stack_t1043988394::get_offset_of__version_2(),
	Stack_t1043988394::get_offset_of__syncRoot_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize348 = { sizeof (StackEnumerator_t1617648877), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable348[4] = 
{
	StackEnumerator_t1617648877::get_offset_of__stack_0(),
	StackEnumerator_t1617648877::get_offset_of__index_1(),
	StackEnumerator_t1617648877::get_offset_of__version_2(),
	StackEnumerator_t1617648877::get_offset_of_currentElement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize349 = { sizeof (StackDebugView_t2528224053), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize350 = { sizeof (LowLevelComparer_t3802636147), -1, sizeof(LowLevelComparer_t3802636147_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable350[1] = 
{
	LowLevelComparer_t3802636147_StaticFields::get_offset_of_Default_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize351 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable351[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize352 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize353 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize354 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize355 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize356 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize357 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize358 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize359 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable359[14] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize360 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable360[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize361 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable361[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize362 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable362[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize363 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable363[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize364 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable364[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize365 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable365[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize366 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable366[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize367 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize368 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize369 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize370 = { sizeof (ByteEqualityComparer_t1095452717), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize371 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize372 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize373 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize374 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize375 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize376 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize377 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize378 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize379 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize380 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize381 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize382 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize383 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize384 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize385 = { sizeof (KeyNotFoundException_t1722175009), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize386 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable386[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize387 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable387[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize388 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable388[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize389 = { sizeof (ObjectEqualityComparer_t4055411110), -1, sizeof(ObjectEqualityComparer_t4055411110_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable389[1] = 
{
	ObjectEqualityComparer_t4055411110_StaticFields::get_offset_of_Default_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize390 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable390[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize391 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable391[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize392 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable392[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize393 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable393[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize394 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable394[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize395 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable395[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize396 = { sizeof (ReadOnlyDictionaryHelpers_t2959715541), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize397 = { sizeof (HashHelpers_t3596672541), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize398 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable398[9] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize399 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable399[4] = 
{
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
