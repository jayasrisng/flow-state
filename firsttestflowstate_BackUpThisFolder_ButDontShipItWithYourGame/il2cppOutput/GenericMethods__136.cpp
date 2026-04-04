#include "pch-cpp.hpp"





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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195;
struct Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629;
struct Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_tBD2E4781BB0BD1FCD30E6D3586CA13AFD0ABE6F7;
struct List_1_t491347B1404617671B39DA9325642B0DB8748CB3;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct TypeConverter_2_t7E280199B9D2473089552A2C810A473A1C4B7BE5;
struct TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77;
struct TypeConverter_2_t547296520B171FDA874443658579914AA93417AA;
struct TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7;
struct TypeConverter_2_tE51C044D88BBC4611120A97594020A5A0F95370F;
struct TypeConverter_2_tD6D1604B2DCFEB45D1885E1C5A6AA26DBAD50E5F;
struct TypeConverter_2_t7352D4A1AB4EE912C593B1CFEF10E9B9A14C9D0C;
struct TypeConverter_2_t1674952CD7CA572DACE4B8B62B277A454FFD5244;
struct TypeConverter_2_t0D1ACA65D6A02C5FA97E867E1A45E2E4884B4D6A;
struct TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9  : public RuntimeObject
{
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
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
#pragma pack(push, tp, 1)
struct BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 
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
					uint8_t* ___m_Ptr;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t* ___m_Ptr_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					int64_t ___m_Align8Union;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___m_Align8Union_forAlignmentOnly;
				};
			};
		};
		uint8_t BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998__padding[8];
	};
};
#pragma pack(pop, tp)
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426 
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_marshaled_pinvoke
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_marshaled_com
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			int32_t ___m_Data;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[4];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD 
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	List_1_t491347B1404617671B39DA9325642B0DB8748CB3* ___propertyValues;
};
struct MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_marshaled_pinvoke
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	List_1_t491347B1404617671B39DA9325642B0DB8748CB3* ___propertyValues;
};
struct MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_marshaled_com
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	List_1_t491347B1404617671B39DA9325642B0DB8748CB3* ___propertyValues;
};
struct Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 
{
	float ___m_Value;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	uint32_t ___x;
	uint32_t ___y;
	uint32_t ___z;
	uint32_t ___w;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BackgroundSizeType_tD194B20FF5086D494ABF8D799124D2FC4FFCC674 
{
	int32_t ___value__;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Hotspot;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Hotspot;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Hotspot;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct EasingMode_tEF87477B9B9EB2524525550AE5ABEBC00FC7B0DF 
{
	int32_t ___value__;
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
struct FilterFunctionType_tF29290365A61009BE6F2EF6C6C6218E72CB9F64A 
{
	int32_t ___value__;
};
struct FilterParameterType_t7250262A78079140235AAFF6F4FA3CCB2F99E390 
{
	int32_t ___value__;
};
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B 
{
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___Value;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	bool ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle;
};
struct SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle;
};
struct SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct TextAutoSizeMode_t10C0C54209C97D8A231AF021AE2F9DFFD26EE2C9 
{
	int32_t ___value__;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	float ___blurRadius;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___entityId;
};
struct WeakReferenceGenerationType_t8BFE0640E45A3A0A8219F431CAE59E10BD6273AD 
{
	int16_t ___value__;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct Unit_t7A9C3ABB0618BEBFDC1813D07080CE0C145448ED 
{
	int32_t ___value__;
};
struct StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F 
{
	int32_t ___m_Keyword;
	List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___m_Value;
};
struct StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 
{
	int32_t ___m_Keyword;
	List_1_tBD2E4781BB0BD1FCD30E6D3586CA13AFD0ABE6F7* ___m_Value;
};
struct StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C 
{
	int32_t ___m_Keyword;
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___m_Value;
};
struct StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 
{
	int32_t ___m_Keyword;
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___m_Value;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	int32_t ___m_Mode;
};
struct FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 
{
	int32_t ___m_Type;
	float ___m_FloatValue;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorValue;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 
{
	int64_t ___SceneObjectIdentifier0;
	int64_t ___SceneObjectIdentifier1;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___AssetGUID;
	int32_t ___IdentifierType;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B 
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_pinvoke
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_com
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshaled_pinvoke
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshaled_com
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 
{
	float ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_pinvoke
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_com
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com ___m_Value;
};
struct StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 
{
	MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_marshaled_pinvoke
{
	MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_marshaled_com
{
	MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	char* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
struct StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 
{
	Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC 
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_pinvoke
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_com
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 
{
	int32_t ___m_Keyword;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___m_Value;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C 
{
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____0;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____1;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____2;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____3;
};
struct TypeConverter_2_t7E280199B9D2473089552A2C810A473A1C4B7BE5  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t547296520B171FDA874443658579914AA93417AA  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7  : public MulticastDelegate_t
{
};
struct TypeConverter_2_tE51C044D88BBC4611120A97594020A5A0F95370F  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t7352D4A1AB4EE912C593B1CFEF10E9B9A14C9D0C  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t1674952CD7CA572DACE4B8B62B277A454FFD5244  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t0D1ACA65D6A02C5FA97E867E1A45E2E4884B4D6A  : public MulticastDelegate_t
{
};
struct TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 
{
	int32_t ___m_SizeType;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	bool ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 
{
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Value;
	int32_t ___m_Keyword;
};
struct TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A 
{
	int32_t ___U3CmodeU3Ek__BackingField;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___U3CminSizeU3Ek__BackingField;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___U3CmaxSizeU3Ek__BackingField;
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A 
{
	RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 ___GlobalId;
	int16_t ___GenerationType;
};
struct TypeConverter_2_tD6D1604B2DCFEB45D1885E1C5A6AA26DBAD50E5F  : public MulticastDelegate_t
{
};
struct FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF 
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2* ___m_CustomDefinition;
};
struct FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_marshaled_pinvoke
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2* ___m_CustomDefinition;
};
struct FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_marshaled_com
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2* ___m_CustomDefinition;
};
struct StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 
{
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 
{
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B 
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_pinvoke
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_com
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A 
{
	int32_t ___m_Keyword;
	TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A ___m_Value;
};
struct StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 
{
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_pinvoke
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_com
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields
{
	ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426 ___s_GlobalConverters;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
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
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_StaticFields
{
	Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0* ___s_AngleUnitLookup;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B TypeConverter_2_Invoke_m1BA070D1874F8A7E8632280C4B8C8F92D469077F_gshared_inline (TypeConverter_2_tE51C044D88BBC4611120A97594020A5A0F95370F* __this, uint64_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mDB31CF1DC3F8D988E5FFE32AF88F0F6CBB665061_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mAC6B398C12BC9C2CF2EEC6E272668E5E289AAA51_gshared (uint64_t* ___0_source, UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m8621D07E73FFB0D4E104282EA3BBC5A33BA67CEA_gshared (uint64_t ___0_source, UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A TypeConverter_2_Invoke_m23FC7F630D53A3123DC7A011E601A01F56D965FE_gshared_inline (TypeConverter_2_tD6D1604B2DCFEB45D1885E1C5A6AA26DBAD50E5F* __this, uint64_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m2214A49C41DF7044BF9E46A31DDEFCF30E222BA5_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mEEA93FA55A59E3039CF41E6AEF18C0B49FB36CD4_gshared (uint64_t* ___0_source, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m79E55A097935C2F2F85431C13A48DC6A9B6EF6F8_gshared (uint64_t ___0_source, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeConverter_2_Invoke_mEBE52EDE6BB158A3931FC005C17BA29E77C3A428_gshared_inline (TypeConverter_2_t7352D4A1AB4EE912C593B1CFEF10E9B9A14C9D0C* __this, uint64_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7339E1D9120843E5B76233A0A62D3810A03E9E4B_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mEA0F662000C4BDB69E266206B63C54E5B8768BD4_gshared (uint64_t* ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD72215670DE1A294D6D3106BF34753C2B27946B2_gshared (uint64_t ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeConverter_2_Invoke_mC2318EB9013E659C6C2BD2A9295629301B030973_gshared_inline (TypeConverter_2_t1674952CD7CA572DACE4B8B62B277A454FFD5244* __this, uint64_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7F542817C2E4A678C11E38F9DC832B19BE154A82_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m94B696DE4D9D13AB9D727FC5A79746CCA2C782B1_gshared (uint64_t* ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA53ECFBE6B3C8960E4F4A93BE361559B2B2584DB_gshared (uint64_t ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeConverter_2_Invoke_mA146BFD1D80B5052AA2FB39953FED09BCB40D840_gshared_inline (TypeConverter_2_t0D1ACA65D6A02C5FA97E867E1A45E2E4884B4D6A* __this, uint64_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9C4B6C27B7225FC18A0BC10B8BDDA7925ADBFF79_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mA8C8D1BF80EE07BE4EE66B0FD915B98FD9E2F80A_gshared (uint64_t* ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mACFCF7795F4A00D4CB478544E5B5B3D4A37D5977_gshared (uint64_t ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_m22056620738FD44283C48FEFE188EBF9C3817904_gshared_inline (TypeConverter_2_t7E280199B9D2473089552A2C810A473A1C4B7BE5* __this, bool* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_m939AD919BAE47059A0F1EC29FEA27D5BE94F4497_gshared_inline (TypeConverter_2_t547296520B171FDA874443658579914AA93417AA* __this, uint8_t* ___0_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD (ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426* __this, Type_t* ___0_source, Type_t* ___1_destination, Delegate_t** ___2_converter, const RuntimeMethod* method) ;
inline UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B TypeConverter_2_Invoke_m1BA070D1874F8A7E8632280C4B8C8F92D469077F_inline (TypeConverter_2_tE51C044D88BBC4611120A97594020A5A0F95370F* __this, uint64_t* ___0_value, const RuntimeMethod* method)
{
	return ((  UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B (*) (TypeConverter_2_tE51C044D88BBC4611120A97594020A5A0F95370F*, uint64_t*, const RuntimeMethod*))TypeConverter_2_Invoke_m1BA070D1874F8A7E8632280C4B8C8F92D469077F_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mDB31CF1DC3F8D988E5FFE32AF88F0F6CBB665061_inline (uint64_t* ___0_from, const RuntimeMethod* method)
{
	return ((  UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* (*) (uint64_t*, const RuntimeMethod*))UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mDB31CF1DC3F8D988E5FFE32AF88F0F6CBB665061_gshared_inline)(___0_from, method);
}
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mAC6B398C12BC9C2CF2EEC6E272668E5E289AAA51 (uint64_t* ___0_source, UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t*, UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mAC6B398C12BC9C2CF2EEC6E272668E5E289AAA51_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A (RuntimeObject* ___0_value, Type_t* ___1_conversionType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF (Type_t* ___0_enumType, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_IsUnityObject_m0AF064909EDBAF0003058820973F2DAB7D5B7500_inline (Type_t* ___0_type, const RuntimeMethod* method) ;
inline bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m8621D07E73FFB0D4E104282EA3BBC5A33BA67CEA (uint64_t ___0_source, UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*, const RuntimeMethod*))TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m8621D07E73FFB0D4E104282EA3BBC5A33BA67CEA_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F (Type_t* ___0_enumType, String_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936 (Type_t* ___0_t, const RuntimeMethod* method) ;
inline UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A TypeConverter_2_Invoke_m23FC7F630D53A3123DC7A011E601A01F56D965FE_inline (TypeConverter_2_tD6D1604B2DCFEB45D1885E1C5A6AA26DBAD50E5F* __this, uint64_t* ___0_value, const RuntimeMethod* method)
{
	return ((  UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A (*) (TypeConverter_2_tD6D1604B2DCFEB45D1885E1C5A6AA26DBAD50E5F*, uint64_t*, const RuntimeMethod*))TypeConverter_2_Invoke_m23FC7F630D53A3123DC7A011E601A01F56D965FE_gshared_inline)(__this, ___0_value, method);
}
inline UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m2214A49C41DF7044BF9E46A31DDEFCF30E222BA5_inline (uint64_t* ___0_from, const RuntimeMethod* method)
{
	return ((  UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* (*) (uint64_t*, const RuntimeMethod*))UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m2214A49C41DF7044BF9E46A31DDEFCF30E222BA5_gshared_inline)(___0_from, method);
}
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mEEA93FA55A59E3039CF41E6AEF18C0B49FB36CD4 (uint64_t* ___0_source, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t*, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mEEA93FA55A59E3039CF41E6AEF18C0B49FB36CD4_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m79E55A097935C2F2F85431C13A48DC6A9B6EF6F8 (uint64_t ___0_source, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*, const RuntimeMethod*))TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m79E55A097935C2F2F85431C13A48DC6A9B6EF6F8_gshared)(___0_source, ___1_destination, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeConverter_2_Invoke_mEBE52EDE6BB158A3931FC005C17BA29E77C3A428_inline (TypeConverter_2_t7352D4A1AB4EE912C593B1CFEF10E9B9A14C9D0C* __this, uint64_t* ___0_value, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (TypeConverter_2_t7352D4A1AB4EE912C593B1CFEF10E9B9A14C9D0C*, uint64_t*, const RuntimeMethod*))TypeConverter_2_Invoke_mEBE52EDE6BB158A3931FC005C17BA29E77C3A428_gshared_inline)(__this, ___0_value, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7339E1D9120843E5B76233A0A62D3810A03E9E4B_inline (uint64_t* ___0_from, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* (*) (uint64_t*, const RuntimeMethod*))UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7339E1D9120843E5B76233A0A62D3810A03E9E4B_gshared_inline)(___0_from, method);
}
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mEA0F662000C4BDB69E266206B63C54E5B8768BD4 (uint64_t* ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mEA0F662000C4BDB69E266206B63C54E5B8768BD4_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD72215670DE1A294D6D3106BF34753C2B27946B2 (uint64_t ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, const RuntimeMethod*))TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD72215670DE1A294D6D3106BF34753C2B27946B2_gshared)(___0_source, ___1_destination, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeConverter_2_Invoke_mC2318EB9013E659C6C2BD2A9295629301B030973_inline (TypeConverter_2_t1674952CD7CA572DACE4B8B62B277A454FFD5244* __this, uint64_t* ___0_value, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (TypeConverter_2_t1674952CD7CA572DACE4B8B62B277A454FFD5244*, uint64_t*, const RuntimeMethod*))TypeConverter_2_Invoke_mC2318EB9013E659C6C2BD2A9295629301B030973_gshared_inline)(__this, ___0_value, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7F542817C2E4A678C11E38F9DC832B19BE154A82_inline (uint64_t* ___0_from, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* (*) (uint64_t*, const RuntimeMethod*))UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7F542817C2E4A678C11E38F9DC832B19BE154A82_gshared_inline)(___0_from, method);
}
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m94B696DE4D9D13AB9D727FC5A79746CCA2C782B1 (uint64_t* ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m94B696DE4D9D13AB9D727FC5A79746CCA2C782B1_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA53ECFBE6B3C8960E4F4A93BE361559B2B2584DB (uint64_t ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA53ECFBE6B3C8960E4F4A93BE361559B2B2584DB_gshared)(___0_source, ___1_destination, method);
}
inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeConverter_2_Invoke_mA146BFD1D80B5052AA2FB39953FED09BCB40D840_inline (TypeConverter_2_t0D1ACA65D6A02C5FA97E867E1A45E2E4884B4D6A* __this, uint64_t* ___0_value, const RuntimeMethod* method)
{
	return ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 (*) (TypeConverter_2_t0D1ACA65D6A02C5FA97E867E1A45E2E4884B4D6A*, uint64_t*, const RuntimeMethod*))TypeConverter_2_Invoke_mA146BFD1D80B5052AA2FB39953FED09BCB40D840_gshared_inline)(__this, ___0_value, method);
}
inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9C4B6C27B7225FC18A0BC10B8BDDA7925ADBFF79_inline (uint64_t* ___0_from, const RuntimeMethod* method)
{
	return ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* (*) (uint64_t*, const RuntimeMethod*))UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9C4B6C27B7225FC18A0BC10B8BDDA7925ADBFF79_gshared_inline)(___0_from, method);
}
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mA8C8D1BF80EE07BE4EE66B0FD915B98FD9E2F80A (uint64_t* ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mA8C8D1BF80EE07BE4EE66B0FD915B98FD9E2F80A_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mACFCF7795F4A00D4CB478544E5B5B3D4A37D5977 (uint64_t ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, const RuntimeMethod*))TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mACFCF7795F4A00D4CB478544E5B5B3D4A37D5977_gshared)(___0_source, ___1_destination, method);
}
inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline (TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77* __this, bool* ___0_value, const RuntimeMethod* method)
{
	return ((  Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* (*) (TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*, bool*, const RuntimeMethod*))TypeConverter_2_Invoke_m22056620738FD44283C48FEFE188EBF9C3817904_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline (TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7* __this, uint8_t* ___0_value, const RuntimeMethod* method)
{
	return ((  Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* (*) (TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*, uint8_t*, const RuntimeMethod*))TypeConverter_2_Invoke_m939AD919BAE47059A0F1EC29FEA27D5BE94F4497_gshared_inline)(__this, ___0_value, method);
}
// Method Definition Index: 107317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mEF210C40E3848C6392ADE431B4542B08288482C6_gshared (uint64_t* ___0_source, UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B V_1;
	memset((&V_1), 0, sizeof(V_1));
	TypeConverter_2_tE51C044D88BBC4611120A97594020A5A0F95370F* V_2 = NULL;
	Type_t* V_3 = NULL;
	Type_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	uint64_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_1, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		Delegate_t* L_5 = V_0;
		V_2 = ((TypeConverter_2_tE51C044D88BBC4611120A97594020A5A0F95370F*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 2)));
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_6 = ___1_destination;
		TypeConverter_2_tE51C044D88BBC4611120A97594020A5A0F95370F* L_7 = V_2;
		uint64_t* L_8 = ___0_source;
		NullCheck(L_7);
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B L_9;
		L_9 = TypeConverter_2_Invoke_m1BA070D1874F8A7E8632280C4B8C8F92D469077F_inline(L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_6 = L_9;
		return (bool)1;
	}

IL_0038:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0066;
		}
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_15 = ___1_destination;
		uint64_t* L_16 = ___0_source;
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_17;
		L_17 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mDB31CF1DC3F8D988E5FFE32AF88F0F6CBB665061_inline(L_16, il2cpp_rgctx_method(method->rgctx_data, 7));
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B L_18 = (*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_17);
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_15 = L_18;
		return (bool)1;
	}

IL_0066:
	{
		uint64_t* L_19 = ___0_source;
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_20 = ___1_destination;
		bool L_21;
		L_21 = PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mAC6B398C12BC9C2CF2EEC6E272668E5E289AAA51(L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_21)
		{
			goto IL_0071;
		}
	}
	{
		return (bool)1;
	}

IL_0071:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_23, NULL);
		if (!L_24)
		{
			goto IL_0141;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		bool L_27;
		L_27 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_26, NULL);
		if (!L_27)
		{
			goto IL_00c4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		Type_t* L_30;
		L_30 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_30, L_33, NULL);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B));
		return (bool)0;
	}

IL_00c4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		Type_t* L_38;
		L_38 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_37, NULL);
		V_3 = L_38;
		Type_t* L_39 = V_3;
		NullCheck(L_39);
		bool L_40;
		L_40 = VirtualFuncInvoker0< bool >::Invoke(73, L_39);
		if (!L_40)
		{
			goto IL_010d;
		}
	}
	{
		Type_t* L_41 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_4 = L_42;
		uint64_t* L_43 = ___0_source;
		uint64_t L_44 = (*(uint64_t*)L_43);
		uint64_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_5 = L_48;
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_49 = ___1_destination;
		Type_t* L_50 = V_3;
		RuntimeObject* L_51 = V_5;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_49 = ((*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_010d:
	{
		goto IL_0123;
	}

IL_0123:
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_54 = ___1_destination;
		uint64_t* L_55 = ___0_source;
		uint64_t L_56 = (*(uint64_t*)L_55);
		uint64_t L_57 = L_56;
		RuntimeObject* L_58 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_57);
		Type_t* L_59 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_60;
		L_60 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_58, L_59, NULL);
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_54 = ((*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)UnBox(L_60, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_0141:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		bool L_63;
		L_63 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_62, NULL);
		if (!L_63)
		{
			goto IL_01a0;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		Type_t* L_68;
		L_68 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_67, NULL);
		bool L_69;
		L_69 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_68, NULL);
		if (!L_69)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_0188;
	}

IL_0188:
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_71 = ___1_destination;
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		uint64_t L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_74);
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_71 = ((*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)UnBox(L_75, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = TypeTraits_IsUnityObject_m0AF064909EDBAF0003058820973F2DAB7D5B7500_inline(L_77, NULL);
		if (!L_78)
		{
			goto IL_01c1;
		}
	}
	{
		uint64_t* L_79 = ___0_source;
		uint64_t L_80 = (*(uint64_t*)L_79);
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_81 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m8621D07E73FFB0D4E104282EA3BBC5A33BA67CEA(L_80, L_81, il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_82)
		{
			goto IL_01c1;
		}
	}
	{
		return (bool)1;
	}

IL_01c1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		NullCheck(L_84);
		bool L_85;
		L_85 = VirtualFuncInvoker0< bool >::Invoke(73, L_84);
		if (!L_85)
		{
			goto IL_024f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		bool L_90;
		L_90 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_87, L_89, NULL);
		if (!L_90)
		{
			goto IL_022b;
		}
	}
	try
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_91 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		uint64_t* L_94 = ___0_source;
		uint64_t L_95 = (*(uint64_t*)L_94);
		uint64_t L_96 = L_95;
		RuntimeObject* L_97 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_96);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_98;
		L_98 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_93, ((String_t*)CastclassSealed((RuntimeObject*)L_97, il2cpp_defaults.string_class)), NULL);
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_91 = ((*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)UnBox(L_98, il2cpp_rgctx_data(method->rgctx_data, 6))));
		goto IL_0229;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0219;
		}
		throw e;
	}

CATCH_0219:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_99 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_100 = ___1_destination;
		il2cpp_codegen_initobj(L_100, sizeof(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B));
		V_6 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02bc;
	}

IL_0229:
	{
		return (bool)1;
	}

IL_022b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_103;
		L_103 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_102, NULL);
		if (!L_103)
		{
			goto IL_024f;
		}
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_104 = ___1_destination;
		uint64_t* L_105 = ___0_source;
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_106;
		L_106 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mDB31CF1DC3F8D988E5FFE32AF88F0F6CBB665061_inline(L_105, il2cpp_rgctx_method(method->rgctx_data, 7));
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B L_107 = (*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_106);
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_104 = L_107;
		return (bool)1;
	}

IL_024f:
	{
		uint64_t* L_108 = ___0_source;
		uint64_t L_109 = (*(uint64_t*)L_108);
		V_7 = L_109;
		uint64_t L_110 = V_7;
		uint64_t L_111 = L_110;
		RuntimeObject* L_112 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_111);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_112, il2cpp_rgctx_data(method->rgctx_data, 6))))
		{
			goto IL_0280;
		}
	}
	{
		uint64_t L_113 = V_7;
		uint64_t L_114 = L_113;
		RuntimeObject* L_115 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_114);
		V_1 = ((*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_115, il2cpp_rgctx_data(method->rgctx_data, 6))), il2cpp_rgctx_data(method->rgctx_data, 6))));
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_116 = ___1_destination;
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B L_117 = V_1;
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_116 = L_117;
		return (bool)1;
	}

IL_0280:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_119;
		L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_121;
		L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
		NullCheck(L_119);
		bool L_122;
		L_122 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_119, L_121);
		if (!L_122)
		{
			goto IL_02b3;
		}
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_123 = ___1_destination;
		uint64_t* L_124 = ___0_source;
		uint64_t L_125 = (*(uint64_t*)L_124);
		uint64_t L_126 = L_125;
		RuntimeObject* L_127 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_126);
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_123 = ((*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)UnBox(L_127, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_02b3:
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_128 = ___1_destination;
		il2cpp_codegen_initobj(L_128, sizeof(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B));
		return (bool)0;
	}

IL_02bc:
	{
		bool L_129 = V_6;
		return L_129;
	}
}
// Method Definition Index: 107317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m05401CE56CBF26D537374031788044E0AAE8D2EF_gshared (uint64_t* ___0_source, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A V_1;
	memset((&V_1), 0, sizeof(V_1));
	TypeConverter_2_tD6D1604B2DCFEB45D1885E1C5A6AA26DBAD50E5F* V_2 = NULL;
	Type_t* V_3 = NULL;
	Type_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	uint64_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_1, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		Delegate_t* L_5 = V_0;
		V_2 = ((TypeConverter_2_tD6D1604B2DCFEB45D1885E1C5A6AA26DBAD50E5F*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 2)));
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_6 = ___1_destination;
		TypeConverter_2_tD6D1604B2DCFEB45D1885E1C5A6AA26DBAD50E5F* L_7 = V_2;
		uint64_t* L_8 = ___0_source;
		NullCheck(L_7);
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_9;
		L_9 = TypeConverter_2_Invoke_m23FC7F630D53A3123DC7A011E601A01F56D965FE_inline(L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_6 = L_9;
		return (bool)1;
	}

IL_0038:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0066;
		}
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_15 = ___1_destination;
		uint64_t* L_16 = ___0_source;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_17;
		L_17 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m2214A49C41DF7044BF9E46A31DDEFCF30E222BA5_inline(L_16, il2cpp_rgctx_method(method->rgctx_data, 7));
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_18 = (*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_17);
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_15 = L_18;
		return (bool)1;
	}

IL_0066:
	{
		uint64_t* L_19 = ___0_source;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_20 = ___1_destination;
		bool L_21;
		L_21 = PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mEEA93FA55A59E3039CF41E6AEF18C0B49FB36CD4(L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_21)
		{
			goto IL_0071;
		}
	}
	{
		return (bool)1;
	}

IL_0071:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_23, NULL);
		if (!L_24)
		{
			goto IL_0141;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		bool L_27;
		L_27 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_26, NULL);
		if (!L_27)
		{
			goto IL_00c4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		Type_t* L_30;
		L_30 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_30, L_33, NULL);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A));
		return (bool)0;
	}

IL_00c4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		Type_t* L_38;
		L_38 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_37, NULL);
		V_3 = L_38;
		Type_t* L_39 = V_3;
		NullCheck(L_39);
		bool L_40;
		L_40 = VirtualFuncInvoker0< bool >::Invoke(73, L_39);
		if (!L_40)
		{
			goto IL_010d;
		}
	}
	{
		Type_t* L_41 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_4 = L_42;
		uint64_t* L_43 = ___0_source;
		uint64_t L_44 = (*(uint64_t*)L_43);
		uint64_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_5 = L_48;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_49 = ___1_destination;
		Type_t* L_50 = V_3;
		RuntimeObject* L_51 = V_5;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_49 = ((*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_010d:
	{
		goto IL_0123;
	}

IL_0123:
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_54 = ___1_destination;
		uint64_t* L_55 = ___0_source;
		uint64_t L_56 = (*(uint64_t*)L_55);
		uint64_t L_57 = L_56;
		RuntimeObject* L_58 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_57);
		Type_t* L_59 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_60;
		L_60 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_58, L_59, NULL);
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_54 = ((*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)UnBox(L_60, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_0141:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		bool L_63;
		L_63 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_62, NULL);
		if (!L_63)
		{
			goto IL_01a0;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		Type_t* L_68;
		L_68 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_67, NULL);
		bool L_69;
		L_69 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_68, NULL);
		if (!L_69)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_0188;
	}

IL_0188:
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_71 = ___1_destination;
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		uint64_t L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_74);
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_71 = ((*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)UnBox(L_75, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = TypeTraits_IsUnityObject_m0AF064909EDBAF0003058820973F2DAB7D5B7500_inline(L_77, NULL);
		if (!L_78)
		{
			goto IL_01c1;
		}
	}
	{
		uint64_t* L_79 = ___0_source;
		uint64_t L_80 = (*(uint64_t*)L_79);
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_81 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m79E55A097935C2F2F85431C13A48DC6A9B6EF6F8(L_80, L_81, il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_82)
		{
			goto IL_01c1;
		}
	}
	{
		return (bool)1;
	}

IL_01c1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		NullCheck(L_84);
		bool L_85;
		L_85 = VirtualFuncInvoker0< bool >::Invoke(73, L_84);
		if (!L_85)
		{
			goto IL_024f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		bool L_90;
		L_90 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_87, L_89, NULL);
		if (!L_90)
		{
			goto IL_022b;
		}
	}
	try
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_91 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		uint64_t* L_94 = ___0_source;
		uint64_t L_95 = (*(uint64_t*)L_94);
		uint64_t L_96 = L_95;
		RuntimeObject* L_97 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_96);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_98;
		L_98 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_93, ((String_t*)CastclassSealed((RuntimeObject*)L_97, il2cpp_defaults.string_class)), NULL);
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_91 = ((*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)UnBox(L_98, il2cpp_rgctx_data(method->rgctx_data, 6))));
		goto IL_0229;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0219;
		}
		throw e;
	}

CATCH_0219:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_99 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_100 = ___1_destination;
		il2cpp_codegen_initobj(L_100, sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A));
		V_6 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02bc;
	}

IL_0229:
	{
		return (bool)1;
	}

IL_022b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_103;
		L_103 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_102, NULL);
		if (!L_103)
		{
			goto IL_024f;
		}
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_104 = ___1_destination;
		uint64_t* L_105 = ___0_source;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_106;
		L_106 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m2214A49C41DF7044BF9E46A31DDEFCF30E222BA5_inline(L_105, il2cpp_rgctx_method(method->rgctx_data, 7));
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_107 = (*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_106);
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_104 = L_107;
		return (bool)1;
	}

IL_024f:
	{
		uint64_t* L_108 = ___0_source;
		uint64_t L_109 = (*(uint64_t*)L_108);
		V_7 = L_109;
		uint64_t L_110 = V_7;
		uint64_t L_111 = L_110;
		RuntimeObject* L_112 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_111);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_112, il2cpp_rgctx_data(method->rgctx_data, 6))))
		{
			goto IL_0280;
		}
	}
	{
		uint64_t L_113 = V_7;
		uint64_t L_114 = L_113;
		RuntimeObject* L_115 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_114);
		V_1 = ((*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_115, il2cpp_rgctx_data(method->rgctx_data, 6))), il2cpp_rgctx_data(method->rgctx_data, 6))));
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_116 = ___1_destination;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_117 = V_1;
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_116 = L_117;
		return (bool)1;
	}

IL_0280:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_119;
		L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_121;
		L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
		NullCheck(L_119);
		bool L_122;
		L_122 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_119, L_121);
		if (!L_122)
		{
			goto IL_02b3;
		}
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_123 = ___1_destination;
		uint64_t* L_124 = ___0_source;
		uint64_t L_125 = (*(uint64_t*)L_124);
		uint64_t L_126 = L_125;
		RuntimeObject* L_127 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_126);
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_123 = ((*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)UnBox(L_127, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_02b3:
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_128 = ___1_destination;
		il2cpp_codegen_initobj(L_128, sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A));
		return (bool)0;
	}

IL_02bc:
	{
		bool L_129 = V_6;
		return L_129;
	}
}
// Method Definition Index: 107317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mCBD632F036E5E94F573DCBF67D5B7E40D08BCF5F_gshared (uint64_t* ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	TypeConverter_2_t7352D4A1AB4EE912C593B1CFEF10E9B9A14C9D0C* V_2 = NULL;
	Type_t* V_3 = NULL;
	Type_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	uint64_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_1, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		Delegate_t* L_5 = V_0;
		V_2 = ((TypeConverter_2_t7352D4A1AB4EE912C593B1CFEF10E9B9A14C9D0C*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = ___1_destination;
		TypeConverter_2_t7352D4A1AB4EE912C593B1CFEF10E9B9A14C9D0C* L_7 = V_2;
		uint64_t* L_8 = ___0_source;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = TypeConverter_2_Invoke_mEBE52EDE6BB158A3931FC005C17BA29E77C3A428_inline(L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_6 = L_9;
		return (bool)1;
	}

IL_0038:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0066;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = ___1_destination;
		uint64_t* L_16 = ___0_source;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17;
		L_17 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7339E1D9120843E5B76233A0A62D3810A03E9E4B_inline(L_16, il2cpp_rgctx_method(method->rgctx_data, 7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_17);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_15 = L_18;
		return (bool)1;
	}

IL_0066:
	{
		uint64_t* L_19 = ___0_source;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = ___1_destination;
		bool L_21;
		L_21 = PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mEA0F662000C4BDB69E266206B63C54E5B8768BD4(L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_21)
		{
			goto IL_0071;
		}
	}
	{
		return (bool)1;
	}

IL_0071:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_23, NULL);
		if (!L_24)
		{
			goto IL_0141;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		bool L_27;
		L_27 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_26, NULL);
		if (!L_27)
		{
			goto IL_00c4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		Type_t* L_30;
		L_30 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_30, L_33, NULL);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}

IL_00c4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		Type_t* L_38;
		L_38 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_37, NULL);
		V_3 = L_38;
		Type_t* L_39 = V_3;
		NullCheck(L_39);
		bool L_40;
		L_40 = VirtualFuncInvoker0< bool >::Invoke(73, L_39);
		if (!L_40)
		{
			goto IL_010d;
		}
	}
	{
		Type_t* L_41 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_4 = L_42;
		uint64_t* L_43 = ___0_source;
		uint64_t L_44 = (*(uint64_t*)L_43);
		uint64_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_5 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_49 = ___1_destination;
		Type_t* L_50 = V_3;
		RuntimeObject* L_51 = V_5;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_49 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_010d:
	{
		goto IL_0123;
	}

IL_0123:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_54 = ___1_destination;
		uint64_t* L_55 = ___0_source;
		uint64_t L_56 = (*(uint64_t*)L_55);
		uint64_t L_57 = L_56;
		RuntimeObject* L_58 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_57);
		Type_t* L_59 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_60;
		L_60 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_58, L_59, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_54 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_60, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_0141:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		bool L_63;
		L_63 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_62, NULL);
		if (!L_63)
		{
			goto IL_01a0;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		Type_t* L_68;
		L_68 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_67, NULL);
		bool L_69;
		L_69 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_68, NULL);
		if (!L_69)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_0188;
	}

IL_0188:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_71 = ___1_destination;
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		uint64_t L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_74);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_71 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_75, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = TypeTraits_IsUnityObject_m0AF064909EDBAF0003058820973F2DAB7D5B7500_inline(L_77, NULL);
		if (!L_78)
		{
			goto IL_01c1;
		}
	}
	{
		uint64_t* L_79 = ___0_source;
		uint64_t L_80 = (*(uint64_t*)L_79);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_81 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD72215670DE1A294D6D3106BF34753C2B27946B2(L_80, L_81, il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_82)
		{
			goto IL_01c1;
		}
	}
	{
		return (bool)1;
	}

IL_01c1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		NullCheck(L_84);
		bool L_85;
		L_85 = VirtualFuncInvoker0< bool >::Invoke(73, L_84);
		if (!L_85)
		{
			goto IL_024f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		bool L_90;
		L_90 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_87, L_89, NULL);
		if (!L_90)
		{
			goto IL_022b;
		}
	}
	try
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_91 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		uint64_t* L_94 = ___0_source;
		uint64_t L_95 = (*(uint64_t*)L_94);
		uint64_t L_96 = L_95;
		RuntimeObject* L_97 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_96);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_98;
		L_98 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_93, ((String_t*)CastclassSealed((RuntimeObject*)L_97, il2cpp_defaults.string_class)), NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_91 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_98, il2cpp_rgctx_data(method->rgctx_data, 6))));
		goto IL_0229;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0219;
		}
		throw e;
	}

CATCH_0219:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_99 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_100 = ___1_destination;
		il2cpp_codegen_initobj(L_100, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		V_6 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02bc;
	}

IL_0229:
	{
		return (bool)1;
	}

IL_022b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_103;
		L_103 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_102, NULL);
		if (!L_103)
		{
			goto IL_024f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_104 = ___1_destination;
		uint64_t* L_105 = ___0_source;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_106;
		L_106 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7339E1D9120843E5B76233A0A62D3810A03E9E4B_inline(L_105, il2cpp_rgctx_method(method->rgctx_data, 7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_107 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_106);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_104 = L_107;
		return (bool)1;
	}

IL_024f:
	{
		uint64_t* L_108 = ___0_source;
		uint64_t L_109 = (*(uint64_t*)L_108);
		V_7 = L_109;
		uint64_t L_110 = V_7;
		uint64_t L_111 = L_110;
		RuntimeObject* L_112 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_111);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_112, il2cpp_rgctx_data(method->rgctx_data, 6))))
		{
			goto IL_0280;
		}
	}
	{
		uint64_t L_113 = V_7;
		uint64_t L_114 = L_113;
		RuntimeObject* L_115 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_114);
		V_1 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_115, il2cpp_rgctx_data(method->rgctx_data, 6))), il2cpp_rgctx_data(method->rgctx_data, 6))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_116 = ___1_destination;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_117 = V_1;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_116 = L_117;
		return (bool)1;
	}

IL_0280:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_119;
		L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_121;
		L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
		NullCheck(L_119);
		bool L_122;
		L_122 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_119, L_121);
		if (!L_122)
		{
			goto IL_02b3;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_123 = ___1_destination;
		uint64_t* L_124 = ___0_source;
		uint64_t L_125 = (*(uint64_t*)L_124);
		uint64_t L_126 = L_125;
		RuntimeObject* L_127 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_126);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_123 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_127, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_02b3:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_128 = ___1_destination;
		il2cpp_codegen_initobj(L_128, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}

IL_02bc:
	{
		bool L_129 = V_6;
		return L_129;
	}
}
// Method Definition Index: 107317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDED0C60E934F54E1A71D87ACDC0E4BF1F1DED9D8_gshared (uint64_t* ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	TypeConverter_2_t1674952CD7CA572DACE4B8B62B277A454FFD5244* V_2 = NULL;
	Type_t* V_3 = NULL;
	Type_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	uint64_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_1, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		Delegate_t* L_5 = V_0;
		V_2 = ((TypeConverter_2_t1674952CD7CA572DACE4B8B62B277A454FFD5244*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___1_destination;
		TypeConverter_2_t1674952CD7CA572DACE4B8B62B277A454FFD5244* L_7 = V_2;
		uint64_t* L_8 = ___0_source;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = TypeConverter_2_Invoke_mC2318EB9013E659C6C2BD2A9295629301B030973_inline(L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_6 = L_9;
		return (bool)1;
	}

IL_0038:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0066;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = ___1_destination;
		uint64_t* L_16 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17;
		L_17 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7F542817C2E4A678C11E38F9DC832B19BE154A82_inline(L_16, il2cpp_rgctx_method(method->rgctx_data, 7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_17);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_15 = L_18;
		return (bool)1;
	}

IL_0066:
	{
		uint64_t* L_19 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = ___1_destination;
		bool L_21;
		L_21 = PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m94B696DE4D9D13AB9D727FC5A79746CCA2C782B1(L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_21)
		{
			goto IL_0071;
		}
	}
	{
		return (bool)1;
	}

IL_0071:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_23, NULL);
		if (!L_24)
		{
			goto IL_0141;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		bool L_27;
		L_27 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_26, NULL);
		if (!L_27)
		{
			goto IL_00c4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		Type_t* L_30;
		L_30 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_30, L_33, NULL);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)0;
	}

IL_00c4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		Type_t* L_38;
		L_38 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_37, NULL);
		V_3 = L_38;
		Type_t* L_39 = V_3;
		NullCheck(L_39);
		bool L_40;
		L_40 = VirtualFuncInvoker0< bool >::Invoke(73, L_39);
		if (!L_40)
		{
			goto IL_010d;
		}
	}
	{
		Type_t* L_41 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_4 = L_42;
		uint64_t* L_43 = ___0_source;
		uint64_t L_44 = (*(uint64_t*)L_43);
		uint64_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_5 = L_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_49 = ___1_destination;
		Type_t* L_50 = V_3;
		RuntimeObject* L_51 = V_5;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_49 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_010d:
	{
		goto IL_0123;
	}

IL_0123:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_54 = ___1_destination;
		uint64_t* L_55 = ___0_source;
		uint64_t L_56 = (*(uint64_t*)L_55);
		uint64_t L_57 = L_56;
		RuntimeObject* L_58 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_57);
		Type_t* L_59 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_60;
		L_60 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_58, L_59, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_54 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_60, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_0141:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		bool L_63;
		L_63 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_62, NULL);
		if (!L_63)
		{
			goto IL_01a0;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		Type_t* L_68;
		L_68 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_67, NULL);
		bool L_69;
		L_69 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_68, NULL);
		if (!L_69)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_0188;
	}

IL_0188:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_71 = ___1_destination;
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		uint64_t L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_74);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_71 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_75, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = TypeTraits_IsUnityObject_m0AF064909EDBAF0003058820973F2DAB7D5B7500_inline(L_77, NULL);
		if (!L_78)
		{
			goto IL_01c1;
		}
	}
	{
		uint64_t* L_79 = ___0_source;
		uint64_t L_80 = (*(uint64_t*)L_79);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_81 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA53ECFBE6B3C8960E4F4A93BE361559B2B2584DB(L_80, L_81, il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_82)
		{
			goto IL_01c1;
		}
	}
	{
		return (bool)1;
	}

IL_01c1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		NullCheck(L_84);
		bool L_85;
		L_85 = VirtualFuncInvoker0< bool >::Invoke(73, L_84);
		if (!L_85)
		{
			goto IL_024f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		bool L_90;
		L_90 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_87, L_89, NULL);
		if (!L_90)
		{
			goto IL_022b;
		}
	}
	try
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_91 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		uint64_t* L_94 = ___0_source;
		uint64_t L_95 = (*(uint64_t*)L_94);
		uint64_t L_96 = L_95;
		RuntimeObject* L_97 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_96);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_98;
		L_98 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_93, ((String_t*)CastclassSealed((RuntimeObject*)L_97, il2cpp_defaults.string_class)), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_91 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_98, il2cpp_rgctx_data(method->rgctx_data, 6))));
		goto IL_0229;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0219;
		}
		throw e;
	}

CATCH_0219:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_99 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_100 = ___1_destination;
		il2cpp_codegen_initobj(L_100, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		V_6 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02bc;
	}

IL_0229:
	{
		return (bool)1;
	}

IL_022b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_103;
		L_103 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_102, NULL);
		if (!L_103)
		{
			goto IL_024f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_104 = ___1_destination;
		uint64_t* L_105 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_106;
		L_106 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7F542817C2E4A678C11E38F9DC832B19BE154A82_inline(L_105, il2cpp_rgctx_method(method->rgctx_data, 7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_106);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_104 = L_107;
		return (bool)1;
	}

IL_024f:
	{
		uint64_t* L_108 = ___0_source;
		uint64_t L_109 = (*(uint64_t*)L_108);
		V_7 = L_109;
		uint64_t L_110 = V_7;
		uint64_t L_111 = L_110;
		RuntimeObject* L_112 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_111);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_112, il2cpp_rgctx_data(method->rgctx_data, 6))))
		{
			goto IL_0280;
		}
	}
	{
		uint64_t L_113 = V_7;
		uint64_t L_114 = L_113;
		RuntimeObject* L_115 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_114);
		V_1 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_115, il2cpp_rgctx_data(method->rgctx_data, 6))), il2cpp_rgctx_data(method->rgctx_data, 6))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_116 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117 = V_1;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_116 = L_117;
		return (bool)1;
	}

IL_0280:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_119;
		L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_121;
		L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
		NullCheck(L_119);
		bool L_122;
		L_122 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_119, L_121);
		if (!L_122)
		{
			goto IL_02b3;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_123 = ___1_destination;
		uint64_t* L_124 = ___0_source;
		uint64_t L_125 = (*(uint64_t*)L_124);
		uint64_t L_126 = L_125;
		RuntimeObject* L_127 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_126);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_123 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_127, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_02b3:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_128 = ___1_destination;
		il2cpp_codegen_initobj(L_128, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)0;
	}

IL_02bc:
	{
		bool L_129 = V_6;
		return L_129;
	}
}
// Method Definition Index: 107317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mD2ECCC4D44AB984D758045110E515B10304BF5F6_gshared (uint64_t* ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	TypeConverter_2_t0D1ACA65D6A02C5FA97E867E1A45E2E4884B4D6A* V_2 = NULL;
	Type_t* V_3 = NULL;
	Type_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	uint64_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_1, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		Delegate_t* L_5 = V_0;
		V_2 = ((TypeConverter_2_t0D1ACA65D6A02C5FA97E867E1A45E2E4884B4D6A*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_6 = ___1_destination;
		TypeConverter_2_t0D1ACA65D6A02C5FA97E867E1A45E2E4884B4D6A* L_7 = V_2;
		uint64_t* L_8 = ___0_source;
		NullCheck(L_7);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_9;
		L_9 = TypeConverter_2_Invoke_mA146BFD1D80B5052AA2FB39953FED09BCB40D840_inline(L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_6 = L_9;
		return (bool)1;
	}

IL_0038:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0066;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_15 = ___1_destination;
		uint64_t* L_16 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_17;
		L_17 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9C4B6C27B7225FC18A0BC10B8BDDA7925ADBFF79_inline(L_16, il2cpp_rgctx_method(method->rgctx_data, 7));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_18 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_17);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_15 = L_18;
		return (bool)1;
	}

IL_0066:
	{
		uint64_t* L_19 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_20 = ___1_destination;
		bool L_21;
		L_21 = PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mA8C8D1BF80EE07BE4EE66B0FD915B98FD9E2F80A(L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_21)
		{
			goto IL_0071;
		}
	}
	{
		return (bool)1;
	}

IL_0071:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_23, NULL);
		if (!L_24)
		{
			goto IL_0141;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		bool L_27;
		L_27 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_26, NULL);
		if (!L_27)
		{
			goto IL_00c4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		Type_t* L_30;
		L_30 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_30, L_33, NULL);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		return (bool)0;
	}

IL_00c4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		Type_t* L_38;
		L_38 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_37, NULL);
		V_3 = L_38;
		Type_t* L_39 = V_3;
		NullCheck(L_39);
		bool L_40;
		L_40 = VirtualFuncInvoker0< bool >::Invoke(73, L_39);
		if (!L_40)
		{
			goto IL_010d;
		}
	}
	{
		Type_t* L_41 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_4 = L_42;
		uint64_t* L_43 = ___0_source;
		uint64_t L_44 = (*(uint64_t*)L_43);
		uint64_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_45);
		Type_t* L_47 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_5 = L_48;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_49 = ___1_destination;
		Type_t* L_50 = V_3;
		RuntimeObject* L_51 = V_5;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_49 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_010d:
	{
		goto IL_0123;
	}

IL_0123:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_54 = ___1_destination;
		uint64_t* L_55 = ___0_source;
		uint64_t L_56 = (*(uint64_t*)L_55);
		uint64_t L_57 = L_56;
		RuntimeObject* L_58 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_57);
		Type_t* L_59 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_60;
		L_60 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_58, L_59, NULL);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_54 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_60, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_0141:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		bool L_63;
		L_63 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_62, NULL);
		if (!L_63)
		{
			goto IL_01a0;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		Type_t* L_68;
		L_68 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_67, NULL);
		bool L_69;
		L_69 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_68, NULL);
		if (!L_69)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_0188;
	}

IL_0188:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_71 = ___1_destination;
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		uint64_t L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_74);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_71 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_75, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = TypeTraits_IsUnityObject_m0AF064909EDBAF0003058820973F2DAB7D5B7500_inline(L_77, NULL);
		if (!L_78)
		{
			goto IL_01c1;
		}
	}
	{
		uint64_t* L_79 = ___0_source;
		uint64_t L_80 = (*(uint64_t*)L_79);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_81 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mACFCF7795F4A00D4CB478544E5B5B3D4A37D5977(L_80, L_81, il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_82)
		{
			goto IL_01c1;
		}
	}
	{
		return (bool)1;
	}

IL_01c1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		NullCheck(L_84);
		bool L_85;
		L_85 = VirtualFuncInvoker0< bool >::Invoke(73, L_84);
		if (!L_85)
		{
			goto IL_024f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		bool L_90;
		L_90 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_87, L_89, NULL);
		if (!L_90)
		{
			goto IL_022b;
		}
	}
	try
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_91 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		uint64_t* L_94 = ___0_source;
		uint64_t L_95 = (*(uint64_t*)L_94);
		uint64_t L_96 = L_95;
		RuntimeObject* L_97 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_96);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_98;
		L_98 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_93, ((String_t*)CastclassSealed((RuntimeObject*)L_97, il2cpp_defaults.string_class)), NULL);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_91 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_98, il2cpp_rgctx_data(method->rgctx_data, 6))));
		goto IL_0229;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0219;
		}
		throw e;
	}

CATCH_0219:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_99 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_100 = ___1_destination;
		il2cpp_codegen_initobj(L_100, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		V_6 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02bc;
	}

IL_0229:
	{
		return (bool)1;
	}

IL_022b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_103;
		L_103 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_102, NULL);
		if (!L_103)
		{
			goto IL_024f;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_104 = ___1_destination;
		uint64_t* L_105 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_106;
		L_106 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9C4B6C27B7225FC18A0BC10B8BDDA7925ADBFF79_inline(L_105, il2cpp_rgctx_method(method->rgctx_data, 7));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_107 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_106);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_104 = L_107;
		return (bool)1;
	}

IL_024f:
	{
		uint64_t* L_108 = ___0_source;
		uint64_t L_109 = (*(uint64_t*)L_108);
		V_7 = L_109;
		uint64_t L_110 = V_7;
		uint64_t L_111 = L_110;
		RuntimeObject* L_112 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_111);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_112, il2cpp_rgctx_data(method->rgctx_data, 6))))
		{
			goto IL_0280;
		}
	}
	{
		uint64_t L_113 = V_7;
		uint64_t L_114 = L_113;
		RuntimeObject* L_115 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_114);
		V_1 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_115, il2cpp_rgctx_data(method->rgctx_data, 6))), il2cpp_rgctx_data(method->rgctx_data, 6))));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_116 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_117 = V_1;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_116 = L_117;
		return (bool)1;
	}

IL_0280:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_119;
		L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_121;
		L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
		NullCheck(L_119);
		bool L_122;
		L_122 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_119, L_121);
		if (!L_122)
		{
			goto IL_02b3;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_123 = ___1_destination;
		uint64_t* L_124 = ___0_source;
		uint64_t L_125 = (*(uint64_t*)L_124);
		uint64_t L_126 = L_125;
		RuntimeObject* L_127 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), &L_126);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_123 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_127, il2cpp_rgctx_data(method->rgctx_data, 6))));
		return (bool)1;
	}

IL_02b3:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_128 = ___1_destination;
		il2cpp_codegen_initobj(L_128, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		return (bool)0;
	}

IL_02bc:
	{
		bool L_129 = V_6;
		return L_129;
	}
}
// Method Definition Index: 107317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m47462EFF2D5E76987B192BA0DA9F4B74072B7DA3_gshared (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const uint32_t SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_44 = alloca(SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
	const Il2CppFullySharedGenericAny L_55 = L_44;
	const Il2CppFullySharedGenericAny L_60 = L_44;
	const Il2CppFullySharedGenericAny L_76 = L_44;
	const Il2CppFullySharedGenericAny L_81 = L_44;
	const Il2CppFullySharedGenericAny L_89 = L_44;
	const Il2CppFullySharedGenericAny L_104 = L_44;
	const Il2CppFullySharedGenericAny L_119 = L_44;
	const Il2CppFullySharedGenericAny L_122 = L_44;
	const Il2CppFullySharedGenericAny L_135 = L_44;
	const Il2CppFullySharedGenericAny L_120 = alloca(SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
	const Il2CppFullySharedGenericAny L_18 = L_9;
	const Il2CppFullySharedGenericAny L_52 = L_9;
	const Il2CppFullySharedGenericAny L_64 = L_9;
	const Il2CppFullySharedGenericAny L_83 = L_9;
	const Il2CppFullySharedGenericAny L_107 = L_9;
	const Il2CppFullySharedGenericAny L_117 = L_9;
	const Il2CppFullySharedGenericAny L_124 = L_9;
	const Il2CppFullySharedGenericAny L_137 = L_9;
	const Il2CppFullySharedGenericAny L_127 = alloca(SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
	Delegate_t* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
	memset(V_1, 0, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
	TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845* V_2 = NULL;
	Type_t* V_3 = NULL;
	Type_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
	memset(V_7, 0, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_1, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		Delegate_t* L_5 = V_0;
		V_2 = ((TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppFullySharedGenericAny* L_6 = ___1_destination;
		TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845* L_7 = V_2;
		Il2CppFullySharedGenericAny* L_8 = ___0_source;
		NullCheck(L_7);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_7, L_8, (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_9, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_9);
		return (bool)1;
	}

IL_0038:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0066;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_15 = ___1_destination;
		Il2CppFullySharedGenericAny* L_16 = ___0_source;
		Il2CppFullySharedGenericAny* L_17;
		L_17 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_16, il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_18, L_17, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_15, L_18, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_15, (void*)L_18);
		return (bool)1;
	}

IL_0066:
	{
		Il2CppFullySharedGenericAny* L_19 = ___0_source;
		Il2CppFullySharedGenericAny* L_20 = ___1_destination;
		bool L_21;
		L_21 = ((  bool (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_21)
		{
			goto IL_0071;
		}
	}
	{
		return (bool)1;
	}

IL_0071:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_23, NULL);
		if (!L_24)
		{
			goto IL_0141;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		bool L_27;
		L_27 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_26, NULL);
		if (!L_27)
		{
			goto IL_00c4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		Type_t* L_30;
		L_30 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_30, L_33, NULL);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		return (bool)0;
	}

IL_00c4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		Type_t* L_38;
		L_38 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_37, NULL);
		V_3 = L_38;
		Type_t* L_39 = V_3;
		NullCheck(L_39);
		bool L_40;
		L_40 = VirtualFuncInvoker0< bool >::Invoke(73, L_39);
		if (!L_40)
		{
			goto IL_010d;
		}
	}
	{
		Type_t* L_41 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_4 = L_42;
		Il2CppFullySharedGenericAny* L_43 = ___0_source;
		il2cpp_codegen_memcpy(L_44, L_43, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_45 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), L_44);
		Type_t* L_46 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_47;
		L_47 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_45, L_46, NULL);
		V_5 = L_47;
		Il2CppFullySharedGenericAny* L_48 = ___1_destination;
		Type_t* L_49 = V_3;
		RuntimeObject* L_50 = V_5;
		RuntimeObject* L_51;
		L_51 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_49, L_50, NULL);
		void* L_53 = UnBox_Any(L_51, il2cpp_rgctx_data(method->rgctx_data, 6), L_52);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_48, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_53)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_48, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_53)));
		return (bool)1;
	}

IL_010d:
	{
		Il2CppFullySharedGenericAny* L_54 = ___0_source;
		il2cpp_codegen_memcpy(L_55, L_54, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		bool L_56 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), L_55);
		if (L_56)
		{
			goto IL_0123;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_57 = ___1_destination;
		il2cpp_codegen_initobj(L_57, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		return (bool)1;
	}

IL_0123:
	{
		Il2CppFullySharedGenericAny* L_58 = ___1_destination;
		Il2CppFullySharedGenericAny* L_59 = ___0_source;
		il2cpp_codegen_memcpy(L_60, L_59, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_61 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), L_60);
		Type_t* L_62 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_63;
		L_63 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_61, L_62, NULL);
		void* L_65 = UnBox_Any(L_63, il2cpp_rgctx_data(method->rgctx_data, 6), L_64);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_58, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_65)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_58, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_65)));
		return (bool)1;
	}

IL_0141:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline(L_67, NULL);
		if (!L_68)
		{
			goto IL_01a0;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		Type_t* L_73;
		L_73 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_72, NULL);
		bool L_74;
		L_74 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_70, L_73, NULL);
		if (!L_74)
		{
			goto IL_01a0;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_75 = ___0_source;
		il2cpp_codegen_memcpy(L_76, L_75, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		bool L_77 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), L_76);
		if (L_77)
		{
			goto IL_0188;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_78 = ___1_destination;
		il2cpp_codegen_initobj(L_78, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		return (bool)0;
	}

IL_0188:
	{
		Il2CppFullySharedGenericAny* L_79 = ___1_destination;
		Il2CppFullySharedGenericAny* L_80 = ___0_source;
		il2cpp_codegen_memcpy(L_81, L_80, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_82 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), L_81);
		void* L_84 = UnBox_Any(L_82, il2cpp_rgctx_data(method->rgctx_data, 6), L_83);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_79, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_84)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_79, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_84)));
		return (bool)1;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		bool L_87;
		L_87 = TypeTraits_IsUnityObject_m0AF064909EDBAF0003058820973F2DAB7D5B7500_inline(L_86, NULL);
		if (!L_87)
		{
			goto IL_01c1;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_88 = ___0_source;
		il2cpp_codegen_memcpy(L_89, L_88, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		Il2CppFullySharedGenericAny* L_90 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_91;
		L_91 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)), il2cpp_rgctx_method(method->rgctx_data, 10), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? L_89: *(void**)L_89), L_90);
		if (!L_91)
		{
			goto IL_01c1;
		}
	}
	{
		return (bool)1;
	}

IL_01c1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		NullCheck(L_93);
		bool L_94;
		L_94 = VirtualFuncInvoker0< bool >::Invoke(73, L_93);
		if (!L_94)
		{
			goto IL_024f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_95 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_96;
		L_96 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_95, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		bool L_99;
		L_99 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_96, L_98, NULL);
		if (!L_99)
		{
			goto IL_022b;
		}
	}
	try
	{
		Il2CppFullySharedGenericAny* L_100 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		Il2CppFullySharedGenericAny* L_103 = ___0_source;
		il2cpp_codegen_memcpy(L_104, L_103, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), L_104);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_106;
		L_106 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_102, ((String_t*)CastclassSealed((RuntimeObject*)L_105, il2cpp_defaults.string_class)), NULL);
		void* L_108 = UnBox_Any(L_106, il2cpp_rgctx_data(method->rgctx_data, 6), L_107);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_100, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_108)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_100, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_108)));
		goto IL_0229;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0219;
		}
		throw e;
	}

CATCH_0219:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_109 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		Il2CppFullySharedGenericAny* L_110 = ___1_destination;
		il2cpp_codegen_initobj(L_110, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		V_6 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02bc;
	}

IL_0229:
	{
		return (bool)1;
	}

IL_022b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_112;
		L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_113;
		L_113 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_112, NULL);
		if (!L_113)
		{
			goto IL_024f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_114 = ___1_destination;
		Il2CppFullySharedGenericAny* L_115 = ___0_source;
		Il2CppFullySharedGenericAny* L_116;
		L_116 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_115, il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_117, L_116, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_114, L_117, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_114, (void*)L_117);
		return (bool)1;
	}

IL_024f:
	{
		Il2CppFullySharedGenericAny* L_118 = ___0_source;
		il2cpp_codegen_memcpy(L_119, L_118, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		il2cpp_codegen_memcpy(V_7, L_119, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		il2cpp_codegen_memcpy(L_120, V_7, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), L_120);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 6))))
		{
			goto IL_0280;
		}
	}
	{
		il2cpp_codegen_memcpy(L_122, V_7, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_123 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), L_122);
		void* L_125 = UnBox_Any(((RuntimeObject*)IsInst((RuntimeObject*)L_123, il2cpp_rgctx_data(method->rgctx_data, 6))), il2cpp_rgctx_data(method->rgctx_data, 6), L_124);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_125)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppFullySharedGenericAny* L_126 = ___1_destination;
		il2cpp_codegen_memcpy(L_127, V_1, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_126, L_127, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_126, (void*)L_127);
		return (bool)1;
	}

IL_0280:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_128 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_129;
		L_129 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_128, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_130 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_131;
		L_131 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_130, NULL);
		NullCheck(L_129);
		bool L_132;
		L_132 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_129, L_131);
		if (!L_132)
		{
			goto IL_02b3;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_133 = ___1_destination;
		Il2CppFullySharedGenericAny* L_134 = ___0_source;
		il2cpp_codegen_memcpy(L_135, L_134, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_136 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), L_135);
		void* L_138 = UnBox_Any(L_136, il2cpp_rgctx_data(method->rgctx_data, 6), L_137);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_133, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_138)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_133, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_138)));
		return (bool)1;
	}

IL_02b3:
	{
		Il2CppFullySharedGenericAny* L_139 = ___1_destination;
		il2cpp_codegen_initobj(L_139, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		return (bool)0;
	}

IL_02bc:
	{
		bool L_140 = V_6;
		return L_140;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m3EC2E6CC651F5711760833162753A254B996B858_gshared (bool ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_20 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_20)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_20)->___value), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_31 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_31)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_31)->___value), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_mE4F5128C2AC33FCBAAB2EA1D97F23DE21140AABA_gshared (bool ___0_source, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*)L_20 = ((*(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*)L_31 = ((*(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mFD408C8E8D6992E3122EE9D1CE81B275C842BDE3_gshared (bool ___0_source, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_20 = ((*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_20)->___m_Value), (void*)NULL);
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_31 = ((*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_31)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mA215596267479EB1631AA8DED826A7171E5C401A_gshared (bool ___0_source, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_20 = ((*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_20)->___m_Value), (void*)NULL);
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_31 = ((*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_31)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mFA86C49C9AA65785203D147F583FA93167162807_gshared (bool ___0_source, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_20 = ((*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_20)->___m_Value), (void*)NULL);
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_31 = ((*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_31)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m4A6BD5DECE03803DC4C61B9F103F74C1B1640C49_gshared (bool ___0_source, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_20 = ((*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_20)->___m_Value), (void*)NULL);
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_31 = ((*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_31)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mB2EAD55F77A71B5DC8A661C174C0238532DCDE3F_gshared (bool ___0_source, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)L_20 = ((*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)L_31 = ((*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m27F03E1DD1B1FE4B393E7332585935EE419FCFCD_gshared (bool ___0_source, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_20 = ((*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_20)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_20)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_20)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_20)->___m_VectorImage), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_31 = ((*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_31)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_31)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_31)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_31)->___m_VectorImage), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mCB7EA012C3FC4B6C3782D2873C8E3111C51329D8_gshared (bool ___0_source, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_20 = ((*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_31 = ((*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mED19B24DB09662B375035E4F57D396BD86463AF2_gshared (bool ___0_source, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_20 = ((*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_31 = ((*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m11704B26D8C14B1E32E4880F7222798E53A56E8C_gshared (bool ___0_source, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_20 = ((*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_31 = ((*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_mEC0AE602E4DECF730CFCF4B3B6383627B99F9997_gshared (bool ___0_source, BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)L_20 = ((*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)L_31 = ((*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m015B1A96668CBDBD4FF40B64E52BDAC9043B7F03_gshared (bool ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		bool* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(bool));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		bool* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(bool*)L_20 = ((*(bool*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		bool* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(bool*)L_31 = ((*(bool*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		bool* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(bool));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m301803FA77A17119EB7F5E7CD7CDD759F1B6CD22_gshared (bool ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		uint8_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint8_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		uint8_t* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(uint8_t*)L_20 = ((*(uint8_t*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		uint8_t* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(uint8_t*)L_31 = ((*(uint8_t*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		uint8_t* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(uint8_t));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m66EDB994914B8BE910559BF8CA56620F8D6D6537_gshared (bool ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Il2CppChar* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Il2CppChar));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Il2CppChar* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Il2CppChar*)L_20 = ((*(Il2CppChar*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Il2CppChar* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Il2CppChar*)L_31 = ((*(Il2CppChar*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Il2CppChar* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Il2CppChar));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBED3483322D61A71393E2C22F0879301EC15FF3F_gshared (bool ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_20 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_31 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mF3F0200FAF77B30F1C9C72D1548492619993A085_gshared (bool ___0_source, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_20 = ((*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_20)->___m_Texture), (void*)NULL);
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_31 = ((*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_31)->___m_Texture), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m0B085F6E02953C4EE72344A7E6C17EC7B42F2CB4_gshared (bool ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_20 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_31 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB9B908E8E0BE8AD5C6094DD6EC55A61610F8EFD5_gshared (bool ___0_source, double* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		double* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(double));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		double* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(double*)L_20 = ((*(double*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		double* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(double*)L_31 = ((*(double*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		double* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(double));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mA6BD039007AC727658672CE6E3067654B6616C2E_gshared (bool ___0_source, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_20 = ((*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_31 = ((*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mF415654D7DBFF0E31EDFE7B7BEFE7F1297BEC0CE_gshared (bool ___0_source, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)L_20 = ((*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)L_31 = ((*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m47CBE2635E96ACE9C3880C7E8E5C221BDA5A4880_gshared (bool ___0_source, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_20 = ((*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_20)->___m_CustomDefinition), (void*)NULL);
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_31 = ((*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_31)->___m_CustomDefinition), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m20415D0C45BEB2D39110CF70FD5B4C01132FC45F_gshared (bool ___0_source, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_20 = ((*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_20)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_20)->___m_FontAsset), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_31 = ((*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_31)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_31)->___m_FontAsset), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisGuid_t_mE468885431B77B7FBF0B64AF4008A4774CE466F4_gshared (bool ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Guid_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Guid_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Guid_t* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Guid_t*)L_20 = ((*(Guid_t*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Guid_t* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Guid_t*)L_31 = ((*(Guid_t*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Guid_t* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Guid_t));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m2A969E3B6CC5BA370F9659F2F689CD39FF142F15_gshared (bool ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		int16_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int16_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		int16_t* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(int16_t*)L_20 = ((*(int16_t*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		int16_t* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(int16_t*)L_31 = ((*(int16_t*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		int16_t* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(int16_t));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA8CEE27C96F3E3BE4D5E485891B1749623D947EA_gshared (bool ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		int32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int32_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		int32_t* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(int32_t*)L_20 = ((*(int32_t*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		int32_t* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(int32_t*)L_31 = ((*(int32_t*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		int32_t* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mAC11224D028618DD6A80DCF6FF40A82743DBF7AF_gshared (bool ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		int32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int32_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		int32_t* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(int32_t*)L_20 = ((*(int32_t*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		int32_t* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(int32_t*)L_31 = ((*(int32_t*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		int32_t* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mAE1DE3F29BD837B26E3A054245441A79068C06AC_gshared (bool ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		int64_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int64_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		int64_t* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(int64_t*)L_20 = ((*(int64_t*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		int64_t* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(int64_t*)L_31 = ((*(int64_t*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		int64_t* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(int64_t));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mCB69A96B5A602534A9D216914CCBF8432B417025_gshared (bool ___0_source, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_20 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_31 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m2F407E1D681B89C2BF0925DED306FBFE8ECEE98F_gshared (bool ___0_source, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_20 = ((*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_20)->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_20)->___propertyValues), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_31 = ((*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_31)->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_31)->___propertyValues), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRuntimeObject_mC02C724E7E2FA6DCE702CFE05910F2CF944C9533_gshared (bool ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject** L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(RuntimeObject*));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject** L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(RuntimeObject**)L_20 = ((RuntimeObject*)Castclass((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_20, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		RuntimeObject** L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(RuntimeObject**)L_31 = ((RuntimeObject*)Castclass((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_31, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		RuntimeObject** L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mD2370A65BD2F3D9E72F6467889AC1210E3F7FB1F_gshared (bool ___0_source, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_20 = ((*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_31 = ((*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m6789543806E7789775BD2DC4317B54B438B478DE_gshared (bool ___0_source, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_20 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_31 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m7B7C9D2E660ADA1AA3B2F6B0D889C1A33B803B83_gshared (bool ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		int8_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int8_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		int8_t* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(int8_t*)L_20 = ((*(int8_t*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		int8_t* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(int8_t*)L_31 = ((*(int8_t*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		int8_t* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(int8_t));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mA6B60B5842671501DFC96720BB017795C2C01732_gshared (bool ___0_source, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_20 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_31 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m1D41687F69EA4F20F0AE750EEA79880F55E2CAF7_gshared (bool ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_20 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_31 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m825B2E827D6E6CFB0CA8BD91A308AF30AADCC4F5_gshared (bool ___0_source, SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)L_20 = ((*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)L_31 = ((*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m39285009311F44B47048013D86C146E4506A7036_gshared (bool ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_20 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_31 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAE9A960AE947D0A4F542D3628782F69A023D5FA1_gshared (bool ___0_source, float* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		float* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(float));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		float* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(float*)L_20 = ((*(float*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		float* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(float*)L_31 = ((*(float*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		float* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(float));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m6BF04AF79C9560962AC589BA0229BF3B98B7F28D_gshared (bool ___0_source, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_20 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_20)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_20)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_20)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_20)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_31 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_31)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_31)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_31)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_31)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mF08465C43FC23CA67552EF6320C7A659FD311539_gshared (bool ___0_source, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_20 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_31 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mE9E86135B0B2AF7815C431ECB51D48AFE9B85F94_gshared (bool ___0_source, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_20 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_31 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_mF2BE7885A969CCFFF1CDB0BD73967CBDA210B144_gshared (bool ___0_source, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_20 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_31 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m1C34D878E0FC01C91428F544DCCB63DAEBD947CA_gshared (bool ___0_source, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_20 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_31 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m003DE98E47EF265E625216627D2D8E3531A831F0_gshared (bool ___0_source, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_20 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_20)->___m_Value))->___m_Texture), (void*)NULL);
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_31 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_31)->___m_Value))->___m_Texture), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mFE84D890D4EA848AA8ED59184F4037A62D46C651_gshared (bool ___0_source, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_20 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_31 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m1DF2BF9D632CFF4B7ACF516C99F054B14AEFC257_gshared (bool ___0_source, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_20 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_20)->___m_Value), (void*)NULL);
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_31 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_31)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m539D07FBA525979DC960D380874C02B8E25E92F5_gshared (bool ___0_source, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_20 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_20)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_20)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_31 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_31)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_31)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mFEBDAF2BB376B058D196013BA8D6E48FD39ED4D3_gshared (bool ___0_source, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_20 = ((*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_31 = ((*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m9C6F161A7F18CD40F3E5F63DDA3AAD3AC768D9B5_gshared (bool ___0_source, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_20 = ((*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_31 = ((*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m3BFA7F3EAF4645EB4488A45A8B507FE74C75A144_gshared (bool ___0_source, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_20 = ((*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_20)->___m_Value))->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_20)->___m_Value))->___propertyValues), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_31 = ((*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_31)->___m_Value))->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_31)->___m_Value))->___propertyValues), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m29D9E98EE92CB4C147C8332E2C84FFE332CDFE43_gshared (bool ___0_source, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_20 = ((*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_20)->___U3CnameU3Ek__BackingField), (void*)NULL);
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_31 = ((*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_31)->___U3CnameU3Ek__BackingField), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mB075143DF07AEB7EF1A1C87FDFC38F28386398D5_gshared (bool ___0_source, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_20 = ((*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_31 = ((*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mE45938538E4A3CCB759174914267C99EEDEA7B02_gshared (bool ___0_source, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_20 = ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_31 = ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mDE9825998B9E3CC92DC4D315CB3803EE7D7A1188_gshared (bool ___0_source, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_20 = ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_31 = ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mE934DF91FC18F76C556AF90CACCB151B4AF39C41_gshared (bool ___0_source, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_20 = ((*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_31 = ((*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m7BB07240568DA04306CFEB91EA09CE49DECB5F39_gshared (bool ___0_source, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_20 = ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_31 = ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mF1D229E80594A52AA534309F23E191FE3176366A_gshared (bool ___0_source, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_20 = ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_31 = ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mA215E2CAEB1D6D2136C54659A23AAE12F4E5B474_gshared (bool ___0_source, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_20 = ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_31 = ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m9EBC371AC5F9EC1E202D49EEE8E9CACD542C4C5A_gshared (bool ___0_source, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_20 = ((*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_31 = ((*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mA98364C985932BEDA01B55354015F127EBD1B4F2_gshared (bool ___0_source, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_20 = ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_31 = ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m745EE2CC514AA0594833C0CF97F5F99B6C4EA07B_gshared (bool ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_20 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_31 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m7E088DF6AE8EDCB27CCF35018646F60E4054D5EA_gshared (bool ___0_source, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_20 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_31 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mB740C2C0519FC00B212B5FE7FEF8E56447D60864_gshared (bool ___0_source, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_20 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_31 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mDFE99E6B68C9ABC258B8713D2D6DC82F40457803_gshared (bool ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_20 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_31 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m4BF0FED524F9F5C03398DDB416954FDB70EE57BB_gshared (bool ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		uint16_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint16_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		uint16_t* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(uint16_t*)L_20 = ((*(uint16_t*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		uint16_t* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(uint16_t*)L_31 = ((*(uint16_t*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		uint16_t* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(uint16_t));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m21FB5D12C8B62E837EBA558D72F406285B0E66F0_gshared (bool ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		uint32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint32_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		uint32_t* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(uint32_t*)L_20 = ((*(uint32_t*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		uint32_t* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(uint32_t*)L_31 = ((*(uint32_t*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		uint32_t* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(uint32_t));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m477FAEEE6D84AB878BBB83FC28E645E46606891B_gshared (bool ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		uint64_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint64_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		uint64_t* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(uint64_t*)L_20 = ((*(uint64_t*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		uint64_t* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(uint64_t*)L_31 = ((*(uint64_t*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		uint64_t* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(uint64_t));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mE20F1A02F01296EAA59CF56F63B9CA7018BC100B_gshared (bool ___0_source, UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_20 = ((*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_31 = ((*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mEC70A8C1D74E86CD8EB3614C593BE260B4240000_gshared (bool ___0_source, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_20 = ((*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_31 = ((*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBB3F4D545E19CB5E6D341E9884BCC025B700308E_gshared (bool ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_20 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_31 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF3EFE12089C60F083BF395384194C8E9B11FEFAB_gshared (bool ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_20 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_31 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mA5CFD6D43EE3607FC6AD1171C2C3E231E3B6E959_gshared (bool ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_20 = ___1_destination;
		bool L_21 = ___0_source;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_20 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_31 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m027F7F58EA42086627553A1A117FEEBCE3098D81_gshared (uint8_t ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_20 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_20)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_20)->___value), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_31 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_31)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_31)->___value), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_m57F476F43779A86069D4B80E9A9A0795C9FA9223_gshared (uint8_t ___0_source, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*)L_20 = ((*(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*)L_31 = ((*(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m8FF0519022197BA1109EF55EC0E31A2850CAB70D_gshared (uint8_t ___0_source, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_20 = ((*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_20)->___m_Value), (void*)NULL);
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_31 = ((*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_31)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mEF4CA1F96E9B8D1AEFABC0A794D40815A9A74F46_gshared (uint8_t ___0_source, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_20 = ((*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_20)->___m_Value), (void*)NULL);
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_31 = ((*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_31)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m530534310C9705EAE62DD40B90613014BD1A09F3_gshared (uint8_t ___0_source, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_20 = ((*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_20)->___m_Value), (void*)NULL);
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_31 = ((*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_31)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mF5F79ACE86723B5257AE043D3D998A6B1139BBD1_gshared (uint8_t ___0_source, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_20 = ((*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_20)->___m_Value), (void*)NULL);
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_31 = ((*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_31)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m81CEB4A4B699F3169AE56DDCDF4EB49750A128E7_gshared (uint8_t ___0_source, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)L_20 = ((*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)L_31 = ((*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m2B774005091D132BF85F6F0F38F45ABF54F4D764_gshared (uint8_t ___0_source, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_20 = ((*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_20)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_20)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_20)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_20)->___m_VectorImage), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_31 = ((*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_31)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_31)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_31)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_31)->___m_VectorImage), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m8A163288B93831398F73DB7378B40FF4BA6809F5_gshared (uint8_t ___0_source, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_20 = ((*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_31 = ((*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mF92A9E23FA5D35B3E91DD34DC69B538A79203E8D_gshared (uint8_t ___0_source, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_20 = ((*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_31 = ((*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m4EFCF6497249036758C99F4951865331A033C381_gshared (uint8_t ___0_source, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_20 = ((*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_31 = ((*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m889B31FE28F55DB494167E08D4B097D327D1506F_gshared (uint8_t ___0_source, BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)L_20 = ((*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)L_31 = ((*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB37FEF5B4BE8A74F283FA43AE64A61E65B381FD_gshared (uint8_t ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		bool* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(bool));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		bool* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(bool*)L_20 = ((*(bool*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		bool* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(bool*)L_31 = ((*(bool*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		bool* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(bool));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCABE922335C6745465BDADAC428B8B42D6145162_gshared (uint8_t ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		uint8_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint8_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		uint8_t* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(uint8_t*)L_20 = ((*(uint8_t*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		uint8_t* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(uint8_t*)L_31 = ((*(uint8_t*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		uint8_t* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(uint8_t));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m88DF78FD682509A8352DBB5160170455DFAE135C_gshared (uint8_t ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Il2CppChar* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Il2CppChar));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Il2CppChar* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Il2CppChar*)L_20 = ((*(Il2CppChar*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Il2CppChar* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Il2CppChar*)L_31 = ((*(Il2CppChar*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Il2CppChar* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Il2CppChar));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m67FDF208610A6119E05A03B68CEF159DC545393B_gshared (uint8_t ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_20 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_31 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m83F11FAF4F766CCA92D1C9F8D8B360BB6068135A_gshared (uint8_t ___0_source, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_20 = ((*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_20)->___m_Texture), (void*)NULL);
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_31 = ((*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_31)->___m_Texture), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m028345E4ED8DAC34E6DB1F7C2756EBB869FDC480_gshared (uint8_t ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_20 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_31 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m6ED7A3A7BADF4E554B18CC90502369C9F85CD41F_gshared (uint8_t ___0_source, double* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		double* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(double));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		double* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(double*)L_20 = ((*(double*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		double* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(double*)L_31 = ((*(double*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		double* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(double));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m31B3F1D1B691A3182C676CD4ABE8596B77B00DBE_gshared (uint8_t ___0_source, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_20 = ((*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_31 = ((*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mC57ACA99E86F0B6A9EE5F413F4562DE67AE59C04_gshared (uint8_t ___0_source, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)L_20 = ((*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)L_31 = ((*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m484ACA406717286B0B252F80402CE1DA5F7E2C01_gshared (uint8_t ___0_source, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_20 = ((*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_20)->___m_CustomDefinition), (void*)NULL);
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_31 = ((*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_31)->___m_CustomDefinition), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m2C753E5C5F6BD01CEA3FC49144062EA56B8B52C7_gshared (uint8_t ___0_source, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_20 = ((*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_20)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_20)->___m_FontAsset), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_31 = ((*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_31)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_31)->___m_FontAsset), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisGuid_t_m07A6B998764134BBAC40BA74447442920EDC4DDB_gshared (uint8_t ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Guid_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Guid_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Guid_t* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Guid_t*)L_20 = ((*(Guid_t*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Guid_t* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Guid_t*)L_31 = ((*(Guid_t*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Guid_t* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Guid_t));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mAE7DB36EE23197C80F57898BDDF839965150F61B_gshared (uint8_t ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		int16_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int16_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		int16_t* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(int16_t*)L_20 = ((*(int16_t*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		int16_t* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(int16_t*)L_31 = ((*(int16_t*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		int16_t* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(int16_t));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCB10882E5842C042CB53D28A3D2CFCC1127EBE6F_gshared (uint8_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		int32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int32_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		int32_t* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(int32_t*)L_20 = ((*(int32_t*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		int32_t* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(int32_t*)L_31 = ((*(int32_t*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		int32_t* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m3D6D79563F127951F0F2128E2BED94F8E709AB2E_gshared (uint8_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		int32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int32_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		int32_t* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(int32_t*)L_20 = ((*(int32_t*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		int32_t* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(int32_t*)L_31 = ((*(int32_t*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		int32_t* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mE9AC40DC4ACC5322B10673C56D5DC38926AE0AF4_gshared (uint8_t ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		int64_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int64_t));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		int64_t* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(int64_t*)L_20 = ((*(int64_t*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		int64_t* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(int64_t*)L_31 = ((*(int64_t*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		int64_t* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(int64_t));
		return (bool)0;
	}
}
// Method Definition Index: 107318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mC1B86870F53FD23025F75769AE783EDC1F02D72E_gshared (uint8_t ___0_source, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		goto IL_005d;
	}

IL_005d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_20 = ___1_destination;
		uint8_t L_21 = ___0_source;
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_22);
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_20 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox(L_23, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_25, L_27, (&V_0), NULL);
		if (!L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_29 = V_0;
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
		L_30 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_1 = L_30;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_31 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_1;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_31 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		return L_34;
	}

IL_00ce:
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_35 = ___1_destination;
		il2cpp_codegen_initobj(L_35, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		return (bool)0;
	}
}
// Method Definition Index: 107341
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_IsNullable_m883A2DC0F177F5DD14E13BF17E8FE74243D065EE_inline (Type_t* ___0_type, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_type;
		Type_t* L_1;
		L_1 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_2;
		L_2 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, (Type_t*)NULL, NULL);
		return L_2;
	}
}
// Method Definition Index: 107344
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_IsUnityObject_m0AF064909EDBAF0003058820973F2DAB7D5B7500_inline (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = ___0_type;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_2);
		return L_3;
	}
}
// Method Definition Index: 107315
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B TypeConverter_2_Invoke_m1BA070D1874F8A7E8632280C4B8C8F92D469077F_gshared_inline (TypeConverter_2_tE51C044D88BBC4611120A97594020A5A0F95370F* __this, uint64_t* ___0_value, const RuntimeMethod* method) 
{
	typedef UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 49627
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mDB31CF1DC3F8D988E5FFE32AF88F0F6CBB665061_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)(L_0);
	}
}
// Method Definition Index: 107315
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A TypeConverter_2_Invoke_m23FC7F630D53A3123DC7A011E601A01F56D965FE_gshared_inline (TypeConverter_2_tD6D1604B2DCFEB45D1885E1C5A6AA26DBAD50E5F* __this, uint64_t* ___0_value, const RuntimeMethod* method) 
{
	typedef UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 49627
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m2214A49C41DF7044BF9E46A31DDEFCF30E222BA5_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)(L_0);
	}
}
// Method Definition Index: 107315
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeConverter_2_Invoke_mEBE52EDE6BB158A3931FC005C17BA29E77C3A428_gshared_inline (TypeConverter_2_t7352D4A1AB4EE912C593B1CFEF10E9B9A14C9D0C* __this, uint64_t* ___0_value, const RuntimeMethod* method) 
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 49627
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7339E1D9120843E5B76233A0A62D3810A03E9E4B_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(L_0);
	}
}
// Method Definition Index: 107315
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeConverter_2_Invoke_mC2318EB9013E659C6C2BD2A9295629301B030973_gshared_inline (TypeConverter_2_t1674952CD7CA572DACE4B8B62B277A454FFD5244* __this, uint64_t* ___0_value, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 49627
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7F542817C2E4A678C11E38F9DC832B19BE154A82_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(L_0);
	}
}
// Method Definition Index: 107315
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeConverter_2_Invoke_mA146BFD1D80B5052AA2FB39953FED09BCB40D840_gshared_inline (TypeConverter_2_t0D1ACA65D6A02C5FA97E867E1A45E2E4884B4D6A* __this, uint64_t* ___0_value, const RuntimeMethod* method) 
{
	typedef Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 49627
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9C4B6C27B7225FC18A0BC10B8BDDA7925ADBFF79_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(L_0);
	}
}
// Method Definition Index: 107315
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_m22056620738FD44283C48FEFE188EBF9C3817904_gshared_inline (TypeConverter_2_t7E280199B9D2473089552A2C810A473A1C4B7BE5* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, bool*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 107315
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_m939AD919BAE47059A0F1EC29FEA27D5BE94F4497_gshared_inline (TypeConverter_2_t547296520B171FDA874443658579914AA93417AA* __this, uint8_t* ___0_value, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, uint8_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
