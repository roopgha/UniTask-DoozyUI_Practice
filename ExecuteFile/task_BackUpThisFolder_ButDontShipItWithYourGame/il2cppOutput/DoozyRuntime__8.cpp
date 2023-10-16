#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352;
struct String_t;
struct ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0292E446EE91142ECA40D84274D17861CE8D706E;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
IL2CPP_EXTERN_C String_t* _stringLiteral3527204424CF64E35556308132D94D7C1C5EAA59;
IL2CPP_EXTERN_C String_t* _stringLiteral98027F81442491B914C4F0A083D8B130C0E82A2B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* SelectableColor_GetCurrentColor_mCE78C636FA2C3EFF768797FA32E7C7A16069B1A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CPrivateImplementationDetailsU3E_t4C96010D7F7EFD527F62AF9BF3B75EB33A11C128  : public RuntimeObject
{
};
struct ColorUtils_tEABBBE2908D3A2824A4B10D6FC86EA694EA30145  : public RuntimeObject
{
};
struct SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352  : public RuntimeObject
{
	bool ___m_IsDarkTheme;
	int32_t ___U3CcurrentStateU3Ek__BackingField;
	ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* ___onStateChanged;
	ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* ___Normal;
	ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* ___Highlighted;
	ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* ___Pressed;
	ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* ___Selected;
	ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* ___Disabled;
};
struct SelectableColorExtensions_t068E2CB3A9FF70DEE4F33EF5223F5F04033257E9  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls;
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls;
	bool ___m_CallsDirty;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct HSL_tFC0E043357C640451DED090325DB7789B92F1C85 
{
	float ___h;
	float ___s;
	float ___l;
};
struct HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 
{
	float ___h;
	float ___s;
	float ___v;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 
{
	float ___r;
	float ___g;
	float ___b;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D24246_tA13E6EE8505414615ECC47188DCD6436598DB379 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24246_tA13E6EE8505414615ECC47188DCD6436598DB379__padding[24246];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D31677_t1121A11640D7B6B33FA13A4AC7C7D0BFF16E534D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D31677_t1121A11640D7B6B33FA13A4AC7C7D0BFF16E534D__padding[31677];
	};
};
#pragma pack(pop, tp)
struct H_t0D2E16D64663E0956BCDB00DF6D27D0BB87E8396 
{
	union
	{
		struct
		{
		};
		uint8_t H_t0D2E16D64663E0956BCDB00DF6D27D0BB87E8396__padding[1];
	};
};
struct L_tE9E899D202ACDF6316EC3A326E6F4C8537976D6F 
{
	union
	{
		struct
		{
		};
		uint8_t L_tE9E899D202ACDF6316EC3A326E6F4C8537976D6F__padding[1];
	};
};
struct S_t0B4FA2E233D57DE1477ECE717D8DE9A6195C9397 
{
	union
	{
		struct
		{
		};
		uint8_t S_t0B4FA2E233D57DE1477ECE717D8DE9A6195C9397__padding[1];
	};
};
struct H_t128C6825EBABB1868739A6FD80E99520E86242ED 
{
	union
	{
		struct
		{
		};
		uint8_t H_t128C6825EBABB1868739A6FD80E99520E86242ED__padding[1];
	};
};
struct S_tD05A69BC6DB47A85E6AC78E56DAECF2D3F72756C 
{
	union
	{
		struct
		{
		};
		uint8_t S_tD05A69BC6DB47A85E6AC78E56DAECF2D3F72756C__padding[1];
	};
};
struct V_t4EBFA8F2CB6FC28942ECC2EF349B2C8234E3ED57 
{
	union
	{
		struct
		{
		};
		uint8_t V_t4EBFA8F2CB6FC28942ECC2EF349B2C8234E3ED57__padding[1];
	};
};
struct B_tCC2DA0BFB9FB4FFAA4888CEA386DA794D356787C 
{
	union
	{
		struct
		{
		};
		uint8_t B_tCC2DA0BFB9FB4FFAA4888CEA386DA794D356787C__padding[1];
	};
};
struct G_t985108CA5E56B31BA26D10E2FC93B547DEAC120F 
{
	union
	{
		struct
		{
		};
		uint8_t G_t985108CA5E56B31BA26D10E2FC93B547DEAC120F__padding[1];
	};
};
struct R_tF84A30CF694A07C61D9D2A3CDE98655D831E3E26 
{
	union
	{
		struct
		{
		};
		uint8_t R_tF84A30CF694A07C61D9D2A3CDE98655D831E3E26__padding[1];
	};
};
struct ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366  : public UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9
{
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E  : public RuntimeObject
{
	bool ___U3CisDarkThemeU3Ek__BackingField;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ColorOnDark;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ColorOnLight;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct U3CPrivateImplementationDetailsU3E_t4C96010D7F7EFD527F62AF9BF3B75EB33A11C128_StaticFields
{
	__StaticArrayInitTypeSizeU3D24246_tA13E6EE8505414615ECC47188DCD6436598DB379 ___011E515E212F38E362E46DEDD5EC4F02CE9BEFED5946A32264AD7FC01E8AEE12;
	__StaticArrayInitTypeSizeU3D31677_t1121A11640D7B6B33FA13A4AC7C7D0BFF16E534D ___6F4761BBDA6F5FFEAB1473E8DFC0D5EEAFF8DC7E6E9D5C161FC8FAAE1CCBD5AD;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_gshared (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_arg0, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline (double ___0_value, int32_t ___1_digits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColorUtils_Hue_mF6213E78B8F491AFD40A30A9686E906AC0BED585 (float ___0_r, float ___1_g, float ___2_b, bool ___3_factorize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 HSL_ToRGB_m7E1A7E1D4B0B9933831EA2E5F4FED8979A882DB2 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorUtils_RGBtoCOLOR_mED1B1F8BD3296384668D3B059211B93B3C33C783 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ___0_rgb, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 HSV_ToRGB_m503CEF1AE7E9FF0ABB7DD66FA4743CAF6B846A74 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_values, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_mCE17F4139B7DF5BB96192C88AF390D3C99F11858_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HSL__ctor_m07507D631167D40DB30E5585E850958090FFB398 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, float ___0_h, float ___1_s, float ___2_l, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 HSL_Validate_m124583A3CA57B47AA3A8E19A168F8BA21587A556 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 ColorUtils_RGBtoHSL_m1C9B9113AB041AB4F547BD1212504C95AB85BEA3 (float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HSV__ctor_mEFD2720C943717443A1D1B5070F1E59AE3AD8F0E (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, float ___0_h, float ___1_s, float ___2_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 HSV_Validate_m2F94DC90607C2E7D322CA997C754ECEACB911D1C (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 ColorUtils_RGBtoHSV_m52341861A8ADA464B498E56ED54D76F6DCC619D1 (float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HSL_Factorize_mFF9B47DDA6A199D830BE76C8C18D7CE5C88DF50E (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 RGB_Validate_m56EFE035BD98595B411143C321CCD277879600B1 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HSV_Factorize_m635CC171538CF1EFAD187589F4513C2A4811E134 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_currentColor_mD6A22914A743082E1D03E1CCD618F7943C2F9718 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectableColor_SelectionStateChanged_m412D5666F61484C8F085917E8DD89118760372C2 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_GetCurrentColor_mCE78C636FA2C3EFF768797FA32E7C7A16069B1A5 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ThemeColor_get_color_mB27B7B647DF063A0EBA8BBC3D2D6895015CE8A75 (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemeColor__ctor_m3C6BD94A543044E5A31091845FA162FFD485D3A2 (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SelectableColor_get_isDarkTheme_m17B31F79AE5E7105BF8922182AB236E9E25D9126_inline (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorEvent__ctor_mC2B5BE475CEDDD1A4A8C2B4BD290CD54070F6CF0 (ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectableColor_SetSelectionState_m505011CD3A73CECCEB4F7C6E65A067809C3DFB73 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, int32_t ___0_state, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SelectableColor_get_currentState_m75636D7702E1A9CC6301A1BC5B3031CC1CA6814D_inline (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_normalColor_m0E49019F66DFF06459E92CC65584A75BA5A99EFD (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_highlightedColor_m0A5728140FF96C37779ED4A64D08B944BF718B7D (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_pressedColor_mC08278770C3CCBC47B4DD35DE2F604E149112AEA (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_selectedColor_mE4A6E5871E71AF624E046AC2B70F126F1032964B (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_disabledColor_m778DA2F7C35E1CC60B08A5A97ED58FBB696F8DBD (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectableColor_set_currentState_m77140C00AE632FA42D5FE8545A6217A00877D01A_inline (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline void UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_gshared)(__this, ___0_arg0, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 HSL_Copy_m294143F44AEBFBEF9B1413196D49920EEFD9CDB5 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ColorUtils_HSLtoRGB_m3D824F8A6B6F0B8780A22893CFA333119CABD26E (HSL_tFC0E043357C640451DED090325DB7789B92F1C85 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F RGB_ToColor_m91BD0BD2D9645207FD88F6788F25167A210D45F6 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, float ___0_alpha, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSL_ToColor_m1CFCE9099A883C6357AF2884BB5D0669F1C5EB7D (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, float ___0_alpha, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HSL_ValidateColor_mB89D7438AE24B49D075B81E9AFE7BA15C8E97810 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HSL_FactorizeColor_m3CD0D88C4CFFC3F603528BE25628173C37F6E365 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, float ___0_value, float ___1_min, float ___2_max, float ___3_f, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HSL_ToString_m8E623A4FEF970D9DE94304301C06774A8014FABD (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, bool ___0_factorize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 HSV_Copy_m049ED385F7E372146A048AA8B5957A68449A5F0E (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ColorUtils_HSVtoRGB_m050C711B5BE7B0FC27E6CA802C68BAB4DE49E4AC (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSV_ToColor_mD5661A203743B6FC0D16C77490A7867F136DADDB (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, float ___0_alpha, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HSV_ValidateColor_m963E440AF2D2324D93836C34A5C1E91F59AD2CC8 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HSV_FactorizeColor_m775C2F6787A32E7539E1CBFB41152659469003A5 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, float ___0_value, float ___1_min, float ___2_max, float ___3_f, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HSV_ToString_mABA07D8FE9D210F9B9868F08405A9C46089EB087 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, bool ___0_factorize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 RGB_Copy_m329C7072A88789A13FBE0FC279A26CBBC563F65E (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 ColorUtils_RGBtoHSL_mA61CE61F3498FB683E8C1510955D5D62A37F54A6 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ___0_rgb, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 RGB_ToHSL_m2379215AA7E0AA912895B0B26F319B0B0AA84B89 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 ColorUtils_RGBtoHSV_mD8043663351CE92F4273136AEA614B0BE410C45C (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 RGB_ToHSV_mAF7EA8CB8A0B313D805D55C04221E1A13D0CE416 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RGB_ValidateColor_m40373F3205F0D67261425D11804C7AD0FE7D709E (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RGB_FactorizeColor_m1551BE5E86A4815FD176BD1A01F87B7442DF7E49 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, float ___0_value, float ___1_min, float ___2_max, float ___3_f, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RGB_Factorize_mAE1DE793FB4D17ADD6E31334B6B79762CEBAD075 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RGB_ToString_m01F1CEDF3F67D9F48DBB0D6AD2B37FB2BC15341E (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, bool ___0_factorize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColorUtility_ToHtmlStringRGB_m50D59301FF2736B78C95C1FD5619D429358B7433 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RGB_ToHEX_m45E928DC752D61F5D5EB51CB098152AB6C09D1E1 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, bool ___0_addHashTag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Round_m8DB2F61CB73B9E71E54149290ABD5DC8A68890D1 (double ___0_value, int32_t ___1_digits, int32_t ___2_mode, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColorUtils_Hue_mF6213E78B8F491AFD40A30A9686E906AC0BED585 (float ___0_r, float ___1_g, float ___2_b, bool ___3_factorize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___0_r;
		float L_1 = ___1_g;
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		float L_2 = ___1_g;
		float L_3 = ___2_b;
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_000e;
		}
	}
	{
		return (0.0f);
	}

IL_000e:
	{
		V_0 = (0.0f);
		float L_4 = ___0_r;
		float L_5 = ___1_g;
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_002f;
		}
	}
	{
		float L_6 = ___1_g;
		float L_7 = ___2_b;
		if ((!(((float)L_6) >= ((float)L_7))))
		{
			goto IL_002f;
		}
	}
	{
		float L_8 = ___1_g;
		float L_9 = ___2_b;
		float L_10 = ___0_r;
		float L_11 = ___2_b;
		V_0 = ((float)il2cpp_codegen_multiply((60.0f), ((float)(((float)il2cpp_codegen_subtract(L_8, L_9))/((float)il2cpp_codegen_subtract(L_10, L_11))))));
		goto IL_00c3;
	}

IL_002f:
	{
		float L_12 = ___1_g;
		float L_13 = ___0_r;
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_004d;
		}
	}
	{
		float L_14 = ___0_r;
		float L_15 = ___2_b;
		if ((!(((float)L_14) >= ((float)L_15))))
		{
			goto IL_004d;
		}
	}
	{
		float L_16 = ___0_r;
		float L_17 = ___2_b;
		float L_18 = ___1_g;
		float L_19 = ___2_b;
		V_0 = ((float)il2cpp_codegen_multiply((60.0f), ((float)il2cpp_codegen_subtract((2.0f), ((float)(((float)il2cpp_codegen_subtract(L_16, L_17))/((float)il2cpp_codegen_subtract(L_18, L_19))))))));
		goto IL_00c3;
	}

IL_004d:
	{
		float L_20 = ___1_g;
		float L_21 = ___2_b;
		if ((!(((float)L_20) >= ((float)L_21))))
		{
			goto IL_006b;
		}
	}
	{
		float L_22 = ___2_b;
		float L_23 = ___0_r;
		if ((!(((float)L_22) > ((float)L_23))))
		{
			goto IL_006b;
		}
	}
	{
		float L_24 = ___2_b;
		float L_25 = ___0_r;
		float L_26 = ___1_g;
		float L_27 = ___0_r;
		V_0 = ((float)il2cpp_codegen_multiply((60.0f), ((float)il2cpp_codegen_add((2.0f), ((float)(((float)il2cpp_codegen_subtract(L_24, L_25))/((float)il2cpp_codegen_subtract(L_26, L_27))))))));
		goto IL_00c3;
	}

IL_006b:
	{
		float L_28 = ___2_b;
		float L_29 = ___1_g;
		if ((!(((float)L_28) > ((float)L_29))))
		{
			goto IL_0089;
		}
	}
	{
		float L_30 = ___1_g;
		float L_31 = ___0_r;
		if ((!(((float)L_30) > ((float)L_31))))
		{
			goto IL_0089;
		}
	}
	{
		float L_32 = ___1_g;
		float L_33 = ___0_r;
		float L_34 = ___2_b;
		float L_35 = ___0_r;
		V_0 = ((float)il2cpp_codegen_multiply((60.0f), ((float)il2cpp_codegen_subtract((4.0f), ((float)(((float)il2cpp_codegen_subtract(L_32, L_33))/((float)il2cpp_codegen_subtract(L_34, L_35))))))));
		goto IL_00c3;
	}

IL_0089:
	{
		float L_36 = ___2_b;
		float L_37 = ___0_r;
		if ((!(((float)L_36) > ((float)L_37))))
		{
			goto IL_00a7;
		}
	}
	{
		float L_38 = ___0_r;
		float L_39 = ___1_g;
		if ((!(((float)L_38) >= ((float)L_39))))
		{
			goto IL_00a7;
		}
	}
	{
		float L_40 = ___0_r;
		float L_41 = ___1_g;
		float L_42 = ___2_b;
		float L_43 = ___1_g;
		V_0 = ((float)il2cpp_codegen_multiply((60.0f), ((float)il2cpp_codegen_add((4.0f), ((float)(((float)il2cpp_codegen_subtract(L_40, L_41))/((float)il2cpp_codegen_subtract(L_42, L_43))))))));
		goto IL_00c3;
	}

IL_00a7:
	{
		float L_44 = ___0_r;
		float L_45 = ___2_b;
		if ((!(((float)L_44) >= ((float)L_45))))
		{
			goto IL_00c3;
		}
	}
	{
		float L_46 = ___2_b;
		float L_47 = ___1_g;
		if ((!(((float)L_46) > ((float)L_47))))
		{
			goto IL_00c3;
		}
	}
	{
		float L_48 = ___2_b;
		float L_49 = ___1_g;
		float L_50 = ___0_r;
		float L_51 = ___1_g;
		V_0 = ((float)il2cpp_codegen_multiply((60.0f), ((float)il2cpp_codegen_subtract((6.0f), ((float)(((float)il2cpp_codegen_subtract(L_48, L_49))/((float)il2cpp_codegen_subtract(L_50, L_51))))))));
	}

IL_00c3:
	{
		bool L_52 = ___3_factorize;
		if (!L_52)
		{
			goto IL_00cd;
		}
	}
	{
		float L_53 = V_0;
		int32_t L_54;
		L_54 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_53, NULL);
	}

IL_00cd:
	{
		float L_55 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_56;
		L_56 = Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline(((double)((float)(L_55/(360.0f)))), 2, NULL);
		return ((float)L_56);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColorUtils_RGBtoHUE_m4834557F655254B940894B43A0E36469F9964418 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ___0_target, bool ___1_factorize, const RuntimeMethod* method) 
{
	{
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_0 = ___0_target;
		float L_1 = L_0.___r;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_2 = ___0_target;
		float L_3 = L_2.___g;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_4 = ___0_target;
		float L_5 = L_4.___b;
		bool L_6 = ___1_factorize;
		float L_7;
		L_7 = ColorUtils_Hue_mF6213E78B8F491AFD40A30A9686E906AC0BED585(L_1, L_3, L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ColorUtils_HUEtoRGB_m2D0FF9528B2F8E405769DF8D9E09E4594E0218D3 (float ___0_hue, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = ___0_hue;
		float L_1;
		L_1 = fabsf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_0, (6.0f))), (3.0f))));
		float L_2 = ___0_hue;
		float L_3;
		L_3 = fabsf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_2, (6.0f))), (2.0f))));
		V_0 = ((float)il2cpp_codegen_subtract((2.0f), L_3));
		float L_4 = ___0_hue;
		float L_5;
		L_5 = fabsf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_4, (6.0f))), (4.0f))));
		V_1 = ((float)il2cpp_codegen_subtract((2.0f), L_5));
		float L_6 = V_0;
		float L_7 = V_1;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_8;
		memset((&L_8), 0, sizeof(L_8));
		RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0((&L_8), ((float)il2cpp_codegen_subtract(L_1, (1.0f))), L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorUtils_RGBtoCOLOR_mED1B1F8BD3296384668D3B059211B93B3C33C783 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ___0_rgb, const RuntimeMethod* method) 
{
	{
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_0 = ___0_rgb;
		float L_1 = L_0.___r;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_2 = ___0_rgb;
		float L_3 = L_2.___g;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_4 = ___0_rgb;
		float L_5 = L_4.___g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_6), L_1, L_3, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorUtils_HSLtoCOLOR_mEF44BFAED084D8FF8D41FA81D9C0B644F500DB5A (HSL_tFC0E043357C640451DED090325DB7789B92F1C85 ___0_hsl, const RuntimeMethod* method) 
{
	{
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_0;
		L_0 = HSL_ToRGB_m7E1A7E1D4B0B9933831EA2E5F4FED8979A882DB2((&___0_hsl), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ColorUtils_RGBtoCOLOR_mED1B1F8BD3296384668D3B059211B93B3C33C783(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorUtils_HSVtoCOLOR_m9D6D7E40D63A639231077CC757B6F41A6EBAFA91 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 ___0_hsv, const RuntimeMethod* method) 
{
	{
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_0;
		L_0 = HSV_ToRGB_m503CEF1AE7E9FF0ABB7DD66FA4743CAF6B846A74((&___0_hsv), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ColorUtils_RGBtoCOLOR_mED1B1F8BD3296384668D3B059211B93B3C33C783(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 ColorUtils_RGBtoHSL_m1C9B9113AB041AB4F547BD1212504C95AB85BEA3 (float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float G_B5_0 = 0.0f;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		float L_2 = ___0_r;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = L_1;
		float L_4 = ___1_g;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = L_3;
		float L_6 = ___2_b;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_6);
		float L_7;
		L_7 = Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline(L_5, NULL);
		V_0 = L_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = L_8;
		float L_10 = ___0_r;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_10);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = L_9;
		float L_12 = ___1_g;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_12);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = L_11;
		float L_14 = ___2_b;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_14);
		float L_15;
		L_15 = Mathf_Min_mCE17F4139B7DF5BB96192C88AF390D3C99F11858_inline(L_13, NULL);
		V_1 = L_15;
		float L_16 = V_0;
		float L_17 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract(L_16, L_17));
		V_3 = (0.0f);
		V_4 = (0.0f);
		float L_18 = V_0;
		float L_19 = V_1;
		V_5 = ((float)(((float)il2cpp_codegen_add(L_18, L_19))/(2.0f)));
		float L_20 = V_2;
		if ((!(((float)L_20) == ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		float L_21 = V_3;
		float L_22 = V_4;
		float L_23 = V_5;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_24;
		memset((&L_24), 0, sizeof(L_24));
		HSL__ctor_m07507D631167D40DB30E5585E850958090FFB398((&L_24), L_21, L_22, L_23, NULL);
		V_6 = L_24;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_25;
		L_25 = HSL_Validate_m124583A3CA57B47AA3A8E19A168F8BA21587A556((&V_6), NULL);
		return L_25;
	}

IL_0068:
	{
		float L_26 = ___0_r;
		float L_27 = ___1_g;
		float L_28 = ___2_b;
		float L_29;
		L_29 = ColorUtils_Hue_mF6213E78B8F491AFD40A30A9686E906AC0BED585(L_26, L_27, L_28, (bool)0, NULL);
		V_3 = L_29;
		float L_30 = V_5;
		if ((((float)L_30) < ((float)(0.5f))))
		{
			goto IL_0088;
		}
	}
	{
		float L_31 = V_2;
		float L_32 = V_0;
		float L_33 = V_1;
		G_B5_0 = ((float)(L_31/((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((2.0f), L_32)), L_33))));
		goto IL_008d;
	}

IL_0088:
	{
		float L_34 = V_2;
		float L_35 = V_0;
		float L_36 = V_1;
		G_B5_0 = ((float)(L_34/((float)il2cpp_codegen_add(L_35, L_36))));
	}

IL_008d:
	{
		V_4 = G_B5_0;
		float L_37 = V_3;
		float L_38 = V_4;
		float L_39 = V_5;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_40;
		memset((&L_40), 0, sizeof(L_40));
		HSL__ctor_m07507D631167D40DB30E5585E850958090FFB398((&L_40), L_37, L_38, L_39, NULL);
		V_6 = L_40;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_41;
		L_41 = HSL_Validate_m124583A3CA57B47AA3A8E19A168F8BA21587A556((&V_6), NULL);
		return L_41;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 ColorUtils_RGBtoHSL_mA61CE61F3498FB683E8C1510955D5D62A37F54A6 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ___0_rgb, const RuntimeMethod* method) 
{
	{
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_0 = ___0_rgb;
		float L_1 = L_0.___r;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_2 = ___0_rgb;
		float L_3 = L_2.___g;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_4 = ___0_rgb;
		float L_5 = L_4.___b;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_6;
		L_6 = ColorUtils_RGBtoHSL_m1C9B9113AB041AB4F547BD1212504C95AB85BEA3(L_1, L_3, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 ColorUtils_COLORtoHSL_m51A7F00A9D6BBE10543BBC2C69E008FD64008C8D (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		float L_1 = L_0.___r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_color;
		float L_3 = L_2.___g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_color;
		float L_5 = L_4.___b;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_6;
		L_6 = ColorUtils_RGBtoHSL_m1C9B9113AB041AB4F547BD1212504C95AB85BEA3(L_1, L_3, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 ColorUtils_RGBtoHSV_m52341861A8ADA464B498E56ED54D76F6DCC619D1 (float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		float L_2 = ___0_r;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = L_1;
		float L_4 = ___1_g;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = L_3;
		float L_6 = ___2_b;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_6);
		float L_7;
		L_7 = Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline(L_5, NULL);
		V_0 = L_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = L_8;
		float L_10 = ___0_r;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_10);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = L_9;
		float L_12 = ___1_g;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_12);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = L_11;
		float L_14 = ___2_b;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_14);
		float L_15;
		L_15 = Mathf_Min_mCE17F4139B7DF5BB96192C88AF390D3C99F11858_inline(L_13, NULL);
		V_1 = L_15;
		float L_16 = V_0;
		float L_17 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract(L_16, L_17));
		V_3 = (0.0f);
		V_4 = (0.0f);
		float L_18 = V_0;
		V_5 = L_18;
		float L_19 = V_2;
		if ((!(((float)L_19) == ((float)(0.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = V_4;
		float L_22 = V_5;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_23;
		memset((&L_23), 0, sizeof(L_23));
		HSV__ctor_mEFD2720C943717443A1D1B5070F1E59AE3AD8F0E((&L_23), L_20, L_21, L_22, NULL);
		V_6 = L_23;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_24;
		L_24 = HSV_Validate_m2F94DC90607C2E7D322CA997C754ECEACB911D1C((&V_6), NULL);
		return L_24;
	}

IL_0060:
	{
		float L_25 = ___0_r;
		float L_26 = ___1_g;
		float L_27 = ___2_b;
		float L_28;
		L_28 = ColorUtils_Hue_mF6213E78B8F491AFD40A30A9686E906AC0BED585(L_25, L_26, L_27, (bool)0, NULL);
		V_3 = L_28;
		float L_29 = V_2;
		float L_30 = V_0;
		V_4 = ((float)(L_29/L_30));
		float L_31 = V_3;
		float L_32 = V_4;
		float L_33 = V_5;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_34;
		memset((&L_34), 0, sizeof(L_34));
		HSV__ctor_mEFD2720C943717443A1D1B5070F1E59AE3AD8F0E((&L_34), L_31, L_32, L_33, NULL);
		V_6 = L_34;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_35;
		L_35 = HSV_Validate_m2F94DC90607C2E7D322CA997C754ECEACB911D1C((&V_6), NULL);
		return L_35;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 ColorUtils_RGBtoHSV_mD8043663351CE92F4273136AEA614B0BE410C45C (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ___0_value, const RuntimeMethod* method) 
{
	{
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_0 = ___0_value;
		float L_1 = L_0.___r;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_2 = ___0_value;
		float L_3 = L_2.___g;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_4 = ___0_value;
		float L_5 = L_4.___g;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_6;
		L_6 = ColorUtils_RGBtoHSV_m52341861A8ADA464B498E56ED54D76F6DCC619D1(L_1, L_3, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 ColorUtils_COLORtoHSV_mEB2799C958DCA52A3E5EB42C639BAB5A3CB9565F (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		float L_1 = L_0.___r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_color;
		float L_3 = L_2.___g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_color;
		float L_5 = L_4.___b;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_6;
		L_6 = ColorUtils_RGBtoHSV_m52341861A8ADA464B498E56ED54D76F6DCC619D1(L_1, L_3, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ColorUtils_COLORtoRGB_m26770E73C761891D0E85570E009B6ED1731B6BA9 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		float L_1 = L_0.___r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_color;
		float L_3 = L_2.___g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_color;
		float L_5 = L_4.___b;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_6;
		memset((&L_6), 0, sizeof(L_6));
		RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0((&L_6), L_1, L_3, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ColorUtils_HSLtoRGB_m3D824F8A6B6F0B8780A22893CFA333119CABD26E (HSL_tFC0E043357C640451DED090325DB7789B92F1C85 ___0_value, const RuntimeMethod* method) 
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85 V_10;
	memset((&V_10), 0, sizeof(V_10));
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_0 = ___0_value;
		float L_1 = L_0.___h;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_2 = ___0_value;
		float L_3 = L_2.___s;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_4 = ___0_value;
		float L_5 = L_4.___l;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_6;
		memset((&L_6), 0, sizeof(L_6));
		HSL__ctor_m07507D631167D40DB30E5585E850958090FFB398((&L_6), L_1, L_3, L_5, NULL);
		V_10 = L_6;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_7;
		L_7 = HSL_Validate_m124583A3CA57B47AA3A8E19A168F8BA21587A556((&V_10), NULL);
		V_0 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = HSL_Factorize_mFF9B47DDA6A199D830BE76C8C18D7CE5C88DF50E((&V_0), NULL);
		float L_9 = L_8.___x;
		V_1 = L_9;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_10 = V_0;
		float L_11 = L_10.___s;
		V_2 = L_11;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_12 = V_0;
		float L_13 = L_12.___l;
		V_3 = L_13;
		float L_14 = V_3;
		float L_15;
		L_15 = fabsf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((2.0f), L_14)), (1.0f))));
		float L_16 = V_2;
		V_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_15)), L_16));
		float L_17 = V_4;
		float L_18 = V_1;
		float L_19;
		L_19 = fabsf(((float)il2cpp_codegen_subtract((fmodf(((float)(L_18/(60.0f))), (2.0f))), (1.0f))));
		V_5 = ((float)il2cpp_codegen_multiply(L_17, ((float)il2cpp_codegen_subtract((1.0f), L_19))));
		float L_20 = V_3;
		float L_21 = V_4;
		V_6 = ((float)il2cpp_codegen_subtract(L_20, ((float)(L_21/(2.0f)))));
		V_7 = (0.0f);
		V_8 = (0.0f);
		V_9 = (0.0f);
		float L_22 = V_1;
		if ((!(((float)(0.0f)) <= ((float)L_22))))
		{
			goto IL_00c0;
		}
	}
	{
		float L_23 = V_1;
		if ((!(((float)L_23) < ((float)(60.0f)))))
		{
			goto IL_00c0;
		}
	}
	{
		float L_24 = V_4;
		V_7 = L_24;
		float L_25 = V_5;
		V_8 = L_25;
		V_9 = (0.0f);
		goto IL_0166;
	}

IL_00c0:
	{
		float L_26 = V_1;
		if ((!(((float)(60.0f)) <= ((float)L_26))))
		{
			goto IL_00e4;
		}
	}
	{
		float L_27 = V_1;
		if ((!(((float)L_27) < ((float)(120.0f)))))
		{
			goto IL_00e4;
		}
	}
	{
		float L_28 = V_5;
		V_7 = L_28;
		float L_29 = V_4;
		V_8 = L_29;
		V_9 = (0.0f);
		goto IL_0166;
	}

IL_00e4:
	{
		float L_30 = V_1;
		if ((!(((float)(120.0f)) <= ((float)L_30))))
		{
			goto IL_0105;
		}
	}
	{
		float L_31 = V_1;
		if ((!(((float)L_31) < ((float)(180.0f)))))
		{
			goto IL_0105;
		}
	}
	{
		V_7 = (0.0f);
		float L_32 = V_4;
		V_8 = L_32;
		float L_33 = V_5;
		V_9 = L_33;
		goto IL_0166;
	}

IL_0105:
	{
		float L_34 = V_1;
		if ((!(((float)(180.0f)) <= ((float)L_34))))
		{
			goto IL_0126;
		}
	}
	{
		float L_35 = V_1;
		if ((!(((float)L_35) < ((float)(240.0f)))))
		{
			goto IL_0126;
		}
	}
	{
		V_7 = (0.0f);
		float L_36 = V_5;
		V_8 = L_36;
		float L_37 = V_4;
		V_9 = L_37;
		goto IL_0166;
	}

IL_0126:
	{
		float L_38 = V_1;
		if ((!(((float)(240.0f)) <= ((float)L_38))))
		{
			goto IL_0147;
		}
	}
	{
		float L_39 = V_1;
		if ((!(((float)L_39) < ((float)(300.0f)))))
		{
			goto IL_0147;
		}
	}
	{
		float L_40 = V_5;
		V_7 = L_40;
		V_8 = (0.0f);
		float L_41 = V_4;
		V_9 = L_41;
		goto IL_0166;
	}

IL_0147:
	{
		float L_42 = V_1;
		if ((!(((float)(300.0f)) <= ((float)L_42))))
		{
			goto IL_0166;
		}
	}
	{
		float L_43 = V_1;
		if ((!(((float)L_43) < ((float)(360.0f)))))
		{
			goto IL_0166;
		}
	}
	{
		float L_44 = V_4;
		V_7 = L_44;
		V_8 = (0.0f);
		float L_45 = V_5;
		V_9 = L_45;
	}

IL_0166:
	{
		float L_46 = V_7;
		float L_47 = V_6;
		float L_48 = V_8;
		float L_49 = V_6;
		float L_50 = V_9;
		float L_51 = V_6;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_52;
		memset((&L_52), 0, sizeof(L_52));
		RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0((&L_52), ((float)il2cpp_codegen_add(L_46, L_47)), ((float)il2cpp_codegen_add(L_48, L_49)), ((float)il2cpp_codegen_add(L_50, L_51)), NULL);
		V_11 = L_52;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_53;
		L_53 = RGB_Validate_m56EFE035BD98595B411143C321CCD277879600B1((&V_11), NULL);
		return L_53;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ColorUtils_HSVtoRGB_m050C711B5BE7B0FC27E6CA802C68BAB4DE49E4AC (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 ___0_value, const RuntimeMethod* method) 
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	{
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_0 = ___0_value;
		float L_1 = L_0.___h;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_2 = ___0_value;
		float L_3 = L_2.___s;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_4 = ___0_value;
		float L_5 = L_4.___v;
		HSV__ctor_mEFD2720C943717443A1D1B5070F1E59AE3AD8F0E((&V_0), L_1, L_3, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = HSV_Factorize_m635CC171538CF1EFAD187589F4513C2A4811E134((&V_0), NULL);
		float L_7 = L_6.___x;
		V_1 = L_7;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_8 = V_0;
		float L_9 = L_8.___s;
		V_2 = L_9;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_10 = V_0;
		float L_11 = L_10.___v;
		float L_12 = L_11;
		float L_13 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply(L_12, L_13));
		float L_14 = V_3;
		float L_15 = V_1;
		float L_16;
		L_16 = fabsf(((float)il2cpp_codegen_subtract((fmodf(((float)(L_15/(60.0f))), (2.0f))), (1.0f))));
		V_4 = ((float)il2cpp_codegen_multiply(L_14, ((float)il2cpp_codegen_subtract((1.0f), L_16))));
		float L_17 = V_3;
		V_5 = ((float)il2cpp_codegen_subtract(L_12, L_17));
		V_6 = (0.0f);
		V_7 = (0.0f);
		V_8 = (0.0f);
		float L_18 = V_1;
		if ((!(((float)(0.0f)) <= ((float)L_18))))
		{
			goto IL_0095;
		}
	}
	{
		float L_19 = V_1;
		if ((!(((float)L_19) < ((float)(60.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		float L_20 = V_3;
		V_6 = L_20;
		float L_21 = V_4;
		V_7 = L_21;
		V_8 = (0.0f);
		goto IL_0133;
	}

IL_0095:
	{
		float L_22 = V_1;
		if ((!(((float)(60.0f)) <= ((float)L_22))))
		{
			goto IL_00b5;
		}
	}
	{
		float L_23 = V_1;
		if ((!(((float)L_23) < ((float)(120.0f)))))
		{
			goto IL_00b5;
		}
	}
	{
		float L_24 = V_4;
		V_6 = L_24;
		float L_25 = V_3;
		V_7 = L_25;
		V_8 = (0.0f);
		goto IL_0133;
	}

IL_00b5:
	{
		float L_26 = V_1;
		if ((!(((float)(120.0f)) <= ((float)L_26))))
		{
			goto IL_00d5;
		}
	}
	{
		float L_27 = V_1;
		if ((!(((float)L_27) < ((float)(180.0f)))))
		{
			goto IL_00d5;
		}
	}
	{
		V_6 = (0.0f);
		float L_28 = V_3;
		V_7 = L_28;
		float L_29 = V_4;
		V_8 = L_29;
		goto IL_0133;
	}

IL_00d5:
	{
		float L_30 = V_1;
		if ((!(((float)(180.0f)) <= ((float)L_30))))
		{
			goto IL_00f5;
		}
	}
	{
		float L_31 = V_1;
		if ((!(((float)L_31) < ((float)(240.0f)))))
		{
			goto IL_00f5;
		}
	}
	{
		V_6 = (0.0f);
		float L_32 = V_4;
		V_7 = L_32;
		float L_33 = V_3;
		V_8 = L_33;
		goto IL_0133;
	}

IL_00f5:
	{
		float L_34 = V_1;
		if ((!(((float)(240.0f)) <= ((float)L_34))))
		{
			goto IL_0115;
		}
	}
	{
		float L_35 = V_1;
		if ((!(((float)L_35) < ((float)(300.0f)))))
		{
			goto IL_0115;
		}
	}
	{
		float L_36 = V_4;
		V_6 = L_36;
		V_7 = (0.0f);
		float L_37 = V_3;
		V_8 = L_37;
		goto IL_0133;
	}

IL_0115:
	{
		float L_38 = V_1;
		if ((!(((float)(300.0f)) <= ((float)L_38))))
		{
			goto IL_0133;
		}
	}
	{
		float L_39 = V_1;
		if ((!(((float)L_39) < ((float)(360.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		float L_40 = V_3;
		V_6 = L_40;
		V_7 = (0.0f);
		float L_41 = V_4;
		V_8 = L_41;
	}

IL_0133:
	{
		float L_42 = V_6;
		float L_43 = V_5;
		float L_44 = V_7;
		float L_45 = V_5;
		float L_46 = V_8;
		float L_47 = V_5;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_48;
		memset((&L_48), 0, sizeof(L_48));
		RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0((&L_48), ((float)il2cpp_codegen_add(L_42, L_43)), ((float)il2cpp_codegen_add(L_44, L_45)), ((float)il2cpp_codegen_add(L_46, L_47)), NULL);
		return L_48;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SelectableColor_get_isDarkTheme_m17B31F79AE5E7105BF8922182AB236E9E25D9126 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_IsDarkTheme;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectableColor_set_isDarkTheme_m0758478AA6736E2B6C99E5A3667953B6167EC2F8 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___m_IsDarkTheme = L_0;
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_1 = __this->___Normal;
		bool L_2 = __this->___m_IsDarkTheme;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(5, L_1, L_2);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_3 = __this->___Highlighted;
		bool L_4 = __this->___m_IsDarkTheme;
		NullCheck(L_3);
		VirtualActionInvoker1< bool >::Invoke(5, L_3, L_4);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_5 = __this->___Pressed;
		bool L_6 = __this->___m_IsDarkTheme;
		NullCheck(L_5);
		VirtualActionInvoker1< bool >::Invoke(5, L_5, L_6);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_7 = __this->___Selected;
		bool L_8 = __this->___m_IsDarkTheme;
		NullCheck(L_7);
		VirtualActionInvoker1< bool >::Invoke(5, L_7, L_8);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_9 = __this->___Disabled;
		bool L_10 = __this->___m_IsDarkTheme;
		NullCheck(L_9);
		VirtualActionInvoker1< bool >::Invoke(5, L_9, L_10);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = SelectableColor_get_currentColor_mD6A22914A743082E1D03E1CCD618F7943C2F9718(__this, NULL);
		SelectableColor_SelectionStateChanged_m412D5666F61484C8F085917E8DD89118760372C2(__this, L_11, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SelectableColor_get_currentState_m75636D7702E1A9CC6301A1BC5B3031CC1CA6814D (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CcurrentStateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectableColor_set_currentState_m77140C00AE632FA42D5FE8545A6217A00877D01A (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CcurrentStateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_currentColor_mD6A22914A743082E1D03E1CCD618F7943C2F9718 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = SelectableColor_GetCurrentColor_mCE78C636FA2C3EFF768797FA32E7C7A16069B1A5(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_normalColor_m0E49019F66DFF06459E92CC65584A75BA5A99EFD (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_0 = __this->___Normal;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ThemeColor_get_color_mB27B7B647DF063A0EBA8BBC3D2D6895015CE8A75(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_highlightedColor_m0A5728140FF96C37779ED4A64D08B944BF718B7D (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_0 = __this->___Highlighted;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ThemeColor_get_color_mB27B7B647DF063A0EBA8BBC3D2D6895015CE8A75(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_pressedColor_mC08278770C3CCBC47B4DD35DE2F604E149112AEA (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_0 = __this->___Pressed;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ThemeColor_get_color_mB27B7B647DF063A0EBA8BBC3D2D6895015CE8A75(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_selectedColor_mE4A6E5871E71AF624E046AC2B70F126F1032964B (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_0 = __this->___Selected;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ThemeColor_get_color_mB27B7B647DF063A0EBA8BBC3D2D6895015CE8A75(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_disabledColor_m778DA2F7C35E1CC60B08A5A97ED58FBB696F8DBD (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_0 = __this->___Disabled;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ThemeColor_get_color_mB27B7B647DF063A0EBA8BBC3D2D6895015CE8A75(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectableColor__ctor_m4FA5A0095B4725642947877123E479B207F2566F (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* ___0_onStateChanged, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* G_B2_0 = NULL;
	SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* G_B2_1 = NULL;
	ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* G_B1_0 = NULL;
	SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_0 = (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E*)il2cpp_codegen_object_new(ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E_il2cpp_TypeInfo_var);
		ThemeColor__ctor_m3C6BD94A543044E5A31091845FA162FFD485D3A2(L_0, NULL);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_1 = L_0;
		bool L_2;
		L_2 = SelectableColor_get_isDarkTheme_m17B31F79AE5E7105BF8922182AB236E9E25D9126_inline(__this, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(5, L_1, L_2);
		__this->___Normal = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Normal), (void*)L_1);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_3 = (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E*)il2cpp_codegen_object_new(ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E_il2cpp_TypeInfo_var);
		ThemeColor__ctor_m3C6BD94A543044E5A31091845FA162FFD485D3A2(L_3, NULL);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_4 = L_3;
		bool L_5;
		L_5 = SelectableColor_get_isDarkTheme_m17B31F79AE5E7105BF8922182AB236E9E25D9126_inline(__this, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< bool >::Invoke(5, L_4, L_5);
		__this->___Highlighted = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Highlighted), (void*)L_4);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_6 = (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E*)il2cpp_codegen_object_new(ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E_il2cpp_TypeInfo_var);
		ThemeColor__ctor_m3C6BD94A543044E5A31091845FA162FFD485D3A2(L_6, NULL);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_7 = L_6;
		bool L_8;
		L_8 = SelectableColor_get_isDarkTheme_m17B31F79AE5E7105BF8922182AB236E9E25D9126_inline(__this, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< bool >::Invoke(5, L_7, L_8);
		__this->___Pressed = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Pressed), (void*)L_7);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_9 = (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E*)il2cpp_codegen_object_new(ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E_il2cpp_TypeInfo_var);
		ThemeColor__ctor_m3C6BD94A543044E5A31091845FA162FFD485D3A2(L_9, NULL);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_10 = L_9;
		bool L_11;
		L_11 = SelectableColor_get_isDarkTheme_m17B31F79AE5E7105BF8922182AB236E9E25D9126_inline(__this, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< bool >::Invoke(5, L_10, L_11);
		__this->___Selected = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Selected), (void*)L_10);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_12 = (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E*)il2cpp_codegen_object_new(ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E_il2cpp_TypeInfo_var);
		ThemeColor__ctor_m3C6BD94A543044E5A31091845FA162FFD485D3A2(L_12, NULL);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_13 = L_12;
		bool L_14;
		L_14 = SelectableColor_get_isDarkTheme_m17B31F79AE5E7105BF8922182AB236E9E25D9126_inline(__this, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< bool >::Invoke(5, L_13, L_14);
		__this->___Disabled = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Disabled), (void*)L_13);
		ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* L_15 = ___0_onStateChanged;
		ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* L_16 = L_15;
		if (L_16)
		{
			G_B2_0 = L_16;
			G_B2_1 = __this;
			goto IL_0084;
		}
		G_B1_0 = L_16;
		G_B1_1 = __this;
	}
	{
		ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* L_17 = (ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366*)il2cpp_codegen_object_new(ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366_il2cpp_TypeInfo_var);
		ColorEvent__ctor_mC2B5BE475CEDDD1A4A8C2B4BD290CD54070F6CF0(L_17, NULL);
		G_B2_0 = L_17;
		G_B2_1 = G_B1_1;
	}

IL_0084:
	{
		NullCheck(G_B2_1);
		G_B2_1->___onStateChanged = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___onStateChanged), (void*)G_B2_0);
		SelectableColor_SetSelectionState_m505011CD3A73CECCEB4F7C6E65A067809C3DFB73(__this, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_GetCurrentColor_mCE78C636FA2C3EFF768797FA32E7C7A16069B1A5 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = SelectableColor_get_currentState_m75636D7702E1A9CC6301A1BC5B3031CC1CA6814D_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_0038;
			}
			case 4:
			{
				goto IL_003f;
			}
		}
	}
	{
		goto IL_0046;
	}

IL_0023:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = SelectableColor_get_normalColor_m0E49019F66DFF06459E92CC65584A75BA5A99EFD(__this, NULL);
		return L_2;
	}

IL_002a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = SelectableColor_get_highlightedColor_m0A5728140FF96C37779ED4A64D08B944BF718B7D(__this, NULL);
		return L_3;
	}

IL_0031:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = SelectableColor_get_pressedColor_mC08278770C3CCBC47B4DD35DE2F604E149112AEA(__this, NULL);
		return L_4;
	}

IL_0038:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = SelectableColor_get_selectedColor_mE4A6E5871E71AF624E046AC2B70F126F1032964B(__this, NULL);
		return L_5;
	}

IL_003f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = SelectableColor_get_disabledColor_m778DA2F7C35E1CC60B08A5A97ED58FBB696F8DBD(__this, NULL);
		return L_6;
	}

IL_0046:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SelectableColor_GetCurrentColor_mCE78C636FA2C3EFF768797FA32E7C7A16069B1A5_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectableColor_SetSelectionState_m505011CD3A73CECCEB4F7C6E65A067809C3DFB73 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, int32_t ___0_state, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_state;
		SelectableColor_set_currentState_m77140C00AE632FA42D5FE8545A6217A00877D01A_inline(__this, L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = SelectableColor_get_currentColor_mD6A22914A743082E1D03E1CCD618F7943C2F9718(__this, NULL);
		SelectableColor_SelectionStateChanged_m412D5666F61484C8F085917E8DD89118760372C2(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectableColor_SelectionStateChanged_m412D5666F61484C8F085917E8DD89118760372C2 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* G_B2_0 = NULL;
	ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* G_B1_0 = NULL;
	{
		ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* L_0 = __this->___onStateChanged;
		ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
		G_B1_0 = L_1;
	}
	{
		return;
	}

IL_000b:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_color;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D(G_B2_0, L_2, UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		return;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThemeColor_get_isDarkTheme_m6DE97C6F75DBD06D118781A9B9F33E995A5291B4 (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CisDarkThemeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemeColor_set_isDarkTheme_mDE3099D8A6ACC7D9888752440A4759052E8215E8 (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CisDarkThemeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ThemeColor_get_color_mB27B7B647DF063A0EBA8BBC3D2D6895015CE8A75 (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4, __this);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___ColorOnLight;
		return L_1;
	}

IL_000f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___ColorOnDark;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemeColor__ctor_m3C6BD94A543044E5A31091845FA162FFD485D3A2 (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = L_0;
		V_0 = L_1;
		__this->___ColorOnLight = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_0;
		__this->___ColorOnDark = L_2;
		return;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HSL__ctor_m07507D631167D40DB30E5585E850958090FFB398 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, float ___0_h, float ___1_s, float ___2_l, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_h;
		__this->___h = L_0;
		float L_1 = ___1_s;
		__this->___s = L_1;
		float L_2 = ___2_l;
		__this->___l = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void HSL__ctor_m07507D631167D40DB30E5585E850958090FFB398_AdjustorThunk (RuntimeObject* __this, float ___0_h, float ___1_s, float ___2_l, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	HSL__ctor_m07507D631167D40DB30E5585E850958090FFB398(_thisAdjusted, ___0_h, ___1_s, ___2_l, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 HSL_Copy_m294143F44AEBFBEF9B1413196D49920EEFD9CDB5 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___h;
		float L_1 = __this->___s;
		float L_2 = __this->___l;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_3;
		memset((&L_3), 0, sizeof(L_3));
		HSL__ctor_m07507D631167D40DB30E5585E850958090FFB398((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  HSL_tFC0E043357C640451DED090325DB7789B92F1C85 HSL_Copy_m294143F44AEBFBEF9B1413196D49920EEFD9CDB5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85 _returnValue;
	_returnValue = HSL_Copy_m294143F44AEBFBEF9B1413196D49920EEFD9CDB5(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSL_ToColor_m1CFCE9099A883C6357AF2884BB5D0669F1C5EB7D (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, float ___0_alpha, const RuntimeMethod* method) 
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_0 = (*(HSL_tFC0E043357C640451DED090325DB7789B92F1C85*)__this);
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_1;
		L_1 = ColorUtils_HSLtoRGB_m3D824F8A6B6F0B8780A22893CFA333119CABD26E(L_0, NULL);
		V_0 = L_1;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_2;
		L_2 = RGB_Validate_m56EFE035BD98595B411143C321CCD277879600B1((&V_0), NULL);
		V_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = RGB_ToColor_m91BD0BD2D9645207FD88F6788F25167A210D45F6((&V_0), (1.0f), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSL_ToColor_m1CFCE9099A883C6357AF2884BB5D0669F1C5EB7D_AdjustorThunk (RuntimeObject* __this, float ___0_alpha, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _returnValue;
	_returnValue = HSL_ToColor_m1CFCE9099A883C6357AF2884BB5D0669F1C5EB7D(_thisAdjusted, ___0_alpha, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 HSL_ToRGB_m7E1A7E1D4B0B9933831EA2E5F4FED8979A882DB2 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, const RuntimeMethod* method) 
{
	{
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_0 = (*(HSL_tFC0E043357C640451DED090325DB7789B92F1C85*)__this);
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_1;
		L_1 = ColorUtils_HSLtoRGB_m3D824F8A6B6F0B8780A22893CFA333119CABD26E(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 HSL_ToRGB_m7E1A7E1D4B0B9933831EA2E5F4FED8979A882DB2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 _returnValue;
	_returnValue = HSL_ToRGB_m7E1A7E1D4B0B9933831EA2E5F4FED8979A882DB2(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 HSL_Validate_m124583A3CA57B47AA3A8E19A168F8BA21587A556 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___h;
		float L_1;
		L_1 = HSL_ValidateColor_mB89D7438AE24B49D075B81E9AFE7BA15C8E97810(__this, L_0, (0.0f), (1.0f), NULL);
		__this->___h = L_1;
		float L_2 = __this->___s;
		float L_3;
		L_3 = HSL_ValidateColor_mB89D7438AE24B49D075B81E9AFE7BA15C8E97810(__this, L_2, (0.0f), (1.0f), NULL);
		__this->___s = L_3;
		float L_4 = __this->___l;
		float L_5;
		L_5 = HSL_ValidateColor_mB89D7438AE24B49D075B81E9AFE7BA15C8E97810(__this, L_4, (0.0f), (1.0f), NULL);
		__this->___l = L_5;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_6 = (*(HSL_tFC0E043357C640451DED090325DB7789B92F1C85*)__this);
		return L_6;
	}
}
IL2CPP_EXTERN_C  HSL_tFC0E043357C640451DED090325DB7789B92F1C85 HSL_Validate_m124583A3CA57B47AA3A8E19A168F8BA21587A556_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85 _returnValue;
	_returnValue = HSL_Validate_m124583A3CA57B47AA3A8E19A168F8BA21587A556(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HSL_ValidateColor_mB89D7438AE24B49D075B81E9AFE7BA15C8E97810 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_min;
		float L_1 = ___2_max;
		float L_2 = ___0_value;
		float L_3;
		L_3 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_0, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  float HSL_ValidateColor_mB89D7438AE24B49D075B81E9AFE7BA15C8E97810_AdjustorThunk (RuntimeObject* __this, float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	float _returnValue;
	_returnValue = HSL_ValidateColor_mB89D7438AE24B49D075B81E9AFE7BA15C8E97810(_thisAdjusted, ___0_value, ___1_min, ___2_max, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HSL_Factorize_mFF9B47DDA6A199D830BE76C8C18D7CE5C88DF50E (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		float L_0 = __this->___h;
		int32_t L_1;
		L_1 = HSL_FactorizeColor_m3CD0D88C4CFFC3F603528BE25628173C37F6E365(__this, L_0, (0.0f), (1.0f), (360.0f), NULL);
		(&V_0)->___x = ((float)L_1);
		float L_2 = __this->___s;
		int32_t L_3;
		L_3 = HSL_FactorizeColor_m3CD0D88C4CFFC3F603528BE25628173C37F6E365(__this, L_2, (0.0f), (1.0f), (100.0f), NULL);
		(&V_0)->___y = ((float)L_3);
		float L_4 = __this->___l;
		int32_t L_5;
		L_5 = HSL_FactorizeColor_m3CD0D88C4CFFC3F603528BE25628173C37F6E365(__this, L_4, (0.0f), (1.0f), (100.0f), NULL);
		(&V_0)->___z = ((float)L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HSL_Factorize_mFF9B47DDA6A199D830BE76C8C18D7CE5C88DF50E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = HSL_Factorize_mFF9B47DDA6A199D830BE76C8C18D7CE5C88DF50E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HSL_FactorizeColor_m3CD0D88C4CFFC3F603528BE25628173C37F6E365 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, float ___0_value, float ___1_min, float ___2_max, float ___3_f, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_min;
		float L_1 = ___3_f;
		float L_2 = ___2_max;
		float L_3 = ___3_f;
		float L_4 = ___0_value;
		float L_5 = ___3_f;
		float L_6;
		L_6 = bankers_roundf(((float)il2cpp_codegen_multiply(L_4, L_5)));
		float L_7;
		L_7 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(((float)il2cpp_codegen_multiply(L_2, L_3)), L_6, NULL);
		float L_8;
		L_8 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply(L_0, L_1)), L_7, NULL);
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_8);
	}
}
IL2CPP_EXTERN_C  int32_t HSL_FactorizeColor_m3CD0D88C4CFFC3F603528BE25628173C37F6E365_AdjustorThunk (RuntimeObject* __this, float ___0_value, float ___1_min, float ___2_max, float ___3_f, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = HSL_FactorizeColor_m3CD0D88C4CFFC3F603528BE25628173C37F6E365(_thisAdjusted, ___0_value, ___1_min, ___2_max, ___3_f, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HSL_ToString_m8E623A4FEF970D9DE94304301C06774A8014FABD (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, bool ___0_factorize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3527204424CF64E35556308132D94D7C1C5EAA59);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_factorize;
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		float L_1 = __this->___h;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->___s;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		float L_7 = __this->___l;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral3527204424CF64E35556308132D94D7C1C5EAA59, L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_002f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = HSL_Factorize_mFF9B47DDA6A199D830BE76C8C18D7CE5C88DF50E(__this, NULL);
		float L_12 = L_11.___x;
		float L_13 = L_12;
		RuntimeObject* L_14 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = HSL_Factorize_mFF9B47DDA6A199D830BE76C8C18D7CE5C88DF50E(__this, NULL);
		float L_16 = L_15.___y;
		float L_17 = L_16;
		RuntimeObject* L_18 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = HSL_Factorize_mFF9B47DDA6A199D830BE76C8C18D7CE5C88DF50E(__this, NULL);
		float L_20 = L_19.___z;
		float L_21 = L_20;
		RuntimeObject* L_22 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral3527204424CF64E35556308132D94D7C1C5EAA59, L_14, L_18, L_22, NULL);
		return L_23;
	}
}
IL2CPP_EXTERN_C  String_t* HSL_ToString_m8E623A4FEF970D9DE94304301C06774A8014FABD_AdjustorThunk (RuntimeObject* __this, bool ___0_factorize, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = HSL_ToString_m8E623A4FEF970D9DE94304301C06774A8014FABD(_thisAdjusted, ___0_factorize, method);
	return _returnValue;
}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HSV__ctor_mEFD2720C943717443A1D1B5070F1E59AE3AD8F0E (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, float ___0_h, float ___1_s, float ___2_v, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_h;
		__this->___h = L_0;
		float L_1 = ___1_s;
		__this->___s = L_1;
		float L_2 = ___2_v;
		__this->___v = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void HSV__ctor_mEFD2720C943717443A1D1B5070F1E59AE3AD8F0E_AdjustorThunk (RuntimeObject* __this, float ___0_h, float ___1_s, float ___2_v, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	HSV__ctor_mEFD2720C943717443A1D1B5070F1E59AE3AD8F0E(_thisAdjusted, ___0_h, ___1_s, ___2_v, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 HSV_Copy_m049ED385F7E372146A048AA8B5957A68449A5F0E (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___h;
		float L_1 = __this->___s;
		float L_2 = __this->___v;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		HSV__ctor_mEFD2720C943717443A1D1B5070F1E59AE3AD8F0E((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 HSV_Copy_m049ED385F7E372146A048AA8B5957A68449A5F0E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 _returnValue;
	_returnValue = HSV_Copy_m049ED385F7E372146A048AA8B5957A68449A5F0E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSV_ToColor_mD5661A203743B6FC0D16C77490A7867F136DADDB (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, float ___0_alpha, const RuntimeMethod* method) 
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_0 = (*(HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*)__this);
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_1;
		L_1 = ColorUtils_HSVtoRGB_m050C711B5BE7B0FC27E6CA802C68BAB4DE49E4AC(L_0, NULL);
		V_0 = L_1;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_2;
		L_2 = RGB_Validate_m56EFE035BD98595B411143C321CCD277879600B1((&V_0), NULL);
		V_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = RGB_ToColor_m91BD0BD2D9645207FD88F6788F25167A210D45F6((&V_0), (1.0f), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSV_ToColor_mD5661A203743B6FC0D16C77490A7867F136DADDB_AdjustorThunk (RuntimeObject* __this, float ___0_alpha, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _returnValue;
	_returnValue = HSV_ToColor_mD5661A203743B6FC0D16C77490A7867F136DADDB(_thisAdjusted, ___0_alpha, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 HSV_ToRGB_m503CEF1AE7E9FF0ABB7DD66FA4743CAF6B846A74 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, const RuntimeMethod* method) 
{
	{
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_0 = (*(HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*)__this);
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_1;
		L_1 = ColorUtils_HSVtoRGB_m050C711B5BE7B0FC27E6CA802C68BAB4DE49E4AC(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 HSV_ToRGB_m503CEF1AE7E9FF0ABB7DD66FA4743CAF6B846A74_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 _returnValue;
	_returnValue = HSV_ToRGB_m503CEF1AE7E9FF0ABB7DD66FA4743CAF6B846A74(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 HSV_Validate_m2F94DC90607C2E7D322CA997C754ECEACB911D1C (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___h;
		float L_1;
		L_1 = HSV_ValidateColor_m963E440AF2D2324D93836C34A5C1E91F59AD2CC8(__this, L_0, (0.0f), (1.0f), NULL);
		__this->___h = L_1;
		float L_2 = __this->___s;
		float L_3;
		L_3 = HSV_ValidateColor_m963E440AF2D2324D93836C34A5C1E91F59AD2CC8(__this, L_2, (0.0f), (1.0f), NULL);
		__this->___s = L_3;
		float L_4 = __this->___v;
		float L_5;
		L_5 = HSV_ValidateColor_m963E440AF2D2324D93836C34A5C1E91F59AD2CC8(__this, L_4, (0.0f), (1.0f), NULL);
		__this->___v = L_5;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_6 = (*(HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*)__this);
		return L_6;
	}
}
IL2CPP_EXTERN_C  HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 HSV_Validate_m2F94DC90607C2E7D322CA997C754ECEACB911D1C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 _returnValue;
	_returnValue = HSV_Validate_m2F94DC90607C2E7D322CA997C754ECEACB911D1C(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HSV_ValidateColor_m963E440AF2D2324D93836C34A5C1E91F59AD2CC8 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_min;
		float L_1 = ___2_max;
		float L_2 = ___0_value;
		float L_3;
		L_3 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_0, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  float HSV_ValidateColor_m963E440AF2D2324D93836C34A5C1E91F59AD2CC8_AdjustorThunk (RuntimeObject* __this, float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	float _returnValue;
	_returnValue = HSV_ValidateColor_m963E440AF2D2324D93836C34A5C1E91F59AD2CC8(_thisAdjusted, ___0_value, ___1_min, ___2_max, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HSV_Factorize_m635CC171538CF1EFAD187589F4513C2A4811E134 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		float L_0 = __this->___h;
		int32_t L_1;
		L_1 = HSV_FactorizeColor_m775C2F6787A32E7539E1CBFB41152659469003A5(__this, L_0, (0.0f), (1.0f), (360.0f), NULL);
		(&V_0)->___x = ((float)L_1);
		float L_2 = __this->___s;
		int32_t L_3;
		L_3 = HSV_FactorizeColor_m775C2F6787A32E7539E1CBFB41152659469003A5(__this, L_2, (0.0f), (1.0f), (100.0f), NULL);
		(&V_0)->___y = ((float)L_3);
		float L_4 = __this->___v;
		int32_t L_5;
		L_5 = HSV_FactorizeColor_m775C2F6787A32E7539E1CBFB41152659469003A5(__this, L_4, (0.0f), (1.0f), (100.0f), NULL);
		(&V_0)->___z = ((float)L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HSV_Factorize_m635CC171538CF1EFAD187589F4513C2A4811E134_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = HSV_Factorize_m635CC171538CF1EFAD187589F4513C2A4811E134(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HSV_FactorizeColor_m775C2F6787A32E7539E1CBFB41152659469003A5 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, float ___0_value, float ___1_min, float ___2_max, float ___3_f, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_min;
		float L_1 = ___3_f;
		float L_2 = ___2_max;
		float L_3 = ___3_f;
		float L_4 = ___0_value;
		float L_5 = ___3_f;
		float L_6;
		L_6 = bankers_roundf(((float)il2cpp_codegen_multiply(L_4, L_5)));
		float L_7;
		L_7 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(((float)il2cpp_codegen_multiply(L_2, L_3)), L_6, NULL);
		float L_8;
		L_8 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply(L_0, L_1)), L_7, NULL);
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_8);
	}
}
IL2CPP_EXTERN_C  int32_t HSV_FactorizeColor_m775C2F6787A32E7539E1CBFB41152659469003A5_AdjustorThunk (RuntimeObject* __this, float ___0_value, float ___1_min, float ___2_max, float ___3_f, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = HSV_FactorizeColor_m775C2F6787A32E7539E1CBFB41152659469003A5(_thisAdjusted, ___0_value, ___1_min, ___2_max, ___3_f, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HSV_ToString_mABA07D8FE9D210F9B9868F08405A9C46089EB087 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, bool ___0_factorize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98027F81442491B914C4F0A083D8B130C0E82A2B);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_factorize;
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		float L_1 = __this->___h;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->___s;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		float L_7 = __this->___v;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral98027F81442491B914C4F0A083D8B130C0E82A2B, L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_002f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = HSV_Factorize_m635CC171538CF1EFAD187589F4513C2A4811E134(__this, NULL);
		float L_12 = L_11.___x;
		float L_13 = L_12;
		RuntimeObject* L_14 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = HSV_Factorize_m635CC171538CF1EFAD187589F4513C2A4811E134(__this, NULL);
		float L_16 = L_15.___y;
		float L_17 = L_16;
		RuntimeObject* L_18 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = HSV_Factorize_m635CC171538CF1EFAD187589F4513C2A4811E134(__this, NULL);
		float L_20 = L_19.___z;
		float L_21 = L_20;
		RuntimeObject* L_22 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral98027F81442491B914C4F0A083D8B130C0E82A2B, L_14, L_18, L_22, NULL);
		return L_23;
	}
}
IL2CPP_EXTERN_C  String_t* HSV_ToString_mABA07D8FE9D210F9B9868F08405A9C46089EB087_AdjustorThunk (RuntimeObject* __this, bool ___0_factorize, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = HSV_ToString_mABA07D8FE9D210F9B9868F08405A9C46089EB087(_thisAdjusted, ___0_factorize, method);
	return _returnValue;
}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0_AdjustorThunk (RuntimeObject* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0(_thisAdjusted, ___0_r, ___1_g, ___2_b, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 RGB_Copy_m329C7072A88789A13FBE0FC279A26CBBC563F65E (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___r;
		float L_1 = __this->___g;
		float L_2 = __this->___b;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_3;
		memset((&L_3), 0, sizeof(L_3));
		RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 RGB_Copy_m329C7072A88789A13FBE0FC279A26CBBC563F65E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 _returnValue;
	_returnValue = RGB_Copy_m329C7072A88789A13FBE0FC279A26CBBC563F65E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F RGB_ToColor_m91BD0BD2D9645207FD88F6788F25167A210D45F6 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, float ___0_alpha, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___r;
		float L_1 = __this->___g;
		float L_2 = __this->___b;
		float L_3 = ___0_alpha;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_3, (0.0f), (1.0f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_5), L_0, L_1, L_2, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F RGB_ToColor_m91BD0BD2D9645207FD88F6788F25167A210D45F6_AdjustorThunk (RuntimeObject* __this, float ___0_alpha, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _returnValue;
	_returnValue = RGB_ToColor_m91BD0BD2D9645207FD88F6788F25167A210D45F6(_thisAdjusted, ___0_alpha, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 RGB_ToHSL_m2379215AA7E0AA912895B0B26F319B0B0AA84B89 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) 
{
	{
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_0 = (*(RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*)__this);
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_1;
		L_1 = ColorUtils_RGBtoHSL_mA61CE61F3498FB683E8C1510955D5D62A37F54A6(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  HSL_tFC0E043357C640451DED090325DB7789B92F1C85 RGB_ToHSL_m2379215AA7E0AA912895B0B26F319B0B0AA84B89_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85 _returnValue;
	_returnValue = RGB_ToHSL_m2379215AA7E0AA912895B0B26F319B0B0AA84B89(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 RGB_ToHSV_mAF7EA8CB8A0B313D805D55C04221E1A13D0CE416 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) 
{
	{
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_0 = (*(RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*)__this);
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_1;
		L_1 = ColorUtils_RGBtoHSV_mD8043663351CE92F4273136AEA614B0BE410C45C(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 RGB_ToHSV_mAF7EA8CB8A0B313D805D55C04221E1A13D0CE416_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 _returnValue;
	_returnValue = RGB_ToHSV_mAF7EA8CB8A0B313D805D55C04221E1A13D0CE416(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 RGB_Validate_m56EFE035BD98595B411143C321CCD277879600B1 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___r;
		float L_1;
		L_1 = RGB_ValidateColor_m40373F3205F0D67261425D11804C7AD0FE7D709E(__this, L_0, (0.0f), (1.0f), NULL);
		__this->___r = L_1;
		float L_2 = __this->___g;
		float L_3;
		L_3 = RGB_ValidateColor_m40373F3205F0D67261425D11804C7AD0FE7D709E(__this, L_2, (0.0f), (1.0f), NULL);
		__this->___g = L_3;
		float L_4 = __this->___b;
		float L_5;
		L_5 = RGB_ValidateColor_m40373F3205F0D67261425D11804C7AD0FE7D709E(__this, L_4, (0.0f), (1.0f), NULL);
		__this->___b = L_5;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_6 = (*(RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*)__this);
		return L_6;
	}
}
IL2CPP_EXTERN_C  RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 RGB_Validate_m56EFE035BD98595B411143C321CCD277879600B1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 _returnValue;
	_returnValue = RGB_Validate_m56EFE035BD98595B411143C321CCD277879600B1(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RGB_ValidateColor_m40373F3205F0D67261425D11804C7AD0FE7D709E (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_min;
		float L_1 = ___2_max;
		float L_2 = ___0_value;
		float L_3;
		L_3 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_0, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  float RGB_ValidateColor_m40373F3205F0D67261425D11804C7AD0FE7D709E_AdjustorThunk (RuntimeObject* __this, float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	float _returnValue;
	_returnValue = RGB_ValidateColor_m40373F3205F0D67261425D11804C7AD0FE7D709E(_thisAdjusted, ___0_value, ___1_min, ___2_max, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RGB_Factorize_mAE1DE793FB4D17ADD6E31334B6B79762CEBAD075 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		float L_0 = __this->___r;
		int32_t L_1;
		L_1 = RGB_FactorizeColor_m1551BE5E86A4815FD176BD1A01F87B7442DF7E49(__this, L_0, (0.0f), (1.0f), (255.0f), NULL);
		(&V_0)->___x = ((float)L_1);
		float L_2 = __this->___g;
		int32_t L_3;
		L_3 = RGB_FactorizeColor_m1551BE5E86A4815FD176BD1A01F87B7442DF7E49(__this, L_2, (0.0f), (1.0f), (255.0f), NULL);
		(&V_0)->___y = ((float)L_3);
		float L_4 = __this->___b;
		int32_t L_5;
		L_5 = RGB_FactorizeColor_m1551BE5E86A4815FD176BD1A01F87B7442DF7E49(__this, L_4, (0.0f), (1.0f), (255.0f), NULL);
		(&V_0)->___z = ((float)L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RGB_Factorize_mAE1DE793FB4D17ADD6E31334B6B79762CEBAD075_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = RGB_Factorize_mAE1DE793FB4D17ADD6E31334B6B79762CEBAD075(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RGB_FactorizeColor_m1551BE5E86A4815FD176BD1A01F87B7442DF7E49 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, float ___0_value, float ___1_min, float ___2_max, float ___3_f, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_min;
		float L_1 = ___3_f;
		float L_2 = ___2_max;
		float L_3 = ___3_f;
		float L_4 = ___0_value;
		float L_5 = ___3_f;
		float L_6;
		L_6 = bankers_roundf(((float)il2cpp_codegen_multiply(L_4, L_5)));
		float L_7;
		L_7 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(((float)il2cpp_codegen_multiply(L_2, L_3)), L_6, NULL);
		float L_8;
		L_8 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply(L_0, L_1)), L_7, NULL);
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_8);
	}
}
IL2CPP_EXTERN_C  int32_t RGB_FactorizeColor_m1551BE5E86A4815FD176BD1A01F87B7442DF7E49_AdjustorThunk (RuntimeObject* __this, float ___0_value, float ___1_min, float ___2_max, float ___3_f, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RGB_FactorizeColor_m1551BE5E86A4815FD176BD1A01F87B7442DF7E49(_thisAdjusted, ___0_value, ___1_min, ___2_max, ___3_f, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RGB_ToString_m01F1CEDF3F67D9F48DBB0D6AD2B37FB2BC15341E (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, bool ___0_factorize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0292E446EE91142ECA40D84274D17861CE8D706E);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_factorize;
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		float L_1 = __this->___r;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->___g;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		float L_7 = __this->___b;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral0292E446EE91142ECA40D84274D17861CE8D706E, L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_002f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = RGB_Factorize_mAE1DE793FB4D17ADD6E31334B6B79762CEBAD075(__this, NULL);
		float L_12 = L_11.___x;
		float L_13 = L_12;
		RuntimeObject* L_14 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = RGB_Factorize_mAE1DE793FB4D17ADD6E31334B6B79762CEBAD075(__this, NULL);
		float L_16 = L_15.___y;
		float L_17 = L_16;
		RuntimeObject* L_18 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = RGB_Factorize_mAE1DE793FB4D17ADD6E31334B6B79762CEBAD075(__this, NULL);
		float L_20 = L_19.___z;
		float L_21 = L_20;
		RuntimeObject* L_22 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral0292E446EE91142ECA40D84274D17861CE8D706E, L_14, L_18, L_22, NULL);
		return L_23;
	}
}
IL2CPP_EXTERN_C  String_t* RGB_ToString_m01F1CEDF3F67D9F48DBB0D6AD2B37FB2BC15341E_AdjustorThunk (RuntimeObject* __this, bool ___0_factorize, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = RGB_ToString_m01F1CEDF3F67D9F48DBB0D6AD2B37FB2BC15341E(_thisAdjusted, ___0_factorize, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RGB_ToHEX_m45E928DC752D61F5D5EB51CB098152AB6C09D1E1 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, bool ___0_addHashTag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		bool L_0 = ___0_addHashTag;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_000f;
	}

IL_000a:
	{
		G_B3_0 = _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
	}

IL_000f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = RGB_ToColor_m91BD0BD2D9645207FD88F6788F25167A210D45F6(__this, (1.0f), NULL);
		String_t* L_2;
		L_2 = ColorUtility_ToHtmlStringRGB_m50D59301FF2736B78C95C1FD5619D429358B7433(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* RGB_ToHEX_m45E928DC752D61F5D5EB51CB098152AB6C09D1E1_AdjustorThunk (RuntimeObject* __this, bool ___0_addHashTag, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = RGB_ToHEX_m45E928DC752D61F5D5EB51CB098152AB6C09D1E1(_thisAdjusted, ___0_addHashTag, method);
	return _returnValue;
}
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline (double ___0_value, int32_t ___1_digits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___0_value;
		int32_t L_1 = ___1_digits;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Round_m8DB2F61CB73B9E71E54149290ABD5DC8A68890D1(L_0, L_1, 0, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		__this->___a = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_values, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_values;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___0_values;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_values;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) > ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___0_values;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_mCE17F4139B7DF5BB96192C88AF390D3C99F11858_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_values, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_values;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___0_values;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_values;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) < ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___0_values;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SelectableColor_get_isDarkTheme_m17B31F79AE5E7105BF8922182AB236E9E25D9126_inline (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_IsDarkTheme;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SelectableColor_get_currentState_m75636D7702E1A9CC6301A1BC5B3031CC1CA6814D_inline (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CcurrentStateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectableColor_set_currentState_m77140C00AE632FA42D5FE8545A6217A00877D01A_inline (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CcurrentStateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		float L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
