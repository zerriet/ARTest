﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Address_t0C64043894DC43092287210A04CAD369B08FDBF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral557FB10169DCBA7723885B2E54E8A0318602F069;
IL2CPP_EXTERN_C String_t* _stringLiteral668A0814576A84F2A858D64078CA645AFEC4008A;
IL2CPP_EXTERN_C String_t* _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
IL2CPP_EXTERN_C String_t* _stringLiteralDFDA65A58F314AF29AAED48115FBE1675B6D5C8B;
IL2CPP_EXTERN_C String_t* _stringLiteralE71CEA2F4DC92DEB85E44E625E13F0973AA40B52;
IL2CPP_EXTERN_C const RuntimeMethod* Address_CreateFromIpPort_m3A66A25F9678F057273ABB8E6633995A6F943C2D_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4BE65B6F1710D457344CD3459B2FF2272C0F4D0E 
{
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// NanoSockets.UDP
struct UDP_t8F24AAE5C64860650E21D6AB8397B4FE1DF09038  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// NanoSockets.Address
struct Address_t0C64043894DC43092287210A04CAD369B08FDBF3 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.UInt64 NanoSockets.Address::_address0
					uint64_t ____address0_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ____address0_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ____address1_1_OffsetPadding[8];
					// System.UInt64 NanoSockets.Address::_address1
					uint64_t ____address1_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ____address1_1_OffsetPadding_forAlignmentOnly[8];
					uint64_t ____address1_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Port_2_OffsetPadding[16];
					// System.UInt16 NanoSockets.Address::Port
					uint16_t ___Port_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Port_2_OffsetPadding_forAlignmentOnly[16];
					uint16_t ___Port_2_forAlignmentOnly;
				};
			};
		};
		uint8_t Address_t0C64043894DC43092287210A04CAD369B08FDBF3__padding[24];
	};
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// NanoSockets.Socket
struct Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 NanoSockets.Socket::handle
			int64_t ___handle_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___handle_0_forAlignmentOnly;
		};
	};
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// NanoSockets.Status
struct Status_t45C4B4BBD57041D59A667D0EE4709923472BB5C9 
{
	// System.Int32 NanoSockets.Status::value__
	int32_t ___value___2;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Boolean NanoSockets.Socket::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_get_IsCreated_m808C27EDEF63277B4567C6E4AE8BE8AF1772A701 (Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6* __this, const RuntimeMethod* method) ;
// System.Boolean NanoSockets.Address::Equals(NanoSockets.Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, Address_t0C64043894DC43092287210A04CAD369B08FDBF3 ___other0, const RuntimeMethod* method) ;
// System.Boolean NanoSockets.Address::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Address_Equals_mDDBFB7BB02D6A7AF30ECBC0637B7CE220B7AC282 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.UInt16::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
// System.Int32 NanoSockets.Address::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Address_GetHashCode_m40F507481CB45DC401163A00C2C7DA21348A4D5F (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC (int32_t ___cb0, const RuntimeMethod* method) ;
// NanoSockets.Status NanoSockets.UDP::GetIP(NanoSockets.Address&,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetIP_m0A5E0BCF613843E51A389A9F697B49B426D69A15 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address0, intptr_t ___ip1, int32_t ___ipLength2, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m86CDF46D9E4810BD7DB9BB52C1036E24A7DD46EE (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC (intptr_t ___hglobal0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String NanoSockets.Address::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Address_ToString_m8A446F2E577DF79B979E0EFCEA892BB5D119909F (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, const RuntimeMethod* method) ;
// NanoSockets.Address NanoSockets.Address::CreateFromIpPort(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Address_t0C64043894DC43092287210A04CAD369B08FDBF3 Address_CreateFromIpPort_m3A66A25F9678F057273ABB8E6633995A6F943C2D (String_t* ___ip0, uint16_t ___port1, const RuntimeMethod* method) ;
// NanoSockets.Status NanoSockets.UDP::SetIP(NanoSockets.Address&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetIP_m02D59F214C84478AA5948FB1EC76567CA09D8DB8 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address0, String_t* ___ip1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_initialize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C void CDECL nanosockets_deinitialize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL nanosockets_create(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C void CDECL nanosockets_destroy(int64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_bind(int64_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_connect(int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_set_option(int64_t, int32_t, int32_t, int32_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_get_option(int64_t, int32_t, int32_t, int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_set_nonblocking(int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_set_dontfragment(int64_t, uint8_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_send(int64_t, intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_receive(int64_t, intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_poll(int64_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_address_get(int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_address_is_equal(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_address_set_ip(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_address_get_ip(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_address_set_hostname(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_address_get_hostname(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t, int32_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean NanoSockets.Socket::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_get_IsCreated_m808C27EDEF63277B4567C6E4AE8BE8AF1772A701 (Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___handle_0;
		return (bool)((((int64_t)L_0) > ((int64_t)((int64_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Socket_get_IsCreated_m808C27EDEF63277B4567C6E4AE8BE8AF1772A701_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6*>(__this + _offset);
	bool _returnValue;
	_returnValue = Socket_get_IsCreated_m808C27EDEF63277B4567C6E4AE8BE8AF1772A701(_thisAdjusted, method);
	return _returnValue;
}
// System.Int64 NanoSockets.Socket::op_Implicit(NanoSockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Socket_op_Implicit_m7BC3EDC627F0972C760B8B1D054DE2FC58E62CC2 (Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 ___socket0, const RuntimeMethod* method) 
{
	{
		Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 L_0 = ___socket0;
		int64_t L_1 = L_0.___handle_0;
		return L_1;
	}
}
// NanoSockets.Socket NanoSockets.Socket::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 Socket_op_Implicit_m2AADAB5844E14B52F46AE1DC1A572D9B16EF5603 (int64_t ___handle0, const RuntimeMethod* method) 
{
	Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int64_t L_0 = ___handle0;
		(&V_0)->___handle_0 = L_0;
		Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean NanoSockets.Address::Equals(NanoSockets.Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, Address_t0C64043894DC43092287210A04CAD369B08FDBF3 ___other0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->____address0_0;
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_1 = ___other0;
		uint64_t L_2 = L_1.____address0_0;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		uint64_t L_3 = __this->____address1_1;
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_4 = ___other0;
		uint64_t L_5 = L_4.____address1_1;
		if ((!(((uint64_t)L_3) == ((uint64_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		uint16_t L_6 = __this->___Port_2;
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_7 = ___other0;
		uint16_t L_8 = L_7.___Port_2;
		return (bool)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6_AdjustorThunk (RuntimeObject* __this, Address_t0C64043894DC43092287210A04CAD369B08FDBF3 ___other0, const RuntimeMethod* method)
{
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Address_t0C64043894DC43092287210A04CAD369B08FDBF3*>(__this + _offset);
	bool _returnValue;
	_returnValue = Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean NanoSockets.Address::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Address_Equals_mDDBFB7BB02D6A7AF30ECBC0637B7CE220B7AC282 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Address_t0C64043894DC43092287210A04CAD369B08FDBF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Address_t0C64043894DC43092287210A04CAD369B08FDBF3_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*)((Address_t0C64043894DC43092287210A04CAD369B08FDBF3*)(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*)UnBox(L_1, Address_t0C64043894DC43092287210A04CAD369B08FDBF3_il2cpp_TypeInfo_var))));
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_2 = V_0;
		bool L_3;
		L_3 = Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Address_Equals_mDDBFB7BB02D6A7AF30ECBC0637B7CE220B7AC282_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Address_t0C64043894DC43092287210A04CAD369B08FDBF3*>(__this + _offset);
	bool _returnValue;
	_returnValue = Address_Equals_mDDBFB7BB02D6A7AF30ECBC0637B7CE220B7AC282(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 NanoSockets.Address::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Address_GetHashCode_m40F507481CB45DC401163A00C2C7DA21348A4D5F (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = (&__this->____address0_0);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		uint64_t* L_2 = (&__this->____address1_1);
		int32_t L_3;
		L_3 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_2, NULL);
		uint16_t* L_4 = (&__this->___Port_2);
		int32_t L_5;
		L_5 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_4, NULL);
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)17), ((int32_t)31))), L_1)), ((int32_t)31))), L_3)), ((int32_t)31))), L_5));
	}
}
IL2CPP_EXTERN_C  int32_t Address_GetHashCode_m40F507481CB45DC401163A00C2C7DA21348A4D5F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Address_t0C64043894DC43092287210A04CAD369B08FDBF3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Address_GetHashCode_m40F507481CB45DC401163A00C2C7DA21348A4D5F(_thisAdjusted, method);
	return _returnValue;
}
// System.String NanoSockets.Address::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Address_ToString_m8A446F2E577DF79B979E0EFCEA892BB5D119909F (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral557FB10169DCBA7723885B2E54E8A0318602F069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral668A0814576A84F2A858D64078CA645AFEC4008A);
		s_Il2CppMethodInitialized = true;
	}
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	{
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_0 = (*(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*)__this);
		V_0 = L_0;
		V_1 = ((int32_t)64);
		int32_t L_1 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC(L_1, NULL);
		V_2 = L_2;
		intptr_t L_3 = V_2;
		int32_t L_4 = V_1;
		int32_t L_5;
		L_5 = UDP_GetIP_m0A5E0BCF613843E51A389A9F697B49B426D69A15((&V_0), L_3, L_4, NULL);
		intptr_t L_6 = V_2;
		String_t* L_7;
		L_7 = Marshal_PtrToStringAnsi_m86CDF46D9E4810BD7DB9BB52C1036E24A7DD46EE(L_6, NULL);
		V_3 = L_7;
		intptr_t L_8 = V_2;
		Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC(L_8, NULL);
		String_t* L_9 = V_3;
		uint16_t L_10 = __this->___Port_2;
		uint16_t L_11 = L_10;
		RuntimeObject* L_12 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral668A0814576A84F2A858D64078CA645AFEC4008A, _stringLiteral557FB10169DCBA7723885B2E54E8A0318602F069, L_9, L_12, NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C  String_t* Address_ToString_m8A446F2E577DF79B979E0EFCEA892BB5D119909F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Address_t0C64043894DC43092287210A04CAD369B08FDBF3*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Address_ToString_m8A446F2E577DF79B979E0EFCEA892BB5D119909F(_thisAdjusted, method);
	return _returnValue;
}
// NanoSockets.Address NanoSockets.Address::LocalhostIPv4(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Address_t0C64043894DC43092287210A04CAD369B08FDBF3 Address_LocalhostIPv4_m42D8109E38D3857F8CE2D41D500DCF30C189E71A (uint16_t ___port0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0 = ___port0;
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_1;
		L_1 = Address_CreateFromIpPort_m3A66A25F9678F057273ABB8E6633995A6F943C2D(_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE, L_0, NULL);
		return L_1;
	}
}
// NanoSockets.Address NanoSockets.Address::Any(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Address_t0C64043894DC43092287210A04CAD369B08FDBF3 Address_Any_m1C304E2587D6CC908DDBC3EE961835F9EDEF243F (uint16_t ___port0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE71CEA2F4DC92DEB85E44E625E13F0973AA40B52);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0 = ___port0;
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_1;
		L_1 = Address_CreateFromIpPort_m3A66A25F9678F057273ABB8E6633995A6F943C2D(_stringLiteralE71CEA2F4DC92DEB85E44E625E13F0973AA40B52, L_0, NULL);
		return L_1;
	}
}
// NanoSockets.Address NanoSockets.Address::CreateFromIpPort(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Address_t0C64043894DC43092287210A04CAD369B08FDBF3 Address_CreateFromIpPort_m3A66A25F9678F057273ABB8E6633995A6F943C2D (String_t* ___ip0, uint16_t ___port1, const RuntimeMethod* method) 
{
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3));
		String_t* L_0 = ___ip0;
		int32_t L_1;
		L_1 = UDP_SetIP_m02D59F214C84478AA5948FB1EC76567CA09D8DB8((&V_0), L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDFDA65A58F314AF29AAED48115FBE1675B6D5C8B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Address_CreateFromIpPort_m3A66A25F9678F057273ABB8E6633995A6F943C2D_RuntimeMethod_var)));
	}

IL_001d:
	{
		uint16_t L_3 = ___port1;
		(&V_0)->___Port_2 = L_3;
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// NanoSockets.Status NanoSockets.UDP::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Initialize_m974288531A2E98B24DA7ABEB9B9660BC5478DFDF (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_initialize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_initialize)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void NanoSockets.UDP::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_Deinitialize_m70DEB50985B9EDAF5D57CAF3CCE0738FBEB30B5E (const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_deinitialize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	reinterpret_cast<PInvokeFunc>(nanosockets_deinitialize)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Int64 NanoSockets.UDP::Create(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UDP_Create_mB8E02749E2F906B084D65AEAA4237EAFFD3D5511 (int32_t ___sendBufferSize0, int32_t ___receiveBufferSize1, const RuntimeMethod* method) 
{
	typedef int64_t (CDECL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_create", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_create)(___sendBufferSize0, ___receiveBufferSize1);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___sendBufferSize0, ___receiveBufferSize1);
	#endif

	return returnValue;
}
// System.Void NanoSockets.UDP::Destroy(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_Destroy_mE612ACA3FADC31249F47E023FC44463E7B9B31D9 (int64_t* ___socket0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (int64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_destroy", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	reinterpret_cast<PInvokeFunc>(nanosockets_destroy)(___socket0);
	#else
	il2cppPInvokeFunc(___socket0);
	#endif

}
// System.Int32 NanoSockets.UDP::Bind(System.Int64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Bind_mEB8C72DFB288107FA1DBEB8BD09976A331F793FC (int64_t ___socket0, intptr_t ___address1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_bind", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_bind)(___socket0, ___address1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1);
	#endif

	return returnValue;
}
// System.Int32 NanoSockets.UDP::Bind(System.Int64,NanoSockets.Address&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Bind_m30068999BD8A3D8AC1C429C6BF513C21F8DBB071 (int64_t ___socket0, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_bind", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_bind)(___socket0, ___address1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1);
	#endif

	return returnValue;
}
// System.Int32 NanoSockets.UDP::Connect(System.Int64,NanoSockets.Address&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Connect_m3380578F65AE9FB3E645FFF7B3879F87EA291878 (int64_t ___socket0, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_connect", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_connect)(___socket0, ___address1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1);
	#endif

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::SetOption(System.Int64,System.Int32,System.Int32,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetOption_m4BE87376EB327518B1E3BC1575576B6F0AF0841D (int64_t ___socket0, int32_t ___level1, int32_t ___optionName2, int32_t* ___optionValue3, int32_t ___optionLength4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, int32_t, int32_t, int32_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_set_option", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_set_option)(___socket0, ___level1, ___optionName2, ___optionValue3, ___optionLength4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___level1, ___optionName2, ___optionValue3, ___optionLength4);
	#endif

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::GetOption(System.Int64,System.Int32,System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetOption_m148951ABBAC93AC835EC93110A3C74C0DD59245D (int64_t ___socket0, int32_t ___level1, int32_t ___optionName2, int32_t* ___optionValue3, int32_t* ___optionLength4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, int32_t, int32_t, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_get_option", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_get_option)(___socket0, ___level1, ___optionName2, ___optionValue3, ___optionLength4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___level1, ___optionName2, ___optionValue3, ___optionLength4);
	#endif

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::SetNonBlocking(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetNonBlocking_m6DDBB60E445125A636F166D07C5B21CA0AE50AFA (int64_t ___socket0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_set_nonblocking", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_set_nonblocking)(___socket0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0);
	#endif

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::SetDontFragment(System.Int64,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetDontFragment_m3EED72F72837DCBED6C43DEDAA30F9D283F0F0A5 (int64_t ___socket0, uint8_t ___df1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, uint8_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(uint8_t) + 3;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_set_dontfragment", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_set_dontfragment)(___socket0, ___df1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___df1);
	#endif

	return returnValue;
}
// System.Int32 NanoSockets.UDP::Send(System.Int64,System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Send_m289BBD4981917CDF9E6B02B9D1C2B4C9D585B608 (int64_t ___socket0, intptr_t ___address1, intptr_t ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_send", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_send)(___socket0, ___address1, ___buffer2, ___bufferLength3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1, ___buffer2, ___bufferLength3);
	#endif

	return returnValue;
}
// System.Int32 NanoSockets.UDP::Send(System.Int64,System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Send_m905FC26FD4403AD07BA8330FFEE7E4EB271CFEF4 (int64_t ___socket0, intptr_t ___address1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_send", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___buffer2' to native representation
	uint8_t* ____buffer2_marshaled = NULL;
	if (___buffer2 != NULL)
	{
		____buffer2_marshaled = reinterpret_cast<uint8_t*>((___buffer2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_send)(___socket0, ___address1, ____buffer2_marshaled, ___bufferLength3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1, ____buffer2_marshaled, ___bufferLength3);
	#endif

	return returnValue;
}
// System.Int32 NanoSockets.UDP::Send(System.Int64,NanoSockets.Address&,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Send_mB586FDFA2E916FC9595AD907F4FDCDDD25FE2904 (int64_t ___socket0, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address1, intptr_t ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_send", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_send)(___socket0, ___address1, ___buffer2, ___bufferLength3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1, ___buffer2, ___bufferLength3);
	#endif

	return returnValue;
}
// System.Int32 NanoSockets.UDP::Send(System.Int64,NanoSockets.Address&,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Send_mE6B11135F63CC73795335539FD8186F6D2314597 (int64_t ___socket0, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_send", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___buffer2' to native representation
	uint8_t* ____buffer2_marshaled = NULL;
	if (___buffer2 != NULL)
	{
		____buffer2_marshaled = reinterpret_cast<uint8_t*>((___buffer2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_send)(___socket0, ___address1, ____buffer2_marshaled, ___bufferLength3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1, ____buffer2_marshaled, ___bufferLength3);
	#endif

	return returnValue;
}
// System.Int32 NanoSockets.UDP::Send(System.Int64,NanoSockets.Address*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Send_mB4E77C3253E93BA7E891736C5E44FA2A04F8ACDA (int64_t ___socket0, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address1, uint8_t* ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(uint8_t*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_send", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_send)(___socket0, ___address1, ___buffer2, ___bufferLength3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1, ___buffer2, ___bufferLength3);
	#endif

	return returnValue;
}
// System.Int32 NanoSockets.UDP::Receive(System.Int64,System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Receive_mA765F073EA132421534B9C291FE3398EF93F2501 (int64_t ___socket0, intptr_t ___address1, intptr_t ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_receive", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_receive)(___socket0, ___address1, ___buffer2, ___bufferLength3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1, ___buffer2, ___bufferLength3);
	#endif

	return returnValue;
}
// System.Int32 NanoSockets.UDP::Receive(System.Int64,System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Receive_mD89BAE2A19F999896D3E411FB60D0D4D06A5A31C (int64_t ___socket0, intptr_t ___address1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_receive", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___buffer2' to native representation
	uint8_t* ____buffer2_marshaled = NULL;
	if (___buffer2 != NULL)
	{
		____buffer2_marshaled = reinterpret_cast<uint8_t*>((___buffer2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_receive)(___socket0, ___address1, ____buffer2_marshaled, ___bufferLength3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1, ____buffer2_marshaled, ___bufferLength3);
	#endif

	return returnValue;
}
// System.Int32 NanoSockets.UDP::Receive(System.Int64,NanoSockets.Address&,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Receive_m71C563F8A00D2420C5E2D256F2A63ADB1450944C (int64_t ___socket0, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address1, intptr_t ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_receive", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_receive)(___socket0, ___address1, ___buffer2, ___bufferLength3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1, ___buffer2, ___bufferLength3);
	#endif

	return returnValue;
}
// System.Int32 NanoSockets.UDP::Receive(System.Int64,NanoSockets.Address&,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Receive_m03EE5E51DDDEBB465F94A61C40D14DACE8F3E186 (int64_t ___socket0, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_receive", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___buffer2' to native representation
	uint8_t* ____buffer2_marshaled = NULL;
	if (___buffer2 != NULL)
	{
		____buffer2_marshaled = reinterpret_cast<uint8_t*>((___buffer2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_receive)(___socket0, ___address1, ____buffer2_marshaled, ___bufferLength3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1, ____buffer2_marshaled, ___bufferLength3);
	#endif

	return returnValue;
}
// System.Int32 NanoSockets.UDP::Receive(System.Int64,NanoSockets.Address*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Receive_mF91410B929B04D7FC8F04ECD7F81B4F4E0BB1DD9 (int64_t ___socket0, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address1, uint8_t* ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(uint8_t*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_receive", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_receive)(___socket0, ___address1, ___buffer2, ___bufferLength3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1, ___buffer2, ___bufferLength3);
	#endif

	return returnValue;
}
// System.Int32 NanoSockets.UDP::Poll(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Poll_m46165EEC3B4867BE25A27331E94699FF725819B2 (int64_t ___socket0, int64_t ___timeout1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_poll", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_poll)(___socket0, ___timeout1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___timeout1);
	#endif

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::GetAddress(System.Int64,NanoSockets.Address&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetAddress_m68191BD29DB49C1C417B4D58C12A85D9A6B71B16 (int64_t ___socket0, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_get", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_get)(___socket0, ___address1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1);
	#endif

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::IsEqual(NanoSockets.Address&,NanoSockets.Address&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_IsEqual_m778D89CEB76BC2D8A8A4B6E9032D2C161C94A04D (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___left0, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___right1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_is_equal", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_is_equal)(___left0, ___right1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___left0, ___right1);
	#endif

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::SetIP(NanoSockets.Address&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetIP_m3AF7DFFEE878C7F1B96C250FA1B4A53EF56FF551 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address0, intptr_t ___ip1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_set_ip", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_set_ip)(___address0, ___ip1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___address0, ___ip1);
	#endif

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::SetIP(NanoSockets.Address&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetIP_m02D59F214C84478AA5948FB1EC76567CA09D8DB8 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address0, String_t* ___ip1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_set_ip", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___ip1' to native representation
	char* ____ip1_marshaled = NULL;
	____ip1_marshaled = il2cpp_codegen_marshal_string(___ip1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_set_ip)(___address0, ____ip1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___address0, ____ip1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___ip1' native representation
	il2cpp_codegen_marshal_free(____ip1_marshaled);
	____ip1_marshaled = NULL;

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::GetIP(NanoSockets.Address&,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetIP_m0A5E0BCF613843E51A389A9F697B49B426D69A15 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address0, intptr_t ___ip1, int32_t ___ipLength2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_get_ip", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_get_ip)(___address0, ___ip1, ___ipLength2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___address0, ___ip1, ___ipLength2);
	#endif

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::GetIP(NanoSockets.Address&,System.Text.StringBuilder,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetIP_m2A26D92F2E0B3F23E9B25EC1226D8CA55B9F7B76 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address0, StringBuilder_t* ___ip1, int32_t ___ipLength2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_get_ip", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___ip1' to native representation
	char* ____ip1_marshaled = NULL;
	____ip1_marshaled = il2cpp_codegen_marshal_string_builder(___ip1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_get_ip)(___address0, ____ip1_marshaled, ___ipLength2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___address0, ____ip1_marshaled, ___ipLength2);
	#endif

	// Marshaling of parameter '___ip1' back from native representation
	il2cpp_codegen_marshal_string_builder_result(___ip1, ____ip1_marshaled);

	// Marshaling cleanup of parameter '___ip1' native representation
	il2cpp_codegen_marshal_free(____ip1_marshaled);
	____ip1_marshaled = NULL;

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::SetHostName(NanoSockets.Address&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetHostName_mF0B28D975745F908A41F5F6B4710DF9F1F3DC18B (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address0, intptr_t ___name1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_set_hostname", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_set_hostname)(___address0, ___name1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___address0, ___name1);
	#endif

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::SetHostName(NanoSockets.Address&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetHostName_m7008CDC5B49AB295BFC0C5D4E3D3D8F8136FCA03 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address0, String_t* ___name1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_set_hostname", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_set_hostname)(___address0, ____name1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___address0, ____name1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::GetHostName(NanoSockets.Address&,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetHostName_m21473B177693DD8A48886DDCE95031C7559F61A4 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address0, intptr_t ___name1, int32_t ___nameLength2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_get_hostname", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_get_hostname)(___address0, ___name1, ___nameLength2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___address0, ___name1, ___nameLength2);
	#endif

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::GetHostName(NanoSockets.Address&,System.Text.StringBuilder,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetHostName_mAC26FDB832135AD9CBAB8B01056C2648C9784F9C (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address0, StringBuilder_t* ___name1, int32_t ___nameLength2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_get_hostname", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string_builder(___name1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_get_hostname)(___address0, ____name1_marshaled, ___nameLength2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___address0, ____name1_marshaled, ___nameLength2);
	#endif

	// Marshaling of parameter '___name1' back from native representation
	il2cpp_codegen_marshal_string_builder_result(___name1, ____name1_marshaled);

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
