#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "vm/CachedCCWBase.h"
#include "object-internals.h"

// System.Runtime.InteropServices.ManagedErrorInfo
struct ManagedErrorInfo_t914761495;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;

extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t IErrorInfo_GetGUID_m3816441410_CCW_ManagedErrorInfo_t914761495_ComCallableWrapper_ManagedErrorInfo_GetGUID_m3684105608_MetadataUsageId;
extern const uint32_t IErrorInfo_GetSource_m2851584934_CCW_ManagedErrorInfo_t914761495_ComCallableWrapper_ManagedErrorInfo_GetSource_m2771582700_MetadataUsageId;
extern const uint32_t IErrorInfo_GetDescription_m689279495_CCW_ManagedErrorInfo_t914761495_ComCallableWrapper_ManagedErrorInfo_GetDescription_m3399255087_MetadataUsageId;
extern const uint32_t IErrorInfo_GetHelpFile_m2074525126_CCW_ManagedErrorInfo_t914761495_ComCallableWrapper_ManagedErrorInfo_GetHelpFile_m1071094872_MetadataUsageId;
extern const uint32_t IErrorInfo_GetHelpContext_m3383284997_CCW_ManagedErrorInfo_t914761495_ComCallableWrapper_ManagedErrorInfo_GetHelpContext_m3080255405_MetadataUsageId;
struct Guid_t ;



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
// System.Runtime.InteropServices.IErrorInfo
struct NOVTABLE IErrorInfo_t3966376335 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetGUID_m3816441410(Guid_t * ___pGuid0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetSource_m2851584934(Il2CppChar** ___pBstrSource0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetDescription_m689279495(Il2CppChar** ___pbstrDescription0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetHelpFile_m2074525126(Il2CppChar** ___pBstrHelpFile0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetHelpContext_m3383284997(uint32_t* ___pdwHelpContext0, int32_t* comReturnValue) = 0;
};
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
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef MANAGEDERRORINFO_T914761495_H
#define MANAGEDERRORINFO_T914761495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ManagedErrorInfo
struct  ManagedErrorInfo_t914761495  : public RuntimeObject
{
public:
	// System.Exception System.Runtime.InteropServices.ManagedErrorInfo::m_Exception
	Exception_t1927440687 * ___m_Exception_0;

public:
	inline static int32_t get_offset_of_m_Exception_0() { return static_cast<int32_t>(offsetof(ManagedErrorInfo_t914761495, ___m_Exception_0)); }
	inline Exception_t1927440687 * get_m_Exception_0() const { return ___m_Exception_0; }
	inline Exception_t1927440687 ** get_address_of_m_Exception_0() { return &___m_Exception_0; }
	inline void set_m_Exception_0(Exception_t1927440687 * value)
	{
		___m_Exception_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Exception_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANAGEDERRORINFO_T914761495_H
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



// System.Int32 System.Runtime.InteropServices.ManagedErrorInfo::GetGUID(System.Guid&)
extern "C"  int32_t ManagedErrorInfo_GetGUID_m3684105608 (ManagedErrorInfo_t914761495 * __this, Guid_t * ___guid0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.ManagedErrorInfo::GetSource(System.String&)
extern "C"  int32_t ManagedErrorInfo_GetSource_m2771582700 (ManagedErrorInfo_t914761495 * __this, String_t** ___source0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.ManagedErrorInfo::GetDescription(System.String&)
extern "C"  int32_t ManagedErrorInfo_GetDescription_m3399255087 (ManagedErrorInfo_t914761495 * __this, String_t** ___description0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.ManagedErrorInfo::GetHelpFile(System.String&)
extern "C"  int32_t ManagedErrorInfo_GetHelpFile_m1071094872 (ManagedErrorInfo_t914761495 * __this, String_t** ___helpFile0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.ManagedErrorInfo::GetHelpContext(System.UInt32&)
extern "C"  int32_t ManagedErrorInfo_GetHelpContext_m3080255405 (ManagedErrorInfo_t914761495 * __this, uint32_t* ___helpContext0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;

// COM Callable Wrapper for System.Runtime.InteropServices.ManagedErrorInfo
struct ManagedErrorInfo_t914761495_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ManagedErrorInfo_t914761495_ComCallableWrapper>, IErrorInfo_t3966376335
{
	inline ManagedErrorInfo_t914761495_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ManagedErrorInfo_t914761495_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IErrorInfo_t3966376335::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IErrorInfo_t3966376335*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		*iidCount = 0;
		*iids = NULL;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetGUID_m3816441410(Guid_t * ___guid0, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_method (IErrorInfo_GetGUID_m3816441410_CCW_ManagedErrorInfo_t914761495_ComCallableWrapper_ManagedErrorInfo_GetGUID_m3684105608_MetadataUsageId);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

		// Marshaling of parameter '___guid0' to managed representation
		Guid_t  ____guid0_empty;
		memset(&____guid0_empty, 0, sizeof(____guid0_empty));

		// Managed method invocation
		int32_t returnValue;
		try
		{
			ManagedErrorInfo_t914761495 * __thisValue = (ManagedErrorInfo_t914761495 *)GetManagedObjectInline();
			returnValue = ManagedErrorInfo_GetGUID_m3684105608(__thisValue, (&____guid0_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			*comReturnValue = 0;
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___guid0' back from managed representation
		*___guid0 = *(&____guid0_empty);

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetSource_m2851584934(Il2CppChar** ___source0, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_method (IErrorInfo_GetSource_m2851584934_CCW_ManagedErrorInfo_t914761495_ComCallableWrapper_ManagedErrorInfo_GetSource_m2771582700_MetadataUsageId);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

		// Marshaling of parameter '___source0' to managed representation
		String_t* ____source0_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			ManagedErrorInfo_t914761495 * __thisValue = (ManagedErrorInfo_t914761495 *)GetManagedObjectInline();
			returnValue = ManagedErrorInfo_GetSource_m2771582700(__thisValue, (&____source0_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			*comReturnValue = 0;
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___source0' back from managed representation
		*___source0 = il2cpp_codegen_marshal_bstring(*(&____source0_empty));

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetDescription_m689279495(Il2CppChar** ___description0, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_method (IErrorInfo_GetDescription_m689279495_CCW_ManagedErrorInfo_t914761495_ComCallableWrapper_ManagedErrorInfo_GetDescription_m3399255087_MetadataUsageId);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

		// Marshaling of parameter '___description0' to managed representation
		String_t* ____description0_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			ManagedErrorInfo_t914761495 * __thisValue = (ManagedErrorInfo_t914761495 *)GetManagedObjectInline();
			returnValue = ManagedErrorInfo_GetDescription_m3399255087(__thisValue, (&____description0_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			*comReturnValue = 0;
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___description0' back from managed representation
		*___description0 = il2cpp_codegen_marshal_bstring(*(&____description0_empty));

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetHelpFile_m2074525126(Il2CppChar** ___helpFile0, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_method (IErrorInfo_GetHelpFile_m2074525126_CCW_ManagedErrorInfo_t914761495_ComCallableWrapper_ManagedErrorInfo_GetHelpFile_m1071094872_MetadataUsageId);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

		// Marshaling of parameter '___helpFile0' to managed representation
		String_t* ____helpFile0_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			ManagedErrorInfo_t914761495 * __thisValue = (ManagedErrorInfo_t914761495 *)GetManagedObjectInline();
			returnValue = ManagedErrorInfo_GetHelpFile_m1071094872(__thisValue, (&____helpFile0_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			*comReturnValue = 0;
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___helpFile0' back from managed representation
		*___helpFile0 = il2cpp_codegen_marshal_bstring(*(&____helpFile0_empty));

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetHelpContext_m3383284997(uint32_t* ___helpContext0, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_method (IErrorInfo_GetHelpContext_m3383284997_CCW_ManagedErrorInfo_t914761495_ComCallableWrapper_ManagedErrorInfo_GetHelpContext_m3080255405_MetadataUsageId);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

		// Marshaling of parameter '___helpContext0' to managed representation
		uint32_t ____helpContext0_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			ManagedErrorInfo_t914761495 * __thisValue = (ManagedErrorInfo_t914761495 *)GetManagedObjectInline();
			returnValue = ManagedErrorInfo_GetHelpContext_m3080255405(__thisValue, (&____helpContext0_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			*comReturnValue = 0;
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___helpContext0' back from managed representation
		*___helpContext0 = *(&____helpContext0_empty);

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}
};

extern "C" Il2CppIUnknown* CreateComCallableWrapperFor_ManagedErrorInfo_t914761495(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ManagedErrorInfo_t914761495_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ManagedErrorInfo_t914761495_ComCallableWrapper(obj));
}
