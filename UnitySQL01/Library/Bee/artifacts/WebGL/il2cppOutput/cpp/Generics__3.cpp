﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
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
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36;
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
struct Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318;
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505;
struct EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1;
struct ICollection_1_tA15C88CD562D52ED6B4D981EC7F4A5558BD52C6A;
struct ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0;
struct ICollection_1_tD56FFE4395E7AAA9BC6513B7180B31801ABF0135;
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
struct ICollection_1_tF8D105E240C60F8D8E0FDCB8EB7CA68B525BA34C;
struct ICollection_1_tF4C64DF26B8FE4410E638D50CB7C3382DB4E8266;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IEnumerator_1_t219B6CDC6BCDE713F92DBFE76942F60999C67C97;
struct IEnumerator_1_t819E733E3DA1171A575B03B1B06FD64D9406E196;
struct IEnumerator_1_tC9CB00ADB39129F8F2CAD02626A4AF7BEBDF96EC;
struct IEnumerator_1_t327FF232159D9644239A65F54312F684DB7BE375;
struct IEnumerator_1_tF0EC5B3FFCD3EA6401D7DFF18F4EC359E84035A9;
struct IEnumerator_1_t535BEFB917EB1D803D332DFF1480088D7D3C7A24;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEnumerator_1_t8A20B9E97C5C8B430E0D2665BCD73989500E0A2B;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_tA4FF235620F3AC81D5CAC53556987A2EF981D346;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEqualityComparer_1_t984D540FC208A2CABAB23A4D766E1C17CA1D0833;
struct KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08;
struct KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9;
struct KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39;
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
struct KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F;
struct KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75;
struct ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD;
struct ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86;
struct ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6;
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
struct ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D;
struct ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305;
struct EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B;
struct EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75;
struct EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01;
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
struct EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF;
struct EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F;
struct KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7;
struct KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3;
struct KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389;
struct KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com;
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke;

struct EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B;
struct EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75;
struct EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01;
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
struct EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF;
struct EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F;
struct KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7;
struct KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3;
struct KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389;
struct KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08* ____keys;
	ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* ____keys;
	ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39* ____keys;
	ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* ____keys;
	ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F* ____keys;
	ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* ____keys;
	ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* ____keys;
	ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505  : public RuntimeObject
{
};
struct EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1  : public RuntimeObject
{
};
struct KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08  : public RuntimeObject
{
	Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* ____dictionary;
};
struct KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9  : public RuntimeObject
{
	Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ____dictionary;
};
struct KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39  : public RuntimeObject
{
	Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* ____dictionary;
};
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974  : public RuntimeObject
{
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary;
};
struct KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F  : public RuntimeObject
{
	Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ____dictionary;
};
struct KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9  : public RuntimeObject
{
	Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ____dictionary;
};
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75  : public RuntimeObject
{
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ____dictionary;
};
struct ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD  : public RuntimeObject
{
	Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* ____dictionary;
};
struct ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86  : public RuntimeObject
{
	Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ____dictionary;
};
struct ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6  : public RuntimeObject
{
	Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* ____dictionary;
};
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA  : public RuntimeObject
{
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary;
};
struct ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D  : public RuntimeObject
{
	Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ____dictionary;
};
struct ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7  : public RuntimeObject
{
	Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ____dictionary;
};
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305  : public RuntimeObject
{
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ____dictionary;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	bool ___value;
};
struct Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	int32_t ___value;
};
struct Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	int32_t ___value;
};
struct Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
typedef Il2CppFullySharedGenericStruct Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3;
struct KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 
{
	RuntimeObject* ___key;
	bool ___value;
};
struct KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 
{
	RuntimeObject* ___key;
	int32_t ___value;
};
struct KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E 
{
	RuntimeObject* ___key;
	int32_t ___value;
};
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 
{
	RuntimeObject* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_pinvoke
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_com
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
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
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 
{
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ____page;
	int32_t ____idx;
};
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_pinvoke
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke* ____page;
	int32_t ____idx;
};
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_com
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com* ____page;
	int32_t ____idx;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 
{
	int32_t ____options;
	String_t* ____cultureKey;
	String_t* ____pattern;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_pinvoke
{
	int32_t ____options;
	char* ____cultureKey;
	char* ____pattern;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_com
{
	int32_t ____options;
	Il2CppChar* ____cultureKey;
	Il2CppChar* ____pattern;
};
struct Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___value;
};
struct Entry_tE850363938764CC80F151D8A949A63B1588A5BF9 
{
	int32_t ___hashCode;
	int32_t ___next;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___key;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___value;
};
struct Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 
{
	int32_t ___hashCode;
	int32_t ___next;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key;
	RuntimeObject* ___value;
};
struct Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B 
{
	Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF 
{
	Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6 
{
	Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current;
	int32_t ____getEnumeratorRetType;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;
struct KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 
{
	RuntimeObject* ___key;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___value;
};
struct KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 
{
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___key;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___value;
};
struct KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 
{
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key;
	RuntimeObject* ___value;
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
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF 
{
	Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 
{
	Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 
{
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 ____current;
	int32_t ____getEnumeratorRetType;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505_StaticFields
{
	EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* ___defaultComparer;
};
struct EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411_StaticFields
{
	EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1_StaticFields
{
	EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* ___defaultComparer;
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
struct EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C m_Items[1];

	inline Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 m_Items[1];

	inline KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 m_Items[1];

	inline Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 m_Items[1];

	inline KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202 m_Items[1];

	inline Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E m_Items[1];

	inline KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC m_Items[1];

	inline Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 m_Items[1];

	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC m_Items[1];

	inline Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____value), (void*)NULL);
		#endif
	}
	inline Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 m_Items[1];

	inline KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____value), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tE850363938764CC80F151D8A949A63B1588A5BF9 m_Items[1];

	inline Entry_tE850363938764CC80F151D8A949A63B1588A5BF9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tE850363938764CC80F151D8A949A63B1588A5BF9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____page), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____page), (void*)NULL);
		#endif
	}
	inline Entry_tE850363938764CC80F151D8A949A63B1588A5BF9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tE850363938764CC80F151D8A949A63B1588A5BF9 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____page), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____page), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 m_Items[1];

	inline KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____page), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____page), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____page), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____page), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 m_Items[1];

	inline Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____cultureKey), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____pattern), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____cultureKey), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____pattern), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 m_Items[1];

	inline KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____cultureKey), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____pattern), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____cultureKey), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____pattern), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB99E4E6717681398087293F1ED2160AAE6EB6277_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7B3CAD83EB66C3E70AEA3C83F7648CB4DABF5094_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m41C59F846B6BB1DBA32C2E40CF72651CF5C23C2C_gshared (KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08* __this, Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mF201EBCB9945EB7DCE71647D24F75C5CAE4719BC_gshared (ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* __this, Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m8FC34A0E3AA12E15881486F91D32A61E92D04F32_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m1DBFDC04AD6D6432A7FE2AD619C38C47FB8391B1_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m06DE41B832D936F9A7884C491F10EC651D0EA065_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3410C28AE4E1AB9B3387CC479F63A8C8BF22AEEF_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mD5387DFB5DBC4480D0B4AE08AC25F7E44599D507_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m57BB84A94F6F00F1CADA0C8C921E726D8D4A4854_gshared (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m53A63D389B2C13C44B85214613A9EBE6154706C8_gshared (Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B* __this, Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m3548AD486A573C78C9388893FC698936157C1A7B_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m56A0108422EE2073011693F3BEDC09FF52072CCF_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2424A64B3333FBF16C1AD560C39FEF7FBA04222C_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m441D7D44B88C20AA369DEFE607F6ADF27EEEDF7F_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF1A7BA3C1568A00A32A43BCD889038FE080F77BF_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mBEDE43E001DFC228FF4DA06FBCA7CC215C8E7C73_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4C802F609D63FAB6D65E2A9A52080657CCD56319_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mC39F51856A2FCB002B71F68D2F67A8F6BEBD112B_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mD6272217B2390F156AEAD333CFBC0680AE18C348_gshared (KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* __this, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mC90880ED6157A668A5F1AB911945610274CEEA97_gshared (ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* __this, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m8BAD262739BDF6B9D5E637ACF5BE09E1750CAF27_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_gshared_inline (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_gshared_inline (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mEE80B960C3B902E5FB4D2458CEB323B68A954926_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD4B5AD912DE40BAACCC9A814640E4E3386E51BA8_gshared (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m4BE90A5CD5CEA288887B83F5E4F7D73EB35F9886_gshared (Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF* __this, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mEFBCCFA46BFC70F908C19BF58E6D16F3288607DF_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDC4C0DDB962EBDA7258647BDBC7B568948DD84E5_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3EC90D494DFBD871587E0A4F4D8D4E982BCB9F75_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m74B7AAB4C5806B096CC78BBB9C69EF6E4BFAE571_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCA459A185D015CE8748087064B1626AF8C07F998_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mBC34B4348592C84E757A93637BB081529726D111_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m1DDAAFD48BF3ED7E15B38E7D071A0AB75BED7DE0_gshared (KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39* __this, Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m7F42AEC082347EE9159026A43211C8A223C66F26_gshared (ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6* __this, Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m734E6FEEBAF5B010696F3FC05F61E86E059309AC_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m86AE13BB485AC7F1EC588285A0B5A279914982DC_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mD14A5316A7715DA2836B07BF240EC5E4D095F10B_gshared_inline (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m78EF0CBE211C8EF4C4A5D0ABD95349A0D32B46BA_gshared_inline (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m53A4E919CB3AE7CC74379031E14C1AEA9DB7A933_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m01C457D21E125EBF1F8E25FC97116753746A8629_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m36874AA15E8FDC5B6FCA750FD427E2AAF833AF60_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m5F61006E81BB25289F0C3D745455FB1CCAA02260_gshared (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9ADB868E1ED9E8EDCD69E204491B2ACAE057C37F_gshared (Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6* __this, Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mEFF090C74B306E619486D47595466B7CA36A099E_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5C3CB7870F7AD4CC7A08F579E1FE750B01A3EDFD_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m1952E437421DDF86044AD290578CBD66AFE48EF1_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mAFA95909B33F8017D292ED06CDF0C853D3C555C2_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC0F84089707699016E685213CFF60997BC7CB12B_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m480A9507410375C999B20A1E0FA56C7E41489974_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF67467217142A79C407188798209E4524D74D34F_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m8C8AD88CD59FD99C812609BBFB9B3A263C210BF3_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mB09A4A925402CEC82C11FFE407E6F4096790D7DC_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m4EB5F9B4490E4588B314C97B3BC0CD8E9432D79A_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m8AC342129E60FB993AF5F8521D0C1F8D078E4F61_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE5E1D7345A65B2BA11AA747A2A83C94D83835E00_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA6C088D61E2C3298854B5E200885EE8C83DC7FCD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA59B4C46D3FD1E0488449B2A24B4E8FA720B1A17_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m1352264619A59DDDDED2B786BB60912F4CACCEE8_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF327E2A6657566F6A7D2632C9541A577A636E0DD_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m9FDAF89B9F36D28947DE20D8A08B1EC1870674CE_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mFC062DA3DAAFD62BF27D0F3BA56F511B29117D6A_gshared (KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F* __this, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m7AF97DA41A9EFC656143299750EC272BF166E013_gshared (ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D* __this, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA877E9F2724470175BF5E244978CE1C5FF9DE16D_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_gshared_inline (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 KeyValuePair_2_get_Value_mFE352005BECB8CC1491A710CCFC837B564E820A4_gshared_inline (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBEBAE295606EB0AC491B3D8DF66D0F0F8209BFFF_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m214849DB755B3CD82BE59B12DC0957421F5782E4_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m09F5D830600036283BE79E8E817261A680DE8336_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m982AF106BE17B9ED0CE94057606E3DC94F57C66F_gshared (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m962BC1F82D75DECC72006F3CD7CF84629D660E31_gshared (Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF* __this, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m43B32D6BF8FFC3AB12A034286DF5D53E1F1E285C_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDCF81BA6E7AD5E970C1164BD764FD1B09DA54908_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m0B33583AB3945F266499F443DD2BFA66084E6A2F_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mE011D3CA1F277C14519A681E846DD28F7F0C2076_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m6EC3BF5BBE81398B3CD063FFC28872ABA0FF6953_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m9F770BB8AD4D8B4E14CA6F397A4D7E44661968C5_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCAA291BC8A0F9DE7E5BEF2272BEBC0A0A7580706_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m421F3590090FECC9384E0A2922FBB54180B34579_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m31D2AF1C181005502164CA4DAD208EE4DD9DB59E_gshared (KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* __this, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m0D1D55AC4B16C4AF03DE43D5B408C3396CE61465_gshared (ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* __this, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mE6CB7E2A268B1BB09CFBB5106D129FF739B0569C_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_gshared_inline (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 KeyValuePair_2_get_Value_mB24B9E0A407074537FD1D3A0649C8A85704B057F_gshared_inline (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mE1258769871BEB13AAC7AB1EC59D57AB799B74D1_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mADFC592E5CA281E2AF1221CE45FC9EE7D2AA1646_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m8FB83A511CBD8E87C4B76B13161BCF5AED0D6C16_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mE87676080E91A2A32A27135A3EF04BEC8E2EBEE6_gshared (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1EDECAF353D448162F5DC259F478EC28985C50FA_gshared (Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863* __this, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m73785D4B552D84FA1D201EAE45F0EB7CE59B4400_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mF88350DAC9079ECFEDFAEF7869880A1A81F895BE_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5207780E2C3E7F9DDC3EE357A99DEE5048B3A864_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m9BB716D3E0E7E52AF66FCB82F2E1E6F86C8B121A_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_m442C8C93DC5454CE5F953408866A7B5761EE1F30_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m8648C3BECE952DC317626512BB228420B4BB3E90_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mC2374D05E07DB677F2804413801EE682DC5E41BD_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m7DD9CC8A8D66F5E96F17286F215CD22CCCDD1DF7_gshared (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m4CA056E40F3696B0F634BE02C68CE9107C7598C8_gshared (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_gshared_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_gshared_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2_gshared (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D_gshared (Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m897DFE92D2953E564DE90594548FCAFE0981A375_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m985506E79EE868501F78DDACCA0D0748751E5327_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2387B91BA1614F8BD0037CF10888678FC0213FF0_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD3382707B0A0977575551EF563A509A60695AD4F_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* EqualityComparer_1_CreateComparer_m931FF926579EC7BABDD76C5453220EAF279A5882_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* EqualityComparer_1_CreateComparer_mAA45B05C7943D68C13B6088091B86D8AF7ACA704_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* EqualityComparer_1_CreateComparer_m6D99876F3A0CC92388F04FA521AFA20EDAF66D25_gshared (const RuntimeMethod* method) ;

inline void Dictionary_2__ctor_mB99E4E6717681398087293F1ED2160AAE6EB6277 (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB99E4E6717681398087293F1ED2160AAE6EB6277_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_m7B3CAD83EB66C3E70AEA3C83F7648CB4DABF5094 (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m7B3CAD83EB66C3E70AEA3C83F7648CB4DABF5094_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___0_key, ___1_value, method);
}
inline void KeyCollection__ctor_m41C59F846B6BB1DBA32C2E40CF72651CF5C23C2C (KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08* __this, Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08*, Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, const RuntimeMethod*))KeyCollection__ctor_m41C59F846B6BB1DBA32C2E40CF72651CF5C23C2C_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mF201EBCB9945EB7DCE71647D24F75C5CAE4719BC (ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* __this, Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD*, Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, const RuntimeMethod*))ValueCollection__ctor_mF201EBCB9945EB7DCE71647D24F75C5CAE4719BC_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m8FC34A0E3AA12E15881486F91D32A61E92D04F32 (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_FindEntry_m8FC34A0E3AA12E15881486F91D32A61E92D04F32_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_m1DBFDC04AD6D6432A7FE2AD619C38C47FB8391B1 (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, bool, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m1DBFDC04AD6D6432A7FE2AD619C38C47FB8391B1_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline RuntimeObject* KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423*, const RuntimeMethod*))KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_gshared_inline)(__this, method);
}
inline bool KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m06DE41B832D936F9A7884C491F10EC651D0EA065 (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, bool, const RuntimeMethod*))Dictionary_2_Add_m06DE41B832D936F9A7884C491F10EC651D0EA065_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m3410C28AE4E1AB9B3387CC479F63A8C8BF22AEEF (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m3410C28AE4E1AB9B3387CC479F63A8C8BF22AEEF_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mD5387DFB5DBC4480D0B4AE08AC25F7E44599D507 (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, const RuntimeMethod*))Dictionary_2_get_Count_mD5387DFB5DBC4480D0B4AE08AC25F7E44599D507_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_m57BB84A94F6F00F1CADA0C8C921E726D8D4A4854 (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423*, RuntimeObject*, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m57BB84A94F6F00F1CADA0C8C921E726D8D4A4854_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m53A63D389B2C13C44B85214613A9EBE6154706C8 (Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B* __this, Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B*, Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, int32_t, const RuntimeMethod*))Enumerator__ctor_m53A63D389B2C13C44B85214613A9EBE6154706C8_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_m3548AD486A573C78C9388893FC698936157C1A7B (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m3548AD486A573C78C9388893FC698936157C1A7B_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m56A0108422EE2073011693F3BEDC09FF52072CCF (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, const RuntimeMethod*))Dictionary_2_Resize_m56A0108422EE2073011693F3BEDC09FF52072CCF_gshared)(__this, method);
}
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m2424A64B3333FBF16C1AD560C39FEF7FBA04222C (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m2424A64B3333FBF16C1AD560C39FEF7FBA04222C_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline bool Dictionary_2_IsCompatibleKey_m441D7D44B88C20AA369DEFE607F6ADF27EEEDF7F (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m441D7D44B88C20AA369DEFE607F6ADF27EEEDF7F_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mF1A7BA3C1568A00A32A43BCD889038FE080F77BF (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, bool, const RuntimeMethod*))Dictionary_2_set_Item_mF1A7BA3C1568A00A32A43BCD889038FE080F77BF_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_mBEDE43E001DFC228FF4DA06FBCA7CC215C8E7C73 (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_mBEDE43E001DFC228FF4DA06FBCA7CC215C8E7C73_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m4C802F609D63FAB6D65E2A9A52080657CCD56319 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m4C802F609D63FAB6D65E2A9A52080657CCD56319_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mC39F51856A2FCB002B71F68D2F67A8F6BEBD112B (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mC39F51856A2FCB002B71F68D2F67A8F6BEBD112B_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_mD6272217B2390F156AEAD333CFBC0680AE18C348 (KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* __this, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9*, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, const RuntimeMethod*))KeyCollection__ctor_mD6272217B2390F156AEAD333CFBC0680AE18C348_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mC90880ED6157A668A5F1AB911945610274CEEA97 (ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* __this, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86*, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, const RuntimeMethod*))ValueCollection__ctor_mC90880ED6157A668A5F1AB911945610274CEEA97_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m8BAD262739BDF6B9D5E637ACF5BE09E1750CAF27 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, int32_t, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m8BAD262739BDF6B9D5E637ACF5BE09E1750CAF27_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline RuntimeObject* KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_inline (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*, const RuntimeMethod*))KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_gshared_inline)(__this, method);
}
inline int32_t KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_inline (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*, const RuntimeMethod*))KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mEE80B960C3B902E5FB4D2458CEB323B68A954926 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, const RuntimeMethod*))Dictionary_2_get_Count_mEE80B960C3B902E5FB4D2458CEB323B68A954926_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mD4B5AD912DE40BAACCC9A814640E4E3386E51BA8 (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*, RuntimeObject*, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_mD4B5AD912DE40BAACCC9A814640E4E3386E51BA8_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m4BE90A5CD5CEA288887B83F5E4F7D73EB35F9886 (Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF* __this, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF*, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, int32_t, const RuntimeMethod*))Enumerator__ctor_m4BE90A5CD5CEA288887B83F5E4F7D73EB35F9886_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mEFBCCFA46BFC70F908C19BF58E6D16F3288607DF (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mEFBCCFA46BFC70F908C19BF58E6D16F3288607DF_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mDC4C0DDB962EBDA7258647BDBC7B568948DD84E5 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, const RuntimeMethod*))Dictionary_2_Resize_mDC4C0DDB962EBDA7258647BDBC7B568948DD84E5_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m3EC90D494DFBD871587E0A4F4D8D4E982BCB9F75 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m3EC90D494DFBD871587E0A4F4D8D4E982BCB9F75_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m74B7AAB4C5806B096CC78BBB9C69EF6E4BFAE571 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m74B7AAB4C5806B096CC78BBB9C69EF6E4BFAE571_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mCA459A185D015CE8748087064B1626AF8C07F998 (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mCA459A185D015CE8748087064B1626AF8C07F998_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mBC34B4348592C84E757A93637BB081529726D111 (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mBC34B4348592C84E757A93637BB081529726D111_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_m1DDAAFD48BF3ED7E15B38E7D071A0AB75BED7DE0 (KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39* __this, Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39*, Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, const RuntimeMethod*))KeyCollection__ctor_m1DDAAFD48BF3ED7E15B38E7D071A0AB75BED7DE0_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m7F42AEC082347EE9159026A43211C8A223C66F26 (ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6* __this, Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6*, Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, const RuntimeMethod*))ValueCollection__ctor_m7F42AEC082347EE9159026A43211C8A223C66F26_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m734E6FEEBAF5B010696F3FC05F61E86E059309AC (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_FindEntry_m734E6FEEBAF5B010696F3FC05F61E86E059309AC_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m86AE13BB485AC7F1EC588285A0B5A279914982DC (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, int32_t, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m86AE13BB485AC7F1EC588285A0B5A279914982DC_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline RuntimeObject* KeyValuePair_2_get_Key_mD14A5316A7715DA2836B07BF240EC5E4D095F10B_inline (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E*, const RuntimeMethod*))KeyValuePair_2_get_Key_mD14A5316A7715DA2836B07BF240EC5E4D095F10B_gshared_inline)(__this, method);
}
inline int32_t KeyValuePair_2_get_Value_m78EF0CBE211C8EF4C4A5D0ABD95349A0D32B46BA_inline (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E*, const RuntimeMethod*))KeyValuePair_2_get_Value_m78EF0CBE211C8EF4C4A5D0ABD95349A0D32B46BA_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m53A4E919CB3AE7CC74379031E14C1AEA9DB7A933 (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m53A4E919CB3AE7CC74379031E14C1AEA9DB7A933_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m01C457D21E125EBF1F8E25FC97116753746A8629 (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m01C457D21E125EBF1F8E25FC97116753746A8629_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m36874AA15E8FDC5B6FCA750FD427E2AAF833AF60 (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, const RuntimeMethod*))Dictionary_2_get_Count_m36874AA15E8FDC5B6FCA750FD427E2AAF833AF60_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m5F61006E81BB25289F0C3D745455FB1CCAA02260 (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E*, RuntimeObject*, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m5F61006E81BB25289F0C3D745455FB1CCAA02260_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m9ADB868E1ED9E8EDCD69E204491B2ACAE057C37F (Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6* __this, Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6*, Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, int32_t, const RuntimeMethod*))Enumerator__ctor_m9ADB868E1ED9E8EDCD69E204491B2ACAE057C37F_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mEFF090C74B306E619486D47595466B7CA36A099E (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mEFF090C74B306E619486D47595466B7CA36A099E_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m5C3CB7870F7AD4CC7A08F579E1FE750B01A3EDFD (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, const RuntimeMethod*))Dictionary_2_Resize_m5C3CB7870F7AD4CC7A08F579E1FE750B01A3EDFD_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m1952E437421DDF86044AD290578CBD66AFE48EF1 (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m1952E437421DDF86044AD290578CBD66AFE48EF1_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_mAFA95909B33F8017D292ED06CDF0C853D3C555C2 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mAFA95909B33F8017D292ED06CDF0C853D3C555C2_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mC0F84089707699016E685213CFF60997BC7CB12B (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mC0F84089707699016E685213CFF60997BC7CB12B_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m480A9507410375C999B20A1E0FA56C7E41489974 (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m480A9507410375C999B20A1E0FA56C7E41489974_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mF67467217142A79C407188798209E4524D74D34F (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mF67467217142A79C407188798209E4524D74D34F_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m8C8AD88CD59FD99C812609BBFB9B3A263C210BF3 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m8C8AD88CD59FD99C812609BBFB9B3A263C210BF3_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_mB09A4A925402CEC82C11FFE407E6F4096790D7DC (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974*, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))KeyCollection__ctor_mB09A4A925402CEC82C11FFE407E6F4096790D7DC_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m4EB5F9B4490E4588B314C97B3BC0CD8E9432D79A (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA*, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))ValueCollection__ctor_m4EB5F9B4490E4588B314C97B3BC0CD8E9432D79A_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m8AC342129E60FB993AF5F8521D0C1F8D078E4F61 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m8AC342129E60FB993AF5F8521D0C1F8D078E4F61_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950 (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54 (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9*, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, int32_t, const RuntimeMethod*))Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mE5E1D7345A65B2BA11AA747A2A83C94D83835E00 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mE5E1D7345A65B2BA11AA747A2A83C94D83835E00_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mA6C088D61E2C3298854B5E200885EE8C83DC7FCD (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))Dictionary_2_Resize_mA6C088D61E2C3298854B5E200885EE8C83DC7FCD_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mA59B4C46D3FD1E0488449B2A24B4E8FA720B1A17 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mA59B4C46D3FD1E0488449B2A24B4E8FA720B1A17_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m1352264619A59DDDDED2B786BB60912F4CACCEE8 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m1352264619A59DDDDED2B786BB60912F4CACCEE8_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mF327E2A6657566F6A7D2632C9541A577A636E0DD (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mF327E2A6657566F6A7D2632C9541A577A636E0DD_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m9FDAF89B9F36D28947DE20D8A08B1EC1870674CE (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m9FDAF89B9F36D28947DE20D8A08B1EC1870674CE_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_mFC062DA3DAAFD62BF27D0F3BA56F511B29117D6A (KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F* __this, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F*, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, const RuntimeMethod*))KeyCollection__ctor_mFC062DA3DAAFD62BF27D0F3BA56F511B29117D6A_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m7AF97DA41A9EFC656143299750EC272BF166E013 (ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D* __this, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D*, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, const RuntimeMethod*))ValueCollection__ctor_m7AF97DA41A9EFC656143299750EC272BF166E013_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mA877E9F2724470175BF5E244978CE1C5FF9DE16D (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, RuntimeObject*, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mA877E9F2724470175BF5E244978CE1C5FF9DE16D_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline RuntimeObject* KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_inline (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2*, const RuntimeMethod*))KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_gshared_inline)(__this, method);
}
inline ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 KeyValuePair_2_get_Value_mFE352005BECB8CC1491A710CCFC837B564E820A4_inline (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* __this, const RuntimeMethod* method)
{
	return ((  ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 (*) (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFE352005BECB8CC1491A710CCFC837B564E820A4_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mBEBAE295606EB0AC491B3D8DF66D0F0F8209BFFF (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, RuntimeObject*, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, const RuntimeMethod*))Dictionary_2_Add_mBEBAE295606EB0AC491B3D8DF66D0F0F8209BFFF_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m214849DB755B3CD82BE59B12DC0957421F5782E4 (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m214849DB755B3CD82BE59B12DC0957421F5782E4_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m09F5D830600036283BE79E8E817261A680DE8336 (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, const RuntimeMethod*))Dictionary_2_get_Count_m09F5D830600036283BE79E8E817261A680DE8336_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m982AF106BE17B9ED0CE94057606E3DC94F57C66F (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2*, RuntimeObject*, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, const RuntimeMethod*))KeyValuePair_2__ctor_m982AF106BE17B9ED0CE94057606E3DC94F57C66F_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m962BC1F82D75DECC72006F3CD7CF84629D660E31 (Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF* __this, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF*, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, int32_t, const RuntimeMethod*))Enumerator__ctor_m962BC1F82D75DECC72006F3CD7CF84629D660E31_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m43B32D6BF8FFC3AB12A034286DF5D53E1F1E285C (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m43B32D6BF8FFC3AB12A034286DF5D53E1F1E285C_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mDCF81BA6E7AD5E970C1164BD764FD1B09DA54908 (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, const RuntimeMethod*))Dictionary_2_Resize_mDCF81BA6E7AD5E970C1164BD764FD1B09DA54908_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m0B33583AB3945F266499F443DD2BFA66084E6A2F (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m0B33583AB3945F266499F443DD2BFA66084E6A2F_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_mE011D3CA1F277C14519A681E846DD28F7F0C2076 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mE011D3CA1F277C14519A681E846DD28F7F0C2076_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m6EC3BF5BBE81398B3CD063FFC28872ABA0FF6953 (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, RuntimeObject*, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, const RuntimeMethod*))Dictionary_2_set_Item_m6EC3BF5BBE81398B3CD063FFC28872ABA0FF6953_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m9F770BB8AD4D8B4E14CA6F397A4D7E44661968C5 (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m9F770BB8AD4D8B4E14CA6F397A4D7E44661968C5_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mCAA291BC8A0F9DE7E5BEF2272BEBC0A0A7580706 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mCAA291BC8A0F9DE7E5BEF2272BEBC0A0A7580706_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m421F3590090FECC9384E0A2922FBB54180B34579 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m421F3590090FECC9384E0A2922FBB54180B34579_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_gshared_inline)(method);
}
inline void KeyCollection__ctor_m31D2AF1C181005502164CA4DAD208EE4DD9DB59E (KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* __this, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9*, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, const RuntimeMethod*))KeyCollection__ctor_m31D2AF1C181005502164CA4DAD208EE4DD9DB59E_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m0D1D55AC4B16C4AF03DE43D5B408C3396CE61465 (ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* __this, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7*, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, const RuntimeMethod*))ValueCollection__ctor_m0D1D55AC4B16C4AF03DE43D5B408C3396CE61465_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, const RuntimeMethod*))Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mE6CB7E2A268B1BB09CFBB5106D129FF739B0569C (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mE6CB7E2A268B1BB09CFBB5106D129FF739B0569C_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_inline (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* __this, const RuntimeMethod* method)
{
	return ((  XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 (*) (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937*, const RuntimeMethod*))KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_gshared_inline)(__this, method);
}
inline XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 KeyValuePair_2_get_Value_mB24B9E0A407074537FD1D3A0649C8A85704B057F_inline (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* __this, const RuntimeMethod* method)
{
	return ((  XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 (*) (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937*, const RuntimeMethod*))KeyValuePair_2_get_Value_mB24B9E0A407074537FD1D3A0649C8A85704B057F_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mE1258769871BEB13AAC7AB1EC59D57AB799B74D1 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, const RuntimeMethod*))Dictionary_2_Add_mE1258769871BEB13AAC7AB1EC59D57AB799B74D1_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_mADFC592E5CA281E2AF1221CE45FC9EE7D2AA1646 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, const RuntimeMethod*))Dictionary_2_Remove_mADFC592E5CA281E2AF1221CE45FC9EE7D2AA1646_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m8FB83A511CBD8E87C4B76B13161BCF5AED0D6C16 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, const RuntimeMethod*))Dictionary_2_get_Count_m8FB83A511CBD8E87C4B76B13161BCF5AED0D6C16_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mE87676080E91A2A32A27135A3EF04BEC8E2EBEE6 (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937*, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, const RuntimeMethod*))KeyValuePair_2__ctor_mE87676080E91A2A32A27135A3EF04BEC8E2EBEE6_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m1EDECAF353D448162F5DC259F478EC28985C50FA (Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863* __this, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863*, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, int32_t, const RuntimeMethod*))Enumerator__ctor_m1EDECAF353D448162F5DC259F478EC28985C50FA_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m73785D4B552D84FA1D201EAE45F0EB7CE59B4400 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m73785D4B552D84FA1D201EAE45F0EB7CE59B4400_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNodeRef_GetHashCode_mA438A76A5D2970E8AEC24529F5D03905D9A71F0C (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mF88350DAC9079ECFEDFAEF7869880A1A81F895BE (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, const RuntimeMethod*))Dictionary_2_Resize_mF88350DAC9079ECFEDFAEF7869880A1A81F895BE_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m5207780E2C3E7F9DDC3EE357A99DEE5048B3A864 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m5207780E2C3E7F9DDC3EE357A99DEE5048B3A864_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m9BB716D3E0E7E52AF66FCB82F2E1E6F86C8B121A (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m9BB716D3E0E7E52AF66FCB82F2E1E6F86C8B121A_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_m442C8C93DC5454CE5F953408866A7B5761EE1F30 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_m442C8C93DC5454CE5F953408866A7B5761EE1F30_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m8648C3BECE952DC317626512BB228420B4BB3E90 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, const RuntimeMethod*))Dictionary_2_set_Item_m8648C3BECE952DC317626512BB228420B4BB3E90_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mC2374D05E07DB677F2804413801EE682DC5E41BD (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, const RuntimeMethod*))Dictionary_2_ContainsKey_mC2374D05E07DB677F2804413801EE682DC5E41BD_gshared)(__this, ___0_key, method);
}
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1 (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_gshared_inline)(method);
}
inline void KeyCollection__ctor_m7DD9CC8A8D66F5E96F17286F215CD22CCCDD1DF7 (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75*, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))KeyCollection__ctor_m7DD9CC8A8D66F5E96F17286F215CD22CCCDD1DF7_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m4CA056E40F3696B0F634BE02C68CE9107C7598C8 (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305*, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))ValueCollection__ctor_m4CA056E40F3696B0F634BE02C68CE9107C7598C8_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, const RuntimeMethod*))Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method)
{
	return ((  CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 (*) (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95*, const RuntimeMethod*))KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95*, const RuntimeMethod*))KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, const RuntimeMethod*))Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2 (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D (Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750*, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, const RuntimeMethod*))Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m897DFE92D2953E564DE90594548FCAFE0981A375 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))Dictionary_2_Resize_m897DFE92D2953E564DE90594548FCAFE0981A375_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m985506E79EE868501F78DDACCA0D0748751E5327 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m985506E79EE868501F78DDACCA0D0748751E5327_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_m2387B91BA1614F8BD0037CF10888678FC0213FF0 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m2387B91BA1614F8BD0037CF10888678FC0213FF0_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mD3382707B0A0977575551EF563A509A60695AD4F (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, const RuntimeMethod*))Dictionary_2_ContainsKey_mD3382707B0A0977575551EF563A509A60695AD4F_gshared)(__this, ___0_key, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared)(method);
}
inline EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* EqualityComparer_1_CreateComparer_m931FF926579EC7BABDD76C5453220EAF279A5882 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m931FF926579EC7BABDD76C5453220EAF279A5882_gshared)(method);
}
inline EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* EqualityComparer_1_CreateComparer_mAA45B05C7943D68C13B6088091B86D8AF7ACA704 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mAA45B05C7943D68C13B6088091B86D8AF7ACA704_gshared)(method);
}
inline EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* EqualityComparer_1_CreateComparer_m6D99876F3A0CC92388F04FA521AFA20EDAF66D25 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m6D99876F3A0CC92388F04FA521AFA20EDAF66D25_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0D0F99974D7435C4E08FE9A9A632C9E5430F8454_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mB99E4E6717681398087293F1ED2160AAE6EB6277(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0F33DA8746CDA058229FFBD24348B82A5AB46543_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mB99E4E6717681398087293F1ED2160AAE6EB6277(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m667D955954A4992414F9B70FAFA8E6F4ECF485D6_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mB99E4E6717681398087293F1ED2160AAE6EB6277(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB99E4E6717681398087293F1ED2160AAE6EB6277_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7B3CAD83EB66C3E70AEA3C83F7648CB4DABF5094(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4CC5B85AEE0F24A93FDE0E5774E6005E4080F8DF_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mD5387DFB5DBC4480D0B4AE08AC25F7E44599D507_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08* Dictionary_2_get_Keys_mFDF56AF2BA76C6CCAF215187B66751FC03E474FD_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08* L_1 = (KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m41C59F846B6BB1DBA32C2E40CF72651CF5C23C2C(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* Dictionary_2_get_Values_mE768DCAD63914CE1B11F2AF4CBC7EA821AB6BBB0_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* L_1 = (ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_mF201EBCB9945EB7DCE71647D24F75C5CAE4719BC(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_mA7F4F4D782380EB28BA557745C9631BC28E622FD_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* L_1 = (ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_mF201EBCB9945EB7DCE71647D24F75C5CAE4719BC(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_get_Item_mB8DAA0FB328D474EEE65CAF7F132DD9569BBC3A8_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8FC34A0E3AA12E15881486F91D32A61E92D04F32(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		bool L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		bool L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF1A7BA3C1568A00A32A43BCD889038FE080F77BF_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m1DBFDC04AD6D6432A7FE2AD619C38C47FB8391B1(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m06DE41B832D936F9A7884C491F10EC651D0EA065_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m1DBFDC04AD6D6432A7FE2AD619C38C47FB8391B1(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mDFB07D4CDBB53D6A865F6709BC9B11CC2326FD0C_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_1;
		L_1 = KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		Dictionary_2_Add_m06DE41B832D936F9A7884C491F10EC651D0EA065(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21A70FEE907B195575AD8EBEC1DFABA8F6CB3C51_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8FC34A0E3AA12E15881486F91D32A61E92D04F32(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3;
		L_3 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		bool L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		bool L_7;
		L_7 = KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mEF67FC0DDBDB6B645DF6607A00696D3749E19A86_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8FC34A0E3AA12E15881486F91D32A61E92D04F32(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3;
		L_3 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		bool L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		bool L_7;
		L_7 = KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_10;
		L_10 = Dictionary_2_Remove_m3410C28AE4E1AB9B3387CC479F63A8C8BF22AEEF(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE0E8184DB358BEB3549E33D6EEA31FF45B89D99F_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mBEDE43E001DFC228FF4DA06FBCA7CC215C8E7C73_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8FC34A0E3AA12E15881486F91D32A61E92D04F32(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m52D19D04D38A8C3321E97C0DA03732484EC24798_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, bool ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(bool));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_6;
		L_6 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_7 = V_0;
		int32_t L_8 = V_3;
		bool L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		bool L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m3548AD486A573C78C9388893FC698936157C1A7B_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mD5387DFB5DBC4480D0B4AE08AC25F7E44599D507(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_14 = V_1;
		int32_t L_15 = V_2;
		RuntimeObject* L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_17 = V_1;
		int32_t L_18 = V_2;
		bool L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m57BB84A94F6F00F1CADA0C8C921E726D8D4A4854((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B Dictionary_2_GetEnumerator_mC7827569955B8266DAC471AC8CBCADC6416AB941_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53A63D389B2C13C44B85214613A9EBE6154706C8((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m0FD6795B500BA82978481BE8458F6FF651181570_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53A63D389B2C13C44B85214613A9EBE6154706C8((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m3B72874D32BCC12C87F3DE2C83432B5C28263AAB_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mD5387DFB5DBC4480D0B4AE08AC25F7E44599D507(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_14 = (KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7*)(KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_15 = V_0;
		Dictionary_2_CopyTo_m3548AD486A573C78C9388893FC698936157C1A7B(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m8FC34A0E3AA12E15881486F91D32A61E92D04F32_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_20 = V_2;
		int32_t L_21 = V_0;
		RuntimeObject* L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		RuntimeObject* L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_33 = V_2;
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = ((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_39 = V_2;
		int32_t L_40 = V_0;
		RuntimeObject* L_41 = ((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)))->___key;
		RuntimeObject* L_42 = ___0_key;
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_44 = V_2;
		int32_t L_45 = V_0;
		int32_t L_46 = ((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___next;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_48 = V_2;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___0_key;
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_59 = V_2;
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_60 = V_2;
		int32_t L_61 = V_0;
		int32_t L_62 = ((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_65 = V_2;
		int32_t L_66 = V_0;
		RuntimeObject* L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___key;
		RuntimeObject* L_68 = ___0_key;
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_70 = V_2;
		int32_t L_71 = V_0;
		int32_t L_72 = ((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_71)))->___next;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_74 = V_2;
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7B3CAD83EB66C3E70AEA3C83F7648CB4DABF5094_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_5 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)(EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m1DBFDC04AD6D6432A7FE2AD619C38C47FB8391B1_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7B3CAD83EB66C3E70AEA3C83F7648CB4DABF5094(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_25 = V_0;
		int32_t L_26 = V_5;
		RuntimeObject* L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		RuntimeObject* L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_31 = V_0;
		int32_t L_32 = V_5;
		bool L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_36 = V_0;
		int32_t L_37 = V_5;
		int32_t L_38 = ((L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_37)))->___next;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_44 = V_0;
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_45 = V_0;
		int32_t L_46 = V_5;
		int32_t L_47 = ((L_45)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_50 = V_0;
		int32_t L_51 = V_5;
		RuntimeObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___key;
		RuntimeObject* L_53 = ___0_key;
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___2_behavior;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_56 = V_0;
		int32_t L_57 = V_5;
		bool L_58 = ___1_value;
		((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___value = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_61 = V_0;
		int32_t L_62 = V_5;
		int32_t L_63 = ((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___next;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_65 = V_0;
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_68 = V_0;
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_69 = V_0;
		int32_t L_70 = V_5;
		int32_t L_71 = ((L_69)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_74 = V_0;
		int32_t L_75 = V_5;
		RuntimeObject* L_76 = ((L_74)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_75)))->___key;
		RuntimeObject* L_77 = ___0_key;
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___2_behavior;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_80 = V_0;
		int32_t L_81 = V_5;
		bool L_82 = ___1_value;
		((L_80)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_81)))->___value = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_85 = V_0;
		int32_t L_86 = V_5;
		int32_t L_87 = ((L_85)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_86)))->___next;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_89 = V_0;
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = __this->____freeCount;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = __this->____freeList;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = __this->____count;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m56A0108422EE2073011693F3BEDC09FF52072CCF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_99 = __this->____entries;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = __this->____buckets;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = __this->____buckets;
		G_B51_0 = ((L_102)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_105 = V_0;
		int32_t L_106 = V_8;
		V_10 = ((L_105)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_108 = V_10;
		int32_t L_109 = L_108->___next;
		__this->____freeList = L_109;
	}

IL_028a:
	{
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode = L_111;
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_115 = V_10;
		RuntimeObject* L_116 = ___0_key;
		L_115->___key = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key), (void*)L_116);
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_117 = V_10;
		bool L_118 = ___1_value;
		L_117->___value = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m57CFC1C9F7422F2D5158B274A42AFD012810EBA1_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m7B3CAD83EB66C3E70AEA3C83F7648CB4DABF5094(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_19 = V_3;
		int32_t L_20 = V_4;
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_22 = V_3;
		int32_t L_23 = V_4;
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_25 = V_3;
		int32_t L_26 = V_4;
		bool L_27;
		L_27 = KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		Dictionary_2_Add_m06DE41B832D936F9A7884C491F10EC651D0EA065(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m56A0108422EE2073011693F3BEDC09FF52072CCF_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m2424A64B3333FBF16C1AD560C39FEF7FBA04222C(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2424A64B3333FBF16C1AD560C39FEF7FBA04222C_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_3 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)(EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_5 = __this->____entries;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_15 = V_1;
		int32_t L_16 = V_4;
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (*L_17));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3410C28AE4E1AB9B3387CC479F63A8C8BF22AEEF_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_21 = V_4;
		RuntimeObject* L_22 = L_21->___key;
		RuntimeObject* L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_25 = V_4;
		RuntimeObject* L_26 = L_25->___key;
		RuntimeObject* L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9AAE125D6298B2B6B9D2F150C841A70872BF887B_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8FC34A0E3AA12E15881486F91D32A61E92D04F32(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		bool* L_3 = ___1_value;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		bool L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(bool*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		bool* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(bool));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m60ACBE16AA02352D191EFE0B32E67F1ECD3C2EA2_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m1DBFDC04AD6D6432A7FE2AD619C38C47FB8391B1(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m99871EA020E00BF898C2192309E286D7615DBF45_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9947F53A67D6ACC37C7EB5BC33C50B8A0A6244FE_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m3548AD486A573C78C9388893FC698936157C1A7B(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mA2E8FCBDBDF84A8929DC1C30BC692140F298C336_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mD5387DFB5DBC4480D0B4AE08AC25F7E44599D507(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m3548AD486A573C78C9388893FC698936157C1A7B(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_25 = V_2;
		int32_t L_26 = V_3;
		RuntimeObject* L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_28 = V_2;
		int32_t L_29 = V_3;
		bool L_30 = ((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		bool L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_27, L_32, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_47 = V_6;
			int32_t L_48 = V_7;
			RuntimeObject* L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_50 = V_6;
			int32_t L_51 = V_7;
			bool L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m57BB84A94F6F00F1CADA0C8C921E726D8D4A4854((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
			KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18), &L_54);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m7CE150C6B190327B3EC15DD8A73EF223EDE1FFEC_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53A63D389B2C13C44B85214613A9EBE6154706C8((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m7FF1E700FB791AC9C22BE470C1E86C24F064D12B_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mA482396977C7F14409D764CD7A1BD2130A3BE6EF_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m441D7D44B88C20AA369DEFE607F6ADF27EEEDF7F(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m8FC34A0E3AA12E15881486F91D32A61E92D04F32(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		bool L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		bool L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mE9929B0DB355A7C4B24232CD53F3B52EBB651CBD_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		}
		try
		{
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mF1A7BA3C1568A00A32A43BCD889038FE080F77BF(__this, L_3, ((*(bool*)((bool*)(bool*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 16))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m441D7D44B88C20AA369DEFE607F6ADF27EEEDF7F_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mDC1D6CA6336B910F6E3E4C98B0FCD7FD31CA8E83_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m441D7D44B88C20AA369DEFE607F6ADF27EEEDF7F(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mBEDE43E001DFC228FF4DA06FBCA7CC215C8E7C73(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mED1B1065726F8DBBFCCFF8EF58B3DF72FA047201_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53A63D389B2C13C44B85214613A9EBE6154706C8((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m6CCE02F5789EE7E081575E0700549DF8E801DD03_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m441D7D44B88C20AA369DEFE607F6ADF27EEEDF7F(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m3410C28AE4E1AB9B3387CC479F63A8C8BF22AEEF(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0015:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m4C802F609D63FAB6D65E2A9A52080657CCD56319(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m129B1E1EDDABF00B402C93841CCA7169B8963D83_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m4C802F609D63FAB6D65E2A9A52080657CCD56319(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m4C802F609D63FAB6D65E2A9A52080657CCD56319(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4C802F609D63FAB6D65E2A9A52080657CCD56319_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mC39F51856A2FCB002B71F68D2F67A8F6BEBD112B(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3593B5DBC711A0FCB955C2786B427A8D474069DE_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mEE80B960C3B902E5FB4D2458CEB323B68A954926_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* Dictionary_2_get_Keys_m241B452A1A7DDE3C7E10D446BE86FFD25EDD160E_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* L_1 = (KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_mD6272217B2390F156AEAD333CFBC0680AE18C348(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* Dictionary_2_get_Values_mD1C189E698AD5895BB08AFA5C2A6905A4E1B0A66_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* L_1 = (ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_mC90880ED6157A668A5F1AB911945610274CEEA97(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_mE8A1994C07E1DCA76923C3A1FB6E265177604930_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* L_1 = (ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_mC90880ED6157A668A5F1AB911945610274CEEA97(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8BAD262739BDF6B9D5E637ACF5BE09E1750CAF27(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8BAD262739BDF6B9D5E637ACF5BE09E1750CAF27(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4E28149BC8AFDB88F10464CBFBCE3FB9E2323088_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mBD8ADC2D33AA81028075C8ABD0213C2D8E0B8391_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m54437A4CCD91CF31DD0238EC6112ADD026B69278_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_10;
		L_10 = Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m931E25EF2557C3A386E4B9DC8D8212B7D9D3F5AE_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mB2CC6772052450C67355758932BDAB486A74928C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_7 = V_0;
		int32_t L_8 = V_3;
		int32_t L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		int32_t L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mEFBCCFA46BFC70F908C19BF58E6D16F3288607DF_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mEE80B960C3B902E5FB4D2458CEB323B68A954926(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_14 = V_1;
		int32_t L_15 = V_2;
		RuntimeObject* L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mD4B5AD912DE40BAACCC9A814640E4E3386E51BA8((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF Dictionary_2_GetEnumerator_mC54C8649C774363946FC6B7F1562CDE5D2550063_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4BE90A5CD5CEA288887B83F5E4F7D73EB35F9886((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m806F2D64F1E2536E91DF2C2348DCEB6DC3817815_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4BE90A5CD5CEA288887B83F5E4F7D73EB35F9886((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m9521A5289388A31D905B7C219BFDFEFE8C7FA59C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mEE80B960C3B902E5FB4D2458CEB323B68A954926(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_14 = (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)(KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_15 = V_0;
		Dictionary_2_CopyTo_mEFBCCFA46BFC70F908C19BF58E6D16F3288607DF(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_20 = V_2;
		int32_t L_21 = V_0;
		RuntimeObject* L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		RuntimeObject* L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_33 = V_2;
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = ((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_39 = V_2;
		int32_t L_40 = V_0;
		RuntimeObject* L_41 = ((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)))->___key;
		RuntimeObject* L_42 = ___0_key;
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_44 = V_2;
		int32_t L_45 = V_0;
		int32_t L_46 = ((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___next;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_48 = V_2;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___0_key;
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_59 = V_2;
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_60 = V_2;
		int32_t L_61 = V_0;
		int32_t L_62 = ((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_65 = V_2;
		int32_t L_66 = V_0;
		RuntimeObject* L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___key;
		RuntimeObject* L_68 = ___0_key;
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_70 = V_2;
		int32_t L_71 = V_0;
		int32_t L_72 = ((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_71)))->___next;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_74 = V_2;
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mC39F51856A2FCB002B71F68D2F67A8F6BEBD112B_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_5 = (EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75*)(EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m8BAD262739BDF6B9D5E637ACF5BE09E1750CAF27_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mC39F51856A2FCB002B71F68D2F67A8F6BEBD112B(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_25 = V_0;
		int32_t L_26 = V_5;
		RuntimeObject* L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		RuntimeObject* L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_31 = V_0;
		int32_t L_32 = V_5;
		int32_t L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_36 = V_0;
		int32_t L_37 = V_5;
		int32_t L_38 = ((L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_37)))->___next;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_44 = V_0;
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_45 = V_0;
		int32_t L_46 = V_5;
		int32_t L_47 = ((L_45)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_50 = V_0;
		int32_t L_51 = V_5;
		RuntimeObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___key;
		RuntimeObject* L_53 = ___0_key;
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___2_behavior;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_56 = V_0;
		int32_t L_57 = V_5;
		int32_t L_58 = ___1_value;
		((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___value = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_61 = V_0;
		int32_t L_62 = V_5;
		int32_t L_63 = ((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___next;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_65 = V_0;
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_68 = V_0;
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_69 = V_0;
		int32_t L_70 = V_5;
		int32_t L_71 = ((L_69)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_74 = V_0;
		int32_t L_75 = V_5;
		RuntimeObject* L_76 = ((L_74)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_75)))->___key;
		RuntimeObject* L_77 = ___0_key;
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___2_behavior;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_80 = V_0;
		int32_t L_81 = V_5;
		int32_t L_82 = ___1_value;
		((L_80)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_81)))->___value = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_85 = V_0;
		int32_t L_86 = V_5;
		int32_t L_87 = ((L_85)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_86)))->___next;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_89 = V_0;
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = __this->____freeCount;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = __this->____freeList;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = __this->____count;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mDC4C0DDB962EBDA7258647BDBC7B568948DD84E5(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_99 = __this->____entries;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = __this->____buckets;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = __this->____buckets;
		G_B51_0 = ((L_102)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_105 = V_0;
		int32_t L_106 = V_8;
		V_10 = ((L_105)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_108 = V_10;
		int32_t L_109 = L_108->___next;
		__this->____freeList = L_109;
	}

IL_028a:
	{
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode = L_111;
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_115 = V_10;
		RuntimeObject* L_116 = ___0_key;
		L_115->___key = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key), (void*)L_116);
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_117 = V_10;
		int32_t L_118 = ___1_value;
		L_117->___value = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mDB6CB12E2FF9616253C69974F918D4E17B371603_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mC39F51856A2FCB002B71F68D2F67A8F6BEBD112B(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_19 = V_3;
		int32_t L_20 = V_4;
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_22 = V_3;
		int32_t L_23 = V_4;
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_25 = V_3;
		int32_t L_26 = V_4;
		int32_t L_27;
		L_27 = KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDC4C0DDB962EBDA7258647BDBC7B568948DD84E5_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m3EC90D494DFBD871587E0A4F4D8D4E982BCB9F75(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3EC90D494DFBD871587E0A4F4D8D4E982BCB9F75_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_3 = (EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75*)(EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_5 = __this->____entries;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_15 = V_1;
		int32_t L_16 = V_4;
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (*L_17));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_21 = V_4;
		RuntimeObject* L_22 = L_21->___key;
		RuntimeObject* L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_25 = V_4;
		RuntimeObject* L_26 = L_25->___key;
		RuntimeObject* L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___1_value;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mF9B0463373910BAF21DB075A3A9788E5A7E7F1D2_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8BAD262739BDF6B9D5E637ACF5BE09E1750CAF27(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m822120EBF4CEA552B358CE8BDDE658998A8F0F4F_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m82F209E536CEA351D9587A082AB0E1BE9AE91615_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mEFBCCFA46BFC70F908C19BF58E6D16F3288607DF(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mAE5BE355FA6D67BDD7626904889FED100F63DC77_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mEE80B960C3B902E5FB4D2458CEB323B68A954926(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mEFBCCFA46BFC70F908C19BF58E6D16F3288607DF(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_25 = V_2;
		int32_t L_26 = V_3;
		RuntimeObject* L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_28 = V_2;
		int32_t L_29 = V_3;
		int32_t L_30 = ((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_27, L_32, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_47 = V_6;
			int32_t L_48 = V_7;
			RuntimeObject* L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_50 = V_6;
			int32_t L_51 = V_7;
			int32_t L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mD4B5AD912DE40BAACCC9A814640E4E3386E51BA8((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
			KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18), &L_54);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31ACAE4C1654101C2A8E9316648AAA831E1D455B_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4BE90A5CD5CEA288887B83F5E4F7D73EB35F9886((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m95FD271A0350EB27F17D154FF7127D9A8AE7B70A_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m9D8805C9CE6B7CCEB3065B27AA7461389A1E26ED_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m74B7AAB4C5806B096CC78BBB9C69EF6E4BFAE571(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		int32_t L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mDC7FDB162FA64473E2AB7C02F37D585BE12B99DB_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		}
		try
		{
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13(__this, L_3, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 16))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m74B7AAB4C5806B096CC78BBB9C69EF6E4BFAE571_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mD4BAF9714BD727CB539A8FD81816329B1CC16910_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m74B7AAB4C5806B096CC78BBB9C69EF6E4BFAE571(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m112DEE1DF5E8916322EFECA1F863E2734F2518DE_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4BE90A5CD5CEA288887B83F5E4F7D73EB35F9886((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m0B016F91A0E59E56D75C0119C8C3FE5BA63F6547_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m74B7AAB4C5806B096CC78BBB9C69EF6E4BFAE571(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0015:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE0470880427DED948EF413AD5E9525F41CAF7D1D_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mCA459A185D015CE8748087064B1626AF8C07F998(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m74DCDE3265AA8B6A55B3D3009289CD1240290B3D_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mCA459A185D015CE8748087064B1626AF8C07F998(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0A9B3E0FB7FDFBAC7C3CAD274EB0CAA82BA7E002_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mCA459A185D015CE8748087064B1626AF8C07F998(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCA459A185D015CE8748087064B1626AF8C07F998_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mBC34B4348592C84E757A93637BB081529726D111(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m93CAE08497F0A08B7339DF54D8B954E12C710988_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m36874AA15E8FDC5B6FCA750FD427E2AAF833AF60_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39* Dictionary_2_get_Keys_mED05C8DC22F8A4FD65EB6257EA009CB21EF69E4C_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39* L_1 = (KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m1DDAAFD48BF3ED7E15B38E7D071A0AB75BED7DE0(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6* Dictionary_2_get_Values_mC76F6F08CC2AA6C3D1843FA0F654E9277C2CC3A5_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6* L_1 = (ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m7F42AEC082347EE9159026A43211C8A223C66F26(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m6724131F0F031F68CBA802F9921A9ED7AF98181F_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6* L_1 = (ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m7F42AEC082347EE9159026A43211C8A223C66F26(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m14B4D7B4BDD73D1A4985E09747AF5B2B6A6444D1_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m734E6FEEBAF5B010696F3FC05F61E86E059309AC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC0F84089707699016E685213CFF60997BC7CB12B_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m86AE13BB485AC7F1EC588285A0B5A279914982DC(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m53A4E919CB3AE7CC74379031E14C1AEA9DB7A933_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m86AE13BB485AC7F1EC588285A0B5A279914982DC(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE5C569C9F61FA5C4983F23D48C658C92C9B482BE_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mD14A5316A7715DA2836B07BF240EC5E4D095F10B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_m78EF0CBE211C8EF4C4A5D0ABD95349A0D32B46BA_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		Dictionary_2_Add_m53A4E919CB3AE7CC74379031E14C1AEA9DB7A933(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mD0D584176D94DC3F23D7A818EBE0D9E7F6207695_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mD14A5316A7715DA2836B07BF240EC5E4D095F10B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m734E6FEEBAF5B010696F3FC05F61E86E059309AC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3;
		L_3 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m78EF0CBE211C8EF4C4A5D0ABD95349A0D32B46BA_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mB0FF0455BE81815825CF0BFBE26F248312182B67_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mD14A5316A7715DA2836B07BF240EC5E4D095F10B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m734E6FEEBAF5B010696F3FC05F61E86E059309AC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3;
		L_3 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m78EF0CBE211C8EF4C4A5D0ABD95349A0D32B46BA_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_mD14A5316A7715DA2836B07BF240EC5E4D095F10B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_10;
		L_10 = Dictionary_2_Remove_m01C457D21E125EBF1F8E25FC97116753746A8629(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m0395FEE6C1CD71B9CA22784FE500574448F135D2_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m480A9507410375C999B20A1E0FA56C7E41489974_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m734E6FEEBAF5B010696F3FC05F61E86E059309AC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mF166C6D448F5931612255EF1729780217A949CD8_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_6;
		L_6 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_7 = V_0;
		int32_t L_8 = V_3;
		int32_t L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		int32_t L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mEFF090C74B306E619486D47595466B7CA36A099E_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m36874AA15E8FDC5B6FCA750FD427E2AAF833AF60(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_14 = V_1;
		int32_t L_15 = V_2;
		RuntimeObject* L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m5F61006E81BB25289F0C3D745455FB1CCAA02260((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6 Dictionary_2_GetEnumerator_m00A701DDD5D50959FC80D710EC62B1A179F7A9FB_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9ADB868E1ED9E8EDCD69E204491B2ACAE057C37F((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mE5DC7E20DD1BE8FDA806F1CEF120812777824F1D_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9ADB868E1ED9E8EDCD69E204491B2ACAE057C37F((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mE21B9D96AF81BF28A19D0DAFF87C7F18D0BD6DD0_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m36874AA15E8FDC5B6FCA750FD427E2AAF833AF60(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_14 = (KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A*)(KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_15 = V_0;
		Dictionary_2_CopyTo_mEFF090C74B306E619486D47595466B7CA36A099E(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m734E6FEEBAF5B010696F3FC05F61E86E059309AC_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_20 = V_2;
		int32_t L_21 = V_0;
		RuntimeObject* L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		RuntimeObject* L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_33 = V_2;
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = ((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_39 = V_2;
		int32_t L_40 = V_0;
		RuntimeObject* L_41 = ((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)))->___key;
		RuntimeObject* L_42 = ___0_key;
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_44 = V_2;
		int32_t L_45 = V_0;
		int32_t L_46 = ((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___next;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_48 = V_2;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___0_key;
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_59 = V_2;
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_60 = V_2;
		int32_t L_61 = V_0;
		int32_t L_62 = ((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_65 = V_2;
		int32_t L_66 = V_0;
		RuntimeObject* L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___key;
		RuntimeObject* L_68 = ___0_key;
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_70 = V_2;
		int32_t L_71 = V_0;
		int32_t L_72 = ((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_71)))->___next;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_74 = V_2;
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mBC34B4348592C84E757A93637BB081529726D111_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_5 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)(EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m86AE13BB485AC7F1EC588285A0B5A279914982DC_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mBC34B4348592C84E757A93637BB081529726D111(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_25 = V_0;
		int32_t L_26 = V_5;
		RuntimeObject* L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		RuntimeObject* L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_31 = V_0;
		int32_t L_32 = V_5;
		int32_t L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_36 = V_0;
		int32_t L_37 = V_5;
		int32_t L_38 = ((L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_37)))->___next;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_44 = V_0;
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_45 = V_0;
		int32_t L_46 = V_5;
		int32_t L_47 = ((L_45)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_50 = V_0;
		int32_t L_51 = V_5;
		RuntimeObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___key;
		RuntimeObject* L_53 = ___0_key;
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___2_behavior;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_56 = V_0;
		int32_t L_57 = V_5;
		int32_t L_58 = ___1_value;
		((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___value = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_61 = V_0;
		int32_t L_62 = V_5;
		int32_t L_63 = ((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___next;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_65 = V_0;
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_68 = V_0;
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_69 = V_0;
		int32_t L_70 = V_5;
		int32_t L_71 = ((L_69)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_74 = V_0;
		int32_t L_75 = V_5;
		RuntimeObject* L_76 = ((L_74)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_75)))->___key;
		RuntimeObject* L_77 = ___0_key;
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___2_behavior;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_80 = V_0;
		int32_t L_81 = V_5;
		int32_t L_82 = ___1_value;
		((L_80)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_81)))->___value = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_85 = V_0;
		int32_t L_86 = V_5;
		int32_t L_87 = ((L_85)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_86)))->___next;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_89 = V_0;
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = __this->____freeCount;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = __this->____freeList;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = __this->____count;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m5C3CB7870F7AD4CC7A08F579E1FE750B01A3EDFD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_99 = __this->____entries;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = __this->____buckets;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = __this->____buckets;
		G_B51_0 = ((L_102)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_105 = V_0;
		int32_t L_106 = V_8;
		V_10 = ((L_105)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_108 = V_10;
		int32_t L_109 = L_108->___next;
		__this->____freeList = L_109;
	}

IL_028a:
	{
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode = L_111;
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_115 = V_10;
		RuntimeObject* L_116 = ___0_key;
		L_115->___key = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key), (void*)L_116);
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_117 = V_10;
		int32_t L_118 = ___1_value;
		L_117->___value = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m5EA0D040185607816C4ABD53970690F25B229BED_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mBC34B4348592C84E757A93637BB081529726D111(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_19 = V_3;
		int32_t L_20 = V_4;
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_mD14A5316A7715DA2836B07BF240EC5E4D095F10B_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_22 = V_3;
		int32_t L_23 = V_4;
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_mD14A5316A7715DA2836B07BF240EC5E4D095F10B_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_25 = V_3;
		int32_t L_26 = V_4;
		int32_t L_27;
		L_27 = KeyValuePair_2_get_Value_m78EF0CBE211C8EF4C4A5D0ABD95349A0D32B46BA_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		Dictionary_2_Add_m53A4E919CB3AE7CC74379031E14C1AEA9DB7A933(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5C3CB7870F7AD4CC7A08F579E1FE750B01A3EDFD_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m1952E437421DDF86044AD290578CBD66AFE48EF1(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m1952E437421DDF86044AD290578CBD66AFE48EF1_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_3 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)(EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_5 = __this->____entries;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_15 = V_1;
		int32_t L_16 = V_4;
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (*L_17));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m01C457D21E125EBF1F8E25FC97116753746A8629_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_21 = V_4;
		RuntimeObject* L_22 = L_21->___key;
		RuntimeObject* L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_25 = V_4;
		RuntimeObject* L_26 = L_25->___key;
		RuntimeObject* L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0786A6332E06581557A6E9D4DA5000AF5BC8A373_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m734E6FEEBAF5B010696F3FC05F61E86E059309AC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___1_value;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m31170BC6CB6752DB42CD6F1FB81B1EA2BFD16B2F_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m86AE13BB485AC7F1EC588285A0B5A279914982DC(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m4BF559D0120F5845BEB02782EF05D7807CDA36EF_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mAE68110ECBB947192E9EC0AFA841EAB58EAABCB0_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mEFF090C74B306E619486D47595466B7CA36A099E(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mC1680A3871A6120691843C8CA5151FE88A2AFC4D_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m36874AA15E8FDC5B6FCA750FD427E2AAF833AF60(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mEFF090C74B306E619486D47595466B7CA36A099E(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_25 = V_2;
		int32_t L_26 = V_3;
		RuntimeObject* L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_28 = V_2;
		int32_t L_29 = V_3;
		int32_t L_30 = ((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_27, L_32, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_47 = V_6;
			int32_t L_48 = V_7;
			RuntimeObject* L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_50 = V_6;
			int32_t L_51 = V_7;
			int32_t L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m5F61006E81BB25289F0C3D745455FB1CCAA02260((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
			KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18), &L_54);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m0B05499E75DED5026F64870EE83F80D794B0527A_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9ADB868E1ED9E8EDCD69E204491B2ACAE057C37F((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mD7147496A590067A7BB611A6FB6E1CF0DF4CAA89_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mB5E1D933E801C2818A7145B11539CD6BC0CF7864_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mAFA95909B33F8017D292ED06CDF0C853D3C555C2(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m734E6FEEBAF5B010696F3FC05F61E86E059309AC(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		int32_t L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mB2D558249C6357925CC9098395B4098FC3108BFB_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		}
		try
		{
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mC0F84089707699016E685213CFF60997BC7CB12B(__this, L_3, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 16))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mAFA95909B33F8017D292ED06CDF0C853D3C555C2_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m7D74AE9C90FD256430927C7F1A120BE1E4A3BDED_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mAFA95909B33F8017D292ED06CDF0C853D3C555C2(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m480A9507410375C999B20A1E0FA56C7E41489974(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m84D37FAAA9DC6C5F7053403E8DC0FDB3DFA796E0_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9ADB868E1ED9E8EDCD69E204491B2ACAE057C37F((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m262476640A3557BE3474EF8A70F176A12310DB34_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mAFA95909B33F8017D292ED06CDF0C853D3C555C2(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m01C457D21E125EBF1F8E25FC97116753746A8629(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0015:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mF67467217142A79C407188798209E4524D74D34F(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mF67467217142A79C407188798209E4524D74D34F(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mF67467217142A79C407188798209E4524D74D34F(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF67467217142A79C407188798209E4524D74D34F_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m8C8AD88CD59FD99C812609BBFB9B3A263C210BF3(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m126C1BEA6D7624D5BA6F989BE16D8C725B247892_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* L_1 = (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_mB09A4A925402CEC82C11FFE407E6F4096790D7DC(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* L_1 = (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m4EB5F9B4490E4588B314C97B3BC0CD8E9432D79A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m6D6CD40A8473F7BD9F3C060A996A8DC38AC84899_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* L_1 = (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m4EB5F9B4490E4588B314C97B3BC0CD8E9432D79A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8AC342129E60FB993AF5F8521D0C1F8D078E4F61(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8AC342129E60FB993AF5F8521D0C1F8D078E4F61(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE4F45446B73707AD95FBDC32A0260AAF88A1F6BB_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mAE8B115E339245F99515A41E4B57996CF2F811C4_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mD258677B8F2C8D8AF2700AE5336742B2D81CE6F6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_10;
		L_10 = Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m51A7764AD04D34D0B2CDB01F960FA1FEBCF6B562_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_5 = V_0;
		int32_t L_6 = V_1;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_16 = V_0;
		int32_t L_17 = V_3;
		RuntimeObject* L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_29 = V_0;
		int32_t L_30 = V_5;
		RuntimeObject* L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE5E1D7345A65B2BA11AA747A2A83C94D83835E00_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_14 = V_1;
		int32_t L_15 = V_2;
		RuntimeObject* L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_17 = V_1;
		int32_t L_18 = V_2;
		RuntimeObject* L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8C1D7A88B86E46C4CB723680E3B78A85D9D8148F_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m96D7426A4F2472ED0C33F146CB6D106E0C01D39F_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_14 = (KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*)(KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_15 = V_0;
		Dictionary_2_CopyTo_mE5E1D7345A65B2BA11AA747A2A83C94D83835E00(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_20 = V_2;
		int32_t L_21 = V_0;
		RuntimeObject* L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		RuntimeObject* L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_33 = V_2;
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = ((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_39 = V_2;
		int32_t L_40 = V_0;
		RuntimeObject* L_41 = ((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)))->___key;
		RuntimeObject* L_42 = ___0_key;
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_44 = V_2;
		int32_t L_45 = V_0;
		int32_t L_46 = ((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___next;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_48 = V_2;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___0_key;
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_59 = V_2;
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_60 = V_2;
		int32_t L_61 = V_0;
		int32_t L_62 = ((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_65 = V_2;
		int32_t L_66 = V_0;
		RuntimeObject* L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___key;
		RuntimeObject* L_68 = ___0_key;
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_70 = V_2;
		int32_t L_71 = V_0;
		int32_t L_72 = ((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_71)))->___next;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_74 = V_2;
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m8C8AD88CD59FD99C812609BBFB9B3A263C210BF3_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_5 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)(EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m8AC342129E60FB993AF5F8521D0C1F8D078E4F61_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m8C8AD88CD59FD99C812609BBFB9B3A263C210BF3(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_25 = V_0;
		int32_t L_26 = V_5;
		RuntimeObject* L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		RuntimeObject* L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_31 = V_0;
		int32_t L_32 = V_5;
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_36 = V_0;
		int32_t L_37 = V_5;
		int32_t L_38 = ((L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_37)))->___next;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_44 = V_0;
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_45 = V_0;
		int32_t L_46 = V_5;
		int32_t L_47 = ((L_45)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_50 = V_0;
		int32_t L_51 = V_5;
		RuntimeObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___key;
		RuntimeObject* L_53 = ___0_key;
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___2_behavior;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_56 = V_0;
		int32_t L_57 = V_5;
		RuntimeObject* L_58 = ___1_value;
		((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___value = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___value), (void*)L_58);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_61 = V_0;
		int32_t L_62 = V_5;
		int32_t L_63 = ((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___next;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_65 = V_0;
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_68 = V_0;
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_69 = V_0;
		int32_t L_70 = V_5;
		int32_t L_71 = ((L_69)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_74 = V_0;
		int32_t L_75 = V_5;
		RuntimeObject* L_76 = ((L_74)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_75)))->___key;
		RuntimeObject* L_77 = ___0_key;
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___2_behavior;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_80 = V_0;
		int32_t L_81 = V_5;
		RuntimeObject* L_82 = ___1_value;
		((L_80)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_81)))->___value = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&((L_80)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_81)))->___value), (void*)L_82);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_85 = V_0;
		int32_t L_86 = V_5;
		int32_t L_87 = ((L_85)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_86)))->___next;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_89 = V_0;
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = __this->____freeCount;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = __this->____freeList;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = __this->____count;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mA6C088D61E2C3298854B5E200885EE8C83DC7FCD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_99 = __this->____entries;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = __this->____buckets;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = __this->____buckets;
		G_B51_0 = ((L_102)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_105 = V_0;
		int32_t L_106 = V_8;
		V_10 = ((L_105)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_108 = V_10;
		int32_t L_109 = L_108->___next;
		__this->____freeList = L_109;
	}

IL_028a:
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode = L_111;
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_115 = V_10;
		RuntimeObject* L_116 = ___0_key;
		L_115->___key = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key), (void*)L_116);
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_117 = V_10;
		RuntimeObject* L_118 = ___1_value;
		L_117->___value = L_118;
		Il2CppCodeGenWriteBarrier((void**)(&L_117->___value), (void*)L_118);
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m3CB80CA90C241085E7F7908E67AB13961F34CAE7_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m8C8AD88CD59FD99C812609BBFB9B3A263C210BF3(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_19 = V_3;
		int32_t L_20 = V_4;
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_22 = V_3;
		int32_t L_23 = V_4;
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_25 = V_3;
		int32_t L_26 = V_4;
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA6C088D61E2C3298854B5E200885EE8C83DC7FCD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mA59B4C46D3FD1E0488449B2A24B4E8FA720B1A17(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA59B4C46D3FD1E0488449B2A24B4E8FA720B1A17_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_3 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)(EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_5 = __this->____entries;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_15 = V_1;
		int32_t L_16 = V_4;
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (*L_17));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_21 = V_4;
		RuntimeObject* L_22 = L_21->___key;
		RuntimeObject* L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_25 = V_4;
		RuntimeObject* L_26 = L_25->___key;
		RuntimeObject* L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
	}
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m54FDB7A63C526CA69C4983FDF3295334B93A338B_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8AC342129E60FB993AF5F8521D0C1F8D078E4F61(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m0D26498B424A016B4A5875084457E7986A712B4F_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m90DC588CF96EBCD9F7A5E89F7528F5E042ABB5AC_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mE5E1D7345A65B2BA11AA747A2A83C94D83835E00(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m3BC0E4B74FE20B4CEE22D60CEE7AAF0DC5DC9775_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mE5E1D7345A65B2BA11AA747A2A83C94D83835E00(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_25 = V_2;
		int32_t L_26 = V_3;
		RuntimeObject* L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_28 = V_2;
		int32_t L_29 = V_3;
		RuntimeObject* L_30 = ((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_31;
		memset((&L_31), 0, sizeof(L_31));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_31), L_27, L_30, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_31);
	}

IL_00b5:
	{
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00b9:
	{
		int32_t L_33 = V_3;
		int32_t L_34 = __this->____count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_35 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_35, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = V_4;
		if (L_36)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_37 = __this->____count;
			V_5 = L_37;
			EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_38 = __this->____entries;
			V_6 = L_38;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_39 = V_6;
			int32_t L_40 = V_7;
			int32_t L_41 = ((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)))->___hashCode;
			if ((((int32_t)L_41) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = V_4;
			int32_t L_43 = ___1_index;
			int32_t L_44 = L_43;
			___1_index = ((int32_t)il2cpp_codegen_add(L_44, 1));
			EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_45 = V_6;
			int32_t L_46 = V_7;
			RuntimeObject* L_47 = ((L_45)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_46)))->___key;
			EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_48 = V_6;
			int32_t L_49 = V_7;
			RuntimeObject* L_50 = ((L_48)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_49)))->___value;
			KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_51;
			memset((&L_51), 0, sizeof(L_51));
			KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950((&L_51), L_47, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
			KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_52 = L_51;
			RuntimeObject* L_53 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18), &L_52);
			ArrayElementTypeCheck (L_42, L_53);
			(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44), (RuntimeObject*)L_53);
		}

IL_012a_1:
		{
			int32_t L_54 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		}

IL_0130_1:
		{
			int32_t L_55 = V_7;
			int32_t L_56 = V_5;
			if ((((int32_t)L_55) < ((int32_t)L_56)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mB9C97E1EB106EAA29ACF7225F0D80A1C87AA5F0B_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m453A883BEF50A66C1D00181343ACCAC30E23E365_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m3EF27E31739B326F7BE58F06F95EB5AA9F2A717E_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m1352264619A59DDDDED2B786BB60912F4CACCEE8(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m1F1C639C7C63FFB75DAADB5F203904BF07E652F1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		}
		try
		{
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 16))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m1352264619A59DDDDED2B786BB60912F4CACCEE8_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m6787D3BECEBC5FA16E5A7603242C631E433A9A33_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m1352264619A59DDDDED2B786BB60912F4CACCEE8(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m074CBF65EED25CAED50B19050442B3FDAB277E0F_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m7CDD2B6F920DA1EBB87923711BAEB297A0015876_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m1352264619A59DDDDED2B786BB60912F4CACCEE8(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0015:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBE17333B1C48FE7F968D6CF9EB01C9183054595F_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mF327E2A6657566F6A7D2632C9541A577A636E0DD(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9CBE14A49888845213B3F6C17B7E5B210143C84F_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mF327E2A6657566F6A7D2632C9541A577A636E0DD(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD043504617827B8A1FAD9AA2F530520F999A5A0_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mF327E2A6657566F6A7D2632C9541A577A636E0DD(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF327E2A6657566F6A7D2632C9541A577A636E0DD_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m9FDAF89B9F36D28947DE20D8A08B1EC1870674CE(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m832A6E75C3BE6AF73F1A34D0510389EEF3A8FA1C_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m09F5D830600036283BE79E8E817261A680DE8336_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F* Dictionary_2_get_Keys_m26F83F0E148FAB8681081D5B4B8545EDC3FB9EE7_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F* L_1 = (KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_mFC062DA3DAAFD62BF27D0F3BA56F511B29117D6A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D* Dictionary_2_get_Values_m1A3598C9A02AEFD65277F06642014AB76DE6195C_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D* L_1 = (ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m7AF97DA41A9EFC656143299750EC272BF166E013(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_mBA599A990BE7C7192D7DD096582C036D26095E5C_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D* L_1 = (ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m7AF97DA41A9EFC656143299750EC272BF166E013(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 Dictionary_2_get_Item_m7D0248FA1FA40F8501CC0D73B2054BF0630EB04B_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m6EC3BF5BBE81398B3CD063FFC28872ABA0FF6953_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA877E9F2724470175BF5E244978CE1C5FF9DE16D(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBEBAE295606EB0AC491B3D8DF66D0F0F8209BFFF_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA877E9F2724470175BF5E244978CE1C5FF9DE16D(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m5D524420DB278E442A1000A7EEA4B538159A7E15_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_1;
		L_1 = KeyValuePair_2_get_Value_mFE352005BECB8CC1491A710CCFC837B564E820A4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		Dictionary_2_Add_mBEBAE295606EB0AC491B3D8DF66D0F0F8209BFFF(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26813D745F0503C0FE43EA74DE116BB836AE482A_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_3;
		L_3 = EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_7;
		L_7 = KeyValuePair_2_get_Value_mFE352005BECB8CC1491A710CCFC837B564E820A4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mFADB4067F38965E35555E0503829A7554A85440D_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_3;
		L_3 = EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_7;
		L_7 = KeyValuePair_2_get_Value_mFE352005BECB8CC1491A710CCFC837B564E820A4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_10;
		L_10 = Dictionary_2_Remove_m214849DB755B3CD82BE59B12DC0957421F5782E4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m4831413CE174D6BAC94CFBD3B146D7DAA69013F9_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m9F770BB8AD4D8B4E14CA6F397A4D7E44661968C5_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mDD8FECCBE5B060773A854D97E9C5929A57FD680A_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* V_0 = NULL;
	int32_t V_1 = 0;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_6;
		L_6 = EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_7 = V_0;
		int32_t L_8 = V_3;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m43B32D6BF8FFC3AB12A034286DF5D53E1F1E285C_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m09F5D830600036283BE79E8E817261A680DE8336(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_14 = V_1;
		int32_t L_15 = V_2;
		RuntimeObject* L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_17 = V_1;
		int32_t L_18 = V_2;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m982AF106BE17B9ED0CE94057606E3DC94F57C66F((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF Dictionary_2_GetEnumerator_m4A8EEC82C62D128452093D49CAACBC23BA031556_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m962BC1F82D75DECC72006F3CD7CF84629D660E31((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m6F33B341FC47D849AD607AA7A1DDB0EF787C2445_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m962BC1F82D75DECC72006F3CD7CF84629D660E31((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m644FE02002DFF4803F594F48E91AB6BE83748F7B_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m09F5D830600036283BE79E8E817261A680DE8336(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_14 = (KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389*)(KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_15 = V_0;
		Dictionary_2_CopyTo_m43B32D6BF8FFC3AB12A034286DF5D53E1F1E285C(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_20 = V_2;
		int32_t L_21 = V_0;
		RuntimeObject* L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		RuntimeObject* L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_33 = V_2;
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = ((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_39 = V_2;
		int32_t L_40 = V_0;
		RuntimeObject* L_41 = ((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)))->___key;
		RuntimeObject* L_42 = ___0_key;
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_44 = V_2;
		int32_t L_45 = V_0;
		int32_t L_46 = ((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___next;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_48 = V_2;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___0_key;
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_59 = V_2;
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_60 = V_2;
		int32_t L_61 = V_0;
		int32_t L_62 = ((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_65 = V_2;
		int32_t L_66 = V_0;
		RuntimeObject* L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___key;
		RuntimeObject* L_68 = ___0_key;
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_70 = V_2;
		int32_t L_71 = V_0;
		int32_t L_72 = ((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_71)))->___next;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_74 = V_2;
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m9FDAF89B9F36D28947DE20D8A08B1EC1870674CE_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_5 = (EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF*)(EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA877E9F2724470175BF5E244978CE1C5FF9DE16D_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m9FDAF89B9F36D28947DE20D8A08B1EC1870674CE(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_25 = V_0;
		int32_t L_26 = V_5;
		RuntimeObject* L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		RuntimeObject* L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_31 = V_0;
		int32_t L_32 = V_5;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value))->____value), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_36 = V_0;
		int32_t L_37 = V_5;
		int32_t L_38 = ((L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_37)))->___next;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_44 = V_0;
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_45 = V_0;
		int32_t L_46 = V_5;
		int32_t L_47 = ((L_45)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_50 = V_0;
		int32_t L_51 = V_5;
		RuntimeObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___key;
		RuntimeObject* L_53 = ___0_key;
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___2_behavior;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_56 = V_0;
		int32_t L_57 = V_5;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_58 = ___1_value;
		((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___value = L_58;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___value))->____value), (void*)NULL);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_61 = V_0;
		int32_t L_62 = V_5;
		int32_t L_63 = ((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___next;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_65 = V_0;
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_68 = V_0;
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_69 = V_0;
		int32_t L_70 = V_5;
		int32_t L_71 = ((L_69)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_74 = V_0;
		int32_t L_75 = V_5;
		RuntimeObject* L_76 = ((L_74)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_75)))->___key;
		RuntimeObject* L_77 = ___0_key;
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___2_behavior;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_80 = V_0;
		int32_t L_81 = V_5;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_82 = ___1_value;
		((L_80)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_81)))->___value = L_82;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_80)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_81)))->___value))->____value), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_85 = V_0;
		int32_t L_86 = V_5;
		int32_t L_87 = ((L_85)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_86)))->___next;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_89 = V_0;
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = __this->____freeCount;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = __this->____freeList;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = __this->____count;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mDCF81BA6E7AD5E970C1164BD764FD1B09DA54908(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_99 = __this->____entries;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = __this->____buckets;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = __this->____buckets;
		G_B51_0 = ((L_102)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_105 = V_0;
		int32_t L_106 = V_8;
		V_10 = ((L_105)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_108 = V_10;
		int32_t L_109 = L_108->___next;
		__this->____freeList = L_109;
	}

IL_028a:
	{
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode = L_111;
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_115 = V_10;
		RuntimeObject* L_116 = ___0_key;
		L_115->___key = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key), (void*)L_116);
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_117 = V_10;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_118 = ___1_value;
		L_117->___value = L_118;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_117->___value))->____value), (void*)NULL);
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m6ACF2DDEFD07260349912EDA9C8AF38A242CAC75_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m9FDAF89B9F36D28947DE20D8A08B1EC1870674CE(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_19 = V_3;
		int32_t L_20 = V_4;
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_22 = V_3;
		int32_t L_23 = V_4;
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_25 = V_3;
		int32_t L_26 = V_4;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_27;
		L_27 = KeyValuePair_2_get_Value_mFE352005BECB8CC1491A710CCFC837B564E820A4_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		Dictionary_2_Add_mBEBAE295606EB0AC491B3D8DF66D0F0F8209BFFF(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDCF81BA6E7AD5E970C1164BD764FD1B09DA54908_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m0B33583AB3945F266499F443DD2BFA66084E6A2F(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m0B33583AB3945F266499F443DD2BFA66084E6A2F_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_3 = (EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF*)(EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_5 = __this->____entries;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_15 = V_1;
		int32_t L_16 = V_4;
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (*L_17));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m214849DB755B3CD82BE59B12DC0957421F5782E4_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_21 = V_4;
		RuntimeObject* L_22 = L_21->___key;
		RuntimeObject* L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_25 = V_4;
		RuntimeObject* L_26 = L_25->___key;
		RuntimeObject* L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
	}
	{
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_43 = V_4;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122* L_44 = (ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m2D7A760DFE4E0632E2578B33087A0A89BCF30556_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122* L_3 = ___1_value;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)L_3)->____value), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m6A5BB3092021AF135E5BBF15EC098836B4220FBA_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA877E9F2724470175BF5E244978CE1C5FF9DE16D(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mD9A7ADDC1ED3A3AA51F4C6D981709E8EF988A219_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m56372296CBBE378E74FF50593F79873E06CDA300_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m43B32D6BF8FFC3AB12A034286DF5D53E1F1E285C(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m42E349CBCC79855BB0D1BDB0B7767B41C76DE389_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m09F5D830600036283BE79E8E817261A680DE8336(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m43B32D6BF8FFC3AB12A034286DF5D53E1F1E285C(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_25 = V_2;
		int32_t L_26 = V_3;
		RuntimeObject* L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_28 = V_2;
		int32_t L_29 = V_3;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_30 = ((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_27, L_32, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_47 = V_6;
			int32_t L_48 = V_7;
			RuntimeObject* L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_50 = V_6;
			int32_t L_51 = V_7;
			ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m982AF106BE17B9ED0CE94057606E3DC94F57C66F((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
			KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18), &L_54);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m601DE8A09A32C65728B209DB5E4AF41AB9A68CE8_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m962BC1F82D75DECC72006F3CD7CF84629D660E31((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mA01613DF43A11362180CDAC68F0C0D04E4703F59_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m778CEB3C9372E7A834A2A9483DF76C6575A45C30_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mE011D3CA1F277C14519A681E846DD28F7F0C2076(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mB629283720A0DF3F52EFE2F193D686463484B3EC_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		}
		try
		{
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m6EC3BF5BBE81398B3CD063FFC28872ABA0FF6953(__this, L_3, ((*(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)((ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 16))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mE011D3CA1F277C14519A681E846DD28F7F0C2076_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mE43A9CBF68279E9F7B16EE89FAE36E223DEC8192_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mE011D3CA1F277C14519A681E846DD28F7F0C2076(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m9F770BB8AD4D8B4E14CA6F397A4D7E44661968C5(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mFF3ED3153067D513E90F4AC1242525F5115F7F32_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m962BC1F82D75DECC72006F3CD7CF84629D660E31((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mAB34DB58F404812845C7C48A72D8A543BB39EBF7_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mE011D3CA1F277C14519A681E846DD28F7F0C2076(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m214849DB755B3CD82BE59B12DC0957421F5782E4(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0015:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF5FF8B899356859561D618FE0BD1658BA1355E3A_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mCAA291BC8A0F9DE7E5BEF2272BEBC0A0A7580706(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1702709E09367B39518E7D4147FB8EAA71C1983E_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mCAA291BC8A0F9DE7E5BEF2272BEBC0A0A7580706(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA2D13EBFB19DD6CA2C930BBA74A3E64C4CCCA23D_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mCAA291BC8A0F9DE7E5BEF2272BEBC0A0A7580706(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCAA291BC8A0F9DE7E5BEF2272BEBC0A0A7580706_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m421F3590090FECC9384E0A2922FBB54180B34579(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_5;
		L_5 = EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0DA5FB4C75863697941CB337B9BBAEE187E799D6_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m8FB83A511CBD8E87C4B76B13161BCF5AED0D6C16_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* Dictionary_2_get_Keys_m9A2810E095217DC279EE0C83EC7CBC52547972A2_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* L_1 = (KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m31D2AF1C181005502164CA4DAD208EE4DD9DB59E(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* Dictionary_2_get_Values_m0C3710D8A0224DD51D2F0909B2CA6D60F9F68910_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* L_1 = (ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m0D1D55AC4B16C4AF03DE43D5B408C3396CE61465(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m439A47E52857ECE2DA5F5E2E70BC4E13354FE263_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* L_1 = (ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m0D1D55AC4B16C4AF03DE43D5B408C3396CE61465(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 Dictionary_2_get_Item_m020D5E0F6FA094EB12F56AC0313B224A1B84B49C_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_6 = ___0_key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470));
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m8648C3BECE952DC317626512BB228420B4BB3E90_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method) 
{
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0 = ___0_key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mE6CB7E2A268B1BB09CFBB5106D129FF739B0569C(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mE1258769871BEB13AAC7AB1EC59D57AB799B74D1_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method) 
{
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0 = ___0_key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mE6CB7E2A268B1BB09CFBB5106D129FF739B0569C(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m5516E6FB521E8145C1873812FF9BA0239A5B5DEF_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0;
		L_0 = KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_1;
		L_1 = KeyValuePair_2_get_Value_mB24B9E0A407074537FD1D3A0649C8A85704B057F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		Dictionary_2_Add_mE1258769871BEB13AAC7AB1EC59D57AB799B74D1(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mD3B8898DB53741DC84135395AC01402A64786D4D_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0;
		L_0 = KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_3;
		L_3 = EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_7;
		L_7 = KeyValuePair_2_get_Value_mB24B9E0A407074537FD1D3A0649C8A85704B057F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mB8612E2A123B936BDA52D972B5F97CE604CCC06E_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0;
		L_0 = KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_3;
		L_3 = EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_7;
		L_7 = KeyValuePair_2_get_Value_mB24B9E0A407074537FD1D3A0649C8A85704B057F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_9;
		L_9 = KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_10;
		L_10 = Dictionary_2_Remove_mADFC592E5CA281E2AF1221CE45FC9EE7D2AA1646(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m7AD57DCC9D95FED40324C99B9E1775A6E927FC0D_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mC2374D05E07DB677F2804413801EE682DC5E41BD_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method) 
{
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m4DAE614CBC12FABCDBDB4CEAC05B392066A8656E_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* V_0 = NULL;
	int32_t V_1 = 0;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_6;
		L_6 = EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_7 = V_0;
		int32_t L_8 = V_3;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m73785D4B552D84FA1D201EAE45F0EB7CE59B4400_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m8FB83A511CBD8E87C4B76B13161BCF5AED0D6C16(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_14 = V_1;
		int32_t L_15 = V_2;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_17 = V_1;
		int32_t L_18 = V_2;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mE87676080E91A2A32A27135A3EF04BEC8E2EBEE6((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 Dictionary_2_GetEnumerator_mF21E9488B8FB0FB059A67C5A3BB3A121F708F963_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1EDECAF353D448162F5DC259F478EC28985C50FA((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m518D08F3216798D82621BEE16CA4FD0EFFAA9389_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1EDECAF353D448162F5DC259F478EC28985C50FA((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m8BF946BDED99F2DDEE97B53959555D57EC42A04F_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_6;
		L_6 = EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m8FB83A511CBD8E87C4B76B13161BCF5AED0D6C16(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_14 = (KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F*)(KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_15 = V_0;
		Dictionary_2_CopyTo_m73785D4B552D84FA1D201EAE45F0EB7CE59B4400(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = XPathNodeRef_GetHashCode_mA438A76A5D2970E8AEC24529F5D03905D9A71F0C((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_19;
		L_19 = EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_20 = V_2;
		int32_t L_21 = V_0;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_46 = V_2;
		int32_t L_47 = V_0;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m421F3590090FECC9384E0A2922FBB54180B34579_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_5 = (EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B*)(EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mE6CB7E2A268B1BB09CFBB5106D129FF739B0569C_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* V_10 = NULL;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m421F3590090FECC9384E0A2922FBB54180B34579(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = XPathNodeRef_GetHashCode_mA438A76A5D2970E8AEC24529F5D03905D9A71F0C((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_24;
		L_24 = EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_25 = V_0;
		int32_t L_26 = V_5;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_31 = V_0;
		int32_t L_32 = V_5;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value))->____page), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_35 = ___0_key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_51 = V_0;
		int32_t L_52 = V_5;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_57 = V_0;
		int32_t L_58 = V_5;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value))->____page), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_61 = ___0_key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mF88350DAC9079ECFEDFAEF7869880A1A81F895BE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_94 = V_10;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_95 = ___0_key;
		L_94->___key = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->____page), (void*)NULL);
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_96 = V_10;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->____page), (void*)NULL);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mC0CCBEF70238073149E53DDB2A839EE3E93E790C_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m421F3590090FECC9384E0A2922FBB54180B34579(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_19 = V_3;
		int32_t L_20 = V_4;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_21;
		L_21 = KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_22 = V_3;
		int32_t L_23 = V_4;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_24;
		L_24 = KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_25 = V_3;
		int32_t L_26 = V_4;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_27;
		L_27 = KeyValuePair_2_get_Value_mB24B9E0A407074537FD1D3A0649C8A85704B057F_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		Dictionary_2_Add_mE1258769871BEB13AAC7AB1EC59D57AB799B74D1(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mF88350DAC9079ECFEDFAEF7869880A1A81F895BE_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m5207780E2C3E7F9DDC3EE357A99DEE5048B3A864(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5207780E2C3E7F9DDC3EE357A99DEE5048B3A864_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* V_1 = NULL;
	int32_t V_2 = 0;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_3 = (EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B*)(EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_5 = __this->____entries;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470));
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_15 = V_1;
		int32_t L_16 = V_4;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* L_17 = (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = XPathNodeRef_GetHashCode_mA438A76A5D2970E8AEC24529F5D03905D9A71F0C(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mADFC592E5CA281E2AF1221CE45FC9EE7D2AA1646_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = XPathNodeRef_GetHashCode_mA438A76A5D2970E8AEC24529F5D03905D9A71F0C((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_20;
		L_20 = EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_21 = V_4;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_22 = L_21->___key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_25 = V_4;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_26 = L_25->___key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_41 = V_4;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* L_42 = (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470));
	}

IL_00ff:
	{
	}
	{
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_43 = V_4;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* L_44 = (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3ED1E06E43A9342E7FF51C9DB84D236E7196E83C_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* L_3 = ___1_value;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)L_3)->____page), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m83499A0BC4DE94FB77D0891776EC9F3B0C886115_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method) 
{
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0 = ___0_key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mE6CB7E2A268B1BB09CFBB5106D129FF739B0569C(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m359233A42C52DB81B318A899BB3C27AA983AED48_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m084F324651D346AD470C5CCD6D00227F20E65AED_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m73785D4B552D84FA1D201EAE45F0EB7CE59B4400(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mADAEF0AFB096686C709C511A5E7E15732D785404_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m8FB83A511CBD8E87C4B76B13161BCF5AED0D6C16(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m73785D4B552D84FA1D201EAE45F0EB7CE59B4400(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_25 = V_2;
		int32_t L_26 = V_3;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), &L_28);
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_30 = V_2;
		int32_t L_31 = V_3;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_43 = V_6;
			int32_t L_44 = V_7;
			int32_t L_45 = ((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_49 = V_6;
			int32_t L_50 = V_7;
			XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_51 = ((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_52 = V_6;
			int32_t L_53 = V_7;
			XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mE87676080E91A2A32A27135A3EF04BEC8E2EBEE6((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
			KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18), &L_56);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32CB59A992434863C7CA530E14BE3ACE19D53A0C_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1EDECAF353D448162F5DC259F478EC28985C50FA((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mA58D9AFB9307931F5656F18E23DAE9E34232E084_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m29394AD2CE04196A9A36C7C08BEE11D628E0E34D_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m9BB716D3E0E7E52AF66FCB82F2E1E6F86C8B121A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF(__this, ((*(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)((XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m73442AC643D5851CC864442B4E3321AEB67483B8_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_m442C8C93DC5454CE5F953408866A7B5761EE1F30(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)((XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12)))));
		}
		try
		{
			XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m8648C3BECE952DC317626512BB228420B4BB3E90(__this, L_3, ((*(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)((XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 16))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m9BB716D3E0E7E52AF66FCB82F2E1E6F86C8B121A_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m60872939F0BDCF39A2CC4F433303DF8778ECBE97_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m9BB716D3E0E7E52AF66FCB82F2E1E6F86C8B121A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mC2374D05E07DB677F2804413801EE682DC5E41BD(__this, ((*(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)((XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13BDD87937EAB692F79D9D99AE040E08F86AC0D8_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1EDECAF353D448162F5DC259F478EC28985C50FA((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m9895D05C0BB006D30D178303D51D0F19AA46FB3E_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m9BB716D3E0E7E52AF66FCB82F2E1E6F86C8B121A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_mADFC592E5CA281E2AF1221CE45FC9EE7D2AA1646(__this, ((*(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)((XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))))), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0015:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m244D396B16E7F73DE815F4FFA6F35DD89B6ED7CB_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC4C1AFB623AE154F67437E7FC549449FF598526_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA25D4973BD5467E89BE578B96BE246DE27E51638_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_1 = (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_1 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m83C40C3BF1DFD21198ED5D890CD53F2B726FFF78_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_1 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = L_0;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	memset(V_1, 0, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return;
	}

IL_001e:
	{
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), L_6);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_7, NULL);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? L_1: *(void**)L_1), (uint8_t)1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? L_1: *(void**)L_1), (uint8_t)2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE4548F09815541C77E85AB57B86142B7D29C0A2F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_1);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8A8F4B72BD2ED0C4171B69CDDB4F9201FAD62FB5_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m47F4CC635C14FD742D41145FEAECD47FF3EC7910_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_9);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_9: *(void**)L_9));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_0: *(void**)L_0));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m6DD06FB7A6641F460E175909EE58B3E7EF585F46_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	const Il2CppFullySharedGenericAny L_13 = L_1;
	const Il2CppFullySharedGenericAny L_21 = L_1;
	const Il2CppFullySharedGenericAny L_34 = L_1;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_35 = L_22;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	memset(V_2, 0, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_3 = 0;
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_0 = __this->____entries;
		V_0 = L_0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16), L_1);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0));
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_9 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16), L_8);
		if (L_9)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->____count;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_13, V_2, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16), L_13);
		if (!L_14)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_0;
		int32_t L_16 = V_3;
		int32_t L_17 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_18;
		L_18 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_0;
		int32_t L_20 = V_3;
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_23;
		L_23 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? L_22: *(void**)L_22));
		if (!L_23)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_008b:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = __this->____count;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_27;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_0;
		int32_t L_29 = V_5;
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0));
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_31 = V_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_32 = V_0;
		int32_t L_33 = V_5;
		il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_32)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_33))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_36;
		L_36 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? L_34: *(void**)L_34), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? L_35: *(void**)L_35));
		if (!L_36)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_37 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00d1:
	{
		int32_t L_38 = V_5;
		int32_t L_39 = __this->____count;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mCE58585215D412BBED56819DD8E7EFFCE8661BA1_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_22 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	int32_t V_0 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0));
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_14 = V_1;
		int32_t L_15 = V_2;
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_1;
		int32_t L_18 = V_2;
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		memset(L_22, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? il2cpp_codegen_memcpy(L_20, L_16, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? il2cpp_codegen_memcpy(L_21, L_19, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_19), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		il2cpp_codegen_memcpy((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)), L_22, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 18), (void**)(L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mEB946BF1ED512ADDA66E4AC30F34573170773B8E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m3683CF1DF17605C3CBFEB3DEC2D3C7D619DB1C06_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_6;
		L_6 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_14 = (KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)(KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_15 = V_0;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0ACF21DFA8D126AC00883594A96B45296ABDE79A_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_14 = L_0;
	const Il2CppFullySharedGenericAny L_25 = L_0;
	const Il2CppFullySharedGenericAny L_44 = L_0;
	const Il2CppFullySharedGenericAny L_54 = L_0;
	const Il2CppFullySharedGenericAny L_70 = L_0;
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_45 = L_26;
	const Il2CppFullySharedGenericAny L_71 = L_26;
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_6, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		V_1 = L_2;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = __this->____entries;
		V_2 = L_3;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_5 = __this->____comparer;
		V_4 = L_5;
		RuntimeObject* L_6 = V_4;
		if (L_6)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_8;
		L_8 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 12), il2cpp_rgctx_method(method->klass->rgctx_data, 38), L_7, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key));
		V_5 = ((int32_t)(L_8&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		int32_t L_12 = ((int32_t)(L_10%((int32_t)(((RuntimeArray*)L_11)->max_length))));
		int32_t L_13 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_14, V_6, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_15 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), L_14);
		if (!L_15)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_16 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_2;
		if ((!(((uint32_t)L_16) < ((uint32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_18 = V_2;
		int32_t L_19 = V_0;
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0));
		int32_t L_21 = V_5;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_22;
		L_22 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_23 = V_2;
		int32_t L_24 = V_0;
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_27;
		L_27 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_25: *(void**)L_25), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_26: *(void**)L_26));
		if (L_27)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_2;
		int32_t L_29 = V_0;
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),1));
		V_0 = L_30;
		int32_t L_31 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_32 = V_2;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_34;
		L_34 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_34;
	}

IL_00c0:
	{
		int32_t L_35 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_36 = V_2;
		if ((!(((uint32_t)L_35) < ((uint32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_37 = V_2;
		int32_t L_38 = V_0;
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_37)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_38))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0));
		int32_t L_40 = V_5;
		if ((!(((uint32_t)L_39) == ((uint32_t)L_40))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_41 = V_7;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_42 = V_2;
		int32_t L_43 = V_0;
		il2cpp_codegen_memcpy(L_44, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_42)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_43))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_46;
		L_46 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_44: *(void**)L_44), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_45: *(void**)L_45));
		if (L_46)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_47 = V_2;
		int32_t L_48 = V_0;
		int32_t L_49 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),1));
		V_0 = L_49;
		int32_t L_50 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_51 = V_2;
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_53 = V_4;
		il2cpp_codegen_memcpy(L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_55;
		L_55 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_54: *(void**)L_54));
		V_8 = ((int32_t)(L_55&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_1;
		int32_t L_57 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_1;
		int32_t L_59 = ((int32_t)(L_57%((int32_t)(((RuntimeArray*)L_58)->max_length))));
		int32_t L_60 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_60, 1));
	}

IL_012b:
	{
		int32_t L_61 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_62 = V_2;
		if ((!(((uint32_t)L_61) < ((uint32_t)((int32_t)(((RuntimeArray*)L_62)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_63 = V_2;
		int32_t L_64 = V_0;
		int32_t L_65 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_63)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_64))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0));
		int32_t L_66 = V_8;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_67 = V_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_68 = V_2;
		int32_t L_69 = V_0;
		il2cpp_codegen_memcpy(L_70, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_68)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_69))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_71, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_72;
		L_72 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_67, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_70: *(void**)L_70), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_71: *(void**)L_71));
		if (L_72)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_73 = V_2;
		int32_t L_74 = V_0;
		int32_t L_75 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_73)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_74))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),1));
		V_0 = L_75;
		int32_t L_76 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_77 = V_2;
		if ((((int32_t)L_76) < ((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_79 = V_0;
		return L_79;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m5B001E697A07FFFE6B8E587225DADC4951F6D522_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)(EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m475863DF7C3146B720288A85B96DA3790C484F09_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_19 = L_0;
	const Il2CppFullySharedGenericAny L_30 = L_0;
	const Il2CppFullySharedGenericAny L_38 = L_0;
	const Il2CppFullySharedGenericAny L_56 = L_0;
	const Il2CppFullySharedGenericAny L_64 = L_0;
	const Il2CppFullySharedGenericAny L_81 = L_0;
	const Il2CppFullySharedGenericAny L_89 = L_0;
	const Il2CppFullySharedGenericAny L_122 = L_0;
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_57 = L_31;
	const Il2CppFullySharedGenericAny L_82 = L_31;
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_62 = L_36;
	const Il2CppFullySharedGenericAny L_87 = L_36;
	const Il2CppFullySharedGenericAny L_124 = L_36;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_10 = NULL;
	Il2CppFullySharedGenericAny V_11 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_11, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		V_0 = L_5;
		RuntimeObject* L_6 = __this->____comparer;
		V_1 = L_6;
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_9: *(void**)L_9));
		G_B7_0 = L_10;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 12), il2cpp_rgctx_method(method->klass->rgctx_data, 38), L_11, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key));
		G_B7_0 = L_12;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		int32_t L_14 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_14%((int32_t)(((RuntimeArray*)L_15)->max_length)))))));
		int32_t* L_16 = V_4;
		int32_t L_17 = *((int32_t*)L_16);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		RuntimeObject* L_18 = V_1;
		if (L_18)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_11, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_19, V_11, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_20 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), L_19);
		if (!L_20)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_21 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_22 = V_0;
		if ((!(((uint32_t)L_21) < ((uint32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_23 = V_0;
		int32_t L_24 = V_5;
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0));
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_0;
		int32_t L_29 = V_5;
		il2cpp_codegen_memcpy(L_30, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_32;
		L_32 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_30: *(void**)L_30), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_31: *(void**)L_31));
		if (!L_32)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_33 = ___2_behavior;
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_34 = V_0;
		int32_t L_35 = V_5;
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),3), L_36, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_37 = ___2_behavior;
		if ((!(((uint32_t)L_37) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = V_0;
		int32_t L_41 = V_5;
		int32_t L_42 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_40)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_41))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),1));
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_44 = V_0;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_46;
		L_46 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_46;
	}

IL_0111:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_48 = V_0;
		if ((!(((uint32_t)L_47) < ((uint32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_49 = V_0;
		int32_t L_50 = V_5;
		int32_t L_51 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0));
		int32_t L_52 = V_2;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_53 = V_12;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_54 = V_0;
		int32_t L_55 = V_5;
		il2cpp_codegen_memcpy(L_56, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_54)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_55))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_57, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_58;
		L_58 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_56: *(void**)L_56), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_57: *(void**)L_57));
		if (!L_58)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_60 = V_0;
		int32_t L_61 = V_5;
		il2cpp_codegen_memcpy(L_62, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_61))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),3), L_62, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_63 = ___2_behavior;
		if ((!(((uint32_t)L_63) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		il2cpp_codegen_memcpy(L_64, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_65 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), L_64);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_65, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_66 = V_0;
		int32_t L_67 = V_5;
		int32_t L_68 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_66)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_67))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),1));
		V_5 = L_68;
		int32_t L_69 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_70 = V_0;
		if ((((int32_t)L_69) < ((int32_t)((int32_t)(((RuntimeArray*)L_70)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_72 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_73 = V_0;
		if ((!(((uint32_t)L_72) < ((uint32_t)((int32_t)(((RuntimeArray*)L_73)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_74 = V_0;
		int32_t L_75 = V_5;
		int32_t L_76 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_74)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_75))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0));
		int32_t L_77 = V_2;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_78 = V_1;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_79 = V_0;
		int32_t L_80 = V_5;
		il2cpp_codegen_memcpy(L_81, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_79)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_80))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_82, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_83;
		L_83 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_78, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_81: *(void**)L_81), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_82: *(void**)L_82));
		if (!L_83)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_84 = ___2_behavior;
		if ((!(((uint32_t)L_84) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_85 = V_0;
		int32_t L_86 = V_5;
		il2cpp_codegen_memcpy(L_87, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_85)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_86))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),3), L_87, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_88 = ___2_behavior;
		if ((!(((uint32_t)L_88) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		il2cpp_codegen_memcpy(L_89, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_91 = V_0;
		int32_t L_92 = V_5;
		int32_t L_93 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),1));
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_95 = V_0;
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_102 = V_0;
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_105 = __this->____entries;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets;
		G_B51_0 = ((L_108)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_111 = V_0;
		int32_t L_112 = V_8;
		V_10 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_111)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_114 = V_10;
		int32_t L_115 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_114, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),1));
		__this->____freeList = L_115;
	}

IL_028a:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_116 = V_10;
		int32_t L_117 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_116, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0), L_117);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		il2cpp_codegen_write_instance_field_data<int32_t>(L_118, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),1), ((int32_t)il2cpp_codegen_subtract(L_120, 1)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_121 = V_10;
		il2cpp_codegen_memcpy(L_122, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_write_instance_field_data(L_121, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),2), L_122, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_123 = V_10;
		il2cpp_codegen_memcpy(L_124, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(L_123, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),3), L_124, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mCE3F24CD19D6E1AAEE9202CFE6CD1E8DA8821552_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_25 = L_21;
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_19 = V_3;
		int32_t L_20 = V_4;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), (Il2CppFullySharedGenericAny*)L_21);
		bool L_22 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), L_21);
		if (L_22)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_23 = V_3;
		int32_t L_24 = V_4;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24))), (Il2CppFullySharedGenericAny*)L_25);
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_26 = V_3;
		int32_t L_27 = V_4;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_27))), (Il2CppFullySharedGenericAny*)L_28);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_25: *(void**)L_25), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? L_28: *(void**)L_28));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00c0:
	{
		int32_t L_30 = V_4;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_31 = V_3;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m31D02FB7F34F222948CBAED016A60562ECE1A8D5_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2F0D524EB63EBDE00430EA093CADA3AF6FABF4CA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_3, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)(EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_8, V_3, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_9 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), L_8);
		bool L_10 = L_9;
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)L_10&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_12 = V_1;
		int32_t L_13 = V_4;
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0));
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_1;
		int32_t L_16 = V_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_1;
		int32_t L_18 = V_4;
		int32_t L_20;
		L_20 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 12), il2cpp_rgctx_method(method->klass->rgctx_data, 38), L_19, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),2)))));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0), ((int32_t)(L_20&((int32_t)2147483647LL))));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_24 = V_1;
		int32_t L_25 = V_5;
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0));
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_27 = V_1;
		int32_t L_28 = V_5;
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0));
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_31 = V_1;
		int32_t L_32 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),1), ((int32_t)il2cpp_codegen_subtract(L_36, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_43);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_44 = V_1;
		__this->____entries = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_44);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_7 = L_0;
	const Il2CppFullySharedGenericAny L_24 = L_0;
	const Il2CppFullySharedGenericAny L_28 = L_0;
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_29 = L_25;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (!L_2)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_3 = __this->____comparer;
		RuntimeObject* L_4 = L_3;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0032;
		}
		G_B4_0 = L_4;
	}
	{
		int32_t L_6;
		L_6 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 12), il2cpp_rgctx_method(method->klass->rgctx_data, 38), L_5, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key));
		G_B6_0 = L_6;
		goto IL_0038;
	}

IL_0032:
	{
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_7: *(void**)L_7));
		G_B6_0 = L_8;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		V_1 = ((int32_t)(L_9%((int32_t)(((RuntimeArray*)L_10)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = __this->____entries;
		int32_t L_16 = V_3;
		V_4 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_17 = V_4;
		int32_t L_18 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0));
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_20 = __this->____comparer;
		RuntimeObject* L_21 = L_20;
		if (L_21)
		{
			G_B10_0 = L_21;
			goto IL_0095;
		}
		G_B9_0 = L_21;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_22;
		L_22 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_23 = V_4;
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_26;
		L_26 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_24: *(void**)L_24), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_25: *(void**)L_25));
		G_B11_0 = L_26;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_27 = V_4;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_30;
		L_30 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_28: *(void**)L_28), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_29: *(void**)L_29));
		G_B11_0 = L_30;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		int32_t L_33 = V_1;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_34 = V_4;
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_34, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),1));
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33), (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_36 = __this->____entries;
		int32_t L_37 = V_2;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_38 = V_4;
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_38, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_37))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),1), L_39);
	}

IL_00d6:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_40 = V_4;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_40, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0), (-1));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_41 = V_4;
		int32_t L_42 = __this->____freeList;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_41, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),1), L_42);
		bool L_43;
		L_43 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if (!L_43)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_44 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),2)))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	}

IL_00ff:
	{
		bool L_45;
		L_45 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_45)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_46 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(L_46, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),3)))), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	}

IL_0113:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_51 = V_4;
		int32_t L_52 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_51, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),1));
		V_3 = L_52;
	}

IL_0142:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_3 = ___1_value;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_3, L_6, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 16), (void**)(Il2CppFullySharedGenericAny*)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppFullySharedGenericAny* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m71BC76FB3076464E2CF2D51E2607CCF7E51083FF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? L_1: *(void**)L_1), (uint8_t)0);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49382184C24B9222DF183D303DDE539D20217D5A_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mD6AE43E992177C3F738687180B1BC97BDBAADE51_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mBDBCC7A542FE485FFCDDD79C6453338ACEB4E9D9_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18));
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_49 = L_27;
	const Il2CppFullySharedGenericAny L_53 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_52 = L_31;
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_55 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0));
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_25 = V_2;
		int32_t L_26 = V_3;
		il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), L_27);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_29 = V_2;
		int32_t L_30 = V_3;
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16), L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_28, L_32, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0));
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_47 = V_6;
			int32_t L_48 = V_7;
			il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_50 = V_6;
			int32_t L_51 = V_7;
			il2cpp_codegen_memcpy(L_52, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
			memset(L_55, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
			KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_55, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? il2cpp_codegen_memcpy(L_53, L_49, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_49), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? il2cpp_codegen_memcpy(L_54, L_52, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_52), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
			RuntimeObject* L_56 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18), L_55);
			ArrayElementTypeCheck (L_44, L_56);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_56);
		}

IL_012a_1:
		{
			int32_t L_57 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		}

IL_0130_1:
		{
			int32_t L_58 = V_7;
			int32_t L_59 = V_5;
			if ((((int32_t)L_58) < ((int32_t)L_59)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44022592FB7F74617DDAE1914E3376A2C38A0CBB_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9E5D75EF1543AC00AA3F3BC3D6149B59826438B1_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mC48AC2C347286C71BD0E25A923FDA569D3B0960B_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_7 = __this->____entries;
		int32_t L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16), L_9);
		return L_10;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m0444A06383E554B1CE9AD1D51B74A570C71A2F20_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_0, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_3);
			il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		}
		try
		{
			il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			RuntimeObject* L_6 = ___1_value;
			void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 16), L_7);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)), il2cpp_rgctx_method(method->klass->rgctx_data, 52), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)))));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_9 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_11;
			L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_9, L_11, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_12 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_12, L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mA1591D0B0BE4E9F654AE63DE747722F557C1092B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m72E82A4B5B5ABC5F5D625BC047C22894796F3F76_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)), il2cpp_rgctx_method(method->klass->rgctx_data, 55), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m72D69D25532F2EA8DEE802868E8CC3282018A5D9_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mF1B05D2823B0E1697B8FA449F74EA0838059E448_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
	}

IL_0015:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3A972FD6D3B419C491615DEAF5727957266B2103_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m80A438E817EFD7A63806E2AA6A36765099E76981_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8B0FF306D82A6E5AA52869ECC3CF8267D3F490_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_5;
		L_5 = EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m13A38C223F0BABEECE1B8FCD3D03199345768B91_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* Dictionary_2_get_Keys_m5D309558625C4B9B2702291A262D19E9409FC1B8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* L_1 = (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m7DD9CC8A8D66F5E96F17286F215CD22CCCDD1DF7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* Dictionary_2_get_Values_mBD99ABB93B744242980847DE776989C8ACB1C777_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_1 = (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m4CA056E40F3696B0F634BE02C68CE9107C7598C8(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m5F40D712F4473BE4A419A8198BE7190CAFA53828_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_1 = (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m4CA056E40F3696B0F634BE02C68CE9107C7598C8(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m07A39878AD2C13A3EC348DD0E2F64641E43E0D1A_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_6 = ___0_key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2387B91BA1614F8BD0037CF10888678FC0213FF0_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mB65EE0BBB002345A08BAE76881973CA1F6A55FB3_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0;
		L_0 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23E94334E94EFA7622F0EC303B8D0CE2235DA010_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0;
		L_0 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mB3F3BE11C2E5D75AED5396B2CB10742E6F0800BF_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0;
		L_0 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_9;
		L_9 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_10;
		L_10 = Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m63C07905E27C05BB33617E4BAFD09CD2048B1D9D_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD3382707B0A0977575551EF563A509A60695AD4F_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mB41AF7C04A1CCE400BA62B99CCC303504102AAE8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_5 = V_0;
		int32_t L_6 = V_1;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_16 = V_0;
		int32_t L_17 = V_3;
		RuntimeObject* L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_29 = V_0;
		int32_t L_30 = V_5;
		RuntimeObject* L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_14 = V_1;
		int32_t L_15 = V_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_17 = V_1;
		int32_t L_18 = V_2;
		RuntimeObject* L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 Dictionary_2_GetEnumerator_m86A96D4E7AF5EB4FC9401A17B71821C524C98403_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mE4242487DEA1CA4F9083B7E751F70DECD5A6C5AA_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mEFD0BDDBCFE15749CD2E0D7AD58E6A7550D6BF74_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_6;
		L_6 = EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_14 = (KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*)(KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_15 = V_0;
		Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_19;
		L_19 = EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_20 = V_2;
		int32_t L_21 = V_0;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_46 = V_2;
		int32_t L_47 = V_0;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_5 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)(EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* V_10 = NULL;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_24;
		L_24 = EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_0;
		int32_t L_26 = V_5;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_31 = V_0;
		int32_t L_32 = V_5;
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_35 = ___0_key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_51 = V_0;
		int32_t L_52 = V_5;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_57 = V_0;
		int32_t L_58 = V_5;
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_61 = ___0_key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m897DFE92D2953E564DE90594548FCAFE0981A375(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_94 = V_10;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_95 = ___0_key;
		L_94->___key = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->____cultureKey), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->____pattern), (void*)NULL);
		#endif
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m30C69800F481DF95A3C2B26672083C4942C7AF6A_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_19 = V_3;
		int32_t L_20 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_21;
		L_21 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_22 = V_3;
		int32_t L_23 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_24;
		L_24 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_25 = V_3;
		int32_t L_26 = V_4;
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m897DFE92D2953E564DE90594548FCAFE0981A375_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m985506E79EE868501F78DDACCA0D0748751E5327(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m985506E79EE868501F78DDACCA0D0748751E5327_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_1 = NULL;
	int32_t V_2 = 0;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_3 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)(EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_5 = __this->____entries;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31));
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_15 = V_1;
		int32_t L_16 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* L_17 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_20;
		L_20 = EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_21 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_22 = L_21->___key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_25 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_26 = L_25->___key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_41 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* L_42 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31));
	}

IL_00ff:
	{
	}
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m423F15A532C6A9B72D948F03DCF1E8FE95266FDE_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mF49067A549741BBB9B9BA690E05B00A9854C7E9F_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m0BF6AA68A9292D57E071C216236F4569412741AB_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m58B657EDC37CB7C4C1FA6E5ECAA49192968290E8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m822016BA854B3523CF33A27E9548ECDE43C85690_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_2;
		int32_t L_26 = V_3;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12), &L_28);
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_30 = V_2;
		int32_t L_31 = V_3;
		RuntimeObject* L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_47 = V_6;
			int32_t L_48 = V_7;
			CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_50 = V_6;
			int32_t L_51 = V_7;
			RuntimeObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
			KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18), &L_54);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mB824CC9AE49B882D511ADFCD217426BFC12FAB38_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m230B767B18EF35F11415F7A727CA1CEC19DA39EC_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m4540BEB04CE0E31DC46A4CF9EA6DDE820B175AC1_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, ((*(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)((CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m26BD17B7EEA27EDA57B60C2113C7AE365109523B_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)((CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12)))));
		}
		try
		{
			CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m2387B91BA1614F8BD0037CF10888678FC0213FF0(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 16))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m9BF33360802A4565E45703E76292DEAEB476C8D3_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mD3382707B0A0977575551EF563A509A60695AD4F(__this, ((*(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)((CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61E0DFD545EE45B0C2E19B76F54D726B3A55D382_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m681A36950A220BD5CEDB6AA51B4D94DAC8CB1DE3_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88(__this, ((*(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)((CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 12))))), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0015:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_0 = NULL;
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_0 = ((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_gshared_inline (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_gshared_inline (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mD14A5316A7715DA2836B07BF240EC5E4D095F10B_gshared_inline (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m78EF0CBE211C8EF4C4A5D0ABD95349A0D32B46BA_gshared_inline (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_0 = NULL;
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_0 = ((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_gshared_inline (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 KeyValuePair_2_get_Value_mFE352005BECB8CC1491A710CCFC837B564E820A4_gshared_inline (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* __this, const RuntimeMethod* method) 
{
	{
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* V_0 = NULL;
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_0 = ((EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m931FF926579EC7BABDD76C5453220EAF279A5882(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* V_0 = NULL;
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_0 = ((EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mAA45B05C7943D68C13B6088091B86D8AF7ACA704(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_gshared_inline (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 KeyValuePair_2_get_Value_mB24B9E0A407074537FD1D3A0649C8A85704B057F_gshared_inline (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* V_0 = NULL;
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_0 = ((EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m6D99876F3A0CC92388F04FA521AFA20EDAF66D25(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_gshared_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_gshared_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
