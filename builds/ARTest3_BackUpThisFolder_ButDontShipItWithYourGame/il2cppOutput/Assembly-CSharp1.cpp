#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
		method->invoker_method(methodPtr, method, obj, params, NULL);
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
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Action`1<Fusion.NetworkRunner>
struct Action_1_t36E6F0CE4A81B926FDFA2FFF88800DB76515BDA8;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.SceneManagement.Scene>
struct Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9;
// Fusion.ChangedDelegate`1<NetworkCharacterControllerPrototype>
struct ChangedDelegate_1_t2ADC111FE108454CF5E93B1F60D151F43BBEB91D;
// Fusion.ChangedDelegate`1<Player>
struct ChangedDelegate_1_t595A16A2FF1A889A6CD4F810344F46FAF0EDB3FC;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Collections.Generic.Dictionary`2<System.Guid,Fusion.NetworkObject>
struct Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Object>
struct Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A;
// System.Collections.Generic.Dictionary`2<System.Int32,Fusion.NetworkRunner>
struct Dictionary_2_t8043B6C785B439524A8755BCF6A5CC3612CFCFCD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<Fusion.NetworkObjectGuid,Fusion.NetworkObject>
struct Dictionary_2_t3BC581E5E3414F2C3884E7EA3F3D93105565B726;
// System.Collections.Generic.Dictionary`2<Fusion.NetworkRunner,System.Collections.Generic.List`1<FusionStats>>
struct Dictionary_2_tE895F84BC5B5CBB34273E02A17E2028850359AE6;
// System.Collections.Generic.Dictionary`2<Fusion.PlayerRef,System.Collections.Generic.List`1<Fusion.NetworkObject>>
struct Dictionary_2_tCF872C9A43CC2A631FE835B219F267869FA01470;
// System.Collections.Generic.Dictionary`2<Fusion.PlayerRef,Fusion.NetworkObject>
struct Dictionary_2_t3000CE5E80875F97C1FB1B03F5275CA140BCF771;
// System.Collections.Generic.Dictionary`2<Fusion.PlayerRef,System.Object>
struct Dictionary_2_tA67BF03535BE283889E6F92DD820773074203F5F;
// System.Collections.Generic.Dictionary`2<System.String,FusionStats>
struct Dictionary_2_t74FADE6343657B7C1F56B7477511157BB3AFE29D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,Fusion.SessionProperty>
struct Dictionary_2_t76430ACFBB350098A845786C2907D3AA2EA9DD9B;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// Fusion.FastReferenceList`1<Fusion.NetworkBehaviour>
struct FastReferenceList_1_t2DC9499F4E148A6E8794A7A5E3F1A83D98AA0D76;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Collections.Generic.IEnumerable`1<Fusion.NetworkObject>
struct IEnumerable_1_t32C2A0FF95CFEDA759D18DC81B46A6969069EBFA;
// System.Collections.Generic.IEqualityComparer`1<System.Guid>
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
// System.Collections.Generic.IEqualityComparer`1<Fusion.PlayerRef>
struct IEqualityComparer_1_t1F02E8528D5E2728C9EEF8B1F3D59F15AF8FA713;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// ISpawnPointManagerPrototype`1<PlayerSpawnPointPrototype>
struct ISpawnPointManagerPrototype_1_t1E5B2F8940219B82F8F93CFD871DE75E5305E64B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,Fusion.NetworkObject>
struct KeyCollection_t82A1EF49E87D4B323EF5F4383E36A36E47417062;
// System.Collections.Generic.Dictionary`2/KeyCollection<Fusion.PlayerRef,Fusion.NetworkObject>
struct KeyCollection_tD8475FA4CC7D087254A6FF0FC8FBFDE63922069D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.LinkedList`1<Fusion.RunnerVisibilityNode>
struct LinkedList_1_t3813413FE4ECB2279D0C7AC05BD288865A34356B;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.Collider2D>
struct List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4;
// System.Collections.Generic.List`1<FusionGraph>
struct List_1_t71727F1745217686275A52FBC2C2AD4CDE247ECA;
// System.Collections.Generic.List`1<Fusion.StatsInternal.IFusionStatsView>
struct List_1_t6638C479C599039AA688F1887FC173CF9E2733EE;
// System.Collections.Generic.List`1<Fusion.INetworkRunnerCallbacks>
struct List_1_tA8148AA407AA53B8F5D3BFB8B1AE9D9C941E8545;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930;
// System.Collections.Generic.List`1<Fusion.NetworkObject>
struct List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82;
// System.Collections.Generic.List`1<Fusion.NetworkRunner>
struct List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93;
// System.Collections.Generic.List`1<Fusion.SessionInfo>
struct List_1_t1401F7FA1DF1659F914B5A8D1A6B07E195A110AA;
// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>
struct List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// Fusion.NetworkBehaviourCallbacks`1<NetworkCharacterControllerPrototype>
struct NetworkBehaviourCallbacks_1_tD15FF85309EBEDC5C4C0E6C1D88E583AE2D45A34;
// Fusion.NetworkBehaviourCallbacks`1<Player>
struct NetworkBehaviourCallbacks_1_t3536D478BCE865B25B54327EF1EAF16863C30801;
// Fusion.NetworkObjectRefMap`1<Fusion.NetworkObject>
struct NetworkObjectRefMap_1_t09E8E07F1985CA0C12E271256B24BBFF00DB90F6;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.Queue`1<Fusion.NetworkRunner/SpawnQueueEntry>
struct Queue_1_t15EDAB8C3525B4DF694D0B2011D38D47CDCABD5D;
// SpawnPointManagerPrototype`1<System.Object>
struct SpawnPointManagerPrototype_1_tC1B622C1FA044879897CECF6C1EEA79C44B5B826;
// SpawnPointManagerPrototype`1<PlayerSpawnPointPrototype>
struct SpawnPointManagerPrototype_1_tF8B95B3F73100916235CA03303E1682154B77872;
// SpawnerPrototype`1<System.Object>
struct SpawnerPrototype_1_t62F1C32483637253B2C5E111F0DCBB92F4A8594E;
// SpawnerPrototype`1<PlayerSpawnPointPrototype>
struct SpawnerPrototype_1_t2B1CAFDC5FDCFA5CBBB3556DADE68606CB2AC742;
// System.Collections.Generic.Stack`1<Fusion.NetworkRunner/NetworkObjectInactivityGuard>
struct Stack_1_t0F5E34EE9211205B247AA0F814825DB9E5DD48B7;
// System.Threading.Tasks.TaskCompletionSource`1<System.ValueTuple`4<System.Int32,System.Int32,System.UInt32,System.Byte[]>>
struct TaskCompletionSource_1_t62A93805A305FA9DB5BFA2C4EAB96DAB51C33EBF;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14;
// System.Threading.Tasks.TaskCompletionSource`1<Fusion.ShutdownReason>
struct TaskCompletionSource_1_t5996FC6D06F8D04B3AA0E5ED9E4C62B488BBBEFA;
// System.Threading.Tasks.TaskFactory`1<Fusion.StartGameResult>
struct TaskFactory_1_t3B0B77F8BADC56854F4213C1DDDB7FD77EA3C44F;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Fusion.StartGameResult>
struct Task_1_tC2BC7766947595729B67DF8D071E306255CF484C;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,Fusion.NetworkObject>
struct ValueCollection_tF3CD15E5D171F1E7DEA04F2110426D188EEAF961;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.Object>
struct ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296;
// System.Collections.Generic.Dictionary`2/ValueCollection<Fusion.PlayerRef,Fusion.NetworkObject>
struct ValueCollection_tA7ED252FF9B46991455B74101C4A88574F52F9C7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.WeakReference`1<Fusion.NetworkSceneManagerBase>
struct WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2;
// System.WeakReference`1<System.Object>
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,Fusion.NetworkObject>[]
struct EntryU5BU5D_tA792E5E1A56C57513992C4BFBA21AE7DB16E1022;
// System.Collections.Generic.Dictionary`2/Entry<Fusion.PlayerRef,Fusion.NetworkObject>[]
struct EntryU5BU5D_tEE475BB55D1A839B4DAF93A52BF5B1EE3E0D352B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// FusionGraph[]
struct FusionGraphU5BU5D_tFEB28D7455B497DCFB3B6B0815B07DF328BE186C;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA;
// Fusion.NetworkBehaviour[]
struct NetworkBehaviourU5BU5D_t60B9B079110E3B7AAB961DDA3B483DB8CDD56F6F;
// Fusion.NetworkObject[]
struct NetworkObjectU5BU5D_tB73C7914AB3A2AB2BCE11B2D5AFDEAE2A48F2D0D;
// Fusion.NetworkRunner[]
struct NetworkRunnerU5BU5D_tDA69BE78BB341E0EA1AFC6CB984B303A36561725;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// Fusion.RpcInvokeData[]
struct RpcInvokeDataU5BU5D_tC089D978DE881DF71FAD5DD2D541A716E712F722;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// Fusion.SessionInfo[]
struct SessionInfoU5BU5D_t133FBAE4F22F8C20FF05757BDBD5CCA1937359B9;
// Fusion.SimulationBehaviour[]
struct SimulationBehaviourU5BU5D_t31031271E2F0F613B675EBEF61151021139E1C4E;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// ARController
struct ARController_tFFEC6C4A72E0D20209597BC477479037541D67F4;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// Fusion.AccuracyDefaults
struct AccuracyDefaults_t5BFB104965CD241D9829673CC05FC3814E98A721;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Fusion.Allocator
struct Allocator_t4184B6C7C53A6059F1EBA19A30D551CDECA2F69C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// Fusion.Photon.Realtime.AppSettings
struct AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// Fusion.Photon.Realtime.AuthenticationValues
struct AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982;
// BasicSpawner
struct BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B;
// Fusion.Behaviour
struct Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// Fusion.CloudCommunicator
struct CloudCommunicator_tCE73B6724974FAEA9AC2576C14A7C2EE8951DDA6;
// Fusion.CloudServices
struct CloudServices_tC404BACC0187CF1F40CF228DCEFA39DA7D4F270C;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// System.Exception
struct Exception_t;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// FusionStats
struct FusionStats_t0361C00ADA9A527C7EF810A31F4D964A0DAB864F;
// Fusion.FusionUnityLogger
struct FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940;
// Fusion.HeapConfiguration
struct HeapConfiguration_t721D83F0851DFA413E8FF21F4CEB67430196A1DC;
// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA;
// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E;
// Fusion.Protocol.HostMigration
struct HostMigration_t993547CB8CCEB0971E6050E36B4EFC675D156960;
// Fusion.HostMigrationToken
struct HostMigrationToken_t6249F7ADB7BFF0D8D26E524E085F3912BAA2952D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Fusion.ILogger
struct ILogger_tD0E2D7AF8E96102593EEC5932DA5D822AD21EB4F;
// Fusion.INetworkObjectPool
struct INetworkObjectPool_tF26D00322AA1E7BA82ADEB63A320A51ECBB3A485;
// Fusion.INetworkSceneManager
struct INetworkSceneManager_t05C3F1812147E2AA5CD6ED8B908A9F1DFD4E52DA;
// Fusion.INetworkSceneManagerObjectResolver
struct INetworkSceneManagerObjectResolver_tB47C8F6F14AE1C58FEF5ACEDE388C12BB9F5C2EC;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// Fusion.InterpolatedErrorCorrectionSettings
struct InterpolatedErrorCorrectionSettings_t5B77301CB6D439E7C8BD8A38A37E4F5701160E04;
// Fusion.InterpolationConfiguration
struct InterpolationConfiguration_tB5D3A4AFB0A322F24BEAAEE154278A97D0C3E26A;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Fusion.LagCompensationSettings
struct LagCompensationSettings_t6EBFE93B06C8E6568E57EB928F1BD57EFDB0C3F1;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// Fusion.LobbyInfo
struct LobbyInfo_t5F666E1575123FE4714F1B6067A8EAA55CFFA5CF;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Fusion.NetworkAreaOfInterestBehaviour
struct NetworkAreaOfInterestBehaviour_tD2D502D3E647D9E5E4D8A0E3D22DC9F0B674AACD;
// Fusion.NetworkBehaviour
struct NetworkBehaviour_t6DC912DE6ED4D9C556AE37A4CC23D247C52C57B3;
// Fusion.NetworkBehaviourCallbacks
struct NetworkBehaviourCallbacks_t4852EFBA213C9FE28E65FDB3192CD93381CF613E;
// NetworkCharacterControllerPrototype
struct NetworkCharacterControllerPrototype_tD4212436823F0C748FA1B4F10A75A863F2F01FBC;
// Fusion.NetworkConfiguration
struct NetworkConfiguration_t4091A6502AFF002F7318CAC4A52FB587662DBC56;
// Fusion.NetworkObject
struct NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C;
// Fusion.NetworkPrefabTable
struct NetworkPrefabTable_t64D4EFDBA5D92F4D0BC13FA94741947629F4D62F;
// Fusion.NetworkProjectConfig
struct NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF;
// Fusion.NetworkRunner
struct NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A;
// Fusion.NetworkSceneManagerBase
struct NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39;
// Fusion.NetworkSceneManagerDefault
struct NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91;
// Fusion.NetworkSimulationConfiguration
struct NetworkSimulationConfiguration_t32FB88A97B412BEC5292D119E40B83174568EF28;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// PlayerSpawnPointManagerPrototype
struct PlayerSpawnPointManagerPrototype_t155715CC2FBC2EE8FF5A7872955E79575C4C18F7;
// PlayerSpawnPointPrototype
struct PlayerSpawnPointPrototype_t9B5A1C452F0255C5FF0DB273738686CBB585508A;
// PlayerSpawnerPrototype
struct PlayerSpawnerPrototype_t4796F19F1683ADBE95CDE67D28D80E55D6F657E8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Fusion.SessionInfo
struct SessionInfo_t191C09E2A2B9A71925D9B0EDEA501A286FD4BCAB;
// Fusion.Simulation
struct Simulation_t1D52B02F9D931E87FAEB15A3EE8B13ED014DB584;
// Fusion.SimulationBehaviour
struct SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0;
// Fusion.SimulationBehaviourUpdater
struct SimulationBehaviourUpdater_t1D2813CD5F3514AE8854F58396E79C2053157565;
// Fusion.SimulationConfig
struct SimulationConfig_t9B4FF44B2A934AD687A176AE7350E397471BF4C3;
// Fusion.SimulationMessage
struct SimulationMessage_t741F8FBD24BEECD63F62791520B0C4EB9C1D101C;
// Fusion.Protocol.Snapshot
struct Snapshot_t6214C0BF071F5B4CB06F00CBA15A2299FCFD0147;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// Fusion.StartGameResult
struct StartGameResult_t79ED02F6538ACB92001E948B6B750C0A85462E2E;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// ToggleRunnerProvideInput
struct ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A;
// ToggleRunnerVisibility
struct ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// UnityEngine.UI.VerticalLayoutGroup
struct VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Fusion.NetworkRunnerCallbackArgs/ConnectRequest
struct ConnectRequest_t0B36E883FB21681399384CF1BA965DC577148B66;
// Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D;
// Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26
struct U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299;
// Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate
struct FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80;
// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A;
// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D;
// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B;
// Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4
struct U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4;
// Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5
struct U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416;
// Fusion.NetworkTransform/ConsecutiveStateInterp
struct ConsecutiveStateInterp_t4210EBCA4B468417EFF4863F935E5A13AB3990F8;
// Fusion.NetworkTransform/IInterpolationImplementation
struct IInterpolationImplementation_t75CAD48EF63572C00AD106903401DE1C95D70E0F;
// Fusion.NetworkTransform/IntermittentStateInterp
struct IntermittentStateInterp_t99180E682A790470960E4571FB27ED26372A69CE;
// Fusion.NetworkTransform/SmoothErrorCorrectionInterp
struct SmoothErrorCorrectionInterp_tDF72028BC8D42989F989588D8B628D29FFC4DC64;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// Fusion.Simulation/IDeltaCompressor
struct IDeltaCompressor_tB558E97C1456399414A117E3C8E63015A0417147;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3000CE5E80875F97C1FB1B03F5275CA140BCF771_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t32C2A0FF95CFEDA759D18DC81B46A6969069EBFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t7A22B3111FA17D87DB77BDD217435A6312A5541C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RunnerVisibilityNode_t73BB30B54A6EB4715329FD4EC1394459F3EDCB01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral15F6EFCDBE17EFB279217A9B699852DE1E193450;
IL2CPP_EXTERN_C String_t* _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024;
IL2CPP_EXTERN_C String_t* _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA;
IL2CPP_EXTERN_C String_t* _stringLiteral1C4303CE90A80E03466A934F3A49CF1FBA75C709;
IL2CPP_EXTERN_C String_t* _stringLiteral21C54BF860BF41F6CB5FA90618AD96345DB385CD;
IL2CPP_EXTERN_C String_t* _stringLiteral2CD71E3642012925B68B6B9FC2FA6F1735C9F608;
IL2CPP_EXTERN_C String_t* _stringLiteral49EAC01F1FE1AB3E022D37BA90128673D8F2C359;
IL2CPP_EXTERN_C String_t* _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890;
IL2CPP_EXTERN_C String_t* _stringLiteral5D499F9502D74C6CAE298A99A188D512CAD6B153;
IL2CPP_EXTERN_C String_t* _stringLiteral8DE4DA2560E889ADFDF93B3988AF2A52A412B16D;
IL2CPP_EXTERN_C String_t* _stringLiteral961F54967701EA4335F9BFA367097CC26D03D587;
IL2CPP_EXTERN_C String_t* _stringLiteral9D7C1262378BB498E0E72B70BDC1C9D64DB5E587;
IL2CPP_EXTERN_C String_t* _stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37;
IL2CPP_EXTERN_C String_t* _stringLiteralABA4B0EF423AE8EF8E94BF8F8B6A69E900270F03;
IL2CPP_EXTERN_C String_t* _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD;
IL2CPP_EXTERN_C String_t* _stringLiteralAF597A5AFE3E6633B17F51DDC5D052C17158C067;
IL2CPP_EXTERN_C String_t* _stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118;
IL2CPP_EXTERN_C String_t* _stringLiteralB64FA2408DBA1B3C7B72FC5DF10677491CB05D5B;
IL2CPP_EXTERN_C String_t* _stringLiteralB6A843E4AF194F7F4F0925DF3FA2D7C9DA359E37;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1;
IL2CPP_EXTERN_C String_t* _stringLiteralBCF3DB6F10D6C173EA5388EE2DA9ADB20758230A;
IL2CPP_EXTERN_C String_t* _stringLiteralBE85487689556D8DE56201A0CD308B4B5B114A4B;
IL2CPP_EXTERN_C String_t* _stringLiteralC084887FC479038DDA12E60E8FA1EEF449CA1A07;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FD6D7A92A287CB3B46D187F7143A8EFF28600A;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF07FCB7FD52F00A3F38E8D87EC9B368CC5533A;
IL2CPP_EXTERN_C String_t* _stringLiteralD1E77AD5C06A675600CF5CD2F66F68899D01EDAB;
IL2CPP_EXTERN_C String_t* _stringLiteralE2CACCA027530802511895F2C4C873F9DC8ED360;
IL2CPP_EXTERN_C String_t* _stringLiteralE32F71F01B50192A097A0D355AA140AD6D6D0529;
IL2CPP_EXTERN_C String_t* _stringLiteralE6D1C0768F51756AFE088C4C937A5F3DAD818D3E;
IL2CPP_EXTERN_C String_t* _stringLiteralE7EBB41AAA6DCE2694BE6E79BACC448EECCB1F3C;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mA76794E5562401F30A8DF1D7F6A699BD3002EE52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1_TisU3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2_mD358A91C3C48F3ACCAC6F3C19CAE0DED6E351377_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2_m4E56B972744BBE62698241412D4E1C1CB70F14D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNetworkCharacterControllerPrototype_tD4212436823F0C748FA1B4F10A75A863F2F01FBC_mD26963B4658E8089B4F670E015734A89472B6293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB7A02CC7C77717DCDC7980A1EE1194A75B9F673D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4B4120375E58E69EB8BC54ADB054EBBEFC933831_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9E927A7C8B1B64479E0EB380003ADFBA3A575920_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mC860851CA34533BEA997FC852C9AD7768F6D2049_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m48050D75FCDDB54380B87CE4466A5B13280776FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3CC53690EDAA1DDB18B8E49248774B270E7FBAF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mED8C4FC16A9F1BE2915FAE2E7CD05A3C59180C56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FusionUnityLogger_U3C_ctorU3Eb__12_0_mF2706CCE9E8E1F5D73E5AE62E4A6152D28D2D7E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_mDE25E2D9598E3478E8CD12EA6C61F743882E27B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mC504566284D32F0111950B862D22B0602995290C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_m4B45BA973EA8CAA5F6416380C479D6BEA549A8DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91_mC7641EDE933224B4659B9AC72B053BA58B5C6B03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m0E1C6713C85CAAB22DE299872377285F55C106D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_m8FC80304C9EFC42F9CAE9588753536DC6F224521_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mA5584260A845566F11731CDDE7AF216E044BEE7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mADF65DE232F8B1518C734CA9A1D60F1D4A4CC374_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mF756FB30A88DDCBFAE2F1811FEC9FA4CDED0DE2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisNetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C_m30DA9706B6091A01234C649C9FC0CFE9098E435A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m39DE337508D2ADD39AC2AAE01AB0FFEA7583601F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6405D497F14EEE2F172D1D82E55881EA9385B40B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m0CD3227FF22984AB1F8A80030A70A3921A439EF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m84278021B82DC03648708BEFE1521002F9CACBA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mD3AA9DE8ED9C3C202BED617A4EA8CAD29E799999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mBB103B375AB35BB10A810994CFB39ACA5335AEB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mD1C82F35AB4D7DB1DC1D8138EBC6679456DBC940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m006122E663E12324385572178836CCAE30619163_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE750EBF74E88E67DF4737B6A5F3594338FAA2132_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m130EA2C4542DE33976BD5F3E71CFD09028CA12AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m47377D7758798C489896B13DDD6EAFEC1B6D9917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m567A0E8ADE485441540D5B46AB6C518558DDA2FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m83D0AB87CBF92DF59992C02F675DD3DCBB805753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m909AB75DE2253A8B9D7AB3E65CDCDC42BB92DEC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mCE9E8AEA0E6245078585C01E04AF1D72D2B62760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m849F529B76EAC19A125D08EC5D7A7C16A4A5BE2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m09143BB6CC75A27DC82284874BC7AA9874E3D159_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6E83AE2DD08C6F347070F297A225B37FC4A2ADFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA6EF54D04CDB9BB4B0F28BFA8A21EC80A3DC76FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkBehaviour_GetInput_TisNetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F_m4545BC9F2B6E4B244EF9A6F0862C0EF10774C0AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkInput_Set_TisNetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F_m467008FC4B467BB0A6FBE355C24EFF69280995CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkSceneManagerDefault_LoadSceneAsync_m36CF7AA7A1C6FD72BA9BB228F868D27921408534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mE8C7060F0808F23760C168C5DA728296C62527BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m8ED79880725281B975FFF0D1E75C8C3F3018B842_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m80B7F96D7D17A583B34736C90E2B91A8FB71419D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_GetBuiltinResource_TisFont_tC95270EA3198038970422D78B74A7F2E218A96B6_m5D498C77B14E440C2C74A22BC3FFB4963CFC3113_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpawnPointManagerPrototype_1__ctor_m277C4593C2E8CA84BDC42D057C38D10D77F661E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpawnerPrototype_1_RegisterPlayerAndObject_m692A4F3F4AF9B04834E9ED98360A74AB6C30828D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpawnerPrototype_1__ctor_mD117339871C159AFAADCA7D9A5872CB8CD057763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mC799FE9667F3EE1F958E7F49913DFA4663F83EAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mD2D85A293F49BD10A83BB71080013D86DCCC36FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m2F3B2222046B2DA707D8965AEBAEC709C45516EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSwitchSceneMultiplePeerU3Ed__4_MoveNext_mCCAF9BAD9D8DBB44E791E4561F77F3F5BA7EACAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSwitchSceneMultiplePeerU3Ed__4_System_Collections_IEnumerator_Reset_m42947312456A7F84159B07569579F4DA1A7B7BAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSwitchSceneSinglePeerU3Ed__5_MoveNext_mAC4FF417C4452B42641D11DFCE5281B848BF272E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSwitchSceneSinglePeerU3Ed__5_System_Collections_IEnumerator_Reset_m1C3DD543555F33C88C9F974C36682A1451D8B751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSwitchSceneWrapperU3Ed__26_System_Collections_IEnumerator_Reset_m1534E7EA5E2AB80717703ACB2B3EF6BBD4746541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CLoadSceneAsyncU3Eb__0_m4B059F1800104229F1D8516434F60658B7F97851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CLoadSceneAsyncU3Eb__1_m1806E6321B96A0D8071C4314923E8EFF4C7A7491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass26_0_U3CSwitchSceneWrapperU3Eb__0_mFC80B5A645E2B16A5DD648379819DDE8E25807D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CSwitchSceneMultiplePeerU3Eb__0_m4D508569C6E5E2605A5E766A3ECF3066DCC86A72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CSwitchSceneSinglePeerU3Eb__0_m82BCA4D1AE3A23C1230106556968AA005B4E93E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_5__ctor_mFA8F15EE5770AAF9026420AE64E667705760FAA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_TryGetTarget_m1B98B24F2C23C226A6A634FF3166162524EF61EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1__ctor_m1039DCD4F251CC407C0D72021F7D04F936DC0E29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FusionGraphVisualization_t989F5A867C227A92C199E79C10AD87E7901360B0_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Guid,Fusion.NetworkObject>
struct Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA792E5E1A56C57513992C4BFBA21AE7DB16E1022* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t82A1EF49E87D4B323EF5F4383E36A36E47417062* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF3CD15E5D171F1E7DEA04F2110426D188EEAF961* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Fusion.PlayerRef,Fusion.NetworkObject>
struct Dictionary_2_t3000CE5E80875F97C1FB1B03F5275CA140BCF771  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEE475BB55D1A839B4DAF93A52BF5B1EE3E0D352B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tD8475FA4CC7D087254A6FF0FC8FBFDE63922069D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA7ED252FF9B46991455B74101C4A88574F52F9C7* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Collider2D>
struct List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Fusion.NetworkObject>
struct List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NetworkObjectU5BU5D_tB73C7914AB3A2AB2BCE11B2D5AFDEAE2A48F2D0D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NetworkObjectU5BU5D_tB73C7914AB3A2AB2BCE11B2D5AFDEAE2A48F2D0D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Fusion.NetworkRunner>
struct List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NetworkRunnerU5BU5D_tDA69BE78BB341E0EA1AFC6CB984B303A36561725* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NetworkRunnerU5BU5D_tDA69BE78BB341E0EA1AFC6CB984B303A36561725* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Fusion.SessionInfo>
struct List_1_t1401F7FA1DF1659F914B5A8D1A6B07E195A110AA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SessionInfoU5BU5D_t133FBAE4F22F8C20FF05757BDBD5CCA1937359B9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1401F7FA1DF1659F914B5A8D1A6B07E195A110AA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SessionInfoU5BU5D_t133FBAE4F22F8C20FF05757BDBD5CCA1937359B9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>
struct List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,Fusion.NetworkObject>
struct ValueCollection_tF3CD15E5D171F1E7DEA04F2110426D188EEAF961  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4* ____dictionary_0;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Fusion.Editor.BoundsTools
struct BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE  : public RuntimeObject
{
};

struct BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.MeshFilter> Fusion.Editor.BoundsTools::meshFilters
	List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ___meshFilters_0;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> Fusion.Editor.BoundsTools::meshRenderers
	List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ___meshRenderers_1;
	// System.Collections.Generic.List`1<UnityEngine.Collider> Fusion.Editor.BoundsTools::colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___colliders_2;
	// System.Collections.Generic.List`1<UnityEngine.Collider> Fusion.Editor.BoundsTools::validColliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___validColliders_3;
	// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer> Fusion.Editor.BoundsTools::spriteRenderers
	List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* ___spriteRenderers_4;
	// System.Collections.Generic.List`1<UnityEngine.Collider2D> Fusion.Editor.BoundsTools::colliders2D
	List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* ___colliders2D_5;
	// System.Collections.Generic.List`1<UnityEngine.Collider2D> Fusion.Editor.BoundsTools::validColliders2D
	List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* ___validColliders2D_6;
};

// Fusion.FusionRuntimeCheck
struct FusionRuntimeCheck_t302B78CD2063CCDD24262456FD92646BEDDA75A4  : public RuntimeObject
{
};

// FusionScalableIMGUI
struct FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D  : public RuntimeObject
{
};

struct FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields
{
	// UnityEngine.GUISkin FusionScalableIMGUI::_scalableSkin
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ____scalableSkin_0;
};

// Fusion.HostMigrationToken
struct HostMigrationToken_t6249F7ADB7BFF0D8D26E524E085F3912BAA2952D  : public RuntimeObject
{
	// Fusion.GameMode Fusion.HostMigrationToken::<GameMode>k__BackingField
	int32_t ___U3CGameModeU3Ek__BackingField_0;
	// Fusion.Protocol.Snapshot Fusion.HostMigrationToken::<HostSnapshot>k__BackingField
	Snapshot_t6214C0BF071F5B4CB06F00CBA15A2299FCFD0147* ___U3CHostSnapshotU3Ek__BackingField_1;
	// Fusion.CloudCommunicator Fusion.HostMigrationToken::<CloudCommunicator>k__BackingField
	CloudCommunicator_tCE73B6724974FAEA9AC2576C14A7C2EE8951DDA6* ___U3CCloudCommunicatorU3Ek__BackingField_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Fusion.NetworkProjectConfig
struct NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF  : public RuntimeObject
{
	// System.Int32 Fusion.NetworkProjectConfig::Version
	int32_t ___Version_3;
	// System.String Fusion.NetworkProjectConfig::TypeId
	String_t* ___TypeId_4;
	// Fusion.NetworkProjectConfig/PeerModes Fusion.NetworkProjectConfig::PeerMode
	int32_t ___PeerMode_5;
	// Fusion.NetworkProjectConfig/PhysicsEngines Fusion.NetworkProjectConfig::PhysicsEngine
	int32_t ___PhysicsEngine_6;
	// Fusion.NetworkProjectConfig/PhysicsModes Fusion.NetworkProjectConfig::ServerPhysicsMode
	int32_t ___ServerPhysicsMode_7;
	// System.Boolean Fusion.NetworkProjectConfig::UseLagCompensation
	bool ___UseLagCompensation_8;
	// Fusion.LagCompensationSettings Fusion.NetworkProjectConfig::LagCompensation
	LagCompensationSettings_t6EBFE93B06C8E6568E57EB928F1BD57EFDB0C3F1* ___LagCompensation_9;
	// Fusion.NetworkProjectConfig/SceneLoadSpawnModes Fusion.NetworkProjectConfig::SceneLoadSpawnMode
	int32_t ___SceneLoadSpawnMode_10;
	// Fusion.NetworkProjectConfig/DeltaCompressors Fusion.NetworkProjectConfig::DeltaCompressor
	int32_t ___DeltaCompressor_11;
	// System.Boolean Fusion.NetworkProjectConfig::InvokeRenderInBatchMode
	bool ___InvokeRenderInBatchMode_12;
	// System.UInt16 Fusion.NetworkProjectConfig::MaxNetworkedObjectCount
	uint16_t ___MaxNetworkedObjectCount_13;
	// System.Boolean Fusion.NetworkProjectConfig::NetworkIdIsObjectName
	bool ___NetworkIdIsObjectName_14;
	// System.Boolean Fusion.NetworkProjectConfig::HideNetworkObjectInactivityGuard
	bool ___HideNetworkObjectInactivityGuard_15;
	// System.Boolean Fusion.NetworkProjectConfig::EnableHostMigration
	bool ___EnableHostMigration_16;
	// System.UInt32 Fusion.NetworkProjectConfig::HostMigrationSnapshotInterval
	uint32_t ___HostMigrationSnapshotInterval_17;
	// Fusion.NetworkPrefabTable Fusion.NetworkProjectConfig::PrefabTable
	NetworkPrefabTable_t64D4EFDBA5D92F4D0BC13FA94741947629F4D62F* ___PrefabTable_18;
	// Fusion.SimulationConfig Fusion.NetworkProjectConfig::Simulation
	SimulationConfig_t9B4FF44B2A934AD687A176AE7350E397471BF4C3* ___Simulation_19;
	// Fusion.InterpolationConfiguration Fusion.NetworkProjectConfig::Interpolation
	InterpolationConfiguration_tB5D3A4AFB0A322F24BEAAEE154278A97D0C3E26A* ___Interpolation_20;
	// Fusion.NetworkConfiguration Fusion.NetworkProjectConfig::Network
	NetworkConfiguration_t4091A6502AFF002F7318CAC4A52FB587662DBC56* ___Network_21;
	// Fusion.NetworkSimulationConfiguration Fusion.NetworkProjectConfig::NetworkConditions
	NetworkSimulationConfiguration_t32FB88A97B412BEC5292D119E40B83174568EF28* ___NetworkConditions_22;
	// Fusion.HeapConfiguration Fusion.NetworkProjectConfig::Heap
	HeapConfiguration_t721D83F0851DFA413E8FF21F4CEB67430196A1DC* ___Heap_23;
	// Fusion.AccuracyDefaults Fusion.NetworkProjectConfig::AccuracyDefaults
	AccuracyDefaults_t5BFB104965CD241D9829673CC05FC3814E98A721* ___AccuracyDefaults_24;
	// System.String[] Fusion.NetworkProjectConfig::AssembliesToWeave
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___AssembliesToWeave_25;
	// System.Boolean Fusion.NetworkProjectConfig::UseSerializableDictionary
	bool ___UseSerializableDictionary_26;
	// System.Boolean Fusion.NetworkProjectConfig::NullChecksForNetworkedProperties
	bool ___NullChecksForNetworkedProperties_27;
	// System.Boolean Fusion.NetworkProjectConfig::CheckRpcAttributeUsage
	bool ___CheckRpcAttributeUsage_28;
	// System.Boolean Fusion.NetworkProjectConfig::CheckNetworkedPropertiesBeingEmpty
	bool ___CheckNetworkedPropertiesBeingEmpty_29;
};

// Fusion.NetworkRunnerExtensions
struct NetworkRunnerExtensions_t97B58A5A739670FBA0567B6D3597D01D8B46DC32  : public RuntimeObject
{
};

// Fusion.StartGameResult
struct StartGameResult_t79ED02F6538ACB92001E948B6B750C0A85462E2E  : public RuntimeObject
{
	// Fusion.ShutdownReason Fusion.StartGameResult::<ShutdownReason>k__BackingField
	int32_t ___U3CShutdownReasonU3Ek__BackingField_0;
};

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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D  : public RuntimeObject
{
	// System.Boolean Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0::finishCalled
	bool ___finishCalled_0;
	// System.Collections.Generic.Dictionary`2<System.Guid,Fusion.NetworkObject> Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0::sceneObjects
	Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4* ___sceneObjects_1;
};

// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A  : public RuntimeObject
{
	// System.String Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0::scenePath
	String_t* ___scenePath_0;
	// System.Boolean Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0::alreadyHandled
	bool ___alreadyHandled_1;
	// System.Action`1<UnityEngine.SceneManagement.Scene> Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0::loaded
	Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* ___loaded_2;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0::sceneLoadedHandler
	UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___sceneLoadedHandler_3;
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// Fusion.Changed`1<NetworkCharacterControllerPrototype>
struct Changed_1_t90EF7B581B5CCC30705AF592333631F99250DC96 
{
	// System.Int32* Fusion.Changed`1::_old
	int32_t* ____old_0;
	// System.Int32* Fusion.Changed`1::_new
	int32_t* ____new_1;
	// System.Boolean Fusion.Changed`1::_rescan
	bool ____rescan_2;
	// T Fusion.Changed`1::_behaviour
	NetworkCharacterControllerPrototype_tD4212436823F0C748FA1B4F10A75A863F2F01FBC* ____behaviour_3;
};

// Fusion.Changed`1<Player>
struct Changed_1_t9CC119E67FD109C3D5AA79262EBA8D870ECE142D 
{
	// System.Int32* Fusion.Changed`1::_old
	int32_t* ____old_0;
	// System.Int32* Fusion.Changed`1::_new
	int32_t* ____new_1;
	// System.Boolean Fusion.Changed`1::_rescan
	bool ____rescan_2;
	// T Fusion.Changed`1::_behaviour
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ____behaviour_3;
};

// System.Collections.Generic.List`1/Enumerator<Fusion.NetworkObject>
struct Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Fusion.NetworkRunner>
struct Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Fusion.SimulationModes>
struct Nullable_1_tA7AB74DCC49231122BDE6A56B38A849C29538EF7 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Fusion.StartGameResult>
struct TaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC2BC7766947595729B67DF8D071E306255CF484C* ___m_task_0;
};

// System.Threading.Tasks.Task`1<Fusion.StartGameResult>
struct Task_1_tC2BC7766947595729B67DF8D071E306255CF484C  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	StartGameResult_t79ED02F6538ACB92001E948B6B750C0A85462E2E* ___m_result_38;
};

struct Task_1_tC2BC7766947595729B67DF8D071E306255CF484C_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t3B0B77F8BADC56854F4213C1DDDB7FD77EA3C44F* ___s_defaultFactory_39;
};

// System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>
struct ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C 
{
	// T1 System.ValueTuple`5::Item1
	float ___Item1_0;
	// T2 System.ValueTuple`5::Item2
	float ___Item2_1;
	// T3 System.ValueTuple`5::Item3
	int32_t ___Item3_2;
	// T4 System.ValueTuple`5::Item4
	int32_t ___Item4_3;
	// T5 System.ValueTuple`5::Item5
	float ___Item5_4;
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

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DescriptionAttribute::<DescriptionValue>k__BackingField
	String_t* ___U3CDescriptionValueU3Ek__BackingField_1;
};

struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_StaticFields
{
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* ___Default_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.SceneManagement.LoadSceneParameters
struct LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E 
{
	// UnityEngine.SceneManagement.LoadSceneMode UnityEngine.SceneManagement.LoadSceneParameters::m_LoadSceneMode
	int32_t ___m_LoadSceneMode_0;
	// UnityEngine.SceneManagement.LocalPhysicsMode UnityEngine.SceneManagement.LoadSceneParameters::m_LocalPhysicsMode
	int32_t ___m_LocalPhysicsMode_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// Fusion.NetworkId
struct NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Fusion.NetworkId::Raw
			uint32_t ___Raw_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___Raw_4_forAlignmentOnly;
		};
	};
};

// Fusion.NetworkInput
struct NetworkInput_t8FB09045785B1BAE178F157ACE2B24EEC7E31231 
{
	// System.Int32* Fusion.NetworkInput::_ptr
	int32_t* ____ptr_0;
	// System.Int32 Fusion.NetworkInput::_wordCount
	int32_t ____wordCount_1;
};

// Fusion.NetworkObjectPredictionKey
struct NetworkObjectPredictionKey_tBF0A538EE9240A4AB5D149BC21F8B174181D8E9A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Fusion.NetworkObjectPredictionKey::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Fusion.NetworkObjectPredictionKey::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Fusion.NetworkObjectPredictionKey::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Fusion.NetworkObjectPredictionKey::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Fusion.NetworkObjectPredictionKey::AsInt
			int32_t ___AsInt_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___AsInt_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Fusion.NetworkObjectPredictionKey::AsFloat
			uint8_t ___AsFloat_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___AsFloat_5_forAlignmentOnly;
		};
	};
};

// Fusion.NetworkPrefabId
struct NetworkPrefabId_tD353189021ABA05E620EE2F0BE67171A8C6F7AC9 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Fusion.NetworkPrefabId::Value
			uint32_t ___Value_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___Value_2_forAlignmentOnly;
		};
	};
};

// Fusion.NetworkRNG
struct NetworkRNG_t64B73CD206460A54C63878CFB53238AD54ECA0B2 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Fusion.NetworkRNG::_state
			uint64_t ____state_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ____state_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____inc_7_OffsetPadding[8];
			// System.UInt64 Fusion.NetworkRNG::_inc
			uint64_t ____inc_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____inc_7_OffsetPadding_forAlignmentOnly[8];
			uint64_t ____inc_7_forAlignmentOnly;
		};
	};
};

// Fusion.PlayerRef
struct PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Fusion.PlayerRef::_index
			int32_t ____index_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____index_1_forAlignmentOnly;
		};
	};
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// Fusion.ReadAccuracy
struct ReadAccuracy_tAB2B6530E294025CF190D052F8B35FAC62C753B5 
{
	// System.Single Fusion.ReadAccuracy::Value
	float ___Value_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// Fusion.SceneRef
struct SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Fusion.SceneRef::_index
			int32_t ____index_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____index_1_forAlignmentOnly;
		};
	};
};

// Fusion.SimulationMessagePtr
struct SimulationMessagePtr_tADE4FF081CDDA852A76EA6701476D3167449C8FB 
{
	// Fusion.SimulationMessage* Fusion.SimulationMessagePtr::Message
	SimulationMessage_t741F8FBD24BEECD63F62791520B0C4EB9C1D101C* ___Message_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// Fusion.Tick
struct Tick_t57D39A4600C22C5C14D12A0C565FEB34404FD02F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Fusion.Tick::Raw
			int32_t ___Raw_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Raw_2_forAlignmentOnly;
		};
	};
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// Fusion.WriteAccuracy
struct WriteAccuracy_tC6AAEB23A6F50AD278A1D892364F7C0E427241AF 
{
	// System.Single Fusion.WriteAccuracy::Value
	float ___Value_0;
};

// Fusion.NetworkObjectGuid/<RawGuidValue>e__FixedBuffer
struct U3CRawGuidValueU3Ee__FixedBuffer_t048BC06BF094CC07E5C83A903FE344CCF482DD2F 
{
	union
	{
		struct
		{
			// System.Int64 Fusion.NetworkObjectGuid/<RawGuidValue>e__FixedBuffer::FixedElementField
			int64_t ___FixedElementField_0;
		};
		uint8_t U3CRawGuidValueU3Ee__FixedBuffer_t048BC06BF094CC07E5C83A903FE344CCF482DD2F__padding[16];
	};
};

// Fusion.NetworkPrefabRef/<RawGuidValue>e__FixedBuffer
struct U3CRawGuidValueU3Ee__FixedBuffer_t391DCB2258F87803497444CF31D1F6891633FD14 
{
	union
	{
		struct
		{
			// System.Int64 Fusion.NetworkPrefabRef/<RawGuidValue>e__FixedBuffer::FixedElementField
			int64_t ___FixedElementField_0;
		};
		uint8_t U3CRawGuidValueU3Ee__FixedBuffer_t391DCB2258F87803497444CF31D1F6891633FD14__padding[16];
	};
};

// Fusion.NetworkRunner/DeferredShutdownParams
struct DeferredShutdownParams_t3F598A811D32AD9AE4A814809263F7035376B9AF 
{
	// System.Boolean Fusion.NetworkRunner/DeferredShutdownParams::ShutdownRequested
	bool ___ShutdownRequested_0;
	// Fusion.ShutdownReason Fusion.NetworkRunner/DeferredShutdownParams::ShutdownReason
	int32_t ___ShutdownReason_1;
	// System.Boolean Fusion.NetworkRunner/DeferredShutdownParams::DestroyGO
	bool ___DestroyGO_2;
};
// Native definition for P/Invoke marshalling of Fusion.NetworkRunner/DeferredShutdownParams
struct DeferredShutdownParams_t3F598A811D32AD9AE4A814809263F7035376B9AF_marshaled_pinvoke
{
	int32_t ___ShutdownRequested_0;
	int32_t ___ShutdownReason_1;
	int32_t ___DestroyGO_2;
};
// Native definition for COM marshalling of Fusion.NetworkRunner/DeferredShutdownParams
struct DeferredShutdownParams_t3F598A811D32AD9AE4A814809263F7035376B9AF_marshaled_com
{
	int32_t ___ShutdownRequested_0;
	int32_t ___ShutdownReason_1;
	int32_t ___DestroyGO_2;
};

// Fusion.NetworkRunner/HostSnapshotCompressionJob
struct HostSnapshotCompressionJob_tF5EE776934ACB6499EF7BCC85793FDA2FB03431A 
{
	// System.Int32 Fusion.NetworkRunner/HostSnapshotCompressionJob::CurrentTick
	int32_t ___CurrentTick_0;
	// System.Int32 Fusion.NetworkRunner/HostSnapshotCompressionJob::Length
	int32_t ___Length_1;
	// System.UInt32 Fusion.NetworkRunner/HostSnapshotCompressionJob::LastID
	uint32_t ___LastID_2;
	// System.Int32* Fusion.NetworkRunner/HostSnapshotCompressionJob::Previous
	int32_t* ___Previous_3;
	// System.Int32* Fusion.NetworkRunner/HostSnapshotCompressionJob::Current
	int32_t* ___Current_4;
	// System.Int32* Fusion.NetworkRunner/HostSnapshotCompressionJob::Result
	int32_t* ___Result_5;
};

// Fusion.NetworkPositionRotation/EncodedPosition/<Data>e__FixedBuffer
struct U3CDataU3Ee__FixedBuffer_t2C219BB37991C137D7AA452EBE5F53C992B7F3CA 
{
	union
	{
		struct
		{
			// System.UInt32 Fusion.NetworkPositionRotation/EncodedPosition/<Data>e__FixedBuffer::FixedElementField
			uint32_t ___FixedElementField_0;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t2C219BB37991C137D7AA452EBE5F53C992B7F3CA__padding[12];
	};
};

// Fusion.NetworkPositionRotation/EncodedRotation/<Data>e__FixedBuffer
struct U3CDataU3Ee__FixedBuffer_tED309E4ABEBA89B34EF80BCAEDEB73402034A2E8 
{
	union
	{
		struct
		{
			// System.UInt64 Fusion.NetworkPositionRotation/EncodedRotation/<Data>e__FixedBuffer::FixedElementField
			uint64_t ___FixedElementField_0;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_tED309E4ABEBA89B34EF80BCAEDEB73402034A2E8__padding[16];
	};
};

// System.Nullable`1<Fusion.SceneRef>
struct Nullable_1_t60B9431C1BCAA220BB2AA6938CBB4CD1F9CFE0F1 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___value_1;
};

// System.Nullable`1<Fusion.NetworkRunner/HostSnapshotCompressionJob>
struct Nullable_1_tC45089A0BD074FF0A859152F3B8175B86B2FCB29 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	HostSnapshotCompressionJob_tF5EE776934ACB6499EF7BCC85793FDA2FB03431A ___value_1;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// Fusion.StatsInternal.FusionStatsUtilities
struct FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988  : public RuntimeObject
{
};

struct FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields
{
	// System.Collections.Generic.List`1<System.String> Fusion.StatsInternal.FusionStatsUtilities::_cachedGraphVisualizationNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____cachedGraphVisualizationNames_5;
	// UnityEngine.Font Fusion.StatsInternal.FusionStatsUtilities::_font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ____font_6;
	// UnityEngine.Texture2D Fusion.StatsInternal.FusionStatsUtilities::_meterTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____meterTexture_8;
	// UnityEngine.Sprite Fusion.StatsInternal.FusionStatsUtilities::_meterSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____meterSprite_9;
	// UnityEngine.Texture2D Fusion.StatsInternal.FusionStatsUtilities::_circle32Texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____circle32Texture_11;
	// UnityEngine.Sprite Fusion.StatsInternal.FusionStatsUtilities::_circle32Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____circle32Sprite_12;
	// UnityEngine.Color Fusion.StatsInternal.FusionStatsUtilities::DARK_GREEN
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___DARK_GREEN_13;
	// UnityEngine.Color Fusion.StatsInternal.FusionStatsUtilities::DARK_BLUE
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___DARK_BLUE_14;
	// UnityEngine.Color Fusion.StatsInternal.FusionStatsUtilities::DARK_RED
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___DARK_RED_15;
	// System.Collections.Generic.List`1<Fusion.NetworkRunner> Fusion.StatsInternal.FusionStatsUtilities::_reusableList
	List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281* ____reusableList_16;
};

// Fusion.FusionUnityLogger
struct FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52  : public RuntimeObject
{
	// System.Text.StringBuilder Fusion.FusionUnityLogger::_builder
	StringBuilder_t* ____builder_0;
	// System.Boolean Fusion.FusionUnityLogger::UseGlobalPrefix
	bool ___UseGlobalPrefix_1;
	// System.Boolean Fusion.FusionUnityLogger::UseColorTags
	bool ___UseColorTags_2;
	// System.String Fusion.FusionUnityLogger::GlobalPrefixColor
	String_t* ___GlobalPrefixColor_3;
	// UnityEngine.Color32 Fusion.FusionUnityLogger::MinRandomColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___MinRandomColor_4;
	// UnityEngine.Color32 Fusion.FusionUnityLogger::MaxRandomColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___MaxRandomColor_5;
	// UnityEngine.Color Fusion.FusionUnityLogger::ServerColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ServerColor_6;
	// System.Func`2<System.Object,System.Int32> Fusion.FusionUnityLogger::<GetColor>k__BackingField
	Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___U3CGetColorU3Ek__BackingField_7;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com* ___m_SourceStyle_1;
};

// Unity.Jobs.JobHandle
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;
};

// Fusion.Sockets.NetAddress
struct NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// NanoSockets.Address Fusion.Sockets.NetAddress::NativeAddress
			Address_t0C64043894DC43092287210A04CAD369B08FDBF3 ___NativeAddress_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Address_t0C64043894DC43092287210A04CAD369B08FDBF3 ___NativeAddress_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Fusion.Sockets.NetAddress::Block0
			uint64_t ___Block0_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Block0_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Block1_2_OffsetPadding[8];
			// System.UInt64 Fusion.Sockets.NetAddress::Block1
			uint64_t ___Block1_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Block1_2_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___Block1_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Block2_3_OffsetPadding[16];
			// System.UInt64 Fusion.Sockets.NetAddress::Block2
			uint64_t ___Block2_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Block2_3_OffsetPadding_forAlignmentOnly[16];
			uint64_t ___Block2_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____actorId_4_OffsetPadding[20];
			// System.Int32 Fusion.Sockets.NetAddress::_actorId
			int32_t ____actorId_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____actorId_4_OffsetPadding_forAlignmentOnly[20];
			int32_t ____actorId_4_forAlignmentOnly;
		};
	};
};

struct NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_StaticFields
{
	// Fusion.Sockets.NetAddress Fusion.Sockets.NetAddress::AnyIPv4Addr
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___AnyIPv4Addr_5;
	// Fusion.Sockets.NetAddress Fusion.Sockets.NetAddress::AnyIPv6Addr
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___AnyIPv6Addr_6;
};

// NetworkInputData
struct NetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F 
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
					// UnityEngine.Vector3 NetworkInputData::direction
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_0_forAlignmentOnly;
				};
			};
		};
		uint8_t NetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F__padding[12];
	};
};

// Fusion.NetworkObjectGuid
struct NetworkObjectGuid_t99EAC957EE861D66626645313D35A1F49AF134B4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Fusion.NetworkObjectGuid/<RawGuidValue>e__FixedBuffer Fusion.NetworkObjectGuid::RawGuidValue
			U3CRawGuidValueU3Ee__FixedBuffer_t048BC06BF094CC07E5C83A903FE344CCF482DD2F ___RawGuidValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3CRawGuidValueU3Ee__FixedBuffer_t048BC06BF094CC07E5C83A903FE344CCF482DD2F ___RawGuidValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Fusion.NetworkObjectGuid::_data0
			int64_t ____data0_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ____data0_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____data1_4_OffsetPadding[8];
			// System.Int64 Fusion.NetworkObjectGuid::_data1
			int64_t ____data1_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____data1_4_OffsetPadding_forAlignmentOnly[8];
			int64_t ____data1_4_forAlignmentOnly;
		};
	};
};

// Fusion.NetworkPrefabRef
struct NetworkPrefabRef_t2AE0D6B2726E72C122CA631E91D102432C4C3707 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Fusion.NetworkPrefabRef/<RawGuidValue>e__FixedBuffer Fusion.NetworkPrefabRef::RawGuidValue
			U3CRawGuidValueU3Ee__FixedBuffer_t391DCB2258F87803497444CF31D1F6891633FD14 ___RawGuidValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3CRawGuidValueU3Ee__FixedBuffer_t391DCB2258F87803497444CF31D1F6891633FD14 ___RawGuidValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Fusion.NetworkPrefabRef::_data0
			int64_t ____data0_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ____data0_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____data1_4_OffsetPadding[8];
			// System.Int64 Fusion.NetworkPrefabRef::_data1
			int64_t ____data1_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____data1_4_OffsetPadding_forAlignmentOnly[8];
			int64_t ____data1_4_forAlignmentOnly;
		};
	};
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
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
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// Fusion.NetworkObject/PredictionData
struct PredictionData_tAB7F59FFE9B92C0D64188C2D2BB591CC45173403 
{
	// Fusion.Tick Fusion.NetworkObject/PredictionData::Tick
	Tick_t57D39A4600C22C5C14D12A0C565FEB34404FD02F ___Tick_0;
	// Fusion.NetworkPrefabId Fusion.NetworkObject/PredictionData::Prefab
	NetworkPrefabId_tD353189021ABA05E620EE2F0BE67171A8C6F7AC9 ___Prefab_1;
	// Fusion.NetworkObjectPredictionKey Fusion.NetworkObject/PredictionData::Key
	NetworkObjectPredictionKey_tBF0A538EE9240A4AB5D149BC21F8B174181D8E9A ___Key_2;
};

// Fusion.NetworkPositionRotation/EncodedPosition
struct EncodedPosition_t948CC1ECA191B32B3C4C258684C11DD6255926B0 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Fusion.NetworkPositionRotation/EncodedPosition/<Data>e__FixedBuffer Fusion.NetworkPositionRotation/EncodedPosition::Data
			U3CDataU3Ee__FixedBuffer_t2C219BB37991C137D7AA452EBE5F53C992B7F3CA ___Data_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3CDataU3Ee__FixedBuffer_t2C219BB37991C137D7AA452EBE5F53C992B7F3CA ___Data_0_forAlignmentOnly;
		};
	};
};

// Fusion.NetworkPositionRotation/EncodedRotation
struct EncodedRotation_t75657E796C4A1116685FFEB09FC7D1A5051278F1 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Fusion.NetworkPositionRotation/EncodedRotation/<Data>e__FixedBuffer Fusion.NetworkPositionRotation/EncodedRotation::Data
			U3CDataU3Ee__FixedBuffer_tED309E4ABEBA89B34EF80BCAEDEB73402034A2E8 ___Data_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3CDataU3Ee__FixedBuffer_tED309E4ABEBA89B34EF80BCAEDEB73402034A2E8 ___Data_0_forAlignmentOnly;
		};
	};
};

// Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26
struct U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299  : public RuntimeObject
{
	// System.Int32 Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Fusion.NetworkSceneManagerBase Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<>4__this
	NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* ___U3CU3E4__this_2;
	// Fusion.SceneRef Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::prevScene
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___prevScene_3;
	// Fusion.SceneRef Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::newScene
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___newScene_4;
	// Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0 Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<>8__1
	U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* ___U3CU3E8__1_5;
	// System.Exception Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<error>5__2
	Exception_t* ___U3CerrorU3E5__2_6;
	// System.Collections.IEnumerator Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<coro>5__3
	RuntimeObject* ___U3CcoroU3E5__3_7;
	// System.Boolean Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<next>5__4
	bool ___U3CnextU3E5__4_8;
};

// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D  : public RuntimeObject
{
	// UnityEngine.SceneManagement.Scene Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0::loadedScene
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___loadedScene_0;
};

// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B  : public RuntimeObject
{
	// UnityEngine.SceneManagement.Scene Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0::loadedScene
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___loadedScene_0;
};

// Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4
struct U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4  : public RuntimeObject
{
	// System.Int32 Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Fusion.SceneRef Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::prevScene
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___prevScene_2;
	// Fusion.NetworkSceneManagerDefault Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::<>4__this
	NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* ___U3CU3E4__this_3;
	// Fusion.SceneRef Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::newScene
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___newScene_4;
	// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0 Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::<>8__1
	U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* ___U3CU3E8__1_5;
	// Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::finished
	FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* ___finished_6;
	// UnityEngine.SceneManagement.LoadSceneParameters Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::<loadSceneParameters>5__2
	LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E ___U3CloadSceneParametersU3E5__2_7;
	// UnityEngine.SceneManagement.Scene Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::<sceneToUnload>5__3
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___U3CsceneToUnloadU3E5__3_8;
	// UnityEngine.GameObject[] Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::<tempSceneSpawnedPrefabs>5__4
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___U3CtempSceneSpawnedPrefabsU3E5__4_9;
	// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::<sceneObjects>5__5
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ___U3CsceneObjectsU3E5__5_10;
};

// Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5
struct U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416  : public RuntimeObject
{
	// System.Int32 Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Fusion.SceneRef Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::prevScene
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___prevScene_2;
	// Fusion.NetworkSceneManagerDefault Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::<>4__this
	NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* ___U3CU3E4__this_3;
	// Fusion.SceneRef Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::newScene
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___newScene_4;
	// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0 Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::<>8__1
	U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* ___U3CU3E8__1_5;
	// Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::finished
	FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* ___finished_6;
	// System.Int32 Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::<i>5__2
	int32_t ___U3CiU3E5__2_7;
};

// System.Nullable`1<Unity.Jobs.JobHandle>
struct Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___value_1;
};

// System.Nullable`1<Fusion.Sockets.NetAddress>
struct Nullable_1_tD1B18268713E055EC19B121D7B98FE5BC16D60B9 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___value_1;
};

// System.WeakReference`1<Fusion.NetworkSceneManagerBase>
struct WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2  : public RuntimeObject
{
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};

struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// BasicSpawner/<StartGame>d__14
struct U3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2 
{
	// System.Int32 BasicSpawner/<StartGame>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder BasicSpawner/<StartGame>d__14::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// BasicSpawner BasicSpawner/<StartGame>d__14::<>4__this
	BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* ___U3CU3E4__this_2;
	// Fusion.GameMode BasicSpawner/<StartGame>d__14::mode
	int32_t ___mode_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Fusion.StartGameResult> BasicSpawner/<StartGame>d__14::<>u__1
	TaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1 ___U3CU3Eu__1_4;
};

// Fusion.NetworkRunnerCallbackArgs/ConnectRequest
struct ConnectRequest_t0B36E883FB21681399384CF1BA965DC577148B66  : public RuntimeObject
{
	// Fusion.Sockets.NetAddress Fusion.NetworkRunnerCallbackArgs/ConnectRequest::<RemoteAddress>k__BackingField
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___U3CRemoteAddressU3Ek__BackingField_0;
	// System.Nullable`1<System.Boolean> Fusion.NetworkRunnerCallbackArgs/ConnectRequest::Accepted
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___Accepted_1;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.SceneManagement.Scene>
struct Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
};

struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Fusion.StartGameArgs
struct StartGameArgs_t4FDF5F8340EDD5FBA5A6D3F656D8343172EEA3AB 
{
	// Fusion.GameMode Fusion.StartGameArgs::GameMode
	int32_t ___GameMode_0;
	// System.String Fusion.StartGameArgs::SessionName
	String_t* ___SessionName_1;
	// System.Nullable`1<Fusion.Sockets.NetAddress> Fusion.StartGameArgs::Address
	Nullable_1_tD1B18268713E055EC19B121D7B98FE5BC16D60B9 ___Address_2;
	// Fusion.INetworkObjectPool Fusion.StartGameArgs::ObjectPool
	RuntimeObject* ___ObjectPool_3;
	// Fusion.INetworkSceneManager Fusion.StartGameArgs::SceneManager
	RuntimeObject* ___SceneManager_4;
	// Fusion.NetworkProjectConfig Fusion.StartGameArgs::Config
	NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* ___Config_5;
	// System.Nullable`1<System.Int32> Fusion.StartGameArgs::PlayerCount
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___PlayerCount_6;
	// System.Nullable`1<Fusion.SceneRef> Fusion.StartGameArgs::Scene
	Nullable_1_t60B9431C1BCAA220BB2AA6938CBB4CD1F9CFE0F1 ___Scene_7;
	// System.Action`1<Fusion.NetworkRunner> Fusion.StartGameArgs::Initialized
	Action_1_t36E6F0CE4A81B926FDFA2FFF88800DB76515BDA8* ___Initialized_8;
	// System.Boolean Fusion.StartGameArgs::DisableNATPunchthrough
	bool ___DisableNATPunchthrough_9;
	// System.Type[] Fusion.StartGameArgs::CustomCallbackInterfaces
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___CustomCallbackInterfaces_10;
	// System.Byte[] Fusion.StartGameArgs::ConnectionToken
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ConnectionToken_11;
	// System.Collections.Generic.Dictionary`2<System.String,Fusion.SessionProperty> Fusion.StartGameArgs::SessionProperties
	Dictionary_2_t76430ACFBB350098A845786C2907D3AA2EA9DD9B* ___SessionProperties_12;
	// System.String Fusion.StartGameArgs::CustomLobbyName
	String_t* ___CustomLobbyName_13;
	// System.String Fusion.StartGameArgs::CustomSTUNServer
	String_t* ___CustomSTUNServer_14;
	// Fusion.Photon.Realtime.AuthenticationValues Fusion.StartGameArgs::AuthValues
	AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* ___AuthValues_15;
	// Fusion.Photon.Realtime.AppSettings Fusion.StartGameArgs::CustomPhotonAppSettings
	AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84* ___CustomPhotonAppSettings_16;
	// System.Boolean Fusion.StartGameArgs::DisableClientSessionCreation
	bool ___DisableClientSessionCreation_17;
	// Fusion.HostMigrationToken Fusion.StartGameArgs::HostMigrationToken
	HostMigrationToken_t6249F7ADB7BFF0D8D26E524E085F3912BAA2952D* ___HostMigrationToken_18;
	// System.Action`1<Fusion.NetworkRunner> Fusion.StartGameArgs::HostMigrationResume
	Action_1_t36E6F0CE4A81B926FDFA2FFF88800DB76515BDA8* ___HostMigrationResume_19;
};
// Native definition for P/Invoke marshalling of Fusion.StartGameArgs
struct StartGameArgs_t4FDF5F8340EDD5FBA5A6D3F656D8343172EEA3AB_marshaled_pinvoke
{
	int32_t ___GameMode_0;
	char* ___SessionName_1;
	Nullable_1_tD1B18268713E055EC19B121D7B98FE5BC16D60B9 ___Address_2;
	RuntimeObject* ___ObjectPool_3;
	RuntimeObject* ___SceneManager_4;
	NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* ___Config_5;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___PlayerCount_6;
	Nullable_1_t60B9431C1BCAA220BB2AA6938CBB4CD1F9CFE0F1 ___Scene_7;
	Il2CppMethodPointer ___Initialized_8;
	int32_t ___DisableNATPunchthrough_9;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___CustomCallbackInterfaces_10;
	Il2CppSafeArray/*NONE*/* ___ConnectionToken_11;
	Dictionary_2_t76430ACFBB350098A845786C2907D3AA2EA9DD9B* ___SessionProperties_12;
	char* ___CustomLobbyName_13;
	char* ___CustomSTUNServer_14;
	AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* ___AuthValues_15;
	AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84* ___CustomPhotonAppSettings_16;
	int32_t ___DisableClientSessionCreation_17;
	HostMigrationToken_t6249F7ADB7BFF0D8D26E524E085F3912BAA2952D* ___HostMigrationToken_18;
	Il2CppMethodPointer ___HostMigrationResume_19;
};
// Native definition for COM marshalling of Fusion.StartGameArgs
struct StartGameArgs_t4FDF5F8340EDD5FBA5A6D3F656D8343172EEA3AB_marshaled_com
{
	int32_t ___GameMode_0;
	Il2CppChar* ___SessionName_1;
	Nullable_1_tD1B18268713E055EC19B121D7B98FE5BC16D60B9 ___Address_2;
	RuntimeObject* ___ObjectPool_3;
	RuntimeObject* ___SceneManager_4;
	NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* ___Config_5;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___PlayerCount_6;
	Nullable_1_t60B9431C1BCAA220BB2AA6938CBB4CD1F9CFE0F1 ___Scene_7;
	Il2CppMethodPointer ___Initialized_8;
	int32_t ___DisableNATPunchthrough_9;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___CustomCallbackInterfaces_10;
	Il2CppSafeArray/*NONE*/* ___ConnectionToken_11;
	Dictionary_2_t76430ACFBB350098A845786C2907D3AA2EA9DD9B* ___SessionProperties_12;
	Il2CppChar* ___CustomLobbyName_13;
	Il2CppChar* ___CustomSTUNServer_14;
	AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* ___AuthValues_15;
	AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84* ___CustomPhotonAppSettings_16;
	int32_t ___DisableClientSessionCreation_17;
	HostMigrationToken_t6249F7ADB7BFF0D8D26E524E085F3912BAA2952D* ___HostMigrationToken_18;
	Il2CppMethodPointer ___HostMigrationResume_19;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate
struct FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80  : public MulticastDelegate_t
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C* ___s_SubsystemInstances_6;
};

// ARController
struct ARController_tFFEC6C4A72E0D20209597BC477479037541D67F4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ARController::MyObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MyObject_4;
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARController::RaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___RaycastManager_5;
};

// BasicSpawner
struct BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Fusion.NetworkRunner BasicSpawner::_runner
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ____runner_4;
	// Fusion.NetworkPrefabRef BasicSpawner::_playerPrefab
	NetworkPrefabRef_t2AE0D6B2726E72C122CA631E91D102432C4C3707 ____playerPrefab_5;
	// System.Collections.Generic.Dictionary`2<Fusion.PlayerRef,Fusion.NetworkObject> BasicSpawner::_spawnedCharacters
	Dictionary_2_t3000CE5E80875F97C1FB1B03F5275CA140BCF771* ____spawnedCharacters_6;
};

// Fusion.Behaviour
struct Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Removed_13;
};

// SpawnPointManagerPrototype`1<PlayerSpawnPointPrototype>
struct SpawnPointManagerPrototype_1_tF8B95B3F73100916235CA03303E1682154B77872  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
	// SpawnPointManagerPrototype`1/SpawnSequence<T> SpawnPointManagerPrototype`1::Sequence
	int32_t ___Sequence_4;
	// UnityEngine.LayerMask SpawnPointManagerPrototype`1::BlockingLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___BlockingLayers_5;
	// System.Single SpawnPointManagerPrototype`1::BlockedCheckRadius
	float ___BlockedCheckRadius_6;
	// System.Collections.Generic.List`1<UnityEngine.Component> SpawnPointManagerPrototype`1::_spawnPoints
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ____spawnPoints_7;
	// System.Int32 SpawnPointManagerPrototype`1::LastSpawnIndex
	int32_t ___LastSpawnIndex_8;
	// Fusion.NetworkRNG SpawnPointManagerPrototype`1::rng
	NetworkRNG_t64B73CD206460A54C63878CFB53238AD54ECA0B2 ___rng_9;
};

struct SpawnPointManagerPrototype_1_tF8B95B3F73100916235CA03303E1682154B77872_StaticFields
{
	// UnityEngine.Collider[] SpawnPointManagerPrototype`1::blocked3D
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___blocked3D_10;
};

// FusionStats
struct FusionStats_t0361C00ADA9A527C7EF810A31F4D964A0DAB864F  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
	// System.Single FusionStats::RedrawInterval
	float ___RedrawInterval_27;
	// FusionStats/StatCanvasTypes FusionStats::_canvasType
	int32_t ____canvasType_28;
	// System.Boolean FusionStats::_showButtonLabels
	bool ____showButtonLabels_29;
	// System.Int32 FusionStats::_maxHeaderHeight
	int32_t ____maxHeaderHeight_30;
	// System.Single FusionStats::CanvasScale
	float ___CanvasScale_31;
	// System.Single FusionStats::CanvasDistance
	float ___CanvasDistance_32;
	// UnityEngine.Rect FusionStats::_gameObjectRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ____gameObjectRect_33;
	// UnityEngine.Rect FusionStats::_overlayRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ____overlayRect_34;
	// FusionGraph/Layouts FusionStats::_defaultLayout
	int32_t ____defaultLayout_35;
	// System.Boolean FusionStats::_noTextOverlap
	bool ____noTextOverlap_36;
	// System.Boolean FusionStats::_noGraphShader
	bool ____noGraphShader_37;
	// System.Int32 FusionStats::GraphColumnCount
	int32_t ___GraphColumnCount_38;
	// System.Int32 FusionStats::_graphMaxWidth
	int32_t ____graphMaxWidth_39;
	// System.Boolean FusionStats::_enableObjectStats
	bool ____enableObjectStats_40;
	// Fusion.NetworkObject FusionStats::_object
	NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ____object_41;
	// System.Int32 FusionStats::_objectTitleHeight
	int32_t ____objectTitleHeight_42;
	// System.Int32 FusionStats::_objectIdsHeight
	int32_t ____objectIdsHeight_43;
	// System.Int32 FusionStats::_objectMetersHeight
	int32_t ____objectMetersHeight_44;
	// Fusion.NetworkRunner FusionStats::_runner
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ____runner_45;
	// System.Boolean FusionStats::InitializeAllGraphs
	bool ___InitializeAllGraphs_46;
	// Fusion.SimulationModes FusionStats::ConnectTo
	int32_t ___ConnectTo_47;
	// Fusion.Simulation/Statistics/ObjStatFlags FusionStats::_includedObjStats
	int32_t ____includedObjStats_48;
	// Fusion.Simulation/Statistics/NetStatFlags FusionStats::_includedNetStats
	int32_t ____includedNetStats_49;
	// Fusion.Simulation/Statistics/SimStatFlags FusionStats::_includedSimStats
	int32_t ____includedSimStats_50;
	// System.Boolean FusionStats::AutoDestroy
	bool ___AutoDestroy_51;
	// System.Boolean FusionStats::EnforceSingle
	bool ___EnforceSingle_52;
	// System.String FusionStats::Guid
	String_t* ___Guid_53;
	// System.Boolean FusionStats::_modifyColors
	bool ____modifyColors_54;
	// UnityEngine.Color FusionStats::_graphColorGood
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____graphColorGood_55;
	// UnityEngine.Color FusionStats::_graphColorWarn
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____graphColorWarn_56;
	// UnityEngine.Color FusionStats::_graphColorBad
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____graphColorBad_57;
	// UnityEngine.Color FusionStats::_graphColorFlag
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____graphColorFlag_58;
	// UnityEngine.Color FusionStats::_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____fontColor_59;
	// UnityEngine.Color FusionStats::PanelColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___PanelColor_60;
	// UnityEngine.Color FusionStats::_simDataBackColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____simDataBackColor_61;
	// UnityEngine.Color FusionStats::_netDataBackColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____netDataBackColor_62;
	// UnityEngine.Color FusionStats::_objDataBackColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____objDataBackColor_63;
	// FusionGraph[] FusionStats::_simGraphs
	FusionGraphU5BU5D_tFEB28D7455B497DCFB3B6B0815B07DF328BE186C* ____simGraphs_64;
	// FusionGraph[] FusionStats::_objGraphs
	FusionGraphU5BU5D_tFEB28D7455B497DCFB3B6B0815B07DF328BE186C* ____objGraphs_65;
	// FusionGraph[] FusionStats::_netGraphs
	FusionGraphU5BU5D_tFEB28D7455B497DCFB3B6B0815B07DF328BE186C* ____netGraphs_66;
	// System.Collections.Generic.List`1<Fusion.StatsInternal.IFusionStatsView> FusionStats::_foundViews
	List_1_t6638C479C599039AA688F1887FC173CF9E2733EE* ____foundViews_67;
	// System.Collections.Generic.List`1<FusionGraph> FusionStats::_foundGraphs
	List_1_t71727F1745217686275A52FBC2C2AD4CDE247ECA* ____foundGraphs_68;
	// UnityEngine.UI.Text FusionStats::_titleText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____titleText_69;
	// UnityEngine.UI.Text FusionStats::_clearIcon
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____clearIcon_70;
	// UnityEngine.UI.Text FusionStats::_pauseIcon
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____pauseIcon_71;
	// UnityEngine.UI.Text FusionStats::_togglIcon
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____togglIcon_72;
	// UnityEngine.UI.Text FusionStats::_closeIcon
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____closeIcon_73;
	// UnityEngine.UI.Text FusionStats::_canvsIcon
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____canvsIcon_74;
	// UnityEngine.UI.Text FusionStats::_clearLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____clearLabel_75;
	// UnityEngine.UI.Text FusionStats::_pauseLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____pauseLabel_76;
	// UnityEngine.UI.Text FusionStats::_togglLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____togglLabel_77;
	// UnityEngine.UI.Text FusionStats::_closeLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____closeLabel_78;
	// UnityEngine.UI.Text FusionStats::_canvsLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____canvsLabel_79;
	// UnityEngine.UI.Text FusionStats::_objectNameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____objectNameText_80;
	// UnityEngine.UI.GridLayoutGroup FusionStats::_graphGridLayoutGroup
	GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* ____graphGridLayoutGroup_81;
	// UnityEngine.Canvas FusionStats::_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ____canvas_82;
	// UnityEngine.RectTransform FusionStats::_canvasRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____canvasRT_83;
	// UnityEngine.RectTransform FusionStats::_rootPanelRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____rootPanelRT_84;
	// UnityEngine.RectTransform FusionStats::_guidesRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____guidesRT_85;
	// UnityEngine.RectTransform FusionStats::_headerRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____headerRT_86;
	// UnityEngine.RectTransform FusionStats::_statsPanelRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____statsPanelRT_87;
	// UnityEngine.RectTransform FusionStats::_graphsLayoutRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____graphsLayoutRT_88;
	// UnityEngine.RectTransform FusionStats::_titleRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____titleRT_89;
	// UnityEngine.RectTransform FusionStats::_buttonsRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____buttonsRT_90;
	// UnityEngine.RectTransform FusionStats::_objectTitlePanelRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____objectTitlePanelRT_91;
	// UnityEngine.RectTransform FusionStats::_objectIdsGroupRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____objectIdsGroupRT_92;
	// UnityEngine.RectTransform FusionStats::_objectMetersPanelRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____objectMetersPanelRT_93;
	// UnityEngine.RectTransform FusionStats::_clientIdPanelRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____clientIdPanelRT_94;
	// UnityEngine.RectTransform FusionStats::_authorityPanelRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____authorityPanelRT_95;
	// UnityEngine.UI.Button FusionStats::_titleButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____titleButton_96;
	// UnityEngine.UI.Button FusionStats::_objctButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____objctButton_97;
	// UnityEngine.UI.Button FusionStats::_clearButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____clearButton_98;
	// UnityEngine.UI.Button FusionStats::_togglButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____togglButton_99;
	// UnityEngine.UI.Button FusionStats::_pauseButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____pauseButton_100;
	// UnityEngine.UI.Button FusionStats::_closeButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____closeButton_101;
	// UnityEngine.UI.Button FusionStats::_canvsButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____canvsButton_102;
	// UnityEngine.Font FusionStats::_font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ____font_103;
	// System.Boolean FusionStats::_hidden
	bool ____hidden_104;
	// System.Boolean FusionStats::_paused
	bool ____paused_105;
	// System.Int32 FusionStats::_layoutDirty
	int32_t ____layoutDirty_106;
	// System.Boolean FusionStats::_activeDirty
	bool ____activeDirty_107;
	// System.Double FusionStats::_currentDrawTime
	double ____currentDrawTime_108;
	// System.Double FusionStats::_delayDrawUntil
	double ____delayDrawUntil_109;
	// System.String FusionStats::_previousObjectTitle
	String_t* ____previousObjectTitle_111;
	// System.Single FusionStats::_lastLayoutUpdate
	float ____lastLayoutUpdate_112;
};

struct FusionStats_t0361C00ADA9A527C7EF810A31F4D964A0DAB864F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<Fusion.NetworkRunner,System.Collections.Generic.List`1<FusionStats>> FusionStats::_statsForRunnerLookup
	Dictionary_2_tE895F84BC5B5CBB34273E02A17E2028850359AE6* ____statsForRunnerLookup_4;
	// System.Collections.Generic.Dictionary`2<System.String,FusionStats> FusionStats::_activeGuids
	Dictionary_2_t74FADE6343657B7C1F56B7477511157BB3AFE29D* ____activeGuids_5;
	// System.Nullable`1<System.Boolean> FusionStats::_newInputSystemFound
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____newInputSystemFound_110;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
};

// Fusion.NetworkObject
struct NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
	// System.Int32* Fusion.NetworkObject::Ptr
	int32_t* ___Ptr_5;
	// System.Int32* Fusion.NetworkObject::Changed
	int32_t* ___Changed_6;
	// Fusion.FastReferenceList`1<Fusion.NetworkBehaviour> Fusion.NetworkObject::CallbackBehaviours
	FastReferenceList_1_t2DC9499F4E148A6E8794A7A5E3F1A83D98AA0D76* ___CallbackBehaviours_7;
	// Fusion.NetworkId Fusion.NetworkObject::Id
	NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 ___Id_8;
	// System.Boolean Fusion.NetworkObject::IsResume
	bool ___IsResume_9;
	// Fusion.NetworkRunner Fusion.NetworkObject::Runner
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___Runner_10;
	// Fusion.NetworkObject/ObjectInterestModes Fusion.NetworkObject::ObjectInterest
	int32_t ___ObjectInterest_11;
	// System.String[] Fusion.NetworkObject::DefaultInterestGroups
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___DefaultInterestGroups_12;
	// System.Boolean Fusion.NetworkObject::DestroyWhenStateAuthorityLeaves
	bool ___DestroyWhenStateAuthorityLeaves_13;
	// System.Boolean Fusion.NetworkObject::AllowStateAuthorityOverride
	bool ___AllowStateAuthorityOverride_14;
	// Fusion.NetworkAreaOfInterestBehaviour Fusion.NetworkObject::AoiPositionSource
	NetworkAreaOfInterestBehaviour_tD2D502D3E647D9E5E4D8A0E3D22DC9F0B674AACD* ___AoiPositionSource_15;
	// Fusion.Tick Fusion.NetworkObject::<LastReceiveTick>k__BackingField
	Tick_t57D39A4600C22C5C14D12A0C565FEB34404FD02F ___U3CLastReceiveTickU3Ek__BackingField_16;
	// Fusion.NetworkObjectFlags Fusion.NetworkObject::Flags
	int32_t ___Flags_17;
	// Fusion.NetworkObjectGuid Fusion.NetworkObject::NetworkGuid
	NetworkObjectGuid_t99EAC957EE861D66626645313D35A1F49AF134B4 ___NetworkGuid_18;
	// Fusion.NetworkObject/PredictionData Fusion.NetworkObject::PredictedSpawn
	PredictionData_tAB7F59FFE9B92C0D64188C2D2BB591CC45173403 ___PredictedSpawn_19;
	// Fusion.NetworkObject[] Fusion.NetworkObject::NestedObjects
	NetworkObjectU5BU5D_tB73C7914AB3A2AB2BCE11B2D5AFDEAE2A48F2D0D* ___NestedObjects_20;
	// Fusion.NetworkBehaviour[] Fusion.NetworkObject::NetworkedBehaviours
	NetworkBehaviourU5BU5D_t60B9B079110E3B7AAB961DDA3B483DB8CDD56F6F* ___NetworkedBehaviours_21;
	// Fusion.SimulationBehaviour[] Fusion.NetworkObject::SimulationBehaviours
	SimulationBehaviourU5BU5D_t31031271E2F0F613B675EBEF61151021139E1C4E* ___SimulationBehaviours_22;
	// System.Boolean Fusion.NetworkObject::InSimulation
	bool ___InSimulation_23;
};

// Fusion.NetworkRunner
struct NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
	// Fusion.NetworkRunner/DeferredShutdownParams Fusion.NetworkRunner::_deferredShutdownParams
	DeferredShutdownParams_t3F598A811D32AD9AE4A814809263F7035376B9AF ____deferredShutdownParams_5;
	// Fusion.Simulation Fusion.NetworkRunner::_simulation
	Simulation_t1D52B02F9D931E87FAEB15A3EE8B13ED014DB584* ____simulation_7;
	// Fusion.NetworkRunner/SimulationPhase Fusion.NetworkRunner::_simulationPhase
	int32_t ____simulationPhase_8;
	// Fusion.NetworkRunner/ShutdownFlags Fusion.NetworkRunner::_simulationShutdown
	int32_t ____simulationShutdown_9;
	// Fusion.NetworkObjectRefMap`1<Fusion.NetworkObject> Fusion.NetworkRunner::_objects
	NetworkObjectRefMap_1_t09E8E07F1985CA0C12E271256B24BBFF00DB90F6* ____objects_10;
	// Fusion.SimulationBehaviourUpdater Fusion.NetworkRunner::_behaviourUpdater
	SimulationBehaviourUpdater_t1D2813CD5F3514AE8854F58396E79C2053157565* ____behaviourUpdater_11;
	// System.Collections.Generic.List`1<Fusion.INetworkRunnerCallbacks> Fusion.NetworkRunner::_callbacks
	List_1_tA8148AA407AA53B8F5D3BFB8B1AE9D9C941E8545* ____callbacks_12;
	// Fusion.Allocator* Fusion.NetworkRunner::_changedAllocator
	Allocator_t4184B6C7C53A6059F1EBA19A30D551CDECA2F69C* ____changedAllocator_13;
	// System.Collections.Generic.LinkedList`1<Fusion.RunnerVisibilityNode> Fusion.NetworkRunner::_visibilityNodes
	LinkedList_1_t3813413FE4ECB2279D0C7AC05BD288865A34356B* ____visibilityNodes_14;
	// System.Boolean Fusion.NetworkRunner::_isVisible
	bool ____isVisible_15;
	// System.Collections.Generic.Queue`1<Fusion.NetworkRunner/SpawnQueueEntry> Fusion.NetworkRunner::_spawnQueue
	Queue_1_t15EDAB8C3525B4DF694D0B2011D38D47CDCABD5D* ____spawnQueue_16;
	// System.Boolean Fusion.NetworkRunner::_printedInterestGroupsWarning
	bool ____printedInterestGroupsWarning_17;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> Fusion.NetworkRunner::_initializeOperation
	TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* ____initializeOperation_18;
	// Fusion.NetworkProjectConfig Fusion.NetworkRunner::_config
	NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* ____config_19;
	// System.Int32 Fusion.NetworkRunner::_ticksExecuted
	int32_t ____ticksExecuted_20;
	// Fusion.INetworkObjectPool Fusion.NetworkRunner::_networkObjectPool
	RuntimeObject* ____networkObjectPool_21;
	// System.UInt32 Fusion.NetworkRunner::_idCounter
	uint32_t ____idCounter_22;
	// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkRunner::_predictionSpawns
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ____predictionSpawns_23;
	// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkRunner::_predictionDespawns
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ____predictionDespawns_24;
	// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkRunner::_activeSceneObjectsBuffer
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ____activeSceneObjectsBuffer_25;
	// Fusion.ReadAccuracy Fusion.NetworkRunner::_positionReadAccuracy
	ReadAccuracy_tAB2B6530E294025CF190D052F8B35FAC62C753B5 ____positionReadAccuracy_26;
	// Fusion.WriteAccuracy Fusion.NetworkRunner::_positionWriteAccuracy
	WriteAccuracy_tC6AAEB23A6F50AD278A1D892364F7C0E427241AF ____positionWriteAccuracy_27;
	// Fusion.ReadAccuracy Fusion.NetworkRunner::_rotationReadAccuracy
	ReadAccuracy_tAB2B6530E294025CF190D052F8B35FAC62C753B5 ____rotationReadAccuracy_28;
	// Fusion.WriteAccuracy Fusion.NetworkRunner::_rotationWriteAccuracy
	WriteAccuracy_tC6AAEB23A6F50AD278A1D892364F7C0E427241AF ____rotationWriteAccuracy_29;
	// System.Nullable`1<System.Boolean> Fusion.NetworkRunner::_provideInput
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____provideInput_30;
	// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkRunner::_remotePrefabsWaitingForSpawnedCallback
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ____remotePrefabsWaitingForSpawnedCallback_31;
	// System.Boolean Fusion.NetworkRunner::<IsHostMigrationEnabled>k__BackingField
	bool ___U3CIsHostMigrationEnabledU3Ek__BackingField_32;
	// System.UInt32 Fusion.NetworkRunner::<HostMigrationSnapshotDelay>k__BackingField
	uint32_t ___U3CHostMigrationSnapshotDelayU3Ek__BackingField_33;
	// System.Byte* Fusion.NetworkRunner::_hostSnapshotData0
	uint8_t* ____hostSnapshotData0_34;
	// System.Byte* Fusion.NetworkRunner::_hostSnapshotData1
	uint8_t* ____hostSnapshotData1_35;
	// System.Byte* Fusion.NetworkRunner::_hostSnapshotDelta
	uint8_t* ____hostSnapshotDelta_36;
	// System.Threading.Tasks.TaskCompletionSource`1<System.ValueTuple`4<System.Int32,System.Int32,System.UInt32,System.Byte[]>> Fusion.NetworkRunner::_buildHostSnapshotTask
	TaskCompletionSource_1_t62A93805A305FA9DB5BFA2C4EAB96DAB51C33EBF* ____buildHostSnapshotTask_37;
	// System.Nullable`1<Fusion.NetworkRunner/HostSnapshotCompressionJob> Fusion.NetworkRunner::_buildHostSnapshotJob
	Nullable_1_tC45089A0BD074FF0A859152F3B8175B86B2FCB29 ____buildHostSnapshotJob_38;
	// System.Nullable`1<Unity.Jobs.JobHandle> Fusion.NetworkRunner::_buildHostSnapshotHandler
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 ____buildHostSnapshotHandler_39;
	// Fusion.Protocol.HostMigration Fusion.NetworkRunner::_lastHostMigrationInfo
	HostMigration_t993547CB8CCEB0971E6050E36B4EFC675D156960* ____lastHostMigrationInfo_40;
	// System.Collections.Generic.Stack`1<Fusion.NetworkRunner/NetworkObjectInactivityGuard> Fusion.NetworkRunner::_inactivityGuardPool
	Stack_1_t0F5E34EE9211205B247AA0F814825DB9E5DD48B7* ____inactivityGuardPool_41;
	// Fusion.GameMode Fusion.NetworkRunner::<GameMode>k__BackingField
	int32_t ___U3CGameModeU3Ek__BackingField_45;
	// Fusion.SessionInfo Fusion.NetworkRunner::<SessionInfo>k__BackingField
	SessionInfo_t191C09E2A2B9A71925D9B0EDEA501A286FD4BCAB* ___U3CSessionInfoU3Ek__BackingField_46;
	// Fusion.LobbyInfo Fusion.NetworkRunner::<LobbyInfo>k__BackingField
	LobbyInfo_t5F666E1575123FE4714F1B6067A8EAA55CFFA5CF* ___U3CLobbyInfoU3Ek__BackingField_47;
	// System.Threading.Tasks.TaskCompletionSource`1<Fusion.ShutdownReason> Fusion.NetworkRunner::_cloudOperation
	TaskCompletionSource_1_t5996FC6D06F8D04B3AA0E5ED9E4C62B488BBBEFA* ____cloudOperation_48;
	// Fusion.CloudServices Fusion.NetworkRunner::_cloudServices
	CloudServices_tC404BACC0187CF1F40CF228DCEFA39DA7D4F270C* ____cloudServices_49;
	// Fusion.INetworkSceneManager Fusion.NetworkRunner::_sceneManager
	RuntimeObject* ____sceneManager_50;
	// Fusion.INetworkSceneManagerObjectResolver Fusion.NetworkRunner::_sceneObjectResolver
	RuntimeObject* ____sceneObjectResolver_51;
	// System.Collections.Generic.Dictionary`2<Fusion.NetworkObjectGuid,Fusion.NetworkObject> Fusion.NetworkRunner::_clientSceneObjectLoopkup
	Dictionary_2_t3BC581E5E3414F2C3884E7EA3F3D93105565B726* ____clientSceneObjectLoopkup_52;
	// System.Nullable`1<Fusion.SceneRef> Fusion.NetworkRunner::_sharedModeStartSceneRef
	Nullable_1_t60B9431C1BCAA220BB2AA6938CBB4CD1F9CFE0F1 ____sharedModeStartSceneRef_53;
	// UnityEngine.SceneManagement.Scene Fusion.NetworkRunner::_multiplePeerUnityScene
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ____multiplePeerUnityScene_54;
	// System.Boolean Fusion.NetworkRunner::_isMultiplePeerUnitySceneTemp
	bool ____isMultiplePeerUnitySceneTemp_55;
	// System.Int32* Fusion.NetworkRunner::_tempWords
	int32_t* ____tempWords_56;
	// System.Int32 Fusion.NetworkRunner::_tempWordsCapacity
	int32_t ____tempWordsCapacity_57;
};

struct NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Fusion.NetworkRunner> Fusion.NetworkRunner::_instancesByMultiPeerScene
	Dictionary_2_t8043B6C785B439524A8755BCF6A5CC3612CFCFCD* ____instancesByMultiPeerScene_4;
	// Fusion.Simulation/IDeltaCompressor Fusion.NetworkRunner::BurstDeltaCompressor
	RuntimeObject* ___BurstDeltaCompressor_6;
	// System.Collections.Generic.List`1<Fusion.NetworkRunner> Fusion.NetworkRunner::_instances
	List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281* ____instances_42;
	// Fusion.NetworkRunner[] Fusion.NetworkRunner::_instancesSnapshot
	NetworkRunnerU5BU5D_tDA69BE78BB341E0EA1AFC6CB984B303A36561725* ____instancesSnapshot_43;
	// System.Int32 Fusion.NetworkRunner::_instancesSnapshotCount
	int32_t ____instancesSnapshotCount_44;
};

// Fusion.NetworkSceneManagerBase
struct NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
	// System.Boolean Fusion.NetworkSceneManagerBase::ShowHierarchyWindowOverlay
	bool ___ShowHierarchyWindowOverlay_5;
	// System.Collections.IEnumerator Fusion.NetworkSceneManagerBase::_runningCoroutine
	RuntimeObject* ____runningCoroutine_6;
	// System.Boolean Fusion.NetworkSceneManagerBase::_currentSceneOutdated
	bool ____currentSceneOutdated_7;
	// Fusion.SceneRef Fusion.NetworkSceneManagerBase::_currentScene
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ____currentScene_8;
	// Fusion.NetworkRunner Fusion.NetworkSceneManagerBase::<Runner>k__BackingField
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___U3CRunnerU3Ek__BackingField_9;
};

struct NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_StaticFields
{
	// System.WeakReference`1<Fusion.NetworkSceneManagerBase> Fusion.NetworkSceneManagerBase::s_currentlyLoading
	WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* ___s_currentlyLoading_4;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// Fusion.SimulationBehaviour
struct SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
	// Fusion.SimulationBehaviour Fusion.SimulationBehaviour::Prev
	SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0* ___Prev_4;
	// Fusion.SimulationBehaviour Fusion.SimulationBehaviour::Next
	SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0* ___Next_5;
	// Fusion.SimulationBehaviourFlags Fusion.SimulationBehaviour::Flags
	int32_t ___Flags_6;
	// Fusion.NetworkRunner Fusion.SimulationBehaviour::Runner
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___Runner_7;
	// Fusion.NetworkObject Fusion.SimulationBehaviour::Object
	NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ___Object_8;
};

// ToggleRunnerProvideInput
struct ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
};

struct ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_StaticFields
{
	// ToggleRunnerProvideInput ToggleRunnerProvideInput::_instance
	ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A* ____instance_4;
};

// ToggleRunnerVisibility
struct ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
};

struct ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_StaticFields
{
	// ToggleRunnerVisibility ToggleRunnerVisibility::_instance
	ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5* ____instance_4;
};

// SpawnerPrototype`1<PlayerSpawnPointPrototype>
struct SpawnerPrototype_1_t2B1CAFDC5FDCFA5CBBB3556DADE68606CB2AC742  : public SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0
{
	// System.Collections.Generic.Dictionary`2<Fusion.PlayerRef,System.Collections.Generic.List`1<Fusion.NetworkObject>> SpawnerPrototype`1::_spawnedLookup
	Dictionary_2_tCF872C9A43CC2A631FE835B219F267869FA01470* ____spawnedLookup_9;
	// Fusion.NetworkObject SpawnerPrototype`1::PlayerPrefab
	NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ___PlayerPrefab_10;
	// SpawnerPrototype`1/SpawnMethods<T> SpawnerPrototype`1::SpawnMethod
	int32_t ___SpawnMethod_11;
	// SpawnerPrototype`1/AuthorityOptions<T> SpawnerPrototype`1::StateAuthority
	int32_t ___StateAuthority_12;
	// ISpawnPointManagerPrototype`1<T> SpawnerPrototype`1::spawnManager
	RuntimeObject* ___spawnManager_13;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// UnityEngine.UI.GridLayoutGroup/Corner UnityEngine.UI.GridLayoutGroup::m_StartCorner
	int32_t ___m_StartCorner_12;
	// UnityEngine.UI.GridLayoutGroup/Axis UnityEngine.UI.GridLayoutGroup::m_StartAxis
	int32_t ___m_StartAxis_13;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_CellSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CellSize_14;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_Spacing
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Spacing_15;
	// UnityEngine.UI.GridLayoutGroup/Constraint UnityEngine.UI.GridLayoutGroup::m_Constraint
	int32_t ___m_Constraint_16;
	// System.Int32 UnityEngine.UI.GridLayoutGroup::m_ConstraintCount
	int32_t ___m_ConstraintCount_17;
};

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// System.Single UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_Spacing
	float ___m_Spacing_12;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandWidth
	bool ___m_ChildForceExpandWidth_13;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandHeight
	bool ___m_ChildForceExpandHeight_14;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlWidth
	bool ___m_ChildControlWidth_15;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlHeight
	bool ___m_ChildControlHeight_16;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleWidth
	bool ___m_ChildScaleWidth_17;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleHeight
	bool ___m_ChildScaleHeight_18;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ReverseArrangement
	bool ___m_ReverseArrangement_19;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// Fusion.NetworkBehaviour
struct NetworkBehaviour_t6DC912DE6ED4D9C556AE37A4CC23D247C52C57B3  : public SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0
{
	// System.Int32* Fusion.NetworkBehaviour::Ptr
	int32_t* ___Ptr_9;
	// System.Int32 Fusion.NetworkBehaviour::ObjectIndex
	int32_t ___ObjectIndex_10;
	// System.Boolean Fusion.NetworkBehaviour::InvokeRpc
	bool ___InvokeRpc_11;
	// Fusion.RpcInvokeData[] Fusion.NetworkBehaviour::RpcCache
	RpcInvokeDataU5BU5D_tC089D978DE881DF71FAD5DD2D541A716E712F722* ___RpcCache_12;
	// System.Int32 Fusion.NetworkBehaviour::WordOffset
	int32_t ___WordOffset_13;
	// System.Int32 Fusion.NetworkBehaviour::WordCount
	int32_t ___WordCount_14;
	// Fusion.NetworkBehaviour/InterpolationDataSources Fusion.NetworkBehaviour::_interpolationDataSource
	int32_t ____interpolationDataSource_15;
	// Fusion.NetworkBehaviourCallbacks Fusion.NetworkBehaviour::DynamicCallbacks
	NetworkBehaviourCallbacks_t4852EFBA213C9FE28E65FDB3192CD93381CF613E* ___DynamicCallbacks_16;
};

// Fusion.NetworkSceneManagerDefault
struct NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91  : public NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39
{
	// System.Int32 Fusion.NetworkSceneManagerDefault::PostLoadDelayFrames
	int32_t ___PostLoadDelayFrames_10;
};

// PlayerSpawnPointManagerPrototype
struct PlayerSpawnPointManagerPrototype_t155715CC2FBC2EE8FF5A7872955E79575C4C18F7  : public SpawnPointManagerPrototype_1_tF8B95B3F73100916235CA03303E1682154B77872
{
};

// PlayerSpawnPointPrototype
struct PlayerSpawnPointPrototype_t9B5A1C452F0255C5FF0DB273738686CBB585508A  : public SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0
{
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA  : public HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E
{
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// Fusion.NetworkAreaOfInterestBehaviour
struct NetworkAreaOfInterestBehaviour_tD2D502D3E647D9E5E4D8A0E3D22DC9F0B674AACD  : public NetworkBehaviour_t6DC912DE6ED4D9C556AE37A4CC23D247C52C57B3
{
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public NetworkBehaviour_t6DC912DE6ED4D9C556AE37A4CC23D247C52C57B3
{
	// NetworkCharacterControllerPrototype Player::_cc
	NetworkCharacterControllerPrototype_tD4212436823F0C748FA1B4F10A75A863F2F01FBC* ____cc_17;
};

struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields
{
	// Fusion.Changed`1<Player> Player::$IL2CPP_CHANGED
	Changed_1_t9CC119E67FD109C3D5AA79262EBA8D870ECE142D ___U24IL2CPP_CHANGED_18;
	// Fusion.ChangedDelegate`1<Player> Player::$IL2CPP_CHANGED_DELEGATE
	ChangedDelegate_1_t595A16A2FF1A889A6CD4F810344F46FAF0EDB3FC* ___U24IL2CPP_CHANGED_DELEGATE_19;
	// Fusion.NetworkBehaviourCallbacks`1<Player> Player::$IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS
	NetworkBehaviourCallbacks_1_t3536D478BCE865B25B54327EF1EAF16863C30801* ___U24IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS_20;
};

// PlayerSpawnerPrototype
struct PlayerSpawnerPrototype_t4796F19F1683ADBE95CDE67D28D80E55D6F657E8  : public SpawnerPrototype_1_t2B1CAFDC5FDCFA5CBBB3556DADE68606CB2AC742
{
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// UnityEngine.UI.VerticalLayoutGroup
struct VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8  : public HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E
{
};

// Fusion.NetworkPositionRotation
struct NetworkPositionRotation_tC7E1B02E7BAF00F31CAE3DD7D5685A919612F311  : public NetworkAreaOfInterestBehaviour_tD2D502D3E647D9E5E4D8A0E3D22DC9F0B674AACD
{
	// System.Boolean Fusion.NetworkPositionRotation::_copiedFromBufferToEngineThisUpdate
	bool ____copiedFromBufferToEngineThisUpdate_17;
	// UnityEngine.Transform Fusion.NetworkPositionRotation::<Transform>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTransformU3Ek__BackingField_18;
};

// Fusion.NetworkTransform
struct NetworkTransform_tBD10DF8A12E3AFF3F8838F6A4A17FD29CFA84454  : public NetworkPositionRotation_tC7E1B02E7BAF00F31CAE3DD7D5685A919612F311
{
	// Fusion.NetworkTransform/ConsecutiveStateInterp Fusion.NetworkTransform::_consecutiveInterp
	ConsecutiveStateInterp_t4210EBCA4B468417EFF4863F935E5A13AB3990F8* ____consecutiveInterp_25;
	// Fusion.NetworkTransform/IInterpolationImplementation Fusion.NetworkTransform::_currInterpImpl
	RuntimeObject* ____currInterpImpl_26;
	// System.Boolean Fusion.NetworkTransform::_wasRenderedThisUpdate
	bool ____wasRenderedThisUpdate_27;
	// Fusion.Spaces Fusion.NetworkTransform::InterpolationSpace
	int32_t ___InterpolationSpace_28;
	// UnityEngine.Transform Fusion.NetworkTransform::InterpolationTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___InterpolationTarget_29;
	// Fusion.NetworkTransform/IntermittentStateInterp Fusion.NetworkTransform::_intermittentInterp
	IntermittentStateInterp_t99180E682A790470960E4571FB27ED26372A69CE* ____intermittentInterp_30;
	// System.Boolean Fusion.NetworkTransform::InterpolateErrorCorrection
	bool ___InterpolateErrorCorrection_31;
	// Fusion.InterpolatedErrorCorrectionSettings Fusion.NetworkTransform::InterpolatedErrorCorrectionSettings
	InterpolatedErrorCorrectionSettings_t5B77301CB6D439E7C8BD8A38A37E4F5701160E04* ___InterpolatedErrorCorrectionSettings_32;
	// Fusion.NetworkTransform/SmoothErrorCorrectionInterp Fusion.NetworkTransform::_smoothErrorCorrectedInterp
	SmoothErrorCorrectionInterp_tDF72028BC8D42989F989588D8B628D29FFC4DC64* ____smoothErrorCorrectedInterp_33;
	// Fusion.NetworkPositionRotation/EncodedPosition Fusion.NetworkTransform::_prevEncodedPos
	EncodedPosition_t948CC1ECA191B32B3C4C258684C11DD6255926B0 ____prevEncodedPos_34;
	// Fusion.NetworkPositionRotation/EncodedRotation Fusion.NetworkTransform::_prevEncodedRot
	EncodedRotation_t75657E796C4A1116685FFEB09FC7D1A5051278F1 ____prevEncodedRot_35;
	// Fusion.Tick Fusion.NetworkTransform::_predictedSpawnLatestToTick
	Tick_t57D39A4600C22C5C14D12A0C565FEB34404FD02F ____predictedSpawnLatestToTick_36;
	// UnityEngine.Vector3 Fusion.NetworkTransform::_predictedSpawnPosFrom
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____predictedSpawnPosFrom_37;
	// UnityEngine.Vector3 Fusion.NetworkTransform::_predictedSpawnPosTo
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____predictedSpawnPosTo_38;
	// UnityEngine.Quaternion Fusion.NetworkTransform::_predictedSpawnRotFrom
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____predictedSpawnRotFrom_39;
	// UnityEngine.Quaternion Fusion.NetworkTransform::_predictedSpawnRotTo
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____predictedSpawnRotTo_40;
};

// NetworkCharacterControllerPrototype
struct NetworkCharacterControllerPrototype_tD4212436823F0C748FA1B4F10A75A863F2F01FBC  : public NetworkTransform_tBD10DF8A12E3AFF3F8838F6A4A17FD29CFA84454
{
	// System.Single NetworkCharacterControllerPrototype::gravity
	float ___gravity_56;
	// System.Single NetworkCharacterControllerPrototype::jumpImpulse
	float ___jumpImpulse_57;
	// System.Single NetworkCharacterControllerPrototype::acceleration
	float ___acceleration_58;
	// System.Single NetworkCharacterControllerPrototype::braking
	float ___braking_59;
	// System.Single NetworkCharacterControllerPrototype::maxSpeed
	float ___maxSpeed_60;
	// System.Single NetworkCharacterControllerPrototype::rotationSpeed
	float ___rotationSpeed_61;
	// System.Boolean NetworkCharacterControllerPrototype::_IsGrounded
	bool ____IsGrounded_62;
	// UnityEngine.Vector3 NetworkCharacterControllerPrototype::_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____Velocity_63;
	// UnityEngine.CharacterController NetworkCharacterControllerPrototype::<Controller>k__BackingField
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___U3CControllerU3Ek__BackingField_64;
};

struct NetworkCharacterControllerPrototype_tD4212436823F0C748FA1B4F10A75A863F2F01FBC_StaticFields
{
	// Fusion.Changed`1<NetworkCharacterControllerPrototype> NetworkCharacterControllerPrototype::$IL2CPP_CHANGED
	Changed_1_t90EF7B581B5CCC30705AF592333631F99250DC96 ___U24IL2CPP_CHANGED_65;
	// Fusion.ChangedDelegate`1<NetworkCharacterControllerPrototype> NetworkCharacterControllerPrototype::$IL2CPP_CHANGED_DELEGATE
	ChangedDelegate_1_t2ADC111FE108454CF5E93B1F60D151F43BBEB91D* ___U24IL2CPP_CHANGED_DELEGATE_66;
	// Fusion.NetworkBehaviourCallbacks`1<NetworkCharacterControllerPrototype> NetworkCharacterControllerPrototype::$IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS
	NetworkBehaviourCallbacks_1_tD15FF85309EBEDC5C4C0E6C1D88E583AE2D45A34* ___U24IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS_67;
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053  : public RuntimeArray
{
	ALIGN_FIELD (8) MemberInfo_t* m_Items[1];

	inline MemberInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
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


// System.Void SpawnerPrototype`1<System.Object>::RegisterPlayerAndObject(Fusion.PlayerRef,Fusion.NetworkObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerPrototype_1_RegisterPlayerAndObject_m3E4C6D07A027176CB542019B402CA4F88C65BAC2_gshared (SpawnerPrototype_1_t62F1C32483637253B2C5E111F0DCBB92F4A8594E* __this, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___player0, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ___playerObject1, const RuntimeMethod* method) ;
// System.Void SpawnerPrototype`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerPrototype_1__ctor_mB8A22FA2547449CD6BDA23CC7D1B175809837771_gshared (SpawnerPrototype_1_t62F1C32483637253B2C5E111F0DCBB92F4A8594E* __this, const RuntimeMethod* method) ;
// System.Void SpawnPointManagerPrototype`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnPointManagerPrototype_1__ctor_m2CC9134F89E8EA31970E9B883B4F025F8A1313A7_gshared (SpawnPointManagerPrototype_1_tC1B622C1FA044879897CECF6C1EEA79C44B5B826* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::.ctor(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_mFA8F15EE5770AAF9026420AE64E667705760FAA3_gshared (ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C* __this, float ___item10, float ___item21, int32_t ___item32, int32_t ___item43, float ___item54, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<BasicSpawner/<StartGame>d__14>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2_m4E56B972744BBE62698241412D4E1C1CB70F14D8_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkInput::Set<NetworkInputData>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkInput_Set_TisNetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F_m467008FC4B467BB0A6FBE355C24EFF69280995CC_gshared (NetworkInput_t8FB09045785B1BAE178F157ACE2B24EEC7E31231* __this, NetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Fusion.PlayerRef,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD0CC736E02DA97556F9E9B881FAF8899384E0610_gshared (Dictionary_2_tA67BF03535BE283889E6F92DD820773074203F5F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Fusion.SceneRef>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mE8C7060F0808F23760C168C5DA728296C62527BF_gshared (Nullable_1_t60B9431C1BCAA220BB2AA6938CBB4CD1F9CFE0F1* __this, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___value0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,BasicSpawner/<StartGame>d__14>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2_mF5B16F33991C477791842453C9BC12AEAC42FC7D_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkBehaviour::GetInput<NetworkInputData>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_GetInput_TisNetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F_m4545BC9F2B6E4B244EF9A6F0862C0EF10774C0AD_gshared (NetworkBehaviour_t6DC912DE6ED4D9C556AE37A4CC23D247C52C57B3* __this, NetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F* ___input0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.WeakReference`1<System.Object>::TryGetTarget(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject** ___target0, const RuntimeMethod* method) ;
// System.Void System.WeakReference`1<System.Object>::SetTarget(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_SetTarget_mCEAE8D9CF9551015CE46420AB8614A8D1F14C329_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___results1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.WeakReference`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m47DD6DE10DF49155FCF329CC0B0FC21C23EDA26A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* Dictionary_2_get_Values_m2A497B1A3A2856303D35DC5C7172B6CC06BBF5AE_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared (UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.SceneManagement.Scene>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF80192BF77173A803E05499C419C61B2BB5AFBA7_gshared_inline (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___obj0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mE6284AC52B30253F1B4E5A2352658355B7BCC262_gshared (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::GetComponents<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___results0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// T UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_GetBuiltinResource_TisRuntimeObject_mB6B9B4952510999CA5D6816315DF9391076D0329_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Single>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;

// System.Void SpawnerPrototype`1<PlayerSpawnPointPrototype>::RegisterPlayerAndObject(Fusion.PlayerRef,Fusion.NetworkObject)
inline void SpawnerPrototype_1_RegisterPlayerAndObject_m692A4F3F4AF9B04834E9ED98360A74AB6C30828D (SpawnerPrototype_1_t2B1CAFDC5FDCFA5CBBB3556DADE68606CB2AC742* __this, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___player0, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ___playerObject1, const RuntimeMethod* method)
{
	((  void (*) (SpawnerPrototype_1_t2B1CAFDC5FDCFA5CBBB3556DADE68606CB2AC742*, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C*, const RuntimeMethod*))SpawnerPrototype_1_RegisterPlayerAndObject_m3E4C6D07A027176CB542019B402CA4F88C65BAC2_gshared)(__this, ___player0, ___playerObject1, method);
}
// System.Void Fusion.NetworkRunner::SetPlayerObject(Fusion.PlayerRef,Fusion.NetworkObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunner_SetPlayerObject_m2CF15D8FADF34817C2E629C20A0B3BEACCA52D94 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___player0, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ___networkObject1, const RuntimeMethod* method) ;
// System.Void SpawnerPrototype`1<PlayerSpawnPointPrototype>::.ctor()
inline void SpawnerPrototype_1__ctor_mD117339871C159AFAADCA7D9A5872CB8CD057763 (SpawnerPrototype_1_t2B1CAFDC5FDCFA5CBBB3556DADE68606CB2AC742* __this, const RuntimeMethod* method)
{
	((  void (*) (SpawnerPrototype_1_t2B1CAFDC5FDCFA5CBBB3556DADE68606CB2AC742*, const RuntimeMethod*))SpawnerPrototype_1__ctor_mB8A22FA2547449CD6BDA23CC7D1B175809837771_gshared)(__this, method);
}
// System.Void SpawnPointManagerPrototype`1<PlayerSpawnPointPrototype>::.ctor()
inline void SpawnPointManagerPrototype_1__ctor_m277C4593C2E8CA84BDC42D057C38D10D77F661E0 (SpawnPointManagerPrototype_1_tF8B95B3F73100916235CA03303E1682154B77872* __this, const RuntimeMethod* method)
{
	((  void (*) (SpawnPointManagerPrototype_1_tF8B95B3F73100916235CA03303E1682154B77872*, const RuntimeMethod*))SpawnPointManagerPrototype_1__ctor_m2CC9134F89E8EA31970E9B883B4F025F8A1313A7_gshared)(__this, method);
}
// System.Void Fusion.SimulationBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationBehaviour__ctor_m5547F07C9BC04E898E71BB86F72BD33D9B9FC937 (SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0* __this, const RuntimeMethod* method) ;
// Fusion.NetworkProjectConfig Fusion.NetworkProjectConfig::get_Global()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* NetworkProjectConfig_get_Global_m153AAA631485D3937120CEBFA91426F1AB3102A6 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void ToggleRunnerProvideInput::ToggleAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1 (ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A* __this, int32_t ___runnerIndex0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<Fusion.NetworkRunner> Fusion.NetworkRunner::GetInstancesEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4 NetworkRunner_GetInstancesEnumerator_mF2E62C8F9C3FDF810C268B1112C9CDEFF8347DC0 (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Fusion.NetworkRunner>::get_Current()
inline NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_inline (Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4* __this, const RuntimeMethod* method)
{
	return ((  NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* (*) (Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkRunner::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkRunner_get_IsRunning_mD44E761C42BFE8D5A4580B915F1204E38F47C570 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkRunner::set_ProvideInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunner_set_ProvideInput_mEE98BE2C97A9B47224FA331B2827FFB0F4FC46FA (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Fusion.NetworkRunner>::MoveNext()
inline bool Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76 (Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Fusion.Behaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour__ctor_m1CC74A6DA707BC75BDC3BF41D5BF5CA0809B0A8D (Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015* __this, const RuntimeMethod* method) ;
// System.Void ToggleRunnerVisibility::ToggleAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711 (ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5* __this, int32_t ___runnerIndex0, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkRunner::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunner_set_IsVisible_mBA05D9E055782412EABA7304E52D2290E186E321 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1 (const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_textField_mC554496BAB959445F0CFA30BDC5736DC1F057D48 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_box_m21BE7FC56D903B95BAFAE8890425D330EA88D893 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.GUIStyleState::get_background()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* GUIStyleState_get_background_mE29B6D17E91BFD828E40B369C6CE336ECBCC18DD (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_background_mD92FC76F8956A8EBB022C3E8EA02822D79F451C4 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_hover()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_hover_m159CD4F6636D87CBBC4B721AAE62436B86576EBF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_window_m760DAF129E72775DFD18CB71720AD306345E91C2 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_active_m3ABA9E58666A1CFE6EEEB3707E86D58DFE062CCB (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, int32_t ___left0, int32_t ___right1, int32_t ___top2, int32_t ___bottom3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_border(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_border_mA11481A8F139D4403E0764E07F49516D390CC6A7 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___value0, const RuntimeMethod* method) ;
// System.Void FusionScalableIMGUI::InitializedGUIStyles(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionScalableIMGUI_InitializedGUIStyles_mA1CC93C4AD5D6DD2EE6B58DCF2AB8FBFD4EC7352 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___baseSkin0, const RuntimeMethod* method) ;
// System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single> FusionScalableIMGUI::ScaleGuiSkinToScreenHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C FusionScalableIMGUI_ScaleGuiSkinToScreenHeight_mE4FE320F96D6C2E8E527F11077A53C6BC22F573E (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mB41DB89BB991289571A046270A924C0EEAA2C4BC (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_margin(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_margin_m9AAB6691C260ECD89195BE151F2ADDBF2E740C85 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_padding_m0C69415588C6032B372A48B1A1366CF43A083E14 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___value0, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::.ctor(T1,T2,T3,T4,T5)
inline void ValueTuple_5__ctor_mFA8F15EE5770AAF9026420AE64E667705760FAA3 (ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C* __this, float ___item10, float ___item21, int32_t ___item32, int32_t ___item43, float ___item54, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C*, float, float, int32_t, int32_t, float, const RuntimeMethod*))ValueTuple_5__ctor_mFA8F15EE5770AAF9026420AE64E667705760FAA3_gshared)(__this, ___item10, ___item21, ___item32, ___item43, ___item54, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
inline int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<BasicSpawner/<StartGame>d__14>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2_m4E56B972744BBE62698241412D4E1C1CB70F14D8 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2_m4E56B972744BBE62698241412D4E1C1CB70F14D8_gshared)(__this, ___stateMachine0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// System.Void Fusion.NetworkInput::Set<NetworkInputData>(T)
inline void NetworkInput_Set_TisNetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F_m467008FC4B467BB0A6FBE355C24EFF69280995CC (NetworkInput_t8FB09045785B1BAE178F157ACE2B24EEC7E31231* __this, NetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F ___value0, const RuntimeMethod* method)
{
	((  void (*) (NetworkInput_t8FB09045785B1BAE178F157ACE2B24EEC7E31231*, NetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F, const RuntimeMethod*))NetworkInput_Set_TisNetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F_m467008FC4B467BB0A6FBE355C24EFF69280995CC_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m92B7A836FB5463F20951B6BD9DB8F3B1BA56763C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Void BasicSpawner::StartGame(Fusion.GameMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_StartGame_m99A71C46AAFEFCA038624BEDC171E1F5E2E4924E (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Fusion.PlayerRef,Fusion.NetworkObject>::.ctor()
inline void Dictionary_2__ctor_m9E927A7C8B1B64479E0EB380003ADFBA3A575920 (Dictionary_2_t3000CE5E80875F97C1FB1B03F5275CA140BCF771* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3000CE5E80875F97C1FB1B03F5275CA140BCF771*, const RuntimeMethod*))Dictionary_2__ctor_mD0CC736E02DA97556F9E9B881FAF8899384E0610_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Fusion.NetworkRunner>()
inline NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* GameObject_AddComponent_TisNetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_m4B45BA973EA8CAA5F6416380C479D6BEA549A8DE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// Fusion.SceneRef Fusion.SceneRef::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 SceneRef_op_Implicit_m694EC00BAF28DDC57257781C1055D4E0BBBB0CD2 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Fusion.SceneRef>::.ctor(T)
inline void Nullable_1__ctor_mE8C7060F0808F23760C168C5DA728296C62527BF (Nullable_1_t60B9431C1BCAA220BB2AA6938CBB4CD1F9CFE0F1* __this, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t60B9431C1BCAA220BB2AA6938CBB4CD1F9CFE0F1*, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9, const RuntimeMethod*))Nullable_1__ctor_mE8C7060F0808F23760C168C5DA728296C62527BF_gshared)(__this, ___value0, method);
}
// T UnityEngine.GameObject::AddComponent<Fusion.NetworkSceneManagerDefault>()
inline NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* GameObject_AddComponent_TisNetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91_mC7641EDE933224B4659B9AC72B053BA58B5C6B03 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<Fusion.StartGameResult> Fusion.NetworkRunner::StartGame(Fusion.StartGameArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC2BC7766947595729B67DF8D071E306255CF484C* NetworkRunner_StartGame_m97F70FCD0EABAE84E99CFBBC0B9623221AA49805 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, StartGameArgs_t4FDF5F8340EDD5FBA5A6D3F656D8343172EEA3AB ___args0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Fusion.StartGameResult>::GetAwaiter()
inline TaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1 Task_1_GetAwaiter_m2F3B2222046B2DA707D8965AEBAEC709C45516EF (Task_1_tC2BC7766947595729B67DF8D071E306255CF484C* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1 (*) (Task_1_tC2BC7766947595729B67DF8D071E306255CF484C*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Fusion.StartGameResult>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mD2D85A293F49BD10A83BB71080013D86DCCC36FF (TaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Fusion.StartGameResult>,BasicSpawner/<StartGame>d__14>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1_TisU3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2_mD358A91C3C48F3ACCAC6F3C19CAE0DED6E351377 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1* ___awaiter0, U3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1*, U3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2_mF5B16F33991C477791842453C9BC12AEAC42FC7D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Fusion.StartGameResult>::GetResult()
inline StartGameResult_t79ED02F6538ACB92001E948B6B750C0A85462E2E* TaskAwaiter_1_GetResult_mC799FE9667F3EE1F958E7F49913DFA4663F83EAC (TaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1* __this, const RuntimeMethod* method)
{
	return ((  StartGameResult_t79ED02F6538ACB92001E948B6B750C0A85462E2E* (*) (TaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void BasicSpawner/<StartGame>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameU3Ed__14_MoveNext_m9B962F586F577F5FDDE78A741373BE680253B36D (U3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void BasicSpawner/<StartGame>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameU3Ed__14_SetStateMachine_m3C5A2E83C0F04532A58263756679EAECBA918449 (U3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<NetworkCharacterControllerPrototype>()
inline NetworkCharacterControllerPrototype_tD4212436823F0C748FA1B4F10A75A863F2F01FBC* Component_GetComponent_TisNetworkCharacterControllerPrototype_tD4212436823F0C748FA1B4F10A75A863F2F01FBC_mD26963B4658E8089B4F670E015734A89472B6293 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NetworkCharacterControllerPrototype_tD4212436823F0C748FA1B4F10A75A863F2F01FBC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean Fusion.NetworkBehaviour::GetInput<NetworkInputData>(T&)
inline bool NetworkBehaviour_GetInput_TisNetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F_m4545BC9F2B6E4B244EF9A6F0862C0EF10774C0AD (NetworkBehaviour_t6DC912DE6ED4D9C556AE37A4CC23D247C52C57B3* __this, NetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F* ___input0, const RuntimeMethod* method)
{
	return ((  bool (*) (NetworkBehaviour_t6DC912DE6ED4D9C556AE37A4CC23D247C52C57B3*, NetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F*, const RuntimeMethod*))NetworkBehaviour_GetInput_TisNetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F_m4545BC9F2B6E4B244EF9A6F0862C0EF10774C0AD_gshared)(__this, ___input0, method);
}
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Single Fusion.NetworkRunner::get_DeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkRunner_get_DeltaTime_m8831827404C94255CD93C9EAD4EECE10C11A5A23 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour__ctor_m80B5DC72F7815EEC5B6DDF46B9AF965112268053 (NetworkBehaviour_t6DC912DE6ED4D9C556AE37A4CC23D247C52C57B3* __this, const RuntimeMethod* method) ;
// System.Void Fusion.RuntimeUnityFlagsSetup::Check_ENABLE_IL2CPP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeUnityFlagsSetup_Check_ENABLE_IL2CPP_m985B107BBE0CCF3EE732578208BD4319B4CE15AC (const RuntimeMethod* method) ;
// System.Void Fusion.RuntimeUnityFlagsSetup::Check_NET_STANDARD_2_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeUnityFlagsSetup_Check_NET_STANDARD_2_0_mFCF591FB2BC32AB3693EC3101BDE8E3849934616 (const RuntimeMethod* method) ;
// System.Void Fusion.RuntimeUnityFlagsSetup::Check_UNITY_2019_4_OR_NEWER()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeUnityFlagsSetup_Check_UNITY_2019_4_OR_NEWER_mFB821A1D6123FA40D8CA3314B5787EAE04811482 (const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// System.String Fusion.FusionUnityLogger::Color32ToRGBString(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FusionUnityLogger_Color32ToRGBString_mE996FAFEF69061CFBB684B6C48B4528E02D48EF1 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821 (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Fusion.FusionUnityLogger::set_GetColor(System.Func`2<System.Object,System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FusionUnityLogger_set_GetColor_m91F84BF1AEB7B3FB6A8B0E88DC68F2A261A9E58A_inline (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Int32 Fusion.FusionUnityLogger::GetRandomColor(System.Int32,UnityEngine.Color32,UnityEngine.Color32,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FusionUnityLogger_GetRandomColor_mB8F1D3E1FC25F36A747542A2E9A6A1E8C34C62E8 (int32_t ___seed0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___min1, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___max2, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___svr3, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkRNG::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRNG__ctor_m31399DC91D6F37205836C731BBE5A6F6E0C90541 (NetworkRNG_t64B73CD206460A54C63878CFB53238AD54ECA0B2* __this, int32_t ___seed0, const RuntimeMethod* method) ;
// System.Int32 Fusion.NetworkRNG::RangeInclusive(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkRNG_RangeInclusive_mB454FBE1783D7A9205BF3DA96CF7B20F94B3BD7C (NetworkRNG_t64B73CD206460A54C63878CFB53238AD54ECA0B2* __this, int32_t ___minInclusive0, int32_t ___maxInclusive1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Int32 Fusion.FusionUnityLogger::Color32ToRGB24(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FusionUnityLogger_Color32ToRGB24_m26A5217620B12A017C942CADA33D4ADC9E247B61 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Boolean Fusion.Log::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_get_Initialized_mADEE678A7009B4F290E2B393C671ACCFE8F1D3D7 (const RuntimeMethod* method) ;
// System.Void Fusion.FusionUnityLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionUnityLogger__ctor_m0287DD77CE2EF2B6BA6C1E8B0AA63BCC70049904 (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, const RuntimeMethod* method) ;
// System.Void Fusion.Log::Init(Fusion.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Init_m062F8783C0C30BA88151B1CCC8E592741F2C1EA9 (RuntimeObject* ___logger0, const RuntimeMethod* method) ;
// System.Int32 Fusion.NetworkRunner::GetHashCodeForLogger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkRunner_GetHashCodeForLogger_m60EC7F3AE38B458330494232F509794E8F092D34 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Int32 Fusion.FusionUnityLogger::GetRandomColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FusionUnityLogger_GetRandomColor_m23D8E545D94FFA41142600B60C309D90770F5C9E (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, int32_t ___seed0, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkRunnerExtensions::TryGetSceneBuildIndex(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkRunnerExtensions_TryGetSceneBuildIndex_mB69CE0A3FC022F9457CF9A4701EA09D2500875C6 (String_t* ___nameOrPath0, int32_t* ___buildIndex1, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkRunner::SetActiveScene(Fusion.SceneRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunner_SetActiveScene_m53E0CCA965B5C83B969AE289EE946E82F214877F (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___scene0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.SceneUtility::GetBuildIndexByScenePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneUtility_GetBuildIndexByScenePath_m5C0D6C7A23E3B30E5F1AA268172D4F5A9734BB68 (String_t* ___scenePath0, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.SceneUtility::GetScenePathByBuildIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SceneUtility_GetScenePathByBuildIndex_m05FA8A8072FAD3852479053D98459A7254EE7E0D (int32_t ___buildIndex0, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkRunnerExtensions::GetFileNameWithoutExtensionPosition(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunnerExtensions_GetFileNameWithoutExtensionPosition_m5B0F1DBD2ED4FEF7A777E5D2C4D764671D825487 (String_t* ___nameOrPath0, int32_t* ___index1, int32_t* ___length2, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mBE0464BE13D10A6A189C23D821839018873FDFAD (String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, bool ___ignoreCase5, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCountInBuildSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCountInBuildSettings_m7C49222A2A771B11C1CAD7D743BDDF8F8F39E685 (const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// Fusion.NetworkRunner Fusion.NetworkSceneManagerBase::get_Runner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, const RuntimeMethod* method) ;
// Fusion.SceneRef Fusion.NetworkRunner::get_CurrentScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 NetworkRunner_get_CurrentScene_m757A103B3F43FD76BA0DC38132749F60AA90493D (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.SceneRef::op_Inequality(Fusion.SceneRef,Fusion.SceneRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneRef_op_Inequality_m3DF03A4E620B9F4D5F9F7BF418F2E6CAC508B61C (SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___a0, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___b1, const RuntimeMethod* method) ;
// System.Boolean System.WeakReference`1<Fusion.NetworkSceneManagerBase>::TryGetTarget(T&)
inline bool WeakReference_1_TryGetTarget_m1B98B24F2C23C226A6A634FF3166162524EF61EA (WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* __this, NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39** ___target0, const RuntimeMethod* method)
{
	return ((  bool (*) (WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2*, NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39**, const RuntimeMethod*))WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared)(__this, ___target0, method);
}
// System.Void System.WeakReference`1<Fusion.NetworkSceneManagerBase>::SetTarget(T)
inline void WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220 (WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* __this, NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* ___target0, const RuntimeMethod* method)
{
	((  void (*) (WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2*, NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39*, const RuntimeMethod*))WeakReference_1_SetTarget_mCEAE8D9CF9551015CE46420AB8614A8D1F14C329_gshared)(__this, ___target0, method);
}
// System.Collections.IEnumerator Fusion.NetworkSceneManagerBase::SwitchSceneWrapper(Fusion.SceneRef,Fusion.SceneRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkSceneManagerBase_SwitchSceneWrapper_m4E190732E2E2EC8F8306F685483CDF7E07A503E2 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___prevScene0, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___newScene1, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_path_mACD61B36E1F010A9FCA2C62637E0CB24B16729E4 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.SceneRef::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneRef_get_IsValid_mFC88184BDE683A01DA6CF60F23EC17983C247379 (SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9* __this, const RuntimeMethod* method) ;
// System.Int32 Fusion.SceneRef::op_Implicit(Fusion.SceneRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneRef_op_Implicit_mCF924A35424A1547276067E9A3A892AB3EB8511F (SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkSceneManagerBase::TryGetScenePathFromBuildSettings(Fusion.SceneRef,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSceneManagerBase_TryGetScenePathFromBuildSettings_m9D23CB6309C4E8C2FE223F9BFA5B8ADFE18C3E7E (SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___sceneRef0, String_t** ___path1, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkSceneManagerBase::IsScenePathOrNameEqual(UnityEngine.SceneManagement.Scene,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSceneManagerBase_IsScenePathOrNameEqual_m240342346F56E73445FF7329C29A963C736C8987 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, String_t* ___nameOrPath1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Fusion.NetworkObject>::.ctor()
inline void List_1__ctor_mA6EF54D04CDB9BB4B0F28BFA8A21EC80A3DC76FA (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.GameObject[] UnityEngine.SceneManagement.Scene::GetRootGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Fusion.NetworkObject>::Clear()
inline void List_1_Clear_m130EA2C4542DE33976BD5F3E71CFD09028CA12AA_inline (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<Fusion.NetworkObject>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponentsInChildren_TisNetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C_m30DA9706B6091A01234C649C9FC0CFE9098E435A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ___results1, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared)(__this, ___includeInactive0, ___results1, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Fusion.NetworkObject>::GetEnumerator()
inline Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06 List_1_GetEnumerator_m849F529B76EAC19A125D08EC5D7A7C16A4A5BE2B (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06 (*) (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Fusion.NetworkObject>::Dispose()
inline void Enumerator_Dispose_m48050D75FCDDB54380B87CE4466A5B13280776FC (Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Fusion.NetworkObject>::get_Current()
inline NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* Enumerator_get_Current_mED8C4FC16A9F1BE2915FAE2E7CD05A3C59180C56_inline (Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06* __this, const RuntimeMethod* method)
{
	return ((  NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* (*) (Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean Fusion.NetworkObjectFlagsExtensions::IsSceneObject(Fusion.NetworkObjectFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkObjectFlagsExtensions_IsSceneObject_mF1D0BBB5521D4158A63BDB5AC60213CA3FA72C9D_inline (int32_t ___flags0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkObjectFlagsExtensions::IsActivatedByUser(Fusion.NetworkObjectFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkObjectFlagsExtensions_IsActivatedByUser_m32DE8195B0505F463E81FA212651287FF6C7AA63_inline (int32_t ___flags0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Fusion.NetworkObject>::Add(T)
inline void List_1_Add_m006122E663E12324385572178836CCAE30619163_inline (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* __this, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82*, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Fusion.NetworkObject>::MoveNext()
inline bool Enumerator_MoveNext_m3CC53690EDAA1DDB18B8E49248774B270E7FBAF3 (Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Fusion.RunnerVisibilityNode::AddVisibilityNodes(UnityEngine.GameObject,Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RunnerVisibilityNode_AddVisibilityNodes_m04A43B807B5A6A504748658BDA8DB519BE5F72CA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerBase::set_Runner(Fusion.NetworkRunner)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_set_Runner_mF623A2AFBBBC35E86821F577FDEFF7F58336EE31_inline (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___value0, const RuntimeMethod* method) ;
// Fusion.SceneRef Fusion.SceneRef::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 SceneRef_get_None_mFE4689312D6BC57836985671FA237DB147898126 (const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerBase::LogWarn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_LogWarn_mD5326B515097E0C302A0ADDB469FF4762B59C29C (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void Fusion.Log::Error(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_m121DF6562746E8104C122A968DE925E0C3ADB8BB (RuntimeObject* ___msg0, const RuntimeMethod* method) ;
// System.Void Fusion.Log::Warn(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warn_mF585B348307AB9D3461293F009F849C5BA853A10 (RuntimeObject* ___msg0, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneWrapperU3Ed__26__ctor_mE9F726884C411FE0A649AB8ADAD7E86B24934E4E (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.WeakReference`1<Fusion.NetworkSceneManagerBase>::.ctor(T)
inline void WeakReference_1__ctor_m1039DCD4F251CC407C0D72021F7D04F936DC0E29 (WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* __this, NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* ___target0, const RuntimeMethod* method)
{
	((  void (*) (WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2*, NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39*, const RuntimeMethod*))WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared)(__this, ___target0, method);
}
// System.Guid Fusion.NetworkObjectGuid::op_Implicit(Fusion.NetworkObjectGuid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t NetworkObjectGuid_op_Implicit_m1A0E3C69EAA11EF1C223643936636857D5A52E8B (NetworkObjectGuid_t99EAC957EE861D66626645313D35A1F49AF134B4 ___guid0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,Fusion.NetworkObject>::Add(TKey,TValue)
inline void Dictionary_2_Add_mB7A02CC7C77717DCDC7980A1EE1194A75B9F673D (Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4* __this, Guid_t ___key0, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4*, Guid_t, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C*, const RuntimeMethod*))Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneWrapperU3Ed__26_U3CU3Em__Finally1_m2C7E18C3627392881FF33AE525DC1B7ECC74DBA1 (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneWrapperU3Ed__26_System_IDisposable_Dispose_m4613C7560113A39655C6B27AA57CA2A43F6439A2 (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_mE403649ECF52DD3E78FB63E2F7A7B5C48CC75B94 (U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,Fusion.NetworkObject>::.ctor()
inline void Dictionary_2__ctor_m4B4120375E58E69EB8BC54ADB054EBBEFC933831 (Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4*, const RuntimeMethod*))Dictionary_2__ctor_m47DD6DE10DF49155FCF329CC0B0FC21C23EDA26A_gshared)(__this, method);
}
// System.Void Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedLoadingDelegate__ctor_m2AA5AAD37381CFEF578C392654121C8D166C7E2C (FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkRunner::InvokeSceneLoadStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunner_InvokeSceneLoadStart_mC88B5250E6415EAC954B1FC96D2ACE60E921AA70 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerBase::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_LogError_m6636890C17C51DF975A4BFD17A0B3771A9912E56 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,Fusion.NetworkObject>::get_Values()
inline ValueCollection_tF3CD15E5D171F1E7DEA04F2110426D188EEAF961* Dictionary_2_get_Values_mC860851CA34533BEA997FC852C9AD7768F6D2049 (Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tF3CD15E5D171F1E7DEA04F2110426D188EEAF961* (*) (Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4*, const RuntimeMethod*))Dictionary_2_get_Values_m2A497B1A3A2856303D35DC5C7172B6CC06BBF5AE_gshared)(__this, method);
}
// System.Void Fusion.NetworkRunner::RegisterSceneObjects(System.Collections.Generic.IEnumerable`1<Fusion.NetworkObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunner_RegisterSceneObjects_m746C14B764716FD492DB7F99EBF6475F45E0FA47 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, RuntimeObject* ___objects0, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkRunner::InvokeSceneLoadDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunner_InvokeSceneLoadDone_m9549003F7A9637BD9FAA1B615C23A30EC37A53D7 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m9878516CC321F91FA505845F027BFDF84F218BB9 (U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_mD501C44DA433BE225E6455D9AEB311C9A12FFF3C (String_t* ___sceneName0, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E ___parameters1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_mDE45940CCEC5D17EB92EB76DB8931E5483FBCD2C (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___value0, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsync(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_UnloadSceneAsync_m3E7FAB5F33771BC535CC78DBF1062328F1A36752 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, const RuntimeMethod* method) ;
// Fusion.NetworkProjectConfig Fusion.NetworkRunner::get_Config()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* NetworkRunner_get_Config_mD7D0F65C494EB1B08A7DC8A9F6C016588006BD0E_inline (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneMultiplePeerU3Ed__4__ctor_mAA45B70FFC8FD30FC82FAF9CB3EFD4EADB908183 (U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneSinglePeerU3Ed__5__ctor_mBED5520059D653A64415C85CDC65D7C2411EB6B8 (U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase__ctor_m13487B9BF6F36D69D7C02D77BB7B66DA77CDAFBB (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.SceneManagement.Scene>::Invoke(T)
inline void Action_1_Invoke_mF80192BF77173A803E05499C419C61B2BB5AFBA7_inline (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*))Action_1_Invoke_mF80192BF77173A803E05499C419C61B2BB5AFBA7_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_sceneLoaded_m8840CC33052C4A09A52BF927C3738A7B66783155 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___value0, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mF67F08B5221ED03356CA8D388C220C639AF83454 (U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.SceneRef::op_Equality(Fusion.SceneRef,Fusion.SceneRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneRef_op_Equality_m276FE28D52EC1775F8A866F4396FBC003DFEA4BC (SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___a0, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___b1, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkSceneManagerBase::IsScenePathOrNameEqual(UnityEngine.SceneManagement.Scene,Fusion.SceneRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSceneManagerBase_IsScenePathOrNameEqual_mC14E4BA82C144610610A51D6C5B2D90AA5499E51 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___sceneRef1, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.LocalPhysicsMode Fusion.NetworkProjectConfig::ConvertPhysicsMode(Fusion.NetworkProjectConfig/PhysicsEngines)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkProjectConfig_ConvertPhysicsMode_mFECF68874CA1A2F50B0AA7F852EBC0EFEB4801F2 (int32_t ___engine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.LoadSceneParameters::.ctor(UnityEngine.SceneManagement.LoadSceneMode,UnityEngine.SceneManagement.LocalPhysicsMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneParameters__ctor_mC6BFFB213ADFF4F5057E6D92A2C87B9A4386C3B0 (LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E* __this, int32_t ___mode0, int32_t ___physicsMode1, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene Fusion.NetworkRunner::get_MultiplePeerUnityScene()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 NetworkRunner_get_MultiplePeerUnityScene_mDCE6D9D72D3127C35F74CADBC5EBC79C833699DF_inline (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkRunner::get_IsMultiplePeerSceneTemp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkRunner_get_IsMultiplePeerSceneTemp_mE64D915B99B214780B73BBAFEAE8EFADCF71D001_inline (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GameObject>()
inline GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Array_Empty_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mA76794E5562401F30A8DF1D7F6A699BD3002EE52_inline (const RuntimeMethod* method)
{
	return ((  GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// Fusion.NetworkRunner Fusion.NetworkRunner::GetRunnerForScene(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* NetworkRunner_GetRunnerForScene_mFC6D7FED47F14B264A8BC57674B57C88318C16DD (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCount_mDB2658B632F95AB171E500C1519A681507B9230B (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.LoadSceneParameters::set_loadSceneMode(UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneParameters_set_loadSceneMode_mF66230A39CD26D396879FE1BAAB128F3F7F63A58 (LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkRunner::TryMultiplePeerAssignTempScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkRunner_TryMultiplePeerAssignTempScene_m2D30422B301626FE560E1F3499498CD49B9BFEAE (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE6284AC52B30253F1B4E5A2352658355B7BCC262 (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mE6284AC52B30253F1B4E5A2352658355B7BCC262_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkSceneManagerBase::FindNetworkObjects(UnityEngine.SceneManagement.Scene,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* NetworkSceneManagerBase_FindNetworkObjects_mD5801F1D58BC4EB5E25A10D7D83B4A7CBED1CFBF (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, bool ___disable1, bool ___addVisibilityNodes2, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkRunner::set_MultiplePeerUnityScene(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunner_set_MultiplePeerUnityScene_mE67B82588A7434CAAAB9235129508F46ED7C48E2 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::MoveGameObjectToScene(UnityEngine.GameObject,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_MoveGameObjectToScene_m90813BE70C527D3C0FF06BA135AC3B88F851A668 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene1, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate::Invoke(System.Collections.Generic.IEnumerable`1<Fusion.NetworkObject>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_inline (FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___sceneObjects0, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mB65A57C225C7F50ED007903C075A53E59C91EDC5 (U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.LoadSceneParameters::.ctor(UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneParameters__ctor_m40C160638049BF7577055B3460968F8B73459380 (LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.MeshFilter>::Clear()
inline void List_1_Clear_m47377D7758798C489896B13DDD6EAFEC1B6D9917_inline (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::Clear()
inline void List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_inline (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::Clear()
inline void List_1_Clear_m567A0E8ADE485441540D5B46AB6C518558DDA2FE_inline (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>::Clear()
inline void List_1_Clear_m83D0AB87CBF92DF59992C02F675DD3DCBB805753_inline (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider2D>::Clear()
inline void List_1_Clear_m909AB75DE2253A8B9D7AB3E65CDCDC42BB92DEC3_inline (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m39DE337508D2ADD39AC2AAE01AB0FFEA7583601F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ___results1, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared)(__this, ___includeInactive0, ___results1, method);
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.MeshFilter>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mF756FB30A88DDCBFAE2F1811FEC9FA4CDED0DE2F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ___results1, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared)(__this, ___includeInactive0, ___results1, method);
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.SpriteRenderer>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6405D497F14EEE2F172D1D82E55881EA9385B40B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* ___results1, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared)(__this, ___includeInactive0, ___results1, method);
}
// System.Void UnityEngine.GameObject::GetComponents<UnityEngine.Renderer>(System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponents_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mBB103B375AB35BB10A810994CFB39ACA5335AEB7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ___results0, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared)(__this, ___results0, method);
}
// System.Void UnityEngine.GameObject::GetComponents<UnityEngine.MeshFilter>(System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponents_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mD3AA9DE8ED9C3C202BED617A4EA8CAD29E799999 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ___results0, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared)(__this, ___results0, method);
}
// System.Void UnityEngine.GameObject::GetComponents<UnityEngine.SpriteRenderer>(System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponents_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mD1C82F35AB4D7DB1DC1D8138EBC6679456DBC940 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* ___results0, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared)(__this, ___results0, method);
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mADF65DE232F8B1518C734CA9A1D60F1D4A4CC374 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___results1, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared)(__this, ___includeInactive0, ___results1, method);
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Collider2D>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponentsInChildren_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mA5584260A845566F11731CDDE7AF216E044BEE7A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* ___results1, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared)(__this, ___includeInactive0, ___results1, method);
}
// System.Void UnityEngine.GameObject::GetComponents<UnityEngine.Collider>(System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m84278021B82DC03648708BEFE1521002F9CACBA4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___results0, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared)(__this, ___results0, method);
}
// System.Void UnityEngine.GameObject::GetComponents<UnityEngine.Collider2D>(System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponents_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m0CD3227FF22984AB1F8A80030A70A3921A439EF5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* ___results0, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared)(__this, ___results0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.MeshFilter>::get_Item(System.Int32)
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348 (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Renderer>::Contains(T)
inline bool List_1_Contains_mCE9E8AEA0E6245078585C01E04AF1D72D2B62760 (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::Add(T)
inline void List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_inline (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.MeshFilter>::get_Count()
inline int32_t List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_inline (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Collider>::get_Item(System.Int32)
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587 (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::Add(T)
inline void List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_inline (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Collider>::get_Count()
inline int32_t List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Collider2D>::get_Item(System.Int32)
inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* (*) (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider2D>::Add(T)
inline void List_1_Add_mE750EBF74E88E67DF4737B6A5F3594338FAA2132_inline (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Collider2D>::get_Count()
inline int32_t List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_inline (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Renderer>::get_Count()
inline int32_t List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_inline (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>::get_Count()
inline int32_t List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_inline (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Renderer>::get_Item(System.Int32)
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2 (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>::get_Item(System.Int32)
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020 (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds0, const RuntimeMethod* method) ;
// UnityEngine.Bounds Fusion.Editor.BoundsTools::CollectMyBounds(UnityEngine.GameObject,Fusion.Editor.BoundsTools/BoundsType,System.Int32&,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 BoundsTools_CollectMyBounds_m1F54966928E0913E0EC497ABF009CCD616E9D43F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, int32_t ___factorIn1, int32_t* ___numOfBoundsFound2, bool ___includeChildren3, bool ___includeInactive4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.MeshFilter>::.ctor()
inline void List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::.ctor()
inline void List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::.ctor()
inline void List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>::.ctor()
inline void List_1__ctor_m6E83AE2DD08C6F347070F297A225B37FC4A2ADFA (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider2D>::.ctor()
inline void List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7 (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.String[] System.Enum::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enum_GetNames_mA16B3D5DABC2AE21290B05053660F925DBFF6D94 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Reflection.MemberInfo[] System.Type::GetMember(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* Type_GetMember_mC4456D1BA93A44CF021059F6D46237C0740A6229 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T UnityEngine.Resources::GetBuiltinResource<UnityEngine.Font>(System.String)
inline Font_tC95270EA3198038970422D78B74A7F2E218A96B6* Resources_GetBuiltinResource_TisFont_tC95270EA3198038970422D78B74A7F2E218A96B6_m5D498C77B14E440C2C74A22BC3FFB4963CFC3113 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Font_tC95270EA3198038970422D78B74A7F2E218A96B6* (*) (String_t*, const RuntimeMethod*))Resources_GetBuiltinResource_TisRuntimeObject_mB6B9B4952510999CA5D6816315DF9391076D0329_gshared)(___path0, method);
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Fusion.StatsInternal.FusionStatsUtilities::get_MeterTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* FusionStatsUtilities_get_MeterTexture_mED068CA007E10366DB7A2C0CB0029EE89D4A65BE (const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Sprite_Create_m52CEA0C28557793072A08CF911ACE8C6C550BE79 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot2, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Fusion.StatsInternal.FusionStatsUtilities::get_Circle32Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* FusionStatsUtilities_get_Circle32Texture_m0CAB14DF4E3770CA811B6F9CC5162B2FE6CDBE38 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Sprite_Create_mDC3D234BAAAF10910F340FAE925AFACE505246B8 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot2, float ___pixelsPerUnit3, uint32_t ___extrude4, int32_t ___meshType5, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___border6, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Fusion.SimulationModes>::get_HasValue()
inline bool Nullable_1_get_HasValue_m8ED79880725281B975FFF0D1E75C8C3F3018B842_inline (Nullable_1_tA7AB74DCC49231122BDE6A56B38A849C29538EF7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tA7AB74DCC49231122BDE6A56B38A849C29538EF7*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// T System.Nullable`1<Fusion.SimulationModes>::get_Value()
inline int32_t Nullable_1_get_Value_m80B7F96D7D17A583B34736C90E2B91A8FB71419D (Nullable_1_tA7AB74DCC49231122BDE6A56B38A849C29538EF7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tA7AB74DCC49231122BDE6A56B38A849C29538EF7*, const RuntimeMethod*))Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared)(__this, method);
}
// Fusion.SimulationModes Fusion.NetworkRunner::get_Mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkRunner_get_Mode_m2B4077D7A5AF533F89A3098FD6A824C32CD080BF (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene Fusion.NetworkRunner::get_SimulationUnityScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 NetworkRunner_get_SimulationUnityScene_mD1F08EE8BF063672E6308279336BBF3135012E65 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::op_Equality(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_op_Equality_m299018477251CD19CF480FB98EE3C79F9DBE3482 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___lhs0, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::ExpandAnchor(UnityEngine.RectTransform,System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_ExpandAnchor_m587744CEB8C0607C2E6D36F693243170961B342B (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___padding1, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::CreateRectTransform(UnityEngine.Transform,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, String_t* ___name1, bool ___expand2, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Single>::.ctor(T)
inline void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420 (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, float, const RuntimeMethod*))Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared)(__this, ___value0, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Dropdown>()
inline Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* GameObject_AddComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_mDE25E2D9598E3478E8CD12EA6C61F743882E27B7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_image(UnityEngine.UI.Image)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Selectable_set_image_mE9DDDBE46C5A435F9788E88EEF0187B5E09A30A8_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___value0, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::ExpandTopAnchor(UnityEngine.RectTransform,System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_ExpandTopAnchor_m6BDD2E579A36CBC9629232BBF2ED0EF4B7A8B978 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___padding1, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::SetOffsets(UnityEngine.RectTransform,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_SetOffsets_mDA9D585C78E2A3F2C242201A7D76BB237E0ED8A5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, float ___minX1, float ___maxX2, float ___minY3, float ___maxY4, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::SetAnchors(UnityEngine.RectTransform,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_SetAnchors_m0892EE3E7F12D3D63F5041DEE9D603C1124D18F4 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, float ___minX1, float ___maxX2, float ___minY3, float ___maxY4, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::SetPivot(UnityEngine.RectTransform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_SetPivot_mAAF2FF7164762F6FE69B41A74C562343A2CF3A9C (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, float ___pivotX1, float ___pivotY2, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::SetSizeDelta(UnityEngine.RectTransform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_SetSizeDelta_m09E490DCB3EAC2E743E600EC7E591B3F50FC58EC (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, float ___offsetX1, float ___offsetY2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Toggle>()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GameObject_AddComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m0E1C6713C85CAAB22DE299872377285F55C106D1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.UI.ColorBlock::set_colorMultiplier(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_colorMultiplier_m920A048B95541DB0E92AF4AF3894BE7CD2D37102_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_normalColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_normalColor_m3EBF594F6FA2C6494ACA9FCB9B458807D85B96F8_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_highlightedColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_pressedColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_pressedColor_m644C938090857AB07C57B25FE53F6DC2BB0DD5A8_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_selectedColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_selectedColor_m76FEFB1148798B7A356C974CDEA3BA2E2E3C1D21_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Sprite Fusion.StatsInternal.FusionStatsUtilities::get_CircleSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* FusionStatsUtilities_get_CircleSprite_mFE6F6ECEC146CF4C13764F17CF40EC017E73753D (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_preserveAspect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_preserveAspect_mF465AFD1313C0F002B37C8B86C75F98CB72A4098 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Text Fusion.StatsInternal.FusionStatsUtilities::AddText(UnityEngine.RectTransform,System.String,UnityEngine.TextAnchor,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* FusionStatsUtilities_AddText_m64EF7C5E39B82119DF8F46EF049EB23AD90A9F21 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, String_t* ___label1, int32_t ___anchor2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___FontColor3, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_resizeTextMaxSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_resizeTextMaxSize_m25EB2C9302AA9354237A2F56BB3E019192C6015B (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_targetGraphic_m23DB0DF4E5F2DABD50C662C708B4555162171FB9 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::set_template(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_template_m13FE93E0ED2414A5D8D4595D3123DDFD726DB619 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::set_itemText(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_itemText_m901981335866C0A856E31D7D1C87C7D8E76FBFAA (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Font Fusion.StatsInternal.FusionStatsUtilities::get_Font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* FusionStatsUtilities_get_Font_m8589D1AC74A0BCFA8302603EBD6ADFE1D25AC6FA (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_font(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_font_mA0D2999281A72029A5BC7294A886C5674F07DC5F (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_resizeTextMinSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_resizeTextMinSize_m1DC5160514ED872A8C572024A94D7EA9D6357655 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_resizeTextForBestFit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_resizeTextForBestFit_m1376BB9FDBAC5571E0F24564E22391AC8EB89A35 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_fontStyle(UnityEngine.FontStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_alignByGeometry(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_alignByGeometry_mB427C41097943370E11579A3DA822A3295836CE2 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_horizontalOverflow(UnityEngine.HorizontalWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_horizontalOverflow_m10AAFBA65FD7F4B1934B5D628B3E70D75D02FFD6 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.HorizontalLayoutGroup>()
inline HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_childControlHeight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_set_childControlHeight_m8DD189C9B1F926641F4A2FD41F41F2097E4D7751 (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_childControlWidth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_set_childControlWidth_m0B9A78B8284E17C438645684984796AC0E2D1BD8 (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_spacing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_set_spacing_m90373F54D37DA8DFA90E102DC60EC33E542FD859 (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// System.Void UnityEngine.UI.LayoutGroup::set_padding(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_set_padding_m9F415F3402E5E4AE684FD153493CE3E8D64D3EB7 (LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* __this, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.VerticalLayoutGroup>()
inline VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* GameObject_AddComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_m8FC80304C9EFC42F9CAE9588753536DC6F224521 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.GridLayoutGroup>()
inline GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* GameObject_AddComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mC504566284D32F0111950B862D22B0602995290C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.UI.GridLayoutGroup::set_spacing(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLayoutGroup_set_spacing_mA5550A683F7B4A7A1510B267B5D4CACEB8981306 (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::AddCircleSprite(UnityEngine.RectTransform,UnityEngine.Color,UnityEngine.UI.Image&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_AddCircleSprite_m057F410F3EF37AE9F95CFFCB3FD061485057E627 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** ___image2, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_type(UnityEngine.UI.Image/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_type_mECB8D34772AA393FFBC867B03D18EA0F1A8546BF (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_pixelsPerUnitMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_pixelsPerUnitMultiplier_m05DA43C7FD5B7B162FCB1ED6FCA850FD41AF7DC1 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared)(__this, method);
}
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetSiblingIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::AddImage(UnityEngine.RectTransform,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_AddImage_m26B3C34E9632607FDE9D6F75BF6B0D5C82416EAA (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Fusion.NetworkRunner>::.ctor(System.Int32)
inline void List_1__ctor_m09143BB6CC75A27DC82284874BC7AA9874E3D159 (List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerSpawnerPrototype::RegisterPlayerAndObject(Fusion.PlayerRef,Fusion.NetworkObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSpawnerPrototype_RegisterPlayerAndObject_mA15A7867E262C601624DC040C1DCDA38F7F5BF7A (PlayerSpawnerPrototype_t4796F19F1683ADBE95CDE67D28D80E55D6F657E8* __this, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___player0, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ___playerObject1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnerPrototype_1_RegisterPlayerAndObject_m692A4F3F4AF9B04834E9ED98360A74AB6C30828D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.RegisterPlayerAndObject(player, playerObject);
		PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC L_0 = ___player0;
		NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_1 = ___playerObject1;
		SpawnerPrototype_1_RegisterPlayerAndObject_m692A4F3F4AF9B04834E9ED98360A74AB6C30828D(__this, L_0, L_1, SpawnerPrototype_1_RegisterPlayerAndObject_m692A4F3F4AF9B04834E9ED98360A74AB6C30828D_RuntimeMethod_var);
		// Runner.SetPlayerObject(player, playerObject);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_2 = ((SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0*)__this)->___Runner_7;
		PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC L_3 = ___player0;
		NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_4 = ___playerObject1;
		NullCheck(L_2);
		NetworkRunner_SetPlayerObject_m2CF15D8FADF34817C2E629C20A0B3BEACCA52D94(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void PlayerSpawnerPrototype::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSpawnerPrototype__ctor_m41DB0D28FF739721ACEF33712F949C21DC28104F (PlayerSpawnerPrototype_t4796F19F1683ADBE95CDE67D28D80E55D6F657E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnerPrototype_1__ctor_mD117339871C159AFAADCA7D9A5872CB8CD057763_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpawnerPrototype_1__ctor_mD117339871C159AFAADCA7D9A5872CB8CD057763(__this, SpawnerPrototype_1__ctor_mD117339871C159AFAADCA7D9A5872CB8CD057763_RuntimeMethod_var);
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
// System.Void PlayerSpawnPointManagerPrototype::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSpawnPointManagerPrototype__ctor_mE2E204CB188333CAA26E7248E7902D38EF46ACE2 (PlayerSpawnPointManagerPrototype_t155715CC2FBC2EE8FF5A7872955E79575C4C18F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnPointManagerPrototype_1__ctor_m277C4593C2E8CA84BDC42D057C38D10D77F661E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpawnPointManagerPrototype_1__ctor_m277C4593C2E8CA84BDC42D057C38D10D77F661E0(__this, SpawnPointManagerPrototype_1__ctor_m277C4593C2E8CA84BDC42D057C38D10D77F661E0_RuntimeMethod_var);
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
// System.Void PlayerSpawnPointPrototype::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSpawnPointPrototype__ctor_mAE58A6970398A87A3698572785B5B55B2AF8612C (PlayerSpawnPointPrototype_t9B5A1C452F0255C5FF0DB273738686CBB585508A* __this, const RuntimeMethod* method) 
{
	{
		SimulationBehaviour__ctor_m5547F07C9BC04E898E71BB86F72BD33D9B9FC937(__this, NULL);
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
// System.Void ToggleRunnerProvideInput::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerProvideInput_Awake_m6A509F264B39C6D311CE07A906DA556325E6A353 (ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D7C1262378BB498E0E72B70BDC1C9D64DB5E587);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NetworkProjectConfig.Global.PeerMode != NetworkProjectConfig.PeerModes.Multiple) {
		NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* L_0;
		L_0 = NetworkProjectConfig_get_Global_m153AAA631485D3937120CEBFA91426F1AB3102A6(NULL);
		NullCheck(L_0);
		int32_t L_1 = L_0->___PeerMode_5;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogWarning($"{nameof(ToggleRunnerProvideInput)} only works in Multi-Peer mode. Destroying.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral9D7C1262378BB498E0E72B70BDC1C9D64DB5E587, NULL);
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(__this, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// if (_instance)
		ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A* L_2 = ((ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_StaticFields*)il2cpp_codegen_static_fields_for(ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(__this, NULL);
	}

IL_0030:
	{
		// _instance = this;
		((ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_StaticFields*)il2cpp_codegen_static_fields_for(ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_StaticFields*)il2cpp_codegen_static_fields_for(ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void ToggleRunnerProvideInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerProvideInput_Update_m364FB596F8E65D99D5BE9EE495866C6D2C52704E (ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A* __this, const RuntimeMethod* method) 
{
	{
		// if ((Input.GetKey(KeyCode.LeftControl) || Input.GetKey(KeyCode.LeftCommand)) && Input.GetKey(KeyCode.LeftShift)) {
		bool L_0;
		L_0 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)306), NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)310), NULL);
		if (!L_1)
		{
			goto IL_00d3;
		}
	}

IL_001b:
	{
		bool L_2;
		L_2 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)304), NULL);
		if (!L_2)
		{
			goto IL_00d3;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.Alpha0))
		bool L_3;
		L_3 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)48), NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// ToggleAll(-1);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, (-1), NULL);
		return;
	}

IL_003b:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha1))
		bool L_4;
		L_4 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)49), NULL);
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		// ToggleAll(0);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha2))
		bool L_5;
		L_5 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)50), NULL);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		// ToggleAll(1);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 1, NULL);
		return;
	}

IL_005d:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha3))
		bool L_6;
		L_6 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)51), NULL);
		if (!L_6)
		{
			goto IL_006e;
		}
	}
	{
		// ToggleAll(2);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 2, NULL);
		return;
	}

IL_006e:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha4))
		bool L_7;
		L_7 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)52), NULL);
		if (!L_7)
		{
			goto IL_007f;
		}
	}
	{
		// ToggleAll(3);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 3, NULL);
		return;
	}

IL_007f:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha5))
		bool L_8;
		L_8 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)53), NULL);
		if (!L_8)
		{
			goto IL_0090;
		}
	}
	{
		// ToggleAll(4);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 4, NULL);
		return;
	}

IL_0090:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha6))
		bool L_9;
		L_9 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)54), NULL);
		if (!L_9)
		{
			goto IL_00a1;
		}
	}
	{
		// ToggleAll(5);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 5, NULL);
		return;
	}

IL_00a1:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha7))
		bool L_10;
		L_10 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)55), NULL);
		if (!L_10)
		{
			goto IL_00b2;
		}
	}
	{
		// ToggleAll(6);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 6, NULL);
		return;
	}

IL_00b2:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha8))
		bool L_11;
		L_11 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)56), NULL);
		if (!L_11)
		{
			goto IL_00c3;
		}
	}
	{
		// ToggleAll(7);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 7, NULL);
		return;
	}

IL_00c3:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha9))
		bool L_12;
		L_12 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)57), NULL);
		if (!L_12)
		{
			goto IL_00d3;
		}
	}
	{
		// ToggleAll(8);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 8, NULL);
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void ToggleRunnerProvideInput::ToggleAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1 (ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A* __this, int32_t ___runnerIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B6_0 = 0;
	{
		// var runners = NetworkRunner.GetInstancesEnumerator();
		il2cpp_codegen_runtime_class_init_inline(NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4 L_0;
		L_0 = NetworkRunner_GetInstancesEnumerator_mF2E62C8F9C3FDF810C268B1112C9CDEFF8347DC0(NULL);
		V_0 = L_0;
		// int index = 0;
		V_1 = 0;
		goto IL_003a;
	}

IL_000a:
	{
		// var runner = runners.Current;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_1;
		L_1 = Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_inline((&V_0), Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_RuntimeMethod_var);
		V_2 = L_1;
		// if (runner == null || !runner.IsRunning)
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_2 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_003a;
		}
	}
	{
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_4 = V_2;
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkRunner_get_IsRunning_mD44E761C42BFE8D5A4580B915F1204E38F47C570(L_4, NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// bool enable = runnerIndex == -1 || index == runnerIndex;
		int32_t L_6 = ___runnerIndex0;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ___runnerIndex0;
		G_B6_0 = ((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B6_0 = 1;
	}

IL_002e:
	{
		V_3 = (bool)G_B6_0;
		// runner.ProvideInput = enable;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_9 = V_2;
		bool L_10 = V_3;
		NullCheck(L_9);
		NetworkRunner_set_ProvideInput_mEE98BE2C97A9B47224FA331B2827FFB0F4FC46FA(L_9, L_10, NULL);
		// index++;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003a:
	{
		// while (runners.MoveNext()) {
		bool L_12;
		L_12 = Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76((&V_0), Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToggleRunnerProvideInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerProvideInput__ctor_m4E13236EA2876913EB94C905F469F92C9F7069C0 (ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m1CC74A6DA707BC75BDC3BF41D5BF5CA0809B0A8D(__this, NULL);
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
// System.Void ToggleRunnerVisibility::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerVisibility_Awake_m52B70228132B832C2F8B11EB4839CC2171B9136F (ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB64FA2408DBA1B3C7B72FC5DF10677491CB05D5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NetworkProjectConfig.Global.PeerMode != NetworkProjectConfig.PeerModes.Multiple) {
		NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* L_0;
		L_0 = NetworkProjectConfig_get_Global_m153AAA631485D3937120CEBFA91426F1AB3102A6(NULL);
		NullCheck(L_0);
		int32_t L_1 = L_0->___PeerMode_5;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogWarning($"{nameof(ToggleRunnerVisibility)} only works in Multi-Peer mode. Destroying.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralB64FA2408DBA1B3C7B72FC5DF10677491CB05D5B, NULL);
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(__this, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// if (_instance) {
		ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5* L_2 = ((ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_StaticFields*)il2cpp_codegen_static_fields_for(ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(__this, NULL);
	}

IL_0030:
	{
		// _instance = this;
		((ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_StaticFields*)il2cpp_codegen_static_fields_for(ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_StaticFields*)il2cpp_codegen_static_fields_for(ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void ToggleRunnerVisibility::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerVisibility_Update_m2B94FA6AB814DDF0251DD2819217D9B0FB9FE1EB (ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKey(KeyCode.LeftControl) || Input.GetKey(KeyCode.LeftCommand))
		bool L_0;
		L_0 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)306), NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)310), NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		// return;
		return;
	}

IL_0019:
	{
		// if ((Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift))) {
		bool L_2;
		L_2 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)304), NULL);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)303), NULL);
		if (!L_3)
		{
			goto IL_00dd;
		}
	}

IL_0034:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha0)) {
		bool L_4;
		L_4 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)48), NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// ToggleAll(-1);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, (-1), NULL);
		return;
	}

IL_0045:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha1)) {
		bool L_5;
		L_5 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)49), NULL);
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		// ToggleAll(0);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 0, NULL);
		return;
	}

IL_0056:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha2)) {
		bool L_6;
		L_6 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)50), NULL);
		if (!L_6)
		{
			goto IL_0067;
		}
	}
	{
		// ToggleAll(1);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 1, NULL);
		return;
	}

IL_0067:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha3)) {
		bool L_7;
		L_7 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)51), NULL);
		if (!L_7)
		{
			goto IL_0078;
		}
	}
	{
		// ToggleAll(2);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 2, NULL);
		return;
	}

IL_0078:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha4)) {
		bool L_8;
		L_8 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)52), NULL);
		if (!L_8)
		{
			goto IL_0089;
		}
	}
	{
		// ToggleAll(3);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 3, NULL);
		return;
	}

IL_0089:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha5)) {
		bool L_9;
		L_9 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)53), NULL);
		if (!L_9)
		{
			goto IL_009a;
		}
	}
	{
		// ToggleAll(4);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 4, NULL);
		return;
	}

IL_009a:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha6)) {
		bool L_10;
		L_10 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)54), NULL);
		if (!L_10)
		{
			goto IL_00ab;
		}
	}
	{
		// ToggleAll(5);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 5, NULL);
		return;
	}

IL_00ab:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha7)) {
		bool L_11;
		L_11 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)55), NULL);
		if (!L_11)
		{
			goto IL_00bc;
		}
	}
	{
		// ToggleAll(6);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 6, NULL);
		return;
	}

IL_00bc:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha8)) {
		bool L_12;
		L_12 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)56), NULL);
		if (!L_12)
		{
			goto IL_00cd;
		}
	}
	{
		// ToggleAll(7);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 7, NULL);
		return;
	}

IL_00cd:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha9)) {
		bool L_13;
		L_13 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)57), NULL);
		if (!L_13)
		{
			goto IL_00dd;
		}
	}
	{
		// ToggleAll(8);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 8, NULL);
	}

IL_00dd:
	{
		// }
		return;
	}
}
// System.Void ToggleRunnerVisibility::ToggleAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711 (ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5* __this, int32_t ___runnerIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B6_0 = 0;
	{
		// var runners = NetworkRunner.GetInstancesEnumerator();
		il2cpp_codegen_runtime_class_init_inline(NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4 L_0;
		L_0 = NetworkRunner_GetInstancesEnumerator_mF2E62C8F9C3FDF810C268B1112C9CDEFF8347DC0(NULL);
		V_0 = L_0;
		// int index = 0;
		V_1 = 0;
		goto IL_003a;
	}

IL_000a:
	{
		// var runner = runners.Current;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_1;
		L_1 = Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_inline((&V_0), Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_RuntimeMethod_var);
		V_2 = L_1;
		// if (runner == null || !runner.IsRunning)
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_2 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_003a;
		}
	}
	{
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_4 = V_2;
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkRunner_get_IsRunning_mD44E761C42BFE8D5A4580B915F1204E38F47C570(L_4, NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// bool enable = runnerIndex == -1 || index == runnerIndex;
		int32_t L_6 = ___runnerIndex0;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ___runnerIndex0;
		G_B6_0 = ((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B6_0 = 1;
	}

IL_002e:
	{
		V_3 = (bool)G_B6_0;
		// runner.IsVisible = enable;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_9 = V_2;
		bool L_10 = V_3;
		NullCheck(L_9);
		NetworkRunner_set_IsVisible_mBA05D9E055782412EABA7304E52D2290E186E321(L_9, L_10, NULL);
		// index++;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003a:
	{
		// while (runners.MoveNext()) {
		bool L_12;
		L_12 = Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76((&V_0), Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToggleRunnerVisibility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerVisibility__ctor_m65E4EDAB434F32577034763CFD41E6E0EF3F291A (ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m1CC74A6DA707BC75BDC3BF41D5BF5CA0809B0A8D(__this, NULL);
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
// System.Void FusionScalableIMGUI::InitializedGUIStyles(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionScalableIMGUI_InitializedGUIStyles_mA1CC93C4AD5D6DD2EE6B58DCF2AB8FBFD4EC7352 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___baseSkin0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* G_B3_0 = NULL;
	{
		// _scalableSkin = baseSkin == null ? GUI.skin : baseSkin;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0 = ___baseSkin0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_2 = ___baseSkin0;
		G_B3_0 = L_2;
		goto IL_0011;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_3;
		L_3 = GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1(NULL);
		G_B3_0 = L_3;
	}

IL_0011:
	{
		((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0), (void*)G_B3_0);
		// if (baseSkin == null) {
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_4 = ___baseSkin0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0156;
		}
	}
	{
		// _scalableSkin = GUI.skin;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_6;
		L_6 = GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1(NULL);
		((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0), (void*)L_6);
		// _scalableSkin.button.alignment = TextAnchor.MiddleCenter;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_7 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_7);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8;
		L_8 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_7, NULL);
		NullCheck(L_8);
		GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937(L_8, 4, NULL);
		// _scalableSkin.label.alignment = TextAnchor.MiddleCenter;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_9 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_9);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_10;
		L_10 = GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E(L_9, NULL);
		NullCheck(L_10);
		GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937(L_10, 4, NULL);
		// _scalableSkin.textField.alignment = TextAnchor.MiddleCenter;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_11 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_11);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_12;
		L_12 = GUISkin_get_textField_mC554496BAB959445F0CFA30BDC5736DC1F057D48(L_11, NULL);
		NullCheck(L_12);
		GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937(L_12, 4, NULL);
		// _scalableSkin.button.normal.background = _scalableSkin.box.normal.background;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_13 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_13);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_14;
		L_14 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_13, NULL);
		NullCheck(L_14);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_15;
		L_15 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_14, NULL);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_16 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_16);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_17;
		L_17 = GUISkin_get_box_m21BE7FC56D903B95BAFAE8890425D330EA88D893(L_16, NULL);
		NullCheck(L_17);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_18;
		L_18 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_17, NULL);
		NullCheck(L_18);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19;
		L_19 = GUIStyleState_get_background_mE29B6D17E91BFD828E40B369C6CE336ECBCC18DD(L_18, NULL);
		NullCheck(L_15);
		GUIStyleState_set_background_mD92FC76F8956A8EBB022C3E8EA02822D79F451C4(L_15, L_19, NULL);
		// _scalableSkin.button.hover.background = _scalableSkin.window.normal.background;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_20 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_20);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_21;
		L_21 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_20, NULL);
		NullCheck(L_21);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_22;
		L_22 = GUIStyle_get_hover_m159CD4F6636D87CBBC4B721AAE62436B86576EBF(L_21, NULL);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_23 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_23);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_24;
		L_24 = GUISkin_get_window_m760DAF129E72775DFD18CB71720AD306345E91C2(L_23, NULL);
		NullCheck(L_24);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_25;
		L_25 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_24, NULL);
		NullCheck(L_25);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26;
		L_26 = GUIStyleState_get_background_mE29B6D17E91BFD828E40B369C6CE336ECBCC18DD(L_25, NULL);
		NullCheck(L_22);
		GUIStyleState_set_background_mD92FC76F8956A8EBB022C3E8EA02822D79F451C4(L_22, L_26, NULL);
		// _scalableSkin.button.normal.textColor = new Color(.8f, .8f, .8f);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_27 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_27);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_28;
		L_28 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_27, NULL);
		NullCheck(L_28);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_29;
		L_29 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_28, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_30), (0.800000012f), (0.800000012f), (0.800000012f), /*hidden argument*/NULL);
		NullCheck(L_29);
		GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1(L_29, L_30, NULL);
		// _scalableSkin.button.hover.textColor = new Color(1f, 1f, 1f);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_31 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_31);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_32;
		L_32 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_31, NULL);
		NullCheck(L_32);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_33;
		L_33 = GUIStyle_get_hover_m159CD4F6636D87CBBC4B721AAE62436B86576EBF(L_32, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		memset((&L_34), 0, sizeof(L_34));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_34), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_33);
		GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1(L_33, L_34, NULL);
		// _scalableSkin.button.active.textColor = new Color(1f, 1f, 1f);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_35 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_35);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_36;
		L_36 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_35, NULL);
		NullCheck(L_36);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_37;
		L_37 = GUIStyle_get_active_m3ABA9E58666A1CFE6EEEB3707E86D58DFE062CCB(L_36, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		memset((&L_38), 0, sizeof(L_38));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_38), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1(L_37, L_38, NULL);
		// _scalableSkin.button.border = new RectOffset(6, 6, 6, 6);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_39 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_39);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_40;
		L_40 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_39, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_41 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_41, 6, 6, 6, 6, NULL);
		NullCheck(L_40);
		GUIStyle_set_border_mA11481A8F139D4403E0764E07F49516D390CC6A7(L_40, L_41, NULL);
		// _scalableSkin.window.border = new RectOffset(8, 8, 8, 10);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_42 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_42);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_43;
		L_43 = GUISkin_get_window_m760DAF129E72775DFD18CB71720AD306345E91C2(L_42, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_44 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_44, 8, 8, 8, ((int32_t)10), NULL);
		NullCheck(L_43);
		GUIStyle_set_border_mA11481A8F139D4403E0764E07F49516D390CC6A7(L_43, L_44, NULL);
		return;
	}

IL_0156:
	{
		// _scalableSkin = baseSkin;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_45 = ___baseSkin0;
		((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0), (void*)L_45);
		// }
		return;
	}
}
// UnityEngine.GUISkin FusionScalableIMGUI::GetScaledSkin(UnityEngine.GUISkin,System.Single&,System.Single&,System.Int32&,System.Int32&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* FusionScalableIMGUI_GetScaledSkin_m3E55AC2DD2B1524F64B6F9EC78334AC772137C77 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___baseSkin0, float* ___height1, float* ___width2, int32_t* ___padding3, int32_t* ___margin4, float* ___boxLeft5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(_scalableSkin == null) {
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// InitializedGUIStyles(baseSkin);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_2 = ___baseSkin0;
		FusionScalableIMGUI_InitializedGUIStyles_mA1CC93C4AD5D6DD2EE6B58DCF2AB8FBFD4EC7352(L_2, NULL);
	}

IL_0013:
	{
		// var dimensions = ScaleGuiSkinToScreenHeight();
		ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C L_3;
		L_3 = FusionScalableIMGUI_ScaleGuiSkinToScreenHeight_mE4FE320F96D6C2E8E527F11077A53C6BC22F573E(NULL);
		V_0 = L_3;
		// height  = dimensions.Item1;
		float* L_4 = ___height1;
		ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C L_5 = V_0;
		float L_6 = L_5.___Item1_0;
		*((float*)L_4) = (float)L_6;
		// width   = dimensions.Item2;
		float* L_7 = ___width2;
		ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C L_8 = V_0;
		float L_9 = L_8.___Item2_1;
		*((float*)L_7) = (float)L_9;
		// padding = dimensions.Item3;
		int32_t* L_10 = ___padding3;
		ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C L_11 = V_0;
		int32_t L_12 = L_11.___Item3_2;
		*((int32_t*)L_10) = (int32_t)L_12;
		// margin  = dimensions.Item4;
		int32_t* L_13 = ___margin4;
		ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C L_14 = V_0;
		int32_t L_15 = L_14.___Item4_3;
		*((int32_t*)L_13) = (int32_t)L_15;
		// boxLeft = dimensions.Item5;
		float* L_16 = ___boxLeft5;
		ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C L_17 = V_0;
		float L_18 = L_17.___Item5_4;
		*((float*)L_16) = (float)L_18;
		// return _scalableSkin;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_19 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		return L_19;
	}
}
// System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single> FusionScalableIMGUI::ScaleGuiSkinToScreenHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C FusionScalableIMGUI_ScaleGuiSkinToScreenHeight_mE4FE320F96D6C2E8E527F11077A53C6BC22F573E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_5__ctor_mFA8F15EE5770AAF9026420AE64E667705760FAA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_6 = NULL;
	float G_B3_0 = 0.0f;
	{
		// bool isVerticalAspect = Screen.height > Screen.width;
		int32_t L_0;
		L_0 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		int32_t L_1;
		L_1 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		// bool isSuperThin = Screen.height / Screen.width > (17f / 9f);
		int32_t L_2;
		L_2 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		int32_t L_3;
		L_3 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		// float height = Screen.height * .08f;
		int32_t L_4;
		L_4 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)L_4), (0.0799999982f)));
		// float width = System.Math.Min(Screen.width * .9f, Screen.height * .6f);
		int32_t L_5;
		L_5 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_6;
		L_6 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_7;
		L_7 = Math_Min_mB41DB89BB991289571A046270A924C0EEAA2C4BC(((float)il2cpp_codegen_multiply(((float)L_5), (0.899999976f))), ((float)il2cpp_codegen_multiply(((float)L_6), (0.600000024f))), NULL);
		V_1 = L_7;
		// int padding = (int)(height / 4);
		float L_8 = V_0;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_8/(4.0f))));
		// int margin = (int)(height / 8);
		float L_9 = V_0;
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_9/(8.0f))));
		// float boxLeft = (Screen.width - width) * .5f;
		int32_t L_10;
		L_10 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		float L_11 = V_1;
		V_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_10), L_11)), (0.5f)));
		// int fontsize = (int)(isSuperThin ? (width - (padding * 2)) * .07f : height * .4f);
		if (((((float)((float)((int32_t)(L_2/L_3)))) > ((float)(1.88888884f)))? 1 : 0))
		{
			goto IL_0077;
		}
	}
	{
		float L_12 = V_0;
		G_B3_0 = ((float)il2cpp_codegen_multiply(L_12, (0.400000006f)));
		goto IL_0083;
	}

IL_0077:
	{
		float L_13 = V_1;
		int32_t L_14 = V_2;
		G_B3_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_13, ((float)((int32_t)il2cpp_codegen_multiply(L_14, 2))))), (0.0700000003f)));
	}

IL_0083:
	{
		V_5 = il2cpp_codegen_cast_double_to_int<int32_t>(G_B3_0);
		// var margins = new RectOffset(0, 0, margin, margin);
		int32_t L_15 = V_3;
		int32_t L_16 = V_3;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_17 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_17, 0, 0, L_15, L_16, NULL);
		V_6 = L_17;
		// _scalableSkin.button.fontSize = fontsize;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_18 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_18);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_19;
		L_19 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_18, NULL);
		int32_t L_20 = V_5;
		NullCheck(L_19);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_19, L_20, NULL);
		// _scalableSkin.button.margin = margins;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_21 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_21);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_22;
		L_22 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_21, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_23 = V_6;
		NullCheck(L_22);
		GUIStyle_set_margin_m9AAB6691C260ECD89195BE151F2ADDBF2E740C85(L_22, L_23, NULL);
		// _scalableSkin.label.fontSize = fontsize;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_24 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_24);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_25;
		L_25 = GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E(L_24, NULL);
		int32_t L_26 = V_5;
		NullCheck(L_25);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_25, L_26, NULL);
		// _scalableSkin.label.padding = new RectOffset(padding, padding, padding, padding);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_27 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_27);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_28;
		L_28 = GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E(L_27, NULL);
		int32_t L_29 = V_2;
		int32_t L_30 = V_2;
		int32_t L_31 = V_2;
		int32_t L_32 = V_2;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_33 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_33, L_29, L_30, L_31, L_32, NULL);
		NullCheck(L_28);
		GUIStyle_set_padding_m0C69415588C6032B372A48B1A1366CF43A083E14(L_28, L_33, NULL);
		// _scalableSkin.textField.fontSize = fontsize;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_34 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_34);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_35;
		L_35 = GUISkin_get_textField_mC554496BAB959445F0CFA30BDC5736DC1F057D48(L_34, NULL);
		int32_t L_36 = V_5;
		NullCheck(L_35);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_35, L_36, NULL);
		// _scalableSkin.window.padding = new RectOffset(padding, padding, padding, padding);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_37 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_37);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_38;
		L_38 = GUISkin_get_window_m760DAF129E72775DFD18CB71720AD306345E91C2(L_37, NULL);
		int32_t L_39 = V_2;
		int32_t L_40 = V_2;
		int32_t L_41 = V_2;
		int32_t L_42 = V_2;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_43 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_43, L_39, L_40, L_41, L_42, NULL);
		NullCheck(L_38);
		GUIStyle_set_padding_m0C69415588C6032B372A48B1A1366CF43A083E14(L_38, L_43, NULL);
		// _scalableSkin.window.margin = new RectOffset(margin, margin, margin, margin);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_44 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_44);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_45;
		L_45 = GUISkin_get_window_m760DAF129E72775DFD18CB71720AD306345E91C2(L_44, NULL);
		int32_t L_46 = V_3;
		int32_t L_47 = V_3;
		int32_t L_48 = V_3;
		int32_t L_49 = V_3;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_50 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_50, L_46, L_47, L_48, L_49, NULL);
		NullCheck(L_45);
		GUIStyle_set_margin_m9AAB6691C260ECD89195BE151F2ADDBF2E740C85(L_45, L_50, NULL);
		// return (height, width, padding, margin, boxLeft);
		float L_51 = V_0;
		float L_52 = V_1;
		int32_t L_53 = V_2;
		int32_t L_54 = V_3;
		float L_55 = V_4;
		ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C L_56;
		memset((&L_56), 0, sizeof(L_56));
		ValueTuple_5__ctor_mFA8F15EE5770AAF9026420AE64E667705760FAA3((&L_56), L_51, L_52, L_53, L_54, L_55, /*hidden argument*/ValueTuple_5__ctor_mFA8F15EE5770AAF9026420AE64E667705760FAA3_RuntimeMethod_var);
		return L_56;
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
// System.Void ARController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARController_Update_mF6FF933C2A17DE72AFD2353EAD7FCCD46E839127 (ARController_tFFEC6C4A72E0D20209597BC477479037541D67F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* V_1 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0078;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_0078;
		}
	}
	{
		// List<ARRaycastHit> touches = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_3 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_3, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		V_1 = L_3;
		// RaycastManager.Raycast(Input.GetTouch(0).position, touches, UnityEngine.XR.ARSubsystems.TrackableType.Planes);
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_4 = __this->___RaycastManager_5;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_5;
		L_5 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = V_1;
		NullCheck(L_4);
		bool L_8;
		L_8 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_4, L_6, L_7, ((int32_t)15), NULL);
		// if (touches.Count > 0)
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_inline(L_9, List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0078;
		}
	}
	{
		// GameObject.Instantiate(MyObject, touches[0].pose.position, touches[0].pose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___MyObject_4;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_12 = V_1;
		NullCheck(L_12);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_13;
		L_13 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_12, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_13;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14;
		L_14 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14.___position_0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_16 = V_1;
		NullCheck(L_16);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_17;
		L_17 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_16, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_17;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18;
		L_18 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = L_18.___rotation_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_11, L_15, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void ARController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARController__ctor_mBE98AC7E425756F841ABFC40B93AE409D1489D88 (ARController_tFFEC6C4A72E0D20209597BC477479037541D67F4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BasicSpawner::OnInputMissing(Fusion.NetworkRunner,Fusion.PlayerRef,Fusion.NetworkInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_OnInputMissing_mFCB103180C9AB3022A1F4C56C7F80D24B484619A (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___player1, NetworkInput_t8FB09045785B1BAE178F157ACE2B24EEC7E31231 ___input2, const RuntimeMethod* method) 
{
	{
		// public void OnInputMissing(NetworkRunner runner, PlayerRef player, NetworkInput input) { }
		return;
	}
}
// System.Void BasicSpawner::OnShutdown(Fusion.NetworkRunner,Fusion.ShutdownReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_OnShutdown_m9767224B7AC2D233633CD1D62B631B441B9018E9 (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, int32_t ___shutdownReason1, const RuntimeMethod* method) 
{
	{
		// public void OnShutdown(NetworkRunner runner, ShutdownReason shutdownReason) { }
		return;
	}
}
// System.Void BasicSpawner::OnConnectedToServer(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_OnConnectedToServer_m253B349C44061BA2953D07BC32A995AE5D88408E (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, const RuntimeMethod* method) 
{
	{
		// public void OnConnectedToServer(NetworkRunner runner) { }
		return;
	}
}
// System.Void BasicSpawner::OnDisconnectedFromServer(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_OnDisconnectedFromServer_mA780C98843FA67F2DBACB4F8C85937E135C5F9AD (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, const RuntimeMethod* method) 
{
	{
		// public void OnDisconnectedFromServer(NetworkRunner runner) { }
		return;
	}
}
// System.Void BasicSpawner::OnConnectRequest(Fusion.NetworkRunner,Fusion.NetworkRunnerCallbackArgs/ConnectRequest,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_OnConnectRequest_m265ED8C1277DBE8E266D5348D11C8D547784F6A5 (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, ConnectRequest_t0B36E883FB21681399384CF1BA965DC577148B66* ___request1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___token2, const RuntimeMethod* method) 
{
	{
		// public void OnConnectRequest(NetworkRunner runner, NetworkRunnerCallbackArgs.ConnectRequest request, byte[] token) { }
		return;
	}
}
// System.Void BasicSpawner::OnConnectFailed(Fusion.NetworkRunner,Fusion.Sockets.NetAddress,Fusion.Sockets.NetConnectFailedReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_OnConnectFailed_m61A23C9DFD2F6802D947C08C3CBA1E45A4FF17E3 (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___remoteAddress1, uint8_t ___reason2, const RuntimeMethod* method) 
{
	{
		// public void OnConnectFailed(NetworkRunner runner, NetAddress remoteAddress, NetConnectFailedReason reason) { }
		return;
	}
}
// System.Void BasicSpawner::OnUserSimulationMessage(Fusion.NetworkRunner,Fusion.SimulationMessagePtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_OnUserSimulationMessage_m5BCC894652CF84BD2AAF52068C12E29585C95455 (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, SimulationMessagePtr_tADE4FF081CDDA852A76EA6701476D3167449C8FB ___message1, const RuntimeMethod* method) 
{
	{
		// public void OnUserSimulationMessage(NetworkRunner runner, SimulationMessagePtr message) { }
		return;
	}
}
// System.Void BasicSpawner::OnSessionListUpdated(Fusion.NetworkRunner,System.Collections.Generic.List`1<Fusion.SessionInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_OnSessionListUpdated_mD0AC78BE185E26EA60888B2CE35C6652413B2B6E (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, List_1_t1401F7FA1DF1659F914B5A8D1A6B07E195A110AA* ___sessionList1, const RuntimeMethod* method) 
{
	{
		// public void OnSessionListUpdated(NetworkRunner runner, List<SessionInfo> sessionList) { }
		return;
	}
}
// System.Void BasicSpawner::OnCustomAuthenticationResponse(Fusion.NetworkRunner,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_OnCustomAuthenticationResponse_m411553441C593207A9EBE65F7B388CA5CBAAF418 (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___data1, const RuntimeMethod* method) 
{
	{
		// public void OnCustomAuthenticationResponse(NetworkRunner runner, Dictionary<string, object> data) { }
		return;
	}
}
// System.Void BasicSpawner::OnHostMigration(Fusion.NetworkRunner,Fusion.HostMigrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_OnHostMigration_m7E507E8C16CE7C9331367C0421EC4E5062A80961 (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, HostMigrationToken_t6249F7ADB7BFF0D8D26E524E085F3912BAA2952D* ___hostMigrationToken1, const RuntimeMethod* method) 
{
	{
		// public void OnHostMigration(NetworkRunner runner, HostMigrationToken hostMigrationToken) { }
		return;
	}
}
// System.Void BasicSpawner::OnReliableDataReceived(Fusion.NetworkRunner,Fusion.PlayerRef,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_OnReliableDataReceived_m4F604652864312F27A257DE1E92B1EBB9ED50DDE (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___player1, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___data2, const RuntimeMethod* method) 
{
	{
		// public void OnReliableDataReceived(NetworkRunner runner, PlayerRef player, ArraySegment<byte> data) { }
		return;
	}
}
// System.Void BasicSpawner::OnSceneLoadDone(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_OnSceneLoadDone_m1B857EF79532141944C351A8A1E813DE949BEBD7 (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, const RuntimeMethod* method) 
{
	{
		// public void OnSceneLoadDone(NetworkRunner runner) { }
		return;
	}
}
// System.Void BasicSpawner::OnSceneLoadStart(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_OnSceneLoadStart_m0DDA0F76D06385638754615F6CCB1C6D2520A1C6 (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, const RuntimeMethod* method) 
{
	{
		// public void OnSceneLoadStart(NetworkRunner runner) { }
		return;
	}
}
// System.Void BasicSpawner::StartGame(Fusion.GameMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_StartGame_m99A71C46AAFEFCA038624BEDC171E1F5E2E4924E (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2_m4E56B972744BBE62698241412D4E1C1CB70F14D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		int32_t L_1 = ___mode0;
		(&V_0)->___mode_3 = L_1;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2_m4E56B972744BBE62698241412D4E1C1CB70F14D8(L_2, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2_m4E56B972744BBE62698241412D4E1C1CB70F14D8_RuntimeMethod_var);
		return;
	}
}
// System.Void BasicSpawner::OnPlayerJoined(Fusion.NetworkRunner,Fusion.PlayerRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_OnPlayerJoined_mFB23C0174C51C58A9580BD42ED73D98C4B9D5565 (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___player1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BasicSpawner::OnPlayerLeft(Fusion.NetworkRunner,Fusion.PlayerRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_OnPlayerLeft_mF3260860D5ECCEA78F9DECE725AEC20168D0FDBF (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___player1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BasicSpawner::OnInput(Fusion.NetworkRunner,Fusion.NetworkInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_OnInput_m90B2C105E900668948DEFFFED08930E43EC71415 (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, NetworkInput_t8FB09045785B1BAE178F157ACE2B24EEC7E31231 ___input1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkInput_Set_TisNetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F_m467008FC4B467BB0A6FBE355C24EFF69280995CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var data = new NetworkInputData();
		il2cpp_codegen_initobj((&V_0), sizeof(NetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F));
		// if (Input.GetKey(KeyCode.W))
		bool L_0;
		L_0 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)119), NULL);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// data.direction += Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&(&V_0)->___direction_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_4, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2 = L_5;
	}

IL_002d:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_6;
		L_6 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)115), NULL);
		if (!L_6)
		{
			goto IL_0052;
		}
	}
	{
		// data.direction += Vector3.back;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&(&V_0)->___direction_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_9, L_10, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_8 = L_11;
	}

IL_0052:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_12;
		L_12 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)97), NULL);
		if (!L_12)
		{
			goto IL_0077;
		}
	}
	{
		// data.direction += Vector3.left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&(&V_0)->___direction_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_15, L_16, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_14 = L_17;
	}

IL_0077:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_18;
		L_18 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)100), NULL);
		if (!L_18)
		{
			goto IL_009c;
		}
	}
	{
		// data.direction += Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&(&V_0)->___direction_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_21, L_22, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_20 = L_23;
	}

IL_009c:
	{
		// input.Set(data);
		NetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F L_24 = V_0;
		NetworkInput_Set_TisNetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F_m467008FC4B467BB0A6FBE355C24EFF69280995CC((&___input1), L_24, NetworkInput_Set_TisNetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F_m467008FC4B467BB0A6FBE355C24EFF69280995CC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BasicSpawner::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner_OnGUI_m34B5EEFEF0D51DD55684C3D34D3E07DA76D21190 (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DE4DA2560E889ADFDF93B3988AF2A52A412B16D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_runner == null)
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = __this->____runner_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		// if (GUI.Button(new Rect(0, 0, 200, 40), "Host"))
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_2), (0.0f), (0.0f), (200.0f), (40.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = GUI_Button_m92B7A836FB5463F20951B6BD9DB8F3B1BA56763C(L_2, _stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3, NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// StartGame(GameMode.Host);
		BasicSpawner_StartGame_m99A71C46AAFEFCA038624BEDC171E1F5E2E4924E(__this, 4, NULL);
	}

IL_003a:
	{
		// if (GUI.Button(new Rect(0, 40, 200, 40), "Join"))
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_4), (0.0f), (40.0f), (200.0f), (40.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = GUI_Button_m92B7A836FB5463F20951B6BD9DB8F3B1BA56763C(L_4, _stringLiteral8DE4DA2560E889ADFDF93B3988AF2A52A412B16D, NULL);
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		// StartGame(GameMode.Client);
		BasicSpawner_StartGame_m99A71C46AAFEFCA038624BEDC171E1F5E2E4924E(__this, 5, NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void BasicSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicSpawner__ctor_m1BFE260F3BBE86328E5F069D2CEB63DDB9660EFE (BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9E927A7C8B1B64479E0EB380003ADFBA3A575920_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3000CE5E80875F97C1FB1B03F5275CA140BCF771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<PlayerRef, NetworkObject> _spawnedCharacters = new Dictionary<PlayerRef, NetworkObject>();
		Dictionary_2_t3000CE5E80875F97C1FB1B03F5275CA140BCF771* L_0 = (Dictionary_2_t3000CE5E80875F97C1FB1B03F5275CA140BCF771*)il2cpp_codegen_object_new(Dictionary_2_t3000CE5E80875F97C1FB1B03F5275CA140BCF771_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m9E927A7C8B1B64479E0EB380003ADFBA3A575920(L_0, Dictionary_2__ctor_m9E927A7C8B1B64479E0EB380003ADFBA3A575920_RuntimeMethod_var);
		__this->____spawnedCharacters_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____spawnedCharacters_6), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BasicSpawner/<StartGame>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameU3Ed__14_MoveNext_m9B962F586F577F5FDDE78A741373BE680253B36D (U3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1_TisU3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2_mD358A91C3C48F3ACCAC6F3C19CAE0DED6E351377_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_m4B45BA973EA8CAA5F6416380C479D6BEA549A8DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91_mC7641EDE933224B4659B9AC72B053BA58B5C6B03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mE8C7060F0808F23760C168C5DA728296C62527BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mC799FE9667F3EE1F958E7F49913DFA4663F83EAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mD2D85A293F49BD10A83BB71080013D86DCCC36FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2F3B2222046B2DA707D8965AEBAEC709C45516EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6D1C0768F51756AFE088C4C937A5F3DAD818D3E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* V_1 = NULL;
	TaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	StartGameArgs_t4FDF5F8340EDD5FBA5A6D3F656D8343172EEA3AB V_3;
	memset((&V_3), 0, sizeof(V_3));
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00be_1;
			}
		}
		{
			// _runner = gameObject.AddComponent<NetworkRunner>();
			BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* L_3 = V_1;
			BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* L_4 = V_1;
			NullCheck(L_4);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
			L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
			NullCheck(L_5);
			NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_6;
			L_6 = GameObject_AddComponent_TisNetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_m4B45BA973EA8CAA5F6416380C479D6BEA549A8DE(L_5, GameObject_AddComponent_TisNetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_m4B45BA973EA8CAA5F6416380C479D6BEA549A8DE_RuntimeMethod_var);
			NullCheck(L_3);
			L_3->____runner_4 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&L_3->____runner_4), (void*)L_6);
			// _runner.ProvideInput = true;
			BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* L_7 = V_1;
			NullCheck(L_7);
			NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_8 = L_7->____runner_4;
			NullCheck(L_8);
			NetworkRunner_set_ProvideInput_mEE98BE2C97A9B47224FA331B2827FFB0F4FC46FA(L_8, (bool)1, NULL);
			// await _runner.StartGame(new StartGameArgs()
			// {
			//     GameMode = mode,
			//     SessionName = "TestRoom",
			//     Scene = SceneManager.GetActiveScene().buildIndex,
			//     SceneManager = gameObject.AddComponent<NetworkSceneManagerDefault>()
			// });
			BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* L_9 = V_1;
			NullCheck(L_9);
			NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_10 = L_9->____runner_4;
			il2cpp_codegen_initobj((&V_3), sizeof(StartGameArgs_t4FDF5F8340EDD5FBA5A6D3F656D8343172EEA3AB));
			int32_t L_11 = __this->___mode_3;
			(&V_3)->___GameMode_0 = L_11;
			(&V_3)->___SessionName_1 = _stringLiteralE6D1C0768F51756AFE088C4C937A5F3DAD818D3E;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___SessionName_1), (void*)_stringLiteralE6D1C0768F51756AFE088C4C937A5F3DAD818D3E);
			il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
			Scene_tA1DC762B79745EB5140F054C884855B922318356 L_12;
			L_12 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
			V_4 = L_12;
			int32_t L_13;
			L_13 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_4), NULL);
			SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_14;
			L_14 = SceneRef_op_Implicit_m694EC00BAF28DDC57257781C1055D4E0BBBB0CD2(L_13, NULL);
			Nullable_1_t60B9431C1BCAA220BB2AA6938CBB4CD1F9CFE0F1 L_15;
			memset((&L_15), 0, sizeof(L_15));
			Nullable_1__ctor_mE8C7060F0808F23760C168C5DA728296C62527BF((&L_15), L_14, /*hidden argument*/Nullable_1__ctor_mE8C7060F0808F23760C168C5DA728296C62527BF_RuntimeMethod_var);
			(&V_3)->___Scene_7 = L_15;
			BasicSpawner_t1719982C9241CAD2143780BF7C6F96FA53C0652B* L_16 = V_1;
			NullCheck(L_16);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
			L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
			NullCheck(L_17);
			NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_18;
			L_18 = GameObject_AddComponent_TisNetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91_mC7641EDE933224B4659B9AC72B053BA58B5C6B03(L_17, GameObject_AddComponent_TisNetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91_mC7641EDE933224B4659B9AC72B053BA58B5C6B03_RuntimeMethod_var);
			(&V_3)->___SceneManager_4 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___SceneManager_4), (void*)L_18);
			StartGameArgs_t4FDF5F8340EDD5FBA5A6D3F656D8343172EEA3AB L_19 = V_3;
			NullCheck(L_10);
			Task_1_tC2BC7766947595729B67DF8D071E306255CF484C* L_20;
			L_20 = NetworkRunner_StartGame_m97F70FCD0EABAE84E99CFBBC0B9623221AA49805(L_10, L_19, NULL);
			NullCheck(L_20);
			TaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1 L_21;
			L_21 = Task_1_GetAwaiter_m2F3B2222046B2DA707D8965AEBAEC709C45516EF(L_20, Task_1_GetAwaiter_m2F3B2222046B2DA707D8965AEBAEC709C45516EF_RuntimeMethod_var);
			V_2 = L_21;
			bool L_22;
			L_22 = TaskAwaiter_1_get_IsCompleted_mD2D85A293F49BD10A83BB71080013D86DCCC36FF((&V_2), TaskAwaiter_1_get_IsCompleted_mD2D85A293F49BD10A83BB71080013D86DCCC36FF_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_00da_1;
			}
		}
		{
			int32_t L_23 = 0;
			V_0 = L_23;
			__this->___U3CU3E1__state_0 = L_23;
			TaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1 L_24 = V_2;
			__this->___U3CU3Eu__1_4 = L_24;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_25 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1_TisU3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2_mD358A91C3C48F3ACCAC6F3C19CAE0DED6E351377(L_25, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1_TisU3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2_mD358A91C3C48F3ACCAC6F3C19CAE0DED6E351377_RuntimeMethod_var);
			goto IL_0110;
		}

IL_00be_1:
		{
			TaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1 L_26 = __this->___U3CU3Eu__1_4;
			V_2 = L_26;
			TaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1* L_27 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_27, sizeof(TaskAwaiter_1_tB1D9F1D80534EA53C0930F25EB3FDA08979733D1));
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->___U3CU3E1__state_0 = L_28;
		}

IL_00da_1:
		{
			StartGameResult_t79ED02F6538ACB92001E948B6B750C0A85462E2E* L_29;
			L_29 = TaskAwaiter_1_GetResult_mC799FE9667F3EE1F958E7F49913DFA4663F83EAC((&V_2), TaskAwaiter_1_GetResult_mC799FE9667F3EE1F958E7F49913DFA4663F83EAC_RuntimeMethod_var);
			goto IL_00fd;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e4;
		}
		throw e;
	}

CATCH_00e4:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_30 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_31 = V_5;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_30, L_31, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0110;
	}// end catch (depth: 1)

IL_00fd:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_32 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_32, NULL);
	}

IL_0110:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartGameU3Ed__14_MoveNext_m9B962F586F577F5FDDE78A741373BE680253B36D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2*>(__this + _offset);
	U3CStartGameU3Ed__14_MoveNext_m9B962F586F577F5FDDE78A741373BE680253B36D(_thisAdjusted, method);
}
// System.Void BasicSpawner/<StartGame>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameU3Ed__14_SetStateMachine_m3C5A2E83C0F04532A58263756679EAECBA918449 (U3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartGameU3Ed__14_SetStateMachine_m3C5A2E83C0F04532A58263756679EAECBA918449_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartGameU3Ed__14_t6EDC14EDD2EE6063CF5356E4D70F12DD1D161DB2*>(__this + _offset);
	U3CStartGameU3Ed__14_SetStateMachine_m3C5A2E83C0F04532A58263756679EAECBA918449(_thisAdjusted, ___stateMachine0, method);
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
// System.Void Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m512A28E1559EB8AEEB2E1DB873F9F99FCC96BA67 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNetworkCharacterControllerPrototype_tD4212436823F0C748FA1B4F10A75A863F2F01FBC_mD26963B4658E8089B4F670E015734A89472B6293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _cc = GetComponent<NetworkCharacterControllerPrototype>();
		NetworkCharacterControllerPrototype_tD4212436823F0C748FA1B4F10A75A863F2F01FBC* L_0;
		L_0 = Component_GetComponent_TisNetworkCharacterControllerPrototype_tD4212436823F0C748FA1B4F10A75A863F2F01FBC_mD26963B4658E8089B4F670E015734A89472B6293(__this, Component_GetComponent_TisNetworkCharacterControllerPrototype_tD4212436823F0C748FA1B4F10A75A863F2F01FBC_mD26963B4658E8089B4F670E015734A89472B6293_RuntimeMethod_var);
		__this->____cc_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cc_17), (void*)L_0);
		// }
		return;
	}
}
// System.Void Player::FixedUpdateNetwork()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FixedUpdateNetwork_m7DF4E46E3451FEF0826503AB4EB66826201106B5 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_GetInput_TisNetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F_m4545BC9F2B6E4B244EF9A6F0862C0EF10774C0AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (GetInput(out NetworkInputData data))
		bool L_0;
		L_0 = NetworkBehaviour_GetInput_TisNetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F_m4545BC9F2B6E4B244EF9A6F0862C0EF10774C0AD(__this, (&V_0), NetworkBehaviour_GetInput_TisNetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F_m4545BC9F2B6E4B244EF9A6F0862C0EF10774C0AD_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		// data.direction.Normalize();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&(&V_0)->___direction_0);
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline(L_1, NULL);
		// _cc.Move(5 * data.direction * Runner.DeltaTime);
		NetworkCharacterControllerPrototype_tD4212436823F0C748FA1B4F10A75A863F2F01FBC* L_2 = __this->____cc_17;
		NetworkInputData_tD7D30D623CCF237A42291F3D28901D48F877111F L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3.___direction_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline((5.0f), L_4, NULL);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_6 = ((SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0*)__this)->___Runner_7;
		NullCheck(L_6);
		float L_7;
		L_7 = NetworkRunner_get_DeltaTime_m8831827404C94255CD93C9EAD4EECE10C11A5A23(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, L_7, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(53 /* System.Void NetworkCharacterControllerPrototype::Move(UnityEngine.Vector3) */, L_2, L_8);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		NetworkBehaviour__ctor_m80B5DC72F7815EEC5B6DDF46B9AF965112268053(__this, NULL);
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
// System.Void Fusion.FusionRuntimeCheck::RuntimeCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionRuntimeCheck_RuntimeCheck_mDABED0865B0B84BBFC3789201CE545C823F3C896 (const RuntimeMethod* method) 
{
	{
		// RuntimeUnityFlagsSetup.Check_ENABLE_IL2CPP();
		RuntimeUnityFlagsSetup_Check_ENABLE_IL2CPP_m985B107BBE0CCF3EE732578208BD4319B4CE15AC(NULL);
		// RuntimeUnityFlagsSetup.Check_NET_STANDARD_2_0();
		RuntimeUnityFlagsSetup_Check_NET_STANDARD_2_0_mFCF591FB2BC32AB3693EC3101BDE8E3849934616(NULL);
		// RuntimeUnityFlagsSetup.Check_UNITY_2019_4_OR_NEWER();
		RuntimeUnityFlagsSetup_Check_UNITY_2019_4_OR_NEWER_mFB821A1D6123FA40D8CA3314B5787EAE04811482(NULL);
		// }
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
// System.Func`2<System.Object,System.Int32> Fusion.FusionUnityLogger::get_GetColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* FusionUnityLogger_get_GetColor_mEEAFC347BD6451A1369D7A57EDAF453E2FCE033B (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, const RuntimeMethod* method) 
{
	{
		// public Func<object, int> GetColor { get; set; }
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_0 = __this->___U3CGetColorU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Fusion.FusionUnityLogger::set_GetColor(System.Func`2<System.Object,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionUnityLogger_set_GetColor_m91F84BF1AEB7B3FB6A8B0E88DC68F2A261A9E58A (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___value0, const RuntimeMethod* method) 
{
	{
		// public Func<object, int> GetColor { get; set; }
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_0 = ___value0;
		__this->___U3CGetColorU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGetColorU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void Fusion.FusionUnityLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionUnityLogger__ctor_m0287DD77CE2EF2B6BA6C1E8B0AA63BCC70049904 (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionUnityLogger_U3C_ctorU3Eb__12_0_mF2706CCE9E8E1F5D73E5AE62E4A6152D28D2D7E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B2_0 = NULL;
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B1_0 = NULL;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B3_1 = NULL;
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B5_0 = NULL;
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B4_0 = NULL;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B6_1 = NULL;
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B8_0 = NULL;
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B7_0 = NULL;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B9_1 = NULL;
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B11_0 = NULL;
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B10_0 = NULL;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B12_1 = NULL;
	{
		// StringBuilder _builder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->____builder_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____builder_0), (void*)L_0);
		// public FusionUnityLogger() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// bool isDarkMode = false;
		V_0 = (bool)0;
		// MinRandomColor = isDarkMode ? new Color32(158, 158, 158, 255) : new Color32(30, 30, 30, 255);
		bool L_1 = V_0;
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0029;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_2), (uint8_t)((int32_t)30), (uint8_t)((int32_t)30), (uint8_t)((int32_t)30), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0042;
	}

IL_0029:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_3), (uint8_t)((int32_t)158), (uint8_t)((int32_t)158), (uint8_t)((int32_t)158), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0042:
	{
		NullCheck(G_B3_1);
		G_B3_1->___MinRandomColor_4 = G_B3_0;
		// MaxRandomColor = isDarkMode ? new Color32(255, 255, 255, 255) : new Color32(90, 90, 90, 255);
		bool L_4 = V_0;
		G_B4_0 = __this;
		if (L_4)
		{
			G_B5_0 = __this;
			goto IL_005d;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_5), (uint8_t)((int32_t)90), (uint8_t)((int32_t)90), (uint8_t)((int32_t)90), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		G_B6_0 = L_5;
		G_B6_1 = G_B4_0;
		goto IL_0076;
	}

IL_005d:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_6), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		G_B6_0 = L_6;
		G_B6_1 = G_B5_0;
	}

IL_0076:
	{
		NullCheck(G_B6_1);
		G_B6_1->___MaxRandomColor_5 = G_B6_0;
		// ServerColor    = isDarkMode ? new Color32(255, 255, 158, 255) : new Color32(30, 90, 200, 255);
		bool L_7 = V_0;
		G_B7_0 = __this;
		if (L_7)
		{
			G_B8_0 = __this;
			goto IL_0094;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_8), (uint8_t)((int32_t)30), (uint8_t)((int32_t)90), (uint8_t)((int32_t)200), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		G_B9_0 = L_8;
		G_B9_1 = G_B7_0;
		goto IL_00ad;
	}

IL_0094:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_9), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)158), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_0;
	}

IL_00ad:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(G_B9_0, NULL);
		NullCheck(G_B9_1);
		G_B9_1->___ServerColor_6 = L_10;
		// UseColorTags = true;
		__this->___UseColorTags_2 = (bool)1;
		// UseGlobalPrefix = true;
		__this->___UseGlobalPrefix_1 = (bool)1;
		// GlobalPrefixColor = Color32ToRGBString(isDarkMode ? new Color32(115, 172, 229, 255) : new Color32(20, 64, 120, 255));
		bool L_11 = V_0;
		G_B10_0 = __this;
		if (L_11)
		{
			G_B11_0 = __this;
			goto IL_00db;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), (uint8_t)((int32_t)20), (uint8_t)((int32_t)64), (uint8_t)((int32_t)120), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		G_B12_0 = L_12;
		G_B12_1 = G_B10_0;
		goto IL_00f1;
	}

IL_00db:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13;
		memset((&L_13), 0, sizeof(L_13));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_13), (uint8_t)((int32_t)115), (uint8_t)((int32_t)172), (uint8_t)((int32_t)229), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		G_B12_0 = L_13;
		G_B12_1 = G_B11_0;
	}

IL_00f1:
	{
		String_t* L_14;
		L_14 = FusionUnityLogger_Color32ToRGBString_mE996FAFEF69061CFBB684B6C48B4528E02D48EF1(G_B12_0, NULL);
		NullCheck(G_B12_1);
		G_B12_1->___GlobalPrefixColor_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&G_B12_1->___GlobalPrefixColor_3), (void*)L_14);
		// GetColor = (obj) => {
		//   if (obj is NetworkRunner runner) {
		//     // flag server/host runners as special with seed of -1
		//     var seed = runner.GetHashCodeForLogger();
		//     return GetRandomColor(seed);
		//   }
		//   return default;
		// };
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_15 = (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*)il2cpp_codegen_object_new(Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821(L_15, __this, (intptr_t)((void*)FusionUnityLogger_U3C_ctorU3Eb__12_0_mF2706CCE9E8E1F5D73E5AE62E4A6152D28D2D7E1_RuntimeMethod_var), NULL);
		FusionUnityLogger_set_GetColor_m91F84BF1AEB7B3FB6A8B0E88DC68F2A261A9E58A_inline(__this, L_15, NULL);
		// }
		return;
	}
}
// System.Int32 Fusion.FusionUnityLogger::GetRandomColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FusionUnityLogger_GetRandomColor_m23D8E545D94FFA41142600B60C309D90770F5C9E (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, int32_t ___seed0, const RuntimeMethod* method) 
{
	{
		// int GetRandomColor(int seed) => GetRandomColor(seed, MinRandomColor, MaxRandomColor, ServerColor);
		int32_t L_0 = ___seed0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = __this->___MinRandomColor_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = __this->___MaxRandomColor_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___ServerColor_6;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4;
		L_4 = Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline(L_3, NULL);
		int32_t L_5;
		L_5 = FusionUnityLogger_GetRandomColor_mB8F1D3E1FC25F36A747542A2E9A6A1E8C34C62E8(L_0, L_1, L_2, L_4, NULL);
		return L_5;
	}
}
// System.Int32 Fusion.FusionUnityLogger::GetRandomColor(System.Int32,UnityEngine.Color32,UnityEngine.Color32,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FusionUnityLogger_GetRandomColor_mB8F1D3E1FC25F36A747542A2E9A6A1E8C34C62E8 (int32_t ___seed0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___min1, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___max2, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___svr3, const RuntimeMethod* method) 
{
	NetworkRNG_t64B73CD206460A54C63878CFB53238AD54ECA0B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// var random = new NetworkRNG(seed);
		int32_t L_0 = ___seed0;
		NetworkRNG__ctor_m31399DC91D6F37205836C731BBE5A6F6E0C90541((&V_0), L_0, NULL);
		// if (seed == -1) {
		int32_t L_1 = ___seed0;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0023;
		}
	}
	{
		// r = svr.r;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___svr3;
		uint8_t L_3 = L_2.___r_1;
		V_1 = L_3;
		// g = svr.g;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___svr3;
		uint8_t L_5 = L_4.___g_2;
		V_2 = L_5;
		// b = svr.b;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___svr3;
		uint8_t L_7 = L_6.___b_3;
		V_3 = L_7;
		goto IL_005f;
	}

IL_0023:
	{
		// r = random.RangeInclusive(min.r, max.r);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8 = ___min1;
		uint8_t L_9 = L_8.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_10 = ___max2;
		uint8_t L_11 = L_10.___r_1;
		int32_t L_12;
		L_12 = NetworkRNG_RangeInclusive_mB454FBE1783D7A9205BF3DA96CF7B20F94B3BD7C((&V_0), L_9, L_11, NULL);
		V_1 = L_12;
		// g = random.RangeInclusive(min.g, max.g);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = ___min1;
		uint8_t L_14 = L_13.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_15 = ___max2;
		uint8_t L_16 = L_15.___g_2;
		int32_t L_17;
		L_17 = NetworkRNG_RangeInclusive_mB454FBE1783D7A9205BF3DA96CF7B20F94B3BD7C((&V_0), L_14, L_16, NULL);
		V_2 = L_17;
		// b = random.RangeInclusive(min.b, max.b);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_18 = ___min1;
		uint8_t L_19 = L_18.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_20 = ___max2;
		uint8_t L_21 = L_20.___b_3;
		int32_t L_22;
		L_22 = NetworkRNG_RangeInclusive_mB454FBE1783D7A9205BF3DA96CF7B20F94B3BD7C((&V_0), L_19, L_21, NULL);
		V_3 = L_22;
	}

IL_005f:
	{
		// r = Mathf.Clamp(r, 0, 255);
		int32_t L_23 = V_1;
		int32_t L_24;
		L_24 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_23, 0, ((int32_t)255), NULL);
		V_1 = L_24;
		// g = Mathf.Clamp(g, 0, 255);
		int32_t L_25 = V_2;
		int32_t L_26;
		L_26 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_25, 0, ((int32_t)255), NULL);
		V_2 = L_26;
		// b = Mathf.Clamp(b, 0, 255);
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_27, 0, ((int32_t)255), NULL);
		V_3 = L_28;
		// int rgb = (r << 16) | (g << 8) | b;
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		int32_t L_31 = V_3;
		// return rgb;
		return ((int32_t)(((int32_t)(((int32_t)(L_29<<((int32_t)16)))|((int32_t)(L_30<<8))))|L_31));
	}
}
// System.Int32 Fusion.FusionUnityLogger::Color32ToRGB24(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FusionUnityLogger_Color32ToRGB24_m26A5217620B12A017C942CADA33D4ADC9E247B61 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	{
		// return (c.r << 16) | (c.g << 8) | c.b;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___c0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___c0;
		uint8_t L_5 = L_4.___b_3;
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_1<<((int32_t)16)))|((int32_t)((int32_t)L_3<<8))))|(int32_t)L_5));
	}
}
// System.String Fusion.FusionUnityLogger::Color32ToRGBString(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FusionUnityLogger_Color32ToRGBString_mE996FAFEF69061CFBB684B6C48B4528E02D48EF1 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2CACCA027530802511895F2C4C873F9DC8ED360);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("#{0:X6}", Color32ToRGB24(c));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		int32_t L_1;
		L_1 = FusionUnityLogger_Color32ToRGB24_m26A5217620B12A017C942CADA33D4ADC9E247B61(L_0, NULL);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralE2CACCA027530802511895F2C4C873F9DC8ED360, L_3, NULL);
		return L_4;
	}
}
// System.Void Fusion.FusionUnityLogger::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionUnityLogger_Initialize_m308382082A4A2847AD3B3948933FE52E2ABD5F7B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* V_0 = NULL;
	{
		// if (Fusion.Log.Initialized) {
		bool L_0;
		L_0 = Log_get_Initialized_mADEE678A7009B4F290E2B393C671ACCFE8F1D3D7(NULL);
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// var logger = new FusionUnityLogger();
		FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* L_1 = (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52*)il2cpp_codegen_object_new(FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FusionUnityLogger__ctor_m0287DD77CE2EF2B6BA6C1E8B0AA63BCC70049904(L_1, NULL);
		V_0 = L_1;
		// if (logger != null) {
		FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// Fusion.Log.Init(logger);
		FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* L_3 = V_0;
		Log_Init_m062F8783C0C30BA88151B1CCC8E592741F2C1EA9(L_3, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Int32 Fusion.FusionUnityLogger::<.ctor>b__12_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FusionUnityLogger_U3C_ctorU3Eb__12_0_mF2706CCE9E8E1F5D73E5AE62E4A6152D28D2D7E1 (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (obj is NetworkRunner runner) {
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A*)IsInstSealed((RuntimeObject*)L_0, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var));
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// var seed = runner.GetHashCodeForLogger();
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = NetworkRunner_GetHashCodeForLogger_m60EC7F3AE38B458330494232F509794E8F092D34(L_2, NULL);
		V_1 = L_3;
		// return GetRandomColor(seed);
		int32_t L_4 = V_1;
		int32_t L_5;
		L_5 = FusionUnityLogger_GetRandomColor_m23D8E545D94FFA41142600B60C309D90770F5C9E(__this, L_4, NULL);
		return L_5;
	}

IL_0019:
	{
		// return default;
		return 0;
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
// System.Boolean Fusion.NetworkRunnerExtensions::SetActiveScene(Fusion.NetworkRunner,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkRunnerExtensions_SetActiveScene_m881A457723BF6A7ABF1E3B49F97F0C4A45832B16 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, String_t* ___sceneNameOrPath1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (TryGetSceneBuildIndex(sceneNameOrPath, out var buildIndex)) {
		String_t* L_0 = ___sceneNameOrPath1;
		bool L_1;
		L_1 = NetworkRunnerExtensions_TryGetSceneBuildIndex_mB69CE0A3FC022F9457CF9A4701EA09D2500875C6(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// runner.SetActiveScene(buildIndex);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_2 = ___runner0;
		int32_t L_3 = V_0;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_4;
		L_4 = SceneRef_op_Implicit_m694EC00BAF28DDC57257781C1055D4E0BBBB0CD2(L_3, NULL);
		NullCheck(L_2);
		NetworkRunner_SetActiveScene_m53E0CCA965B5C83B969AE289EE946E82F214877F(L_2, L_4, NULL);
		// return true;
		return (bool)1;
	}

IL_0018:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Fusion.NetworkRunnerExtensions::TryGetSceneBuildIndex(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkRunnerExtensions_TryGetSceneBuildIndex_mB69CE0A3FC022F9457CF9A4701EA09D2500875C6 (String_t* ___nameOrPath0, int32_t* ___buildIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (nameOrPath.IndexOf('/') >= 0) {
		String_t* L_0 = ___nameOrPath0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_0, ((int32_t)47), NULL);
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		// buildIndex = SceneUtility.GetBuildIndexByScenePath(nameOrPath);
		int32_t* L_2 = ___buildIndex1;
		String_t* L_3 = ___nameOrPath0;
		int32_t L_4;
		L_4 = SceneUtility_GetBuildIndexByScenePath_m5C0D6C7A23E3B30E5F1AA268172D4F5A9734BB68(L_3, NULL);
		*((int32_t*)L_2) = (int32_t)L_4;
		// if (buildIndex < 0) {
		int32_t* L_5 = ___buildIndex1;
		int32_t L_6 = *((int32_t*)L_5);
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// buildIndex = -1;
		int32_t* L_7 = ___buildIndex1;
		*((int32_t*)L_7) = (int32_t)(-1);
		// return false;
		return (bool)0;
	}

IL_001d:
	{
		// return true;
		return (bool)1;
	}

IL_001f:
	{
		// for (int i = 0; i < SceneManager.sceneCountInBuildSettings; ++i) {
		V_0 = 0;
		goto IL_0053;
	}

IL_0023:
	{
		// var scenePath = SceneUtility.GetScenePathByBuildIndex(i);
		int32_t L_8 = V_0;
		String_t* L_9;
		L_9 = SceneUtility_GetScenePathByBuildIndex_m05FA8A8072FAD3852479053D98459A7254EE7E0D(L_8, NULL);
		V_1 = L_9;
		// GetFileNameWithoutExtensionPosition(scenePath, out var nameIndex, out var nameLength);
		String_t* L_10 = V_1;
		NetworkRunnerExtensions_GetFileNameWithoutExtensionPosition_m5B0F1DBD2ED4FEF7A777E5D2C4D764671D825487(L_10, (&V_2), (&V_3), NULL);
		// if (nameLength == nameOrPath.Length && string.Compare(scenePath, nameIndex, nameOrPath, 0, nameLength, true) == 0) {
		int32_t L_11 = V_3;
		String_t* L_12 = ___nameOrPath0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_14 = V_1;
		int32_t L_15 = V_2;
		String_t* L_16 = ___nameOrPath0;
		int32_t L_17 = V_3;
		int32_t L_18;
		L_18 = String_Compare_mBE0464BE13D10A6A189C23D821839018873FDFAD(L_14, L_15, L_16, 0, L_17, (bool)1, NULL);
		if (L_18)
		{
			goto IL_004f;
		}
	}
	{
		// buildIndex = i;
		int32_t* L_19 = ___buildIndex1;
		int32_t L_20 = V_0;
		*((int32_t*)L_19) = (int32_t)L_20;
		// return true;
		return (bool)1;
	}

IL_004f:
	{
		// for (int i = 0; i < SceneManager.sceneCountInBuildSettings; ++i) {
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0053:
	{
		// for (int i = 0; i < SceneManager.sceneCountInBuildSettings; ++i) {
		int32_t L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		int32_t L_23;
		L_23 = SceneManager_get_sceneCountInBuildSettings_m7C49222A2A771B11C1CAD7D743BDDF8F8F39E685(NULL);
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0023;
		}
	}
	{
		// buildIndex = -1;
		int32_t* L_24 = ___buildIndex1;
		*((int32_t*)L_24) = (int32_t)(-1);
		// return false;
		return (bool)0;
	}
}
// System.Void Fusion.NetworkRunnerExtensions::GetFileNameWithoutExtensionPosition(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunnerExtensions_GetFileNameWithoutExtensionPosition_m5B0F1DBD2ED4FEF7A777E5D2C4D764671D825487 (String_t* ___nameOrPath0, int32_t* ___index1, int32_t* ___length2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var lastSlash = nameOrPath.LastIndexOf('/');
		String_t* L_0 = ___nameOrPath0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_0, ((int32_t)47), NULL);
		V_0 = L_1;
		// if (lastSlash >= 0) {
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		// index = lastSlash + 1;
		int32_t* L_3 = ___index1;
		int32_t L_4 = V_0;
		*((int32_t*)L_3) = (int32_t)((int32_t)il2cpp_codegen_add(L_4, 1));
		goto IL_0017;
	}

IL_0014:
	{
		// index = 0;
		int32_t* L_5 = ___index1;
		*((int32_t*)L_5) = (int32_t)0;
	}

IL_0017:
	{
		// var lastDot = nameOrPath.LastIndexOf('.');
		String_t* L_6 = ___nameOrPath0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_6, ((int32_t)46), NULL);
		V_1 = L_7;
		// if (lastDot > index) {
		int32_t L_8 = V_1;
		int32_t* L_9 = ___index1;
		int32_t L_10 = *((int32_t*)L_9);
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_002c;
		}
	}
	{
		// length = lastDot - index;
		int32_t* L_11 = ___length2;
		int32_t L_12 = V_1;
		int32_t* L_13 = ___index1;
		int32_t L_14 = *((int32_t*)L_13);
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_12, L_14));
		return;
	}

IL_002c:
	{
		// length = nameOrPath.Length - index;
		int32_t* L_15 = ___length2;
		String_t* L_16 = ___nameOrPath0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		int32_t* L_18 = ___index1;
		int32_t L_19 = *((int32_t*)L_18);
		*((int32_t*)L_15) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_19));
		// }
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
// Fusion.NetworkRunner Fusion.NetworkSceneManagerBase::get_Runner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, const RuntimeMethod* method) 
{
	{
		// public NetworkRunner Runner { get; private set; }
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = __this->___U3CRunnerU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::set_Runner(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_set_Runner_mF623A2AFBBBC35E86821F577FDEFF7F58336EE31 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___value0, const RuntimeMethod* method) 
{
	{
		// public NetworkRunner Runner { get; private set; }
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = ___value0;
		__this->___U3CRunnerU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRunnerU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_OnEnable_mF5A5082B160A730A28C6AD84AB164B84C255313B (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_OnDisable_m1C68601F7AD1C9362F9C2135B905E8143963C0B1 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_LateUpdate_mACA7A29E6AD55511629D45C501B7191D56480A90 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_TryGetTarget_m1B98B24F2C23C226A6A634FF3166162524EF61EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* V_0 = NULL;
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!Runner) {
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0;
		L_0 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (Runner.CurrentScene != _currentScene) {
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_2;
		L_2 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(__this, NULL);
		NullCheck(L_2);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_3;
		L_3 = NetworkRunner_get_CurrentScene_m757A103B3F43FD76BA0DC38132749F60AA90493D(L_2, NULL);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_4 = __this->____currentScene_8;
		bool L_5;
		L_5 = SceneRef_op_Inequality_m3DF03A4E620B9F4D5F9F7BF418F2E6CAC508B61C(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// _currentSceneOutdated = true;
		__this->____currentSceneOutdated_7 = (bool)1;
	}

IL_002d:
	{
		// if (!_currentSceneOutdated || _runningCoroutine != null) {
		bool L_6 = __this->____currentSceneOutdated_7;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_7 = __this->____runningCoroutine_6;
		if (!L_7)
		{
			goto IL_003e;
		}
	}

IL_003d:
	{
		// return;
		return;
	}

IL_003e:
	{
		// if (s_currentlyLoading.TryGetTarget(out var target)) {
		il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* L_8 = ((NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_StaticFields*)il2cpp_codegen_static_fields_for(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var))->___s_currentlyLoading_4;
		NullCheck(L_8);
		bool L_9;
		L_9 = WeakReference_1_TryGetTarget_m1B98B24F2C23C226A6A634FF3166162524EF61EA(L_8, (&V_0), WeakReference_1_TryGetTarget_m1B98B24F2C23C226A6A634FF3166162524EF61EA_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		// if (!target) {
		NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_10, NULL);
		if (L_11)
		{
			goto IL_0061;
		}
	}
	{
		// s_currentlyLoading.SetTarget(null);
		il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* L_12 = ((NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_StaticFields*)il2cpp_codegen_static_fields_for(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var))->___s_currentlyLoading_4;
		NullCheck(L_12);
		WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220(L_12, (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39*)NULL, WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220_RuntimeMethod_var);
		goto IL_0062;
	}

IL_0061:
	{
		// return;
		return;
	}

IL_0062:
	{
		// var prevScene = _currentScene;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_13 = __this->____currentScene_8;
		V_1 = L_13;
		// _currentScene = Runner.CurrentScene;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_14;
		L_14 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(__this, NULL);
		NullCheck(L_14);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_15;
		L_15 = NetworkRunner_get_CurrentScene_m757A103B3F43FD76BA0DC38132749F60AA90493D(L_14, NULL);
		__this->____currentScene_8 = L_15;
		// _currentSceneOutdated = false;
		__this->____currentSceneOutdated_7 = (bool)0;
		// _runningCoroutine = SwitchSceneWrapper(prevScene, _currentScene);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_16 = V_1;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_17 = __this->____currentScene_8;
		RuntimeObject* L_18;
		L_18 = NetworkSceneManagerBase_SwitchSceneWrapper_m4E190732E2E2EC8F8306F685483CDF7E07A503E2(__this, L_16, L_17, NULL);
		__this->____runningCoroutine_6 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runningCoroutine_6), (void*)L_18);
		// StartCoroutine(_runningCoroutine);
		RuntimeObject* L_19 = __this->____runningCoroutine_6;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_20;
		L_20 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_19, NULL);
		// }
		return;
	}
}
// System.Boolean Fusion.NetworkSceneManagerBase::IsScenePathOrNameEqual(UnityEngine.SceneManagement.Scene,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSceneManagerBase_IsScenePathOrNameEqual_m240342346F56E73445FF7329C29A963C736C8987 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, String_t* ___nameOrPath1, const RuntimeMethod* method) 
{
	{
		// return scene.path == nameOrPath || scene.name == nameOrPath;
		String_t* L_0;
		L_0 = Scene_get_path_mACD61B36E1F010A9FCA2C62637E0CB24B16729E4((&___scene0), NULL);
		String_t* L_1 = ___nameOrPath1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_3;
		L_3 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&___scene0), NULL);
		String_t* L_4 = ___nameOrPath1;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, L_4, NULL);
		return L_5;
	}

IL_001d:
	{
		return (bool)1;
	}
}
// System.Boolean Fusion.NetworkSceneManagerBase::TryGetScenePathFromBuildSettings(Fusion.SceneRef,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSceneManagerBase_TryGetScenePathFromBuildSettings_m9D23CB6309C4E8C2FE223F9BFA5B8ADFE18C3E7E (SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___sceneRef0, String_t** ___path1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sceneRef.IsValid) {
		bool L_0;
		L_0 = SceneRef_get_IsValid_mFC88184BDE683A01DA6CF60F23EC17983C247379((&___sceneRef0), NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// path = SceneUtility.GetScenePathByBuildIndex(sceneRef);
		String_t** L_1 = ___path1;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_2 = ___sceneRef0;
		int32_t L_3;
		L_3 = SceneRef_op_Implicit_mCF924A35424A1547276067E9A3A892AB3EB8511F(L_2, NULL);
		String_t* L_4;
		L_4 = SceneUtility_GetScenePathByBuildIndex_m05FA8A8072FAD3852479053D98459A7254EE7E0D(L_3, NULL);
		*((RuntimeObject**)L_1) = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)L_4);
		// if (!string.IsNullOrEmpty(path)) {
		String_t** L_5 = ___path1;
		String_t* L_6 = *((String_t**)L_5);
		bool L_7;
		L_7 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_6, NULL);
		if (L_7)
		{
			goto IL_0021;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0021:
	{
		// path = string.Empty;
		String_t** L_8 = ___path1;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_9);
		// return false;
		return (bool)0;
	}
}
// System.Boolean Fusion.NetworkSceneManagerBase::IsScenePathOrNameEqual(UnityEngine.SceneManagement.Scene,Fusion.SceneRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSceneManagerBase_IsScenePathOrNameEqual_mC14E4BA82C144610610A51D6C5B2D90AA5499E51 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___sceneRef1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (TryGetScenePathFromBuildSettings(sceneRef, out var path)) {
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_0 = ___sceneRef1;
		il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = NetworkSceneManagerBase_TryGetScenePathFromBuildSettings_m9D23CB6309C4E8C2FE223F9BFA5B8ADFE18C3E7E(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return IsScenePathOrNameEqual(scene, path);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2 = ___scene0;
		String_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = NetworkSceneManagerBase_IsScenePathOrNameEqual_m240342346F56E73445FF7329C29A963C736C8987(L_2, L_3, NULL);
		return L_4;
	}

IL_0012:
	{
		// return false;
		return (bool)0;
	}
}
// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkSceneManagerBase::FindNetworkObjects(UnityEngine.SceneManagement.Scene,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* NetworkSceneManagerBase_FindNetworkObjects_mD5801F1D58BC4EB5E25A10D7D83B4A7CBED1CFBF (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, bool ___disable1, bool ___addVisibilityNodes2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m48050D75FCDDB54380B87CE4466A5B13280776FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3CC53690EDAA1DDB18B8E49248774B270E7FBAF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mED8C4FC16A9F1BE2915FAE2E7CD05A3C59180C56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisNetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C_m30DA9706B6091A01234C649C9FC0CFE9098E435A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m006122E663E12324385572178836CCAE30619163_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m130EA2C4542DE33976BD5F3E71CFD09028CA12AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m849F529B76EAC19A125D08EC5D7A7C16A4A5BE2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA6EF54D04CDB9BB4B0F28BFA8A21EC80A3DC76FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RunnerVisibilityNode_t73BB30B54A6EB4715329FD4EC1394459F3EDCB01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* V_0 = NULL;
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* V_1 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06 V_5;
	memset((&V_5), 0, sizeof(V_5));
	NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* V_6 = NULL;
	{
		// var networkObjects = new List<NetworkObject>();
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_0 = (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82*)il2cpp_codegen_object_new(List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA6EF54D04CDB9BB4B0F28BFA8A21EC80A3DC76FA(L_0, List_1__ctor_mA6EF54D04CDB9BB4B0F28BFA8A21EC80A3DC76FA_RuntimeMethod_var);
		V_0 = L_0;
		// var gameObjects = scene.GetRootGameObjects();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B((&___scene0), NULL);
		// var result = new List<NetworkObject>();
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_2 = (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82*)il2cpp_codegen_object_new(List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mA6EF54D04CDB9BB4B0F28BFA8A21EC80A3DC76FA(L_2, List_1__ctor_mA6EF54D04CDB9BB4B0F28BFA8A21EC80A3DC76FA_RuntimeMethod_var);
		V_1 = L_2;
		// foreach (var go in gameObjects) {
		V_2 = L_1;
		V_3 = 0;
		goto IL_00a1;
	}

IL_001b:
	{
		// foreach (var go in gameObjects) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_4 = L_6;
		// networkObjects.Clear();
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_7 = V_0;
		NullCheck(L_7);
		List_1_Clear_m130EA2C4542DE33976BD5F3E71CFD09028CA12AA_inline(L_7, List_1_Clear_m130EA2C4542DE33976BD5F3E71CFD09028CA12AA_RuntimeMethod_var);
		// go.GetComponentsInChildren(true, networkObjects);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_4;
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_9 = V_0;
		NullCheck(L_8);
		GameObject_GetComponentsInChildren_TisNetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C_m30DA9706B6091A01234C649C9FC0CFE9098E435A(L_8, (bool)1, L_9, GameObject_GetComponentsInChildren_TisNetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C_m30DA9706B6091A01234C649C9FC0CFE9098E435A_RuntimeMethod_var);
		// foreach (var sceneObject in networkObjects) {
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_10 = V_0;
		NullCheck(L_10);
		Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06 L_11;
		L_11 = List_1_GetEnumerator_m849F529B76EAC19A125D08EC5D7A7C16A4A5BE2B(L_10, List_1_GetEnumerator_m849F529B76EAC19A125D08EC5D7A7C16A4A5BE2B_RuntimeMethod_var);
		V_5 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m48050D75FCDDB54380B87CE4466A5B13280776FC((&V_5), Enumerator_Dispose_m48050D75FCDDB54380B87CE4466A5B13280776FC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0074_1;
			}

IL_0039_1:
			{
				// foreach (var sceneObject in networkObjects) {
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_12;
				L_12 = Enumerator_get_Current_mED8C4FC16A9F1BE2915FAE2E7CD05A3C59180C56_inline((&V_5), Enumerator_get_Current_mED8C4FC16A9F1BE2915FAE2E7CD05A3C59180C56_RuntimeMethod_var);
				V_6 = L_12;
				// if (sceneObject.Flags.IsSceneObject()) {
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_13 = V_6;
				NullCheck(L_13);
				int32_t L_14 = L_13->___Flags_17;
				bool L_15;
				L_15 = NetworkObjectFlagsExtensions_IsSceneObject_mF1D0BBB5521D4158A63BDB5AC60213CA3FA72C9D_inline(L_14, NULL);
				if (!L_15)
				{
					goto IL_0074_1;
				}
			}
			{
				// if (sceneObject.gameObject.activeInHierarchy || sceneObject.Flags.IsActivatedByUser()) {
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_16 = V_6;
				NullCheck(L_16);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
				NullCheck(L_17);
				bool L_18;
				L_18 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_17, NULL);
				if (L_18)
				{
					goto IL_006c_1;
				}
			}
			{
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_19 = V_6;
				NullCheck(L_19);
				int32_t L_20 = L_19->___Flags_17;
				bool L_21;
				L_21 = NetworkObjectFlagsExtensions_IsActivatedByUser_m32DE8195B0505F463E81FA212651287FF6C7AA63_inline(L_20, NULL);
				if (!L_21)
				{
					goto IL_0074_1;
				}
			}

IL_006c_1:
			{
				// result.Add(sceneObject);
				List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_22 = V_1;
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_23 = V_6;
				NullCheck(L_22);
				List_1_Add_m006122E663E12324385572178836CCAE30619163_inline(L_22, L_23, List_1_Add_m006122E663E12324385572178836CCAE30619163_RuntimeMethod_var);
			}

IL_0074_1:
			{
				// foreach (var sceneObject in networkObjects) {
				bool L_24;
				L_24 = Enumerator_MoveNext_m3CC53690EDAA1DDB18B8E49248774B270E7FBAF3((&V_5), Enumerator_MoveNext_m3CC53690EDAA1DDB18B8E49248774B270E7FBAF3_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0039_1;
				}
			}
			{
				goto IL_008d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008d:
	{
		// if (addVisibilityNodes) {
		bool L_25 = ___addVisibilityNodes2;
		if (!L_25)
		{
			goto IL_009d;
		}
	}
	{
		// RunnerVisibilityNode.AddVisibilityNodes(go, Runner);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_4;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_27;
		L_27 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(RunnerVisibilityNode_t73BB30B54A6EB4715329FD4EC1394459F3EDCB01_il2cpp_TypeInfo_var);
		RunnerVisibilityNode_AddVisibilityNodes_m04A43B807B5A6A504748658BDA8DB519BE5F72CA(L_26, L_27, NULL);
	}

IL_009d:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00a1:
	{
		// foreach (var go in gameObjects) {
		int32_t L_29 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_30 = V_2;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// if (disable) {
		bool L_31 = ___disable1;
		if (!L_31)
		{
			goto IL_00e2;
		}
	}
	{
		// foreach (var sceneObject in result) {
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_32 = V_1;
		NullCheck(L_32);
		Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06 L_33;
		L_33 = List_1_GetEnumerator_m849F529B76EAC19A125D08EC5D7A7C16A4A5BE2B(L_32, List_1_GetEnumerator_m849F529B76EAC19A125D08EC5D7A7C16A4A5BE2B_RuntimeMethod_var);
		V_5 = L_33;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m48050D75FCDDB54380B87CE4466A5B13280776FC((&V_5), Enumerator_Dispose_m48050D75FCDDB54380B87CE4466A5B13280776FC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c9_1;
			}

IL_00b7_1:
			{
				// foreach (var sceneObject in result) {
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_34;
				L_34 = Enumerator_get_Current_mED8C4FC16A9F1BE2915FAE2E7CD05A3C59180C56_inline((&V_5), Enumerator_get_Current_mED8C4FC16A9F1BE2915FAE2E7CD05A3C59180C56_RuntimeMethod_var);
				// sceneObject.gameObject.SetActive(false);
				NullCheck(L_34);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
				L_35 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_34, NULL);
				NullCheck(L_35);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)0, NULL);
			}

IL_00c9_1:
			{
				// foreach (var sceneObject in result) {
				bool L_36;
				L_36 = Enumerator_MoveNext_m3CC53690EDAA1DDB18B8E49248774B270E7FBAF3((&V_5), Enumerator_MoveNext_m3CC53690EDAA1DDB18B8E49248774B270E7FBAF3_RuntimeMethod_var);
				if (L_36)
				{
					goto IL_00b7_1;
				}
			}
			{
				goto IL_00e2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e2:
	{
		// return result;
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_37 = V_1;
		return L_37;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::Fusion.INetworkSceneManager.Initialize(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_Fusion_INetworkSceneManager_Initialize_m0C3B45BE8330566A2CB4A46BB6C6DD6B4C483BF8 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, const RuntimeMethod* method) 
{
	{
		// Initialize(runner);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = ___runner0;
		VirtualActionInvoker1< NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* >::Invoke(10 /* System.Void Fusion.NetworkSceneManagerBase::Initialize(Fusion.NetworkRunner) */, __this, L_0);
		// }
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::Fusion.INetworkSceneManager.Shutdown(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_Fusion_INetworkSceneManager_Shutdown_mF0CB37991A5B687F93B6C5DE12AF86018BAAEDF2 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, const RuntimeMethod* method) 
{
	{
		// Shutdown(runner);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = ___runner0;
		VirtualActionInvoker1< NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* >::Invoke(11 /* System.Void Fusion.NetworkSceneManagerBase::Shutdown(Fusion.NetworkRunner) */, __this, L_0);
		// }
		return;
	}
}
// System.Boolean Fusion.NetworkSceneManagerBase::Fusion.INetworkSceneManager.IsReady(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSceneManagerBase_Fusion_INetworkSceneManager_IsReady_m958E093B2E69B61B742A10944B40712C591E51ED (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, const RuntimeMethod* method) 
{
	{
		// if (_runningCoroutine != null) {
		RuntimeObject* L_0 = __this->____runningCoroutine_6;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (_currentSceneOutdated) {
		bool L_1 = __this->____currentSceneOutdated_7;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// if (runner.CurrentScene != _currentScene) {
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_2 = ___runner0;
		NullCheck(L_2);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_3;
		L_3 = NetworkRunner_get_CurrentScene_m757A103B3F43FD76BA0DC38132749F60AA90493D(L_2, NULL);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_4 = __this->____currentScene_8;
		bool L_5;
		L_5 = SceneRef_op_Inequality_m3DF03A4E620B9F4D5F9F7BF418F2E6CAC508B61C(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0029:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::Initialize(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_Initialize_mE47BFABEE120215430FC0A45B325C121BF91BB9B (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, const RuntimeMethod* method) 
{
	{
		// Runner = runner;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = ___runner0;
		NetworkSceneManagerBase_set_Runner_mF623A2AFBBBC35E86821F577FDEFF7F58336EE31_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::Shutdown(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_Shutdown_m96B474FE91EE21AEDCFBDA1E2544401F24FBCDF9 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___runner0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCF3DB6F10D6C173EA5388EE2DA9ADB20758230A);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0047:
			{// begin finally (depth: 1)
				// Runner = null;
				NetworkSceneManagerBase_set_Runner_mF623A2AFBBBC35E86821F577FDEFF7F58336EE31_inline(__this, (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A*)NULL, NULL);
				// _runningCoroutine = null;
				__this->____runningCoroutine_6 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____runningCoroutine_6), (void*)(RuntimeObject*)NULL);
				// _currentScene = SceneRef.None;
				SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_0;
				L_0 = SceneRef_get_None_mFE4689312D6BC57836985671FA237DB147898126(NULL);
				__this->____currentScene_8 = L_0;
				// _currentSceneOutdated = false;
				__this->____currentSceneOutdated_7 = (bool)0;
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (_runningCoroutine != null) {
				RuntimeObject* L_1 = __this->____runningCoroutine_6;
				if (!L_1)
				{
					goto IL_0045_1;
				}
			}
			{
				// LogWarn($"There is an ongoing scene load ({_currentScene}), stopping and disposing coroutine.");
				SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_2 = __this->____currentScene_8;
				SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_3 = L_2;
				RuntimeObject* L_4 = Box(SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9_il2cpp_TypeInfo_var, &L_3);
				String_t* L_5;
				L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralBCF3DB6F10D6C173EA5388EE2DA9ADB20758230A, L_4, NULL);
				NetworkSceneManagerBase_LogWarn_mD5326B515097E0C302A0ADDB469FF4762B59C29C(__this, L_5, NULL);
				// StopCoroutine(_runningCoroutine);
				RuntimeObject* L_6 = __this->____runningCoroutine_6;
				MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_6, NULL);
				// (_runningCoroutine as IDisposable)?.Dispose();
				RuntimeObject* L_7 = __this->____runningCoroutine_6;
				RuntimeObject* L_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
				G_B2_0 = L_8;
				if (L_8)
				{
					G_B3_0 = L_8;
					goto IL_0040_1;
				}
			}
			{
				goto IL_0068;
			}

IL_0040_1:
			{
				NullCheck(G_B3_0);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, G_B3_0);
			}

IL_0045_1:
			{
				// } finally {
				goto IL_0068;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::LogTrace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_LogTrace_m328DD14F4AEC1371B25920607A6FF57C54089EE7 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_LogError_m6636890C17C51DF975A4BFD17A0B3771A9912E56 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CD71E3642012925B68B6B9FC2FA6F1735C9F608);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral961F54967701EA4335F9BFA367097CC26D03D587);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Log.Error($"[NetworkSceneManager] {(this != null ? this.name : "<destroyed>")}: {msg}");
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(__this, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = _stringLiteral961F54967701EA4335F9BFA367097CC26D03D587;
		if (L_0)
		{
			G_B2_0 = _stringLiteral961F54967701EA4335F9BFA367097CC26D03D587;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteral2CD71E3642012925B68B6B9FC2FA6F1735C9F608;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0015:
	{
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		String_t* L_2 = ___msg0;
		String_t* L_3;
		L_3 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(G_B3_1, G_B3_0, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_2, NULL);
		Log_Error_m121DF6562746E8104C122A968DE925E0C3ADB8BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::LogWarn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_LogWarn_mD5326B515097E0C302A0ADDB469FF4762B59C29C (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CD71E3642012925B68B6B9FC2FA6F1735C9F608);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral961F54967701EA4335F9BFA367097CC26D03D587);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Log.Warn($"[NetworkSceneManager] {(this != null ? this.name : "<destroyed>")}: {msg}");
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(__this, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = _stringLiteral961F54967701EA4335F9BFA367097CC26D03D587;
		if (L_0)
		{
			G_B2_0 = _stringLiteral961F54967701EA4335F9BFA367097CC26D03D587;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteral2CD71E3642012925B68B6B9FC2FA6F1735C9F608;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0015:
	{
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		String_t* L_2 = ___msg0;
		String_t* L_3;
		L_3 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(G_B3_1, G_B3_0, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_2, NULL);
		Log_Warn_mF585B348307AB9D3461293F009F849C5BA853A10(L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Fusion.NetworkSceneManagerBase::SwitchSceneWrapper(Fusion.SceneRef,Fusion.SceneRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkSceneManagerBase_SwitchSceneWrapper_m4E190732E2E2EC8F8306F685483CDF7E07A503E2 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___prevScene0, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___newScene1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* L_0 = (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299*)il2cpp_codegen_object_new(U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSwitchSceneWrapperU3Ed__26__ctor_mE9F726884C411FE0A649AB8ADAD7E86B24934E4E(L_0, 0, NULL);
		U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* L_2 = L_1;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_3 = ___prevScene0;
		NullCheck(L_2);
		L_2->___prevScene_3 = L_3;
		U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* L_4 = L_2;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_5 = ___newScene1;
		NullCheck(L_4);
		L_4->___newScene_4 = L_5;
		return L_4;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase__ctor_m13487B9BF6F36D69D7C02D77BB7B66DA77CDAFBB (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShowHierarchyWindowOverlay = true;
		__this->___ShowHierarchyWindowOverlay_5 = (bool)1;
		Behaviour__ctor_m1CC74A6DA707BC75BDC3BF41D5BF5CA0809B0A8D(__this, NULL);
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase__cctor_mCBAFC7CBA6565BDE18DCDD54F5CEDCE59FD15A51 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1__ctor_m1039DCD4F251CC407C0D72021F7D04F936DC0E29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static WeakReference<NetworkSceneManagerBase> s_currentlyLoading = new WeakReference<NetworkSceneManagerBase>(null);
		WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* L_0 = (WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2*)il2cpp_codegen_object_new(WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WeakReference_1__ctor_m1039DCD4F251CC407C0D72021F7D04F936DC0E29(L_0, (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39*)NULL, WeakReference_1__ctor_m1039DCD4F251CC407C0D72021F7D04F936DC0E29_RuntimeMethod_var);
		((NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_StaticFields*)il2cpp_codegen_static_fields_for(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var))->___s_currentlyLoading_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_StaticFields*)il2cpp_codegen_static_fields_for(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var))->___s_currentlyLoading_4), (void*)L_0);
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
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_Multicast(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___sceneObjects0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* currentDelegate = reinterpret_cast<FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sceneObjects0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenInst(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___sceneObjects0, const RuntimeMethod* method)
{
	NullCheck(___sceneObjects0);
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sceneObjects0, method);
}
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenStatic(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___sceneObjects0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sceneObjects0, method);
}
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenStaticInvoker(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___sceneObjects0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___sceneObjects0);
}
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_ClosedStaticInvoker(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___sceneObjects0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sceneObjects0);
}
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenVirtual(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___sceneObjects0, const RuntimeMethod* method)
{
	NullCheck(___sceneObjects0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___sceneObjects0);
}
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenInterface(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___sceneObjects0, const RuntimeMethod* method)
{
	NullCheck(___sceneObjects0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sceneObjects0);
}
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenGenericVirtual(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___sceneObjects0, const RuntimeMethod* method)
{
	NullCheck(___sceneObjects0);
	GenericVirtualActionInvoker0::Invoke(method, ___sceneObjects0);
}
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenGenericInterface(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___sceneObjects0, const RuntimeMethod* method)
{
	NullCheck(___sceneObjects0);
	GenericInterfaceActionInvoker0::Invoke(method, ___sceneObjects0);
}
// System.Void Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedLoadingDelegate__ctor_m2AA5AAD37381CFEF578C392654121C8D166C7E2C (FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_Multicast;
}
// System.Void Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate::Invoke(System.Collections.Generic.IEnumerable`1<Fusion.NetworkObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648 (FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___sceneObjects0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sceneObjects0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate::BeginInvoke(System.Collections.Generic.IEnumerable`1<Fusion.NetworkObject>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FinishedLoadingDelegate_BeginInvoke_m0DDF8FF49E0F5672BE18E5D27ED9144890F4882C (FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___sceneObjects0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___sceneObjects0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedLoadingDelegate_EndInvoke_m00D9DA0972EA46269F0D944C16C5E818ABDF554F (FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_mE403649ECF52DD3E78FB63E2F7A7B5C48CC75B94 (U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0::<SwitchSceneWrapper>b__0(System.Collections.Generic.IEnumerable`1<Fusion.NetworkObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0_U3CSwitchSceneWrapperU3Eb__0_mFC80B5A645E2B16A5DD648379819DDE8E25807D2 (U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* __this, RuntimeObject* ___objects0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB7A02CC7C77717DCDC7980A1EE1194A75B9F673D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t32C2A0FF95CFEDA759D18DC81B46A6969069EBFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t7A22B3111FA17D87DB77BDD217435A6312A5541C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* V_1 = NULL;
	{
		// finishCalled = true;
		__this->___finishCalled_0 = (bool)1;
		// foreach (var obj in objects) {
		RuntimeObject* L_0 = ___objects0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Fusion.NetworkObject>::GetEnumerator() */, IEnumerable_1_t32C2A0FF95CFEDA759D18DC81B46A6969069EBFA_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0041;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0041:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_0010_1:
			{
				// foreach (var obj in objects) {
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_5;
				L_5 = InterfaceFuncInvoker0< NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Fusion.NetworkObject>::get_Current() */, IEnumerator_1_t7A22B3111FA17D87DB77BDD217435A6312A5541C_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				// sceneObjects.Add(obj.NetworkGuid, obj);
				Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4* L_6 = __this->___sceneObjects_1;
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_7 = V_1;
				NullCheck(L_7);
				NetworkObjectGuid_t99EAC957EE861D66626645313D35A1F49AF134B4 L_8 = L_7->___NetworkGuid_18;
				Guid_t L_9;
				L_9 = NetworkObjectGuid_op_Implicit_m1A0E3C69EAA11EF1C223643936636857D5A52E8B(L_8, NULL);
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_10 = V_1;
				NullCheck(L_6);
				Dictionary_2_Add_mB7A02CC7C77717DCDC7980A1EE1194A75B9F673D(L_6, L_9, L_10, Dictionary_2_Add_mB7A02CC7C77717DCDC7980A1EE1194A75B9F673D_RuntimeMethod_var);
			}

IL_002e_1:
			{
				// foreach (var obj in objects) {
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// };
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
// System.Void Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneWrapperU3Ed__26__ctor_mE9F726884C411FE0A649AB8ADAD7E86B24934E4E (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneWrapperU3Ed__26_System_IDisposable_Dispose_m4613C7560113A39655C6B27AA57CA2A43F6439A2 (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CSwitchSceneWrapperU3Ed__26_U3CU3Em__Finally1_m2C7E18C3627392881FF33AE525DC1B7ECC74DBA1(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSwitchSceneWrapperU3Ed__26_MoveNext_m7719B9A90DBC1BA137BE1AE394C2C50064BEDDA2 (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4B4120375E58E69EB8BC54ADB054EBBEFC933831_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mC860851CA34533BEA997FC852C9AD7768F6D2049_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass26_0_U3CSwitchSceneWrapperU3Eb__0_mFC80B5A645E2B16A5DD648379819DDE8E25807D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF597A5AFE3E6633B17F51DDC5D052C17158C067);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6A843E4AF194F7F4F0925DF3FA2D7C9DA359E37);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* V_2 = NULL;
	FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_016e:
			{// begin fault (depth: 1)
				U3CSwitchSceneWrapperU3Ed__26_System_IDisposable_Dispose_m4613C7560113A39655C6B27AA57CA2A43F6439A2(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001f_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_00ed_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0175;
			}

IL_001f_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* L_4 = (U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				U3CU3Ec__DisplayClass26_0__ctor_mE403649ECF52DD3E78FB63E2F7A7B5C48CC75B94(L_4, NULL);
				__this->___U3CU3E8__1_5 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)L_4);
				// bool finishCalled = false;
				U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* L_5 = __this->___U3CU3E8__1_5;
				NullCheck(L_5);
				L_5->___finishCalled_0 = (bool)0;
				// Dictionary<Guid, NetworkObject> sceneObjects = new Dictionary<Guid, NetworkObject>();
				U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* L_6 = __this->___U3CU3E8__1_5;
				Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4* L_7 = (Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4*)il2cpp_codegen_object_new(Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				Dictionary_2__ctor_m4B4120375E58E69EB8BC54ADB054EBBEFC933831(L_7, Dictionary_2__ctor_m4B4120375E58E69EB8BC54ADB054EBBEFC933831_RuntimeMethod_var);
				NullCheck(L_6);
				L_6->___sceneObjects_1 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&L_6->___sceneObjects_1), (void*)L_7);
				// Exception error = null;
				__this->___U3CerrorU3E5__2_6 = (Exception_t*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CerrorU3E5__2_6), (void*)(Exception_t*)NULL);
				// FinishedLoadingDelegate callback = (objects) => {
				//   finishCalled = true;
				//   foreach (var obj in objects) {
				//     sceneObjects.Add(obj.NetworkGuid, obj);
				//   }
				// };
				U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* L_8 = __this->___U3CU3E8__1_5;
				FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* L_9 = (FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80*)il2cpp_codegen_object_new(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				FinishedLoadingDelegate__ctor_m2AA5AAD37381CFEF578C392654121C8D166C7E2C(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass26_0_U3CSwitchSceneWrapperU3Eb__0_mFC80B5A645E2B16A5DD648379819DDE8E25807D2_RuntimeMethod_var), NULL);
				V_3 = L_9;
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// s_currentlyLoading.SetTarget(this);
				il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
				WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* L_10 = ((NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_StaticFields*)il2cpp_codegen_static_fields_for(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var))->___s_currentlyLoading_4;
				NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_11 = V_2;
				NullCheck(L_10);
				WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220(L_10, L_11, WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220_RuntimeMethod_var);
				// Runner.InvokeSceneLoadStart();
				NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_12 = V_2;
				NullCheck(L_12);
				NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_13;
				L_13 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_12, NULL);
				NullCheck(L_13);
				NetworkRunner_InvokeSceneLoadStart_mC88B5250E6415EAC954B1FC96D2ACE60E921AA70(L_13, NULL);
				// var coro = SwitchScene(prevScene, newScene, callback);
				NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_14 = V_2;
				SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_15 = __this->___prevScene_3;
				SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_16 = __this->___newScene_4;
				FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* L_17 = V_3;
				NullCheck(L_14);
				RuntimeObject* L_18;
				L_18 = VirtualFuncInvoker3< RuntimeObject*, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9, FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* >::Invoke(12 /* System.Collections.IEnumerator Fusion.NetworkSceneManagerBase::SwitchScene(Fusion.SceneRef,Fusion.SceneRef,Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate) */, L_14, L_15, L_16, L_17);
				__this->___U3CcoroU3E5__3_7 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcoroU3E5__3_7), (void*)L_18);
				// for (bool next = true; next;) {
				__this->___U3CnextU3E5__4_8 = (bool)1;
				goto IL_00f5_1;
			}

IL_00a6_1:
			{
			}
			try
			{// begin try (depth: 2)
				// next = coro.MoveNext();
				RuntimeObject* L_19 = __this->___U3CcoroU3E5__3_7;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				__this->___U3CnextU3E5__4_8 = L_20;
				// } catch (Exception ex) {
				goto IL_00c6_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00ba_1;
				}
				throw e;
			}

CATCH_00ba_1:
			{// begin catch(System.Exception)
				// } catch (Exception ex) {
				V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// error = ex;
				Exception_t* L_21 = V_4;
				__this->___U3CerrorU3E5__2_6 = L_21;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CerrorU3E5__2_6), (void*)L_21);
				// break;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00fd_1;
			}// end catch (depth: 2)

IL_00c6_1:
			{
				// if (next) {
				bool L_22 = __this->___U3CnextU3E5__4_8;
				if (!L_22)
				{
					goto IL_00f5_1;
				}
			}
			{
				// yield return coro.Current;
				RuntimeObject* L_23 = __this->___U3CcoroU3E5__3_7;
				NullCheck(L_23);
				RuntimeObject* L_24;
				L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
				__this->___U3CU3E2__current_1 = L_24;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_24);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0175;
			}

IL_00ed_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_00f5_1:
			{
				// for (bool next = true; next;) {
				bool L_25 = __this->___U3CnextU3E5__4_8;
				if (L_25)
				{
					goto IL_00a6_1;
				}
			}

IL_00fd_1:
			{
				// } finally {
				__this->___U3CcoroU3E5__3_7 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcoroU3E5__3_7), (void*)(RuntimeObject*)NULL);
				U3CSwitchSceneWrapperU3Ed__26_U3CU3Em__Finally1_m2C7E18C3627392881FF33AE525DC1B7ECC74DBA1(__this, NULL);
				// if (error != null) {
				Exception_t* L_26 = __this->___U3CerrorU3E5__2_6;
				if (!L_26)
				{
					goto IL_012a_1;
				}
			}
			{
				// LogError($"Failed to switch scenes: {error}");
				NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_27 = V_2;
				Exception_t* L_28 = __this->___U3CerrorU3E5__2_6;
				String_t* L_29;
				L_29 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralB6A843E4AF194F7F4F0925DF3FA2D7C9DA359E37, L_28, NULL);
				NullCheck(L_27);
				NetworkSceneManagerBase_LogError_m6636890C17C51DF975A4BFD17A0B3771A9912E56(L_27, L_29, NULL);
				goto IL_016a_1;
			}

IL_012a_1:
			{
				// } else if (!finishCalled) {
				U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* L_30 = __this->___U3CU3E8__1_5;
				NullCheck(L_30);
				bool L_31 = L_30->___finishCalled_0;
				if (L_31)
				{
					goto IL_0144_1;
				}
			}
			{
				// LogError($"Failed to switch scenes: SwitchScene implementation did not invoke finished delegate");
				NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_32 = V_2;
				NullCheck(L_32);
				NetworkSceneManagerBase_LogError_m6636890C17C51DF975A4BFD17A0B3771A9912E56(L_32, _stringLiteralAF597A5AFE3E6633B17F51DDC5D052C17158C067, NULL);
				goto IL_016a_1;
			}

IL_0144_1:
			{
				// Runner.RegisterSceneObjects(sceneObjects.Values);
				NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_33 = V_2;
				NullCheck(L_33);
				NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_34;
				L_34 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_33, NULL);
				U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* L_35 = __this->___U3CU3E8__1_5;
				NullCheck(L_35);
				Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4* L_36 = L_35->___sceneObjects_1;
				NullCheck(L_36);
				ValueCollection_tF3CD15E5D171F1E7DEA04F2110426D188EEAF961* L_37;
				L_37 = Dictionary_2_get_Values_mC860851CA34533BEA997FC852C9AD7768F6D2049(L_36, Dictionary_2_get_Values_mC860851CA34533BEA997FC852C9AD7768F6D2049_RuntimeMethod_var);
				NullCheck(L_34);
				NetworkRunner_RegisterSceneObjects_m746C14B764716FD492DB7F99EBF6475F45E0FA47(L_34, L_37, NULL);
				// Runner.InvokeSceneLoadDone();
				NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_38 = V_2;
				NullCheck(L_38);
				NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_39;
				L_39 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_38, NULL);
				NullCheck(L_39);
				NetworkRunner_InvokeSceneLoadDone_m9549003F7A9637BD9FAA1B615C23A30EC37A53D7(L_39, NULL);
			}

IL_016a_1:
			{
				// }
				V_0 = (bool)0;
				goto IL_0175;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0175:
	{
		bool L_40 = V_0;
		return L_40;
	}
}
// System.Void Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneWrapperU3Ed__26_U3CU3Em__Finally1_m2C7E18C3627392881FF33AE525DC1B7ECC74DBA1 (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_0 = __this->___U3CU3E4__this_2;
		// s_currentlyLoading.SetTarget(null);
		il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* L_1 = ((NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_StaticFields*)il2cpp_codegen_static_fields_for(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var))->___s_currentlyLoading_4;
		NullCheck(L_1);
		WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220(L_1, (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39*)NULL, WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220_RuntimeMethod_var);
		// _runningCoroutine = null;
		NullCheck(L_0);
		L_0->____runningCoroutine_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____runningCoroutine_6), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Object Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSwitchSceneWrapperU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB4B0EBE9E81B573B67E9A9B59A1F9E59F7E14AAD (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneWrapperU3Ed__26_System_Collections_IEnumerator_Reset_m1534E7EA5E2AB80717703ACB2B3EF6BBD4746541 (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSwitchSceneWrapperU3Ed__26_System_Collections_IEnumerator_Reset_m1534E7EA5E2AB80717703ACB2B3EF6BBD4746541_RuntimeMethod_var)));
	}
}
// System.Object Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSwitchSceneWrapperU3Ed__26_System_Collections_IEnumerator_get_Current_mE16C8E569B70B4BAA4A1743D788646A8C16ED349 (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// UnityEngine.YieldInstruction Fusion.NetworkSceneManagerDefault::LoadSceneAsync(Fusion.SceneRef,UnityEngine.SceneManagement.LoadSceneParameters,System.Action`1<UnityEngine.SceneManagement.Scene>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* NetworkSceneManagerDefault_LoadSceneAsync_m36CF7AA7A1C6FD72BA9BB228F868D27921408534 (NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* __this, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___sceneRef0, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E ___parameters1, Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* ___loaded2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CLoadSceneAsyncU3Eb__0_m4B059F1800104229F1D8516434F60658B7F97851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CLoadSceneAsyncU3Eb__1_m1806E6321B96A0D8071C4314923E8EFF4C7A7491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_0 = (U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m9878516CC321F91FA505845F027BFDF84F218BB9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_1 = V_0;
		Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* L_2 = ___loaded2;
		NullCheck(L_1);
		L_1->___loaded_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___loaded_2), (void*)L_2);
		// if (!TryGetScenePathFromBuildSettings(sceneRef, out var scenePath)) {
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_3 = ___sceneRef0;
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_4 = V_0;
		NullCheck(L_4);
		String_t** L_5 = (&L_4->___scenePath_0);
		il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = NetworkSceneManagerBase_TryGetScenePathFromBuildSettings_m9D23CB6309C4E8C2FE223F9BFA5B8ADFE18C3E7E(L_3, L_5, NULL);
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		// throw new InvalidOperationException($"Not going to load {sceneRef}: unable to find the scene name");
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_7 = ___sceneRef0;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD1E77AD5C06A675600CF5CD2F66F68899D01EDAB)), L_9, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkSceneManagerDefault_LoadSceneAsync_m36CF7AA7A1C6FD72BA9BB228F868D27921408534_RuntimeMethod_var)));
	}

IL_0031:
	{
		// var op = SceneManager.LoadSceneAsync(scenePath, parameters);
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___scenePath_0;
		LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E L_14 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_15;
		L_15 = SceneManager_LoadSceneAsync_mD501C44DA433BE225E6455D9AEB311C9A12FFF3C(L_13, L_14, NULL);
		// bool alreadyHandled = false;
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_16 = V_0;
		NullCheck(L_16);
		L_16->___alreadyHandled_1 = (bool)0;
		// UnityAction<Scene, LoadSceneMode> sceneLoadedHandler = (scene, _) => {
		//   if (IsScenePathOrNameEqual(scene, scenePath)) {
		//     Assert.Check(!alreadyHandled);
		//     alreadyHandled = true;
		//     loaded(scene);
		//   }
		// };
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_17 = V_0;
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_18 = V_0;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_19 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CLoadSceneAsyncU3Eb__0_m4B059F1800104229F1D8516434F60658B7F97851_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		L_17->___sceneLoadedHandler_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___sceneLoadedHandler_3), (void*)L_19);
		// SceneManager.sceneLoaded += sceneLoadedHandler;
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_20 = V_0;
		NullCheck(L_20);
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_21 = L_20->___sceneLoadedHandler_3;
		SceneManager_add_sceneLoaded_mDE45940CCEC5D17EB92EB76DB8931E5483FBCD2C(L_21, NULL);
		// op.completed += _ => {
		//   SceneManager.sceneLoaded -= sceneLoadedHandler;
		// };
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_22 = L_15;
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_23 = V_0;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_24 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CLoadSceneAsyncU3Eb__1_m1806E6321B96A0D8071C4314923E8EFF4C7A7491_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_22, L_24, NULL);
		// return op;
		return L_22;
	}
}
// UnityEngine.YieldInstruction Fusion.NetworkSceneManagerDefault::UnloadSceneAsync(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* NetworkSceneManagerDefault_UnloadSceneAsync_mDC4810C964B9599F22C93D56E03D75D30763992D (NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SceneManager.UnloadSceneAsync(scene);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = ___scene0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_1;
		L_1 = SceneManager_UnloadSceneAsync_m3E7FAB5F33771BC535CC78DBF1062328F1A36752(L_0, NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator Fusion.NetworkSceneManagerDefault::SwitchScene(Fusion.SceneRef,Fusion.SceneRef,Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkSceneManagerDefault_SwitchScene_m1ACA3323F963A187D7F10DED31C26FA32B5C1B06 (NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* __this, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___prevScene0, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___newScene1, FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* ___finished2, const RuntimeMethod* method) 
{
	{
		// if (Runner.Config.PeerMode == NetworkProjectConfig.PeerModes.Single) {
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0;
		L_0 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(__this, NULL);
		NullCheck(L_0);
		NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* L_1;
		L_1 = NetworkRunner_get_Config_mD7D0F65C494EB1B08A7DC8A9F6C016588006BD0E_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2 = L_1->___PeerMode_5;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return SwitchSceneSinglePeer(prevScene, newScene, finished);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_3 = ___prevScene0;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_4 = ___newScene1;
		FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* L_5 = ___finished2;
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker3< RuntimeObject*, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9, FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* >::Invoke(16 /* System.Collections.IEnumerator Fusion.NetworkSceneManagerDefault::SwitchSceneSinglePeer(Fusion.SceneRef,Fusion.SceneRef,Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate) */, __this, L_3, L_4, L_5);
		return L_6;
	}

IL_001c:
	{
		// return SwitchSceneMultiplePeer(prevScene, newScene, finished);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_7 = ___prevScene0;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_8 = ___newScene1;
		FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* L_9 = ___finished2;
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker3< RuntimeObject*, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9, FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* >::Invoke(15 /* System.Collections.IEnumerator Fusion.NetworkSceneManagerDefault::SwitchSceneMultiplePeer(Fusion.SceneRef,Fusion.SceneRef,Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate) */, __this, L_7, L_8, L_9);
		return L_10;
	}
}
// System.Collections.IEnumerator Fusion.NetworkSceneManagerDefault::SwitchSceneMultiplePeer(Fusion.SceneRef,Fusion.SceneRef,Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkSceneManagerDefault_SwitchSceneMultiplePeer_m94AEB70D18B57730DBEB20A1C567A9FE0C9522C2 (NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* __this, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___prevScene0, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___newScene1, FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* ___finished2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* L_0 = (U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4*)il2cpp_codegen_object_new(U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSwitchSceneMultiplePeerU3Ed__4__ctor_mAA45B70FFC8FD30FC82FAF9CB3EFD4EADB908183(L_0, 0, NULL);
		U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* L_2 = L_1;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_3 = ___prevScene0;
		NullCheck(L_2);
		L_2->___prevScene_2 = L_3;
		U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* L_4 = L_2;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_5 = ___newScene1;
		NullCheck(L_4);
		L_4->___newScene_4 = L_5;
		U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* L_6 = L_4;
		FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* L_7 = ___finished2;
		NullCheck(L_6);
		L_6->___finished_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___finished_6), (void*)L_7);
		return L_6;
	}
}
// System.Collections.IEnumerator Fusion.NetworkSceneManagerDefault::SwitchSceneSinglePeer(Fusion.SceneRef,Fusion.SceneRef,Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkSceneManagerDefault_SwitchSceneSinglePeer_m7AADB820DCF18CADAB71FE7C572705047D8BCE0B (NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* __this, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___prevScene0, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___newScene1, FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* ___finished2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* L_0 = (U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416*)il2cpp_codegen_object_new(U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSwitchSceneSinglePeerU3Ed__5__ctor_mBED5520059D653A64415C85CDC65D7C2411EB6B8(L_0, 0, NULL);
		U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* L_2 = L_1;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_3 = ___prevScene0;
		NullCheck(L_2);
		L_2->___prevScene_2 = L_3;
		U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* L_4 = L_2;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_5 = ___newScene1;
		NullCheck(L_4);
		L_4->___newScene_4 = L_5;
		U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* L_6 = L_4;
		FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* L_7 = ___finished2;
		NullCheck(L_6);
		L_6->___finished_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___finished_6), (void*)L_7);
		return L_6;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerDefault__ctor_mBF0971F25CC1C7F5C9DB61B81131F355F0032B8A (NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int PostLoadDelayFrames = 1;
		__this->___PostLoadDelayFrames_10 = 1;
		il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		NetworkSceneManagerBase__ctor_m13487B9BF6F36D69D7C02D77BB7B66DA77CDAFBB(__this, NULL);
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
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m9878516CC321F91FA505845F027BFDF84F218BB9 (U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0::<LoadSceneAsync>b__0(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CLoadSceneAsyncU3Eb__0_m4B059F1800104229F1D8516434F60658B7F97851 (U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, int32_t ____1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsScenePathOrNameEqual(scene, scenePath)) {
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = ___scene0;
		String_t* L_1 = __this->___scenePath_0;
		il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = NetworkSceneManagerBase_IsScenePathOrNameEqual_m240342346F56E73445FF7329C29A963C736C8987(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// alreadyHandled = true;
		__this->___alreadyHandled_1 = (bool)1;
		// loaded(scene);
		Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* L_3 = __this->___loaded_2;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4 = ___scene0;
		NullCheck(L_3);
		Action_1_Invoke_mF80192BF77173A803E05499C419C61B2BB5AFBA7_inline(L_3, L_4, NULL);
	}

IL_0021:
	{
		// };
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0::<LoadSceneAsync>b__1(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CLoadSceneAsyncU3Eb__1_m1806E6321B96A0D8071C4314923E8EFF4C7A7491 (U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ____0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded -= sceneLoadedHandler;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = __this->___sceneLoadedHandler_3;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_remove_sceneLoaded_m8840CC33052C4A09A52BF927C3738A7B66783155(L_0, NULL);
		// };
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
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mF67F08B5221ED03356CA8D388C220C639AF83454 (U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0::<SwitchSceneMultiplePeer>b__0(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CSwitchSceneMultiplePeerU3Eb__0_m4D508569C6E5E2605A5E766A3ECF3066DCC86A72 (U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, const RuntimeMethod* method) 
{
	{
		// yield return LoadSceneAsync(newScene, loadSceneParameters, scene => loadedScene = scene);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = ___scene0;
		__this->___loadedScene_0 = L_0;
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
// System.Void Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneMultiplePeerU3Ed__4__ctor_mAA45B70FFC8FD30FC82FAF9CB3EFD4EADB908183 (U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneMultiplePeerU3Ed__4_System_IDisposable_Dispose_m0556E01B759D48A7AC5BF51D9D9ED9070B02D305 (U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSwitchSceneMultiplePeerU3Ed__4_MoveNext_mCCAF9BAD9D8DBB44E791E4561F77F3F5BA7EACAD (U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mA76794E5562401F30A8DF1D7F6A699BD3002EE52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CSwitchSceneMultiplePeerU3Eb__0_m4D508569C6E5E2605A5E766A3ECF3066DCC86A72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* V_1 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_3;
	memset((&V_3), 0, sizeof(V_3));
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* G_B8_0 = NULL;
	U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* G_B8_1 = NULL;
	int32_t G_B8_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_00ee;
			}
			case 2:
			{
				goto IL_0149;
			}
			case 3:
			{
				goto IL_0193;
			}
			case 4:
			{
				goto IL_025a;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* L_3 = (U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ec__DisplayClass4_0__ctor_mF67F08B5221ED03356CA8D388C220C639AF83454(L_3, NULL);
		__this->___U3CU3E8__1_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)L_3);
		// Scene activeScene = SceneManager.GetActiveScene();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_2 = L_4;
		// bool canTakeOverActiveScene = prevScene == default && IsScenePathOrNameEqual(activeScene, newScene);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_5 = __this->___prevScene_2;
		il2cpp_codegen_initobj((&V_4), sizeof(SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9));
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_6 = V_4;
		bool L_7;
		L_7 = SceneRef_op_Equality_m276FE28D52EC1775F8A866F4396FBC003DFEA4BC(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_8 = V_1;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_9 = V_2;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_10 = __this->___newScene_4;
		NullCheck(L_8);
		bool L_11;
		L_11 = NetworkSceneManagerBase_IsScenePathOrNameEqual_mC14E4BA82C144610610A51D6C5B2D90AA5499E51(L_8, L_9, L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0069;
	}

IL_0068:
	{
		G_B5_0 = 0;
	}

IL_0069:
	{
		// var loadSceneParameters = new LoadSceneParameters(LoadSceneMode.Additive, NetworkProjectConfig.ConvertPhysicsMode(Runner.Config.PhysicsEngine));
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_12 = V_1;
		NullCheck(L_12);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_13;
		L_13 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_12, NULL);
		NullCheck(L_13);
		NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* L_14;
		L_14 = NetworkRunner_get_Config_mD7D0F65C494EB1B08A7DC8A9F6C016588006BD0E_inline(L_13, NULL);
		NullCheck(L_14);
		int32_t L_15 = L_14->___PhysicsEngine_6;
		int32_t L_16;
		L_16 = NetworkProjectConfig_ConvertPhysicsMode_mFECF68874CA1A2F50B0AA7F852EBC0EFEB4801F2(L_15, NULL);
		LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E L_17;
		memset((&L_17), 0, sizeof(L_17));
		LoadSceneParameters__ctor_mC6BFFB213ADFF4F5057E6D92A2C87B9A4386C3B0((&L_17), 1, L_16, /*hidden argument*/NULL);
		__this->___U3CloadSceneParametersU3E5__2_7 = L_17;
		// var sceneToUnload = Runner.MultiplePeerUnityScene;
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_18 = V_1;
		NullCheck(L_18);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_19;
		L_19 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_18, NULL);
		NullCheck(L_19);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_20;
		L_20 = NetworkRunner_get_MultiplePeerUnityScene_mDCE6D9D72D3127C35F74CADBC5EBC79C833699DF_inline(L_19, NULL);
		__this->___U3CsceneToUnloadU3E5__3_8 = L_20;
		// var tempSceneSpawnedPrefabs = Runner.IsMultiplePeerSceneTemp ? sceneToUnload.GetRootGameObjects() : Array.Empty<GameObject>();
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_21 = V_1;
		NullCheck(L_21);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_22;
		L_22 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_21, NULL);
		NullCheck(L_22);
		bool L_23;
		L_23 = NetworkRunner_get_IsMultiplePeerSceneTemp_mE64D915B99B214780B73BBAFEAE8EFADCF71D001_inline(L_22, NULL);
		G_B6_0 = __this;
		G_B6_1 = G_B5_0;
		if (L_23)
		{
			G_B7_0 = __this;
			G_B7_1 = G_B5_0;
			goto IL_00b0;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_24;
		L_24 = Array_Empty_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mA76794E5562401F30A8DF1D7F6A699BD3002EE52_inline(Array_Empty_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mA76794E5562401F30A8DF1D7F6A699BD3002EE52_RuntimeMethod_var);
		G_B8_0 = L_24;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_00bb;
	}

IL_00b0:
	{
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_25 = (&__this->___U3CsceneToUnloadU3E5__3_8);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_26;
		L_26 = Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B(L_25, NULL);
		G_B8_0 = L_26;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_00bb:
	{
		NullCheck(G_B8_1);
		G_B8_1->___U3CtempSceneSpawnedPrefabsU3E5__4_9 = G_B8_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_1->___U3CtempSceneSpawnedPrefabsU3E5__4_9), (void*)G_B8_0);
		// if (canTakeOverActiveScene && NetworkRunner.GetRunnerForScene(activeScene) == null && SceneManager.sceneCount > 1) {
		if (!G_B8_2)
		{
			goto IL_00f5;
		}
	}
	{
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_27 = V_2;
		il2cpp_codegen_runtime_class_init_inline(NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_28;
		L_28 = NetworkRunner_GetRunnerForScene_mFC6D7FED47F14B264A8BC57674B57C88318C16DD(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_29)
		{
			goto IL_00f5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		int32_t L_30;
		L_30 = SceneManager_get_sceneCount_mDB2658B632F95AB171E500C1519A681507B9230B(NULL);
		if ((((int32_t)L_30) <= ((int32_t)1)))
		{
			goto IL_00f5;
		}
	}
	{
		// yield return UnloadSceneAsync(activeScene);
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_31 = V_1;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_32 = V_2;
		NullCheck(L_31);
		YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* L_33;
		L_33 = VirtualFuncInvoker1< YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D*, Scene_tA1DC762B79745EB5140F054C884855B922318356 >::Invoke(14 /* UnityEngine.YieldInstruction Fusion.NetworkSceneManagerDefault::UnloadSceneAsync(UnityEngine.SceneManagement.Scene) */, L_31, L_32);
		__this->___U3CU3E2__current_1 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_33);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ee:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00f5:
	{
		// if (SceneManager.sceneCount == 1 && tempSceneSpawnedPrefabs.Length == 0) {
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		int32_t L_34;
		L_34 = SceneManager_get_sceneCount_mDB2658B632F95AB171E500C1519A681507B9230B(NULL);
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_0114;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = __this->___U3CtempSceneSpawnedPrefabsU3E5__4_9;
		NullCheck(L_35);
		if ((((RuntimeArray*)L_35)->max_length))
		{
			goto IL_0114;
		}
	}
	{
		// loadSceneParameters.loadSceneMode = LoadSceneMode.Single;
		LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E* L_36 = (&__this->___U3CloadSceneParametersU3E5__2_7);
		LoadSceneParameters_set_loadSceneMode_mF66230A39CD26D396879FE1BAAB128F3F7F63A58(L_36, 0, NULL);
		goto IL_0150;
	}

IL_0114:
	{
		// } else if (sceneToUnload.IsValid()) {
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_37 = (&__this->___U3CsceneToUnloadU3E5__3_8);
		bool L_38;
		L_38 = Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599(L_37, NULL);
		if (!L_38)
		{
			goto IL_0150;
		}
	}
	{
		// if (Runner.TryMultiplePeerAssignTempScene()) {
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_39 = V_1;
		NullCheck(L_39);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_40;
		L_40 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_39, NULL);
		NullCheck(L_40);
		bool L_41;
		L_41 = NetworkRunner_TryMultiplePeerAssignTempScene_m2D30422B301626FE560E1F3499498CD49B9BFEAE(L_40, NULL);
		if (!L_41)
		{
			goto IL_0150;
		}
	}
	{
		// yield return UnloadSceneAsync(sceneToUnload);
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_42 = V_1;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_43 = __this->___U3CsceneToUnloadU3E5__3_8;
		NullCheck(L_42);
		YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* L_44;
		L_44 = VirtualFuncInvoker1< YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D*, Scene_tA1DC762B79745EB5140F054C884855B922318356 >::Invoke(14 /* UnityEngine.YieldInstruction Fusion.NetworkSceneManagerDefault::UnloadSceneAsync(UnityEngine.SceneManagement.Scene) */, L_42, L_43);
		__this->___U3CU3E2__current_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_44);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0149:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0150:
	{
		// Scene loadedScene = default;
		U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* L_45 = __this->___U3CU3E8__1_5;
		NullCheck(L_45);
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_46 = (&L_45->___loadedScene_0);
		il2cpp_codegen_initobj(L_46, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// yield return LoadSceneAsync(newScene, loadSceneParameters, scene => loadedScene = scene);
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_47 = V_1;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_48 = __this->___newScene_4;
		LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E L_49 = __this->___U3CloadSceneParametersU3E5__2_7;
		U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* L_50 = __this->___U3CU3E8__1_5;
		Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* L_51 = (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9*)il2cpp_codegen_object_new(Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		Action_1__ctor_mE6284AC52B30253F1B4E5A2352658355B7BCC262(L_51, L_50, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CSwitchSceneMultiplePeerU3Eb__0_m4D508569C6E5E2605A5E766A3ECF3066DCC86A72_RuntimeMethod_var), NULL);
		NullCheck(L_47);
		YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* L_52;
		L_52 = VirtualFuncInvoker3< YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D*, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E, Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* >::Invoke(13 /* UnityEngine.YieldInstruction Fusion.NetworkSceneManagerDefault::LoadSceneAsync(Fusion.SceneRef,UnityEngine.SceneManagement.LoadSceneParameters,System.Action`1<UnityEngine.SceneManagement.Scene>) */, L_47, L_48, L_49, L_51);
		__this->___U3CU3E2__current_1 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_52);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0193:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!loadedScene.IsValid()) {
		U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* L_53 = __this->___U3CU3E8__1_5;
		NullCheck(L_53);
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_54 = (&L_53->___loadedScene_0);
		bool L_55;
		L_55 = Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599(L_54, NULL);
		if (L_55)
		{
			goto IL_01c7;
		}
	}
	{
		// throw new InvalidOperationException($"Failed to load scene {newScene}: async op failed");
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_56 = __this->___newScene_4;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_57 = L_56;
		RuntimeObject* L_58 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9_il2cpp_TypeInfo_var)), &L_57);
		String_t* L_59;
		L_59 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D499F9502D74C6CAE298A99A188D512CAD6B153)), L_58, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_60 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_60);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_60, L_59, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSwitchSceneMultiplePeerU3Ed__4_MoveNext_mCCAF9BAD9D8DBB44E791E4561F77F3F5BA7EACAD_RuntimeMethod_var)));
	}

IL_01c7:
	{
		// var sceneObjects = FindNetworkObjects(loadedScene, disable: true, addVisibilityNodes: true);
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_61 = V_1;
		U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* L_62 = __this->___U3CU3E8__1_5;
		NullCheck(L_62);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_63 = L_62->___loadedScene_0;
		NullCheck(L_61);
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_64;
		L_64 = NetworkSceneManagerBase_FindNetworkObjects_mD5801F1D58BC4EB5E25A10D7D83B4A7CBED1CFBF(L_61, L_63, (bool)1, (bool)1, NULL);
		__this->___U3CsceneObjectsU3E5__5_10 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsceneObjectsU3E5__5_10), (void*)L_64);
		// var tempScene = Runner.MultiplePeerUnityScene;
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_65 = V_1;
		NullCheck(L_65);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_66;
		L_66 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_65, NULL);
		NullCheck(L_66);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_67;
		L_67 = NetworkRunner_get_MultiplePeerUnityScene_mDCE6D9D72D3127C35F74CADBC5EBC79C833699DF_inline(L_66, NULL);
		V_3 = L_67;
		// Runner.MultiplePeerUnityScene = loadedScene;
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_68 = V_1;
		NullCheck(L_68);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_69;
		L_69 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_68, NULL);
		U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* L_70 = __this->___U3CU3E8__1_5;
		NullCheck(L_70);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_71 = L_70->___loadedScene_0;
		NullCheck(L_69);
		NetworkRunner_set_MultiplePeerUnityScene_mE67B82588A7434CAAAB9235129508F46ED7C48E2(L_69, L_71, NULL);
		// if (tempScene.IsValid()) {
		bool L_72;
		L_72 = Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599((&V_3), NULL);
		if (!L_72)
		{
			goto IL_0261;
		}
	}
	{
		// if (tempSceneSpawnedPrefabs.Length > 0) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_73 = __this->___U3CtempSceneSpawnedPrefabsU3E5__4_9;
		NullCheck(L_73);
		if (!(((RuntimeArray*)L_73)->max_length))
		{
			goto IL_0244;
		}
	}
	{
		// foreach (var go in tempSceneSpawnedPrefabs) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_74 = __this->___U3CtempSceneSpawnedPrefabsU3E5__4_9;
		V_5 = L_74;
		V_6 = 0;
		goto IL_023c;
	}

IL_0221:
	{
		// foreach (var go in tempSceneSpawnedPrefabs) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_75 = V_5;
		int32_t L_76 = V_6;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		// SceneManager.MoveGameObjectToScene(go, loadedScene);
		U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* L_79 = __this->___U3CU3E8__1_5;
		NullCheck(L_79);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_80 = L_79->___loadedScene_0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_MoveGameObjectToScene_m90813BE70C527D3C0FF06BA135AC3B88F851A668(L_78, L_80, NULL);
		int32_t L_81 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_023c:
	{
		// foreach (var go in tempSceneSpawnedPrefabs) {
		int32_t L_82 = V_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_83 = V_5;
		NullCheck(L_83);
		if ((((int32_t)L_82) < ((int32_t)((int32_t)(((RuntimeArray*)L_83)->max_length)))))
		{
			goto IL_0221;
		}
	}

IL_0244:
	{
		// yield return UnloadSceneAsync(tempScene);
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_84 = V_1;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_85 = V_3;
		NullCheck(L_84);
		YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* L_86;
		L_86 = VirtualFuncInvoker1< YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D*, Scene_tA1DC762B79745EB5140F054C884855B922318356 >::Invoke(14 /* UnityEngine.YieldInstruction Fusion.NetworkSceneManagerDefault::UnloadSceneAsync(UnityEngine.SceneManagement.Scene) */, L_84, L_85);
		__this->___U3CU3E2__current_1 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_86);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_025a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0261:
	{
		// finished(sceneObjects);
		FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* L_87 = __this->___finished_6;
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_88 = __this->___U3CsceneObjectsU3E5__5_10;
		NullCheck(L_87);
		FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_inline(L_87, L_88, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSwitchSceneMultiplePeerU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m503D5DBC66BD8D090A27C13C422136A4ADD60AC9 (U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneMultiplePeerU3Ed__4_System_Collections_IEnumerator_Reset_m42947312456A7F84159B07569579F4DA1A7B7BAF (U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSwitchSceneMultiplePeerU3Ed__4_System_Collections_IEnumerator_Reset_m42947312456A7F84159B07569579F4DA1A7B7BAF_RuntimeMethod_var)));
	}
}
// System.Object Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSwitchSceneMultiplePeerU3Ed__4_System_Collections_IEnumerator_get_Current_m793D0AE5729A5632AA8671EF6292ED5B34796914 (U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mB65A57C225C7F50ED007903C075A53E59C91EDC5 (U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0::<SwitchSceneSinglePeer>b__0(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CSwitchSceneSinglePeerU3Eb__0_m82BCA4D1AE3A23C1230106556968AA005B4E93E5 (U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, const RuntimeMethod* method) 
{
	{
		// yield return LoadSceneAsync(newScene, loadSceneParameters, scene => loadedScene = scene);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = ___scene0;
		__this->___loadedScene_0 = L_0;
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
// System.Void Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneSinglePeerU3Ed__5__ctor_mBED5520059D653A64415C85CDC65D7C2411EB6B8 (U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneSinglePeerU3Ed__5_System_IDisposable_Dispose_m78DB90556B69657EAD32A6FD4C17AC15E2A54CC3 (U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSwitchSceneSinglePeerU3Ed__5_MoveNext_mAC4FF417C4452B42641D11DFCE5281B848BF272E (U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CSwitchSceneSinglePeerU3Eb__0_m82BCA4D1AE3A23C1230106556968AA005B4E93E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* V_1 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* V_3 = NULL;
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00b8;
			}
			case 2:
			{
				goto IL_010a;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* L_3 = (U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ec__DisplayClass5_0__ctor_mB65A57C225C7F50ED007903C075A53E59C91EDC5(L_3, NULL);
		__this->___U3CU3E8__1_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)L_3);
		// Scene activeScene = SceneManager.GetActiveScene();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_2 = L_4;
		// bool canTakeOverActiveScene = prevScene == default && IsScenePathOrNameEqual(activeScene, newScene);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_5 = __this->___prevScene_2;
		il2cpp_codegen_initobj((&V_4), sizeof(SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9));
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_6 = V_4;
		bool L_7;
		L_7 = SceneRef_op_Equality_m276FE28D52EC1775F8A866F4396FBC003DFEA4BC(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_8 = V_1;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_9 = V_2;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_10 = __this->___newScene_4;
		NullCheck(L_8);
		bool L_11;
		L_11 = NetworkSceneManagerBase_IsScenePathOrNameEqual_mC14E4BA82C144610610A51D6C5B2D90AA5499E51(L_8, L_9, L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0061;
	}

IL_0060:
	{
		G_B5_0 = 0;
	}

IL_0061:
	{
		// if (canTakeOverActiveScene) {
		if (!G_B5_0)
		{
			goto IL_0071;
		}
	}
	{
		// loadedScene = activeScene;
		U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* L_12 = __this->___U3CU3E8__1_5;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_13 = V_2;
		NullCheck(L_12);
		L_12->___loadedScene_0 = L_13;
		goto IL_00ec;
	}

IL_0071:
	{
		// LoadSceneParameters loadSceneParameters = new LoadSceneParameters(LoadSceneMode.Single);
		LoadSceneParameters__ctor_m40C160638049BF7577055B3460968F8B73459380((&V_5), 0, NULL);
		// loadedScene = default;
		U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* L_14 = __this->___U3CU3E8__1_5;
		NullCheck(L_14);
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_15 = (&L_14->___loadedScene_0);
		il2cpp_codegen_initobj(L_15, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// yield return LoadSceneAsync(newScene, loadSceneParameters, scene => loadedScene = scene);
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_16 = V_1;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_17 = __this->___newScene_4;
		LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E L_18 = V_5;
		U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* L_19 = __this->___U3CU3E8__1_5;
		Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* L_20 = (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9*)il2cpp_codegen_object_new(Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Action_1__ctor_mE6284AC52B30253F1B4E5A2352658355B7BCC262(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CSwitchSceneSinglePeerU3Eb__0_m82BCA4D1AE3A23C1230106556968AA005B4E93E5_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* L_21;
		L_21 = VirtualFuncInvoker3< YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D*, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E, Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* >::Invoke(13 /* UnityEngine.YieldInstruction Fusion.NetworkSceneManagerDefault::LoadSceneAsync(Fusion.SceneRef,UnityEngine.SceneManagement.LoadSceneParameters,System.Action`1<UnityEngine.SceneManagement.Scene>) */, L_16, L_17, L_18, L_20);
		__this->___U3CU3E2__current_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_21);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00b8:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!loadedScene.IsValid()) {
		U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* L_22 = __this->___U3CU3E8__1_5;
		NullCheck(L_22);
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_23 = (&L_22->___loadedScene_0);
		bool L_24;
		L_24 = Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599(L_23, NULL);
		if (L_24)
		{
			goto IL_00ec;
		}
	}
	{
		// throw new InvalidOperationException($"Failed to load scene {newScene}: async op failed");
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_25 = __this->___newScene_4;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_26 = L_25;
		RuntimeObject* L_27 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9_il2cpp_TypeInfo_var)), &L_26);
		String_t* L_28;
		L_28 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D499F9502D74C6CAE298A99A188D512CAD6B153)), L_27, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_29 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_29, L_28, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSwitchSceneSinglePeerU3Ed__5_MoveNext_mAC4FF417C4452B42641D11DFCE5281B848BF272E_RuntimeMethod_var)));
	}

IL_00ec:
	{
		// for (int i = PostLoadDelayFrames; i > 0; --i) {
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_30 = V_1;
		NullCheck(L_30);
		int32_t L_31 = L_30->___PostLoadDelayFrames_10;
		__this->___U3CiU3E5__2_7 = L_31;
		goto IL_0123;
	}

IL_00fa:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_010a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = PostLoadDelayFrames; i > 0; --i) {
		int32_t L_32 = __this->___U3CiU3E5__2_7;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		int32_t L_33 = V_6;
		__this->___U3CiU3E5__2_7 = L_33;
	}

IL_0123:
	{
		// for (int i = PostLoadDelayFrames; i > 0; --i) {
		int32_t L_34 = __this->___U3CiU3E5__2_7;
		if ((((int32_t)L_34) > ((int32_t)0)))
		{
			goto IL_00fa;
		}
	}
	{
		// var sceneObjects = FindNetworkObjects(loadedScene, disable: true);
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_35 = V_1;
		U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* L_36 = __this->___U3CU3E8__1_5;
		NullCheck(L_36);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_37 = L_36->___loadedScene_0;
		NullCheck(L_35);
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_38;
		L_38 = NetworkSceneManagerBase_FindNetworkObjects_mD5801F1D58BC4EB5E25A10D7D83B4A7CBED1CFBF(L_35, L_37, (bool)1, (bool)0, NULL);
		V_3 = L_38;
		// finished(sceneObjects);
		FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* L_39 = __this->___finished_6;
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_40 = V_3;
		NullCheck(L_39);
		FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_inline(L_39, L_40, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSwitchSceneSinglePeerU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m14563F08C781C0C10AD545FBDC5492582D5C705F (U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneSinglePeerU3Ed__5_System_Collections_IEnumerator_Reset_m1C3DD543555F33C88C9F974C36682A1451D8B751 (U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSwitchSceneSinglePeerU3Ed__5_System_Collections_IEnumerator_Reset_m1C3DD543555F33C88C9F974C36682A1451D8B751_RuntimeMethod_var)));
	}
}
// System.Object Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSwitchSceneSinglePeerU3Ed__5_System_Collections_IEnumerator_get_Current_m9B5FF7F2A56F7B5FC64C90A1948A4A664E9B5AFC (U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// UnityEngine.Bounds Fusion.Editor.BoundsTools::CollectMyBounds(UnityEngine.GameObject,Fusion.Editor.BoundsTools/BoundsType,System.Int32&,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 BoundsTools_CollectMyBounds_m1F54966928E0913E0EC497ABF009CCD616E9D43F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, int32_t ___factorIn1, int32_t* ___numOfBoundsFound2, bool ___includeChildren3, bool ___includeInactive4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mA5584260A845566F11731CDDE7AF216E044BEE7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mADF65DE232F8B1518C734CA9A1D60F1D4A4CC374_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mF756FB30A88DDCBFAE2F1811FEC9FA4CDED0DE2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m39DE337508D2ADD39AC2AAE01AB0FFEA7583601F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6405D497F14EEE2F172D1D82E55881EA9385B40B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m0CD3227FF22984AB1F8A80030A70A3921A439EF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m84278021B82DC03648708BEFE1521002F9CACBA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mD3AA9DE8ED9C3C202BED617A4EA8CAD29E799999_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mBB103B375AB35BB10A810994CFB39ACA5335AEB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mD1C82F35AB4D7DB1DC1D8138EBC6679456DBC940_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE750EBF74E88E67DF4737B6A5F3594338FAA2132_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m47377D7758798C489896B13DDD6EAFEC1B6D9917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m567A0E8ADE485441540D5B46AB6C518558DDA2FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m83D0AB87CBF92DF59992C02F675DD3DCBB805753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m909AB75DE2253A8B9D7AB3E65CDCDC42BB92DEC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mCE9E8AEA0E6245078585C01E04AF1D72D2B62760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B36_0 = 0;
	{
		// if (!go.activeInHierarchy && !!includeInactive) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2 = ___includeInactive4;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// numOfBoundsFound = 0;
		int32_t* L_3 = ___numOfBoundsFound2;
		*((int32_t*)L_3) = (int32_t)0;
		// return new Bounds();
		il2cpp_codegen_initobj((&V_3), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_4 = V_3;
		return L_4;
	}

IL_0019:
	{
		// bool bothtype = factorIn == BoundsType.Both;
		int32_t L_5 = ___factorIn1;
		// bool rendtype = bothtype || factorIn == BoundsType.MeshRenderer;
		int32_t L_6 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_0026;
		}
	}
	{
		int32_t L_7 = ___factorIn1;
		G_B6_0 = ((((int32_t)L_7) == ((int32_t)1))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0027;
	}

IL_0026:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0027:
	{
		V_0 = (bool)G_B6_0;
		// bool colltype = bothtype || factorIn == BoundsType.Collider;
		if (G_B6_1)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_8 = ___factorIn1;
		G_B9_0 = ((((int32_t)L_8) == ((int32_t)2))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B9_0 = 1;
	}

IL_0031:
	{
		// meshFilters.Clear();
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_9 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshFilters_0;
		NullCheck(L_9);
		List_1_Clear_m47377D7758798C489896B13DDD6EAFEC1B6D9917_inline(L_9, List_1_Clear_m47377D7758798C489896B13DDD6EAFEC1B6D9917_RuntimeMethod_var);
		// meshRenderers.Clear();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_10 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		NullCheck(L_10);
		List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_inline(L_10, List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var);
		// colliders.Clear();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_11 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2;
		NullCheck(L_11);
		List_1_Clear_m567A0E8ADE485441540D5B46AB6C518558DDA2FE_inline(L_11, List_1_Clear_m567A0E8ADE485441540D5B46AB6C518558DDA2FE_RuntimeMethod_var);
		// spriteRenderers.Clear();
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_12 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4;
		NullCheck(L_12);
		List_1_Clear_m83D0AB87CBF92DF59992C02F675DD3DCBB805753_inline(L_12, List_1_Clear_m83D0AB87CBF92DF59992C02F675DD3DCBB805753_RuntimeMethod_var);
		// validColliders.Clear();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_13 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3;
		NullCheck(L_13);
		List_1_Clear_m567A0E8ADE485441540D5B46AB6C518558DDA2FE_inline(L_13, List_1_Clear_m567A0E8ADE485441540D5B46AB6C518558DDA2FE_RuntimeMethod_var);
		// validColliders2D.Clear();
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_14 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		NullCheck(L_14);
		List_1_Clear_m909AB75DE2253A8B9D7AB3E65CDCDC42BB92DEC3_inline(L_14, List_1_Clear_m909AB75DE2253A8B9D7AB3E65CDCDC42BB92DEC3_RuntimeMethod_var);
		// int myBoundsCount = 0;
		V_1 = 0;
		// if (rendtype) {
		bool L_15 = V_0;
		G_B10_0 = G_B9_0;
		if (!L_15)
		{
			G_B14_0 = G_B9_0;
			goto IL_00c7;
		}
	}
	{
		// if (go.activeInHierarchy) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = ___go0;
		NullCheck(L_16);
		bool L_17;
		L_17 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_16, NULL);
		G_B11_0 = G_B10_0;
		if (!L_17)
		{
			G_B14_0 = G_B10_0;
			goto IL_00c7;
		}
	}
	{
		// if (includeChildren) {
		bool L_18 = ___includeChildren3;
		G_B12_0 = G_B11_0;
		if (!L_18)
		{
			G_B13_0 = G_B11_0;
			goto IL_00a6;
		}
	}
	{
		// go.GetComponentsInChildren(includeInactive, meshRenderers);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = ___go0;
		bool L_20 = ___includeInactive4;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_21 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		NullCheck(L_19);
		GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m39DE337508D2ADD39AC2AAE01AB0FFEA7583601F(L_19, L_20, L_21, GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m39DE337508D2ADD39AC2AAE01AB0FFEA7583601F_RuntimeMethod_var);
		// go.GetComponentsInChildren(includeInactive, meshFilters);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = ___go0;
		bool L_23 = ___includeInactive4;
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_24 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshFilters_0;
		NullCheck(L_22);
		GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mF756FB30A88DDCBFAE2F1811FEC9FA4CDED0DE2F(L_22, L_23, L_24, GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mF756FB30A88DDCBFAE2F1811FEC9FA4CDED0DE2F_RuntimeMethod_var);
		// go.GetComponentsInChildren(includeInactive, spriteRenderers);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = ___go0;
		bool L_26 = ___includeInactive4;
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_27 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4;
		NullCheck(L_25);
		GameObject_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6405D497F14EEE2F172D1D82E55881EA9385B40B(L_25, L_26, L_27, GameObject_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6405D497F14EEE2F172D1D82E55881EA9385B40B_RuntimeMethod_var);
		G_B14_0 = G_B12_0;
		goto IL_00c7;
	}

IL_00a6:
	{
		// go.GetComponents(meshRenderers);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = ___go0;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_29 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		NullCheck(L_28);
		GameObject_GetComponents_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mBB103B375AB35BB10A810994CFB39ACA5335AEB7(L_28, L_29, GameObject_GetComponents_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mBB103B375AB35BB10A810994CFB39ACA5335AEB7_RuntimeMethod_var);
		// go.GetComponents(meshFilters);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = ___go0;
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_31 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshFilters_0;
		NullCheck(L_30);
		GameObject_GetComponents_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mD3AA9DE8ED9C3C202BED617A4EA8CAD29E799999(L_30, L_31, GameObject_GetComponents_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mD3AA9DE8ED9C3C202BED617A4EA8CAD29E799999_RuntimeMethod_var);
		// go.GetComponents(spriteRenderers);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = ___go0;
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_33 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4;
		NullCheck(L_32);
		GameObject_GetComponents_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mD1C82F35AB4D7DB1DC1D8138EBC6679456DBC940(L_32, L_33, GameObject_GetComponents_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mD1C82F35AB4D7DB1DC1D8138EBC6679456DBC940_RuntimeMethod_var);
		G_B14_0 = G_B13_0;
	}

IL_00c7:
	{
		// if (colltype) {
		if (!G_B14_0)
		{
			goto IL_0106;
		}
	}
	{
		// if (go.activeInHierarchy) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = ___go0;
		NullCheck(L_34);
		bool L_35;
		L_35 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_34, NULL);
		if (!L_35)
		{
			goto IL_0106;
		}
	}
	{
		// if (includeChildren) {
		bool L_36 = ___includeChildren3;
		if (!L_36)
		{
			goto IL_00f0;
		}
	}
	{
		// go.GetComponentsInChildren(includeInactive, colliders);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = ___go0;
		bool L_38 = ___includeInactive4;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_39 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2;
		NullCheck(L_37);
		GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mADF65DE232F8B1518C734CA9A1D60F1D4A4CC374(L_37, L_38, L_39, GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mADF65DE232F8B1518C734CA9A1D60F1D4A4CC374_RuntimeMethod_var);
		// go.GetComponentsInChildren(includeInactive, colliders2D);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = ___go0;
		bool L_41 = ___includeInactive4;
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_42 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5;
		NullCheck(L_40);
		GameObject_GetComponentsInChildren_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mA5584260A845566F11731CDDE7AF216E044BEE7A(L_40, L_41, L_42, GameObject_GetComponentsInChildren_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mA5584260A845566F11731CDDE7AF216E044BEE7A_RuntimeMethod_var);
		goto IL_0106;
	}

IL_00f0:
	{
		// go.GetComponents(colliders);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = ___go0;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_44 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2;
		NullCheck(L_43);
		GameObject_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m84278021B82DC03648708BEFE1521002F9CACBA4(L_43, L_44, GameObject_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m84278021B82DC03648708BEFE1521002F9CACBA4_RuntimeMethod_var);
		// go.GetComponents(colliders2D);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = ___go0;
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_46 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5;
		NullCheck(L_45);
		GameObject_GetComponents_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m0CD3227FF22984AB1F8A80030A70A3921A439EF5(L_45, L_46, GameObject_GetComponents_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m0CD3227FF22984AB1F8A80030A70A3921A439EF5_RuntimeMethod_var);
	}

IL_0106:
	{
		// for (int i = 0; i < meshFilters.Count; i++) {
		V_4 = 0;
		goto IL_0153;
	}

IL_010b:
	{
		// Renderer mr = meshFilters[i].GetComponent<Renderer>();
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_47 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshFilters_0;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_49;
		L_49 = List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348(L_47, L_48, List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var);
		NullCheck(L_49);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_50;
		L_50 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_49, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_5 = L_50;
		// if (mr && (mr.enabled || includeInactive)) {
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_51 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_51, NULL);
		if (!L_52)
		{
			goto IL_014d;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_53 = V_5;
		NullCheck(L_53);
		bool L_54;
		L_54 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_53, NULL);
		bool L_55 = ___includeInactive4;
		if (!((int32_t)((int32_t)L_54|(int32_t)L_55)))
		{
			goto IL_014d;
		}
	}
	{
		// if (!meshRenderers.Contains(mr))
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_56 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_57 = V_5;
		NullCheck(L_56);
		bool L_58;
		L_58 = List_1_Contains_mCE9E8AEA0E6245078585C01E04AF1D72D2B62760(L_56, L_57, List_1_Contains_mCE9E8AEA0E6245078585C01E04AF1D72D2B62760_RuntimeMethod_var);
		if (L_58)
		{
			goto IL_014d;
		}
	}
	{
		// meshRenderers.Add(mr);
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_59 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_60 = V_5;
		NullCheck(L_59);
		List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_inline(L_59, L_60, List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var);
	}

IL_014d:
	{
		// for (int i = 0; i < meshFilters.Count; i++) {
		int32_t L_61 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0153:
	{
		// for (int i = 0; i < meshFilters.Count; i++) {
		int32_t L_62 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_63 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshFilters_0;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_inline(L_63, List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var);
		if ((((int32_t)L_62) < ((int32_t)L_64)))
		{
			goto IL_010b;
		}
	}
	{
		// for (int i = 0; i < colliders.Count; i++) {
		V_6 = 0;
		goto IL_01ab;
	}

IL_0166:
	{
		// if (colliders[i].enabled || includeInactive)
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_65 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2;
		int32_t L_66 = V_6;
		NullCheck(L_65);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_67;
		L_67 = List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587(L_65, L_66, List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		NullCheck(L_67);
		bool L_68;
		L_68 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_67, NULL);
		bool L_69 = ___includeInactive4;
		if (!((int32_t)((int32_t)L_68|(int32_t)L_69)))
		{
			goto IL_01a5;
		}
	}
	{
		// if (colliders[i])
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_70 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2;
		int32_t L_71 = V_6;
		NullCheck(L_70);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_72;
		L_72 = List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587(L_70, L_71, List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_72, NULL);
		if (!L_73)
		{
			goto IL_01a5;
		}
	}
	{
		// validColliders.Add(colliders[i]);
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_74 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_75 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2;
		int32_t L_76 = V_6;
		NullCheck(L_75);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_77;
		L_77 = List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587(L_75, L_76, List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		NullCheck(L_74);
		List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_inline(L_74, L_77, List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var);
	}

IL_01a5:
	{
		// for (int i = 0; i < colliders.Count; i++) {
		int32_t L_78 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01ab:
	{
		// for (int i = 0; i < colliders.Count; i++) {
		int32_t L_79 = V_6;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_80 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2;
		NullCheck(L_80);
		int32_t L_81;
		L_81 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_80, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		if ((((int32_t)L_79) < ((int32_t)L_81)))
		{
			goto IL_0166;
		}
	}
	{
		// for (int i = 0; i < colliders2D.Count; i++) {
		V_7 = 0;
		goto IL_0219;
	}

IL_01be:
	{
		// if (colliders2D[i] && colliders2D[i].enabled || includeInactive)
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_82 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5;
		int32_t L_83 = V_7;
		NullCheck(L_82);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_84;
		L_84 = List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC(L_82, L_83, List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_85;
		L_85 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_84, NULL);
		if (!L_85)
		{
			goto IL_01e4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_86 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5;
		int32_t L_87 = V_7;
		NullCheck(L_86);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_88;
		L_88 = List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC(L_86, L_87, List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		NullCheck(L_88);
		bool L_89;
		L_89 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_88, NULL);
		G_B36_0 = ((int32_t)(L_89));
		goto IL_01e5;
	}

IL_01e4:
	{
		G_B36_0 = 0;
	}

IL_01e5:
	{
		bool L_90 = ___includeInactive4;
		if (!((int32_t)(G_B36_0|(int32_t)L_90)))
		{
			goto IL_0213;
		}
	}
	{
		// if (colliders2D[i])
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_91 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5;
		int32_t L_92 = V_7;
		NullCheck(L_91);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_93;
		L_93 = List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC(L_91, L_92, List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_94;
		L_94 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_93, NULL);
		if (!L_94)
		{
			goto IL_0213;
		}
	}
	{
		// validColliders2D.Add(colliders2D[i]);
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_95 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_96 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5;
		int32_t L_97 = V_7;
		NullCheck(L_96);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_98;
		L_98 = List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC(L_96, L_97, List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		NullCheck(L_95);
		List_1_Add_mE750EBF74E88E67DF4737B6A5F3594338FAA2132_inline(L_95, L_98, List_1_Add_mE750EBF74E88E67DF4737B6A5F3594338FAA2132_RuntimeMethod_var);
	}

IL_0213:
	{
		// for (int i = 0; i < colliders2D.Count; i++) {
		int32_t L_99 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_99, 1));
	}

IL_0219:
	{
		// for (int i = 0; i < colliders2D.Count; i++) {
		int32_t L_100 = V_7;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_101 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5;
		NullCheck(L_101);
		int32_t L_102;
		L_102 = List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_inline(L_101, List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_RuntimeMethod_var);
		if ((((int32_t)L_100) < ((int32_t)L_102)))
		{
			goto IL_01be;
		}
	}
	{
		//       numOfBoundsFound =
		//         meshRenderers.Count +
		//         spriteRenderers.Count +
		//         validColliders.Count
		// #if !DISABLE_PHYSICS_2D
		//         + validColliders2D.Count
		// #endif
		//         ;
		int32_t* L_103 = ___numOfBoundsFound2;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_104 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		NullCheck(L_104);
		int32_t L_105;
		L_105 = List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_inline(L_104, List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var);
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_106 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4;
		NullCheck(L_106);
		int32_t L_107;
		L_107 = List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_inline(L_106, List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_RuntimeMethod_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_108 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3;
		NullCheck(L_108);
		int32_t L_109;
		L_109 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_108, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_110 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		NullCheck(L_110);
		int32_t L_111;
		L_111 = List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_inline(L_110, List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_RuntimeMethod_var);
		*((int32_t*)L_103) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_105, L_107)), L_109)), L_111));
		// if (numOfBoundsFound == 0) {
		int32_t* L_112 = ___numOfBoundsFound2;
		int32_t L_113 = *((int32_t*)L_112);
		if (L_113)
		{
			goto IL_0262;
		}
	}
	{
		// return new Bounds();
		il2cpp_codegen_initobj((&V_3), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_114 = V_3;
		return L_114;
	}

IL_0262:
	{
		// if (meshRenderers.Count > 0)
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_115 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		NullCheck(L_115);
		int32_t L_116;
		L_116 = List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_inline(L_115, List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var);
		if ((((int32_t)L_116) <= ((int32_t)0)))
		{
			goto IL_0282;
		}
	}
	{
		// compositeBounds = meshRenderers[0].bounds;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_117 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		NullCheck(L_117);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_118;
		L_118 = List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2(L_117, 0, List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		NullCheck(L_118);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_119;
		L_119 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_118, NULL);
		V_2 = L_119;
		goto IL_02fe;
	}

IL_0282:
	{
		// else if (validColliders.Count > 0)
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_120 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3;
		NullCheck(L_120);
		int32_t L_121;
		L_121 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_120, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		if ((((int32_t)L_121) <= ((int32_t)0)))
		{
			goto IL_02a2;
		}
	}
	{
		// compositeBounds = validColliders[0].bounds;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_122 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3;
		NullCheck(L_122);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_123;
		L_123 = List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587(L_122, 0, List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		NullCheck(L_123);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_124;
		L_124 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_123, NULL);
		V_2 = L_124;
		goto IL_02fe;
	}

IL_02a2:
	{
		// else if (validColliders2D.Count > 0 && validColliders2D[0])
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_125 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		NullCheck(L_125);
		int32_t L_126;
		L_126 = List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_inline(L_125, List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_RuntimeMethod_var);
		if ((((int32_t)L_126) <= ((int32_t)0)))
		{
			goto IL_02d4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_127 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		NullCheck(L_127);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_128;
		L_128 = List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC(L_127, 0, List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_129;
		L_129 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_128, NULL);
		if (!L_129)
		{
			goto IL_02d4;
		}
	}
	{
		// compositeBounds = validColliders2D[0].bounds;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_130 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		NullCheck(L_130);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_131;
		L_131 = List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC(L_130, 0, List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		NullCheck(L_131);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_132;
		L_132 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_131, NULL);
		V_2 = L_132;
		goto IL_02fe;
	}

IL_02d4:
	{
		// else if (spriteRenderers.Count > 0)
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_133 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4;
		NullCheck(L_133);
		int32_t L_134;
		L_134 = List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_inline(L_133, List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_RuntimeMethod_var);
		if ((((int32_t)L_134) <= ((int32_t)0)))
		{
			goto IL_02f4;
		}
	}
	{
		// compositeBounds = spriteRenderers[0].bounds;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_135 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4;
		NullCheck(L_135);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_136;
		L_136 = List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020(L_135, 0, List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020_RuntimeMethod_var);
		NullCheck(L_136);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_137;
		L_137 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_136, NULL);
		V_2 = L_137;
		goto IL_02fe;
	}

IL_02f4:
	{
		// return new Bounds();
		il2cpp_codegen_initobj((&V_3), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_138 = V_3;
		return L_138;
	}

IL_02fe:
	{
		// for (int i = 0; i < spriteRenderers.Count; i++) {
		V_8 = 0;
		goto IL_0325;
	}

IL_0303:
	{
		// myBoundsCount++;
		int32_t L_139 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_139, 1));
		// compositeBounds.Encapsulate(spriteRenderers[i].bounds);
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_140 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4;
		int32_t L_141 = V_8;
		NullCheck(L_140);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142;
		L_142 = List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020(L_140, L_141, List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020_RuntimeMethod_var);
		NullCheck(L_142);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_143;
		L_143 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_142, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_2), L_143, NULL);
		// for (int i = 0; i < spriteRenderers.Count; i++) {
		int32_t L_144 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_144, 1));
	}

IL_0325:
	{
		// for (int i = 0; i < spriteRenderers.Count; i++) {
		int32_t L_145 = V_8;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_146 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4;
		NullCheck(L_146);
		int32_t L_147;
		L_147 = List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_inline(L_146, List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_RuntimeMethod_var);
		if ((((int32_t)L_145) < ((int32_t)L_147)))
		{
			goto IL_0303;
		}
	}
	{
		// for (int i = 0; i < meshRenderers.Count; i++) {
		V_9 = 0;
		goto IL_035a;
	}

IL_0338:
	{
		// myBoundsCount++;
		int32_t L_148 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_148, 1));
		// compositeBounds.Encapsulate(meshRenderers[i].bounds);
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_149 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		int32_t L_150 = V_9;
		NullCheck(L_149);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_151;
		L_151 = List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2(L_149, L_150, List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		NullCheck(L_151);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_152;
		L_152 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_151, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_2), L_152, NULL);
		// for (int i = 0; i < meshRenderers.Count; i++) {
		int32_t L_153 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_153, 1));
	}

IL_035a:
	{
		// for (int i = 0; i < meshRenderers.Count; i++) {
		int32_t L_154 = V_9;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_155 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		NullCheck(L_155);
		int32_t L_156;
		L_156 = List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_inline(L_155, List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var);
		if ((((int32_t)L_154) < ((int32_t)L_156)))
		{
			goto IL_0338;
		}
	}
	{
		// for (int i = 0; i < validColliders.Count; i++) {
		V_10 = 0;
		goto IL_038f;
	}

IL_036d:
	{
		// myBoundsCount++;
		int32_t L_157 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_157, 1));
		// compositeBounds.Encapsulate(validColliders[i].bounds);
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_158 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3;
		int32_t L_159 = V_10;
		NullCheck(L_158);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_160;
		L_160 = List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587(L_158, L_159, List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		NullCheck(L_160);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_161;
		L_161 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_160, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_2), L_161, NULL);
		// for (int i = 0; i < validColliders.Count; i++) {
		int32_t L_162 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_162, 1));
	}

IL_038f:
	{
		// for (int i = 0; i < validColliders.Count; i++) {
		int32_t L_163 = V_10;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_164 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3;
		NullCheck(L_164);
		int32_t L_165;
		L_165 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_164, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		if ((((int32_t)L_163) < ((int32_t)L_165)))
		{
			goto IL_036d;
		}
	}
	{
		// for (int i = 0; i < validColliders2D.Count; i++) {
		V_11 = 0;
		goto IL_03d7;
	}

IL_03a2:
	{
		// myBoundsCount++;
		int32_t L_166 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_166, 1));
		// if (validColliders2D[i])
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_167 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		int32_t L_168 = V_11;
		NullCheck(L_167);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_169;
		L_169 = List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC(L_167, L_168, List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_170;
		L_170 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_169, NULL);
		if (!L_170)
		{
			goto IL_03d1;
		}
	}
	{
		// compositeBounds.Encapsulate(validColliders2D[i].bounds);
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_171 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		int32_t L_172 = V_11;
		NullCheck(L_171);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_173;
		L_173 = List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC(L_171, L_172, List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		NullCheck(L_173);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_174;
		L_174 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_173, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_2), L_174, NULL);
	}

IL_03d1:
	{
		// for (int i = 0; i < validColliders2D.Count; i++) {
		int32_t L_175 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_175, 1));
	}

IL_03d7:
	{
		// for (int i = 0; i < validColliders2D.Count; i++) {
		int32_t L_176 = V_11;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_177 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		NullCheck(L_177);
		int32_t L_178;
		L_178 = List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_inline(L_177, List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_RuntimeMethod_var);
		if ((((int32_t)L_176) < ((int32_t)L_178)))
		{
			goto IL_03a2;
		}
	}
	{
		// return compositeBounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_179 = V_2;
		return L_179;
	}
}
// UnityEngine.Bounds Fusion.Editor.BoundsTools::CollectMyBounds(UnityEngine.GameObject,Fusion.Editor.BoundsTools/BoundsType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 BoundsTools_CollectMyBounds_m067BED31879EAC48C1293932692F7CC2BA9C7618 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, int32_t ___factorIn1, bool ___includeChildren2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return CollectMyBounds(go, factorIn, out dummy, includeChildren);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		int32_t L_1 = ___factorIn1;
		bool L_2 = ___includeChildren2;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_3;
		L_3 = BoundsTools_CollectMyBounds_m1F54966928E0913E0EC497ABF009CCD616E9D43F(L_0, L_1, (&V_0), L_2, (bool)0, NULL);
		return L_3;
	}
}
// System.Void Fusion.Editor.BoundsTools::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsTools__cctor_m628C590ACE1E843803F4FC3464946647E020926D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6E83AE2DD08C6F347070F297A225B37FC4A2ADFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<MeshFilter> meshFilters = new List<MeshFilter>();
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_0 = (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*)il2cpp_codegen_object_new(List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C(L_0, List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var);
		((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshFilters_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshFilters_0), (void*)L_0);
		// private static readonly List<Renderer> meshRenderers = new List<Renderer>();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_1 = (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*)il2cpp_codegen_object_new(List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE(L_1, List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1), (void*)L_1);
		// private static readonly List<Collider> colliders = new List<Collider>();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_2 = (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*)il2cpp_codegen_object_new(List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE(L_2, List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2), (void*)L_2);
		// private static readonly List<Collider> validColliders = new List<Collider>();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_3 = (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*)il2cpp_codegen_object_new(List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE(L_3, List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3), (void*)L_3);
		// private static readonly List<SpriteRenderer> spriteRenderers = new List<SpriteRenderer>();
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_4 = (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*)il2cpp_codegen_object_new(List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m6E83AE2DD08C6F347070F297A225B37FC4A2ADFA(L_4, List_1__ctor_m6E83AE2DD08C6F347070F297A225B37FC4A2ADFA_RuntimeMethod_var);
		((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4), (void*)L_4);
		// private static readonly List<Collider2D> colliders2D = new List<Collider2D>();
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_5 = (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*)il2cpp_codegen_object_new(List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7(L_5, List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7_RuntimeMethod_var);
		((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5), (void*)L_5);
		// private static readonly List<Collider2D> validColliders2D = new List<Collider2D>();
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_6 = (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*)il2cpp_codegen_object_new(List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7(L_6, List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7_RuntimeMethod_var);
		((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6), (void*)L_6);
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
// System.Collections.Generic.List`1<System.String> Fusion.StatsInternal.FusionStatsUtilities::get_CachedTelemetryNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* FusionStatsUtilities_get_CachedTelemetryNames_m9D0C4143D1A695C6A523C588C932764190BFE58F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionGraphVisualization_t989F5A867C227A92C199E79C10AD87E7901360B0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (_cachedGraphVisualizationNames == null) {
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____cachedGraphVisualizationNames_5;
		if (L_0)
		{
			goto IL_0071;
		}
	}
	{
		// var enumtype = typeof(FusionGraphVisualization);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (FusionGraphVisualization_t989F5A867C227A92C199E79C10AD87E7901360B0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		V_0 = L_2;
		// var names = System.Enum.GetNames(enumtype);
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = Enum_GetNames_mA16B3D5DABC2AE21290B05053660F925DBFF6D94(L_3, NULL);
		V_1 = L_4;
		// _cachedGraphVisualizationNames = new List<string>(names.Length);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_1;
		NullCheck(L_5);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF(L_6, ((int32_t)(((RuntimeArray*)L_5)->max_length)), List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____cachedGraphVisualizationNames_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____cachedGraphVisualizationNames_5), (void*)L_6);
		// for (int i = 0; i < names.Length; ++i) {
		V_2 = 0;
		goto IL_006b;
	}

IL_002a:
	{
	}
	try
	{// begin try (depth: 1)
		// MemberInfo[] memberInfo = enumtype.GetMember(names[i]);
		Type_t* L_7 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_12;
		L_12 = Type_GetMember_mC4456D1BA93A44CF021059F6D46237C0740A6229(L_7, L_11, NULL);
		// var _Attribs = memberInfo[0].GetCustomAttributes(typeof(System.ComponentModel.DescriptionAttribute), false);
		NullCheck(L_12);
		int32_t L_13 = 0;
		MemberInfo_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17;
		L_17 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_14, L_16, (bool)0);
		// name = ((System.ComponentModel.DescriptionAttribute)(_Attribs[0])).Description;
		NullCheck(L_17);
		int32_t L_18 = 0;
		RuntimeObject* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(((DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86*)CastclassClass((RuntimeObject*)L_19, DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var)));
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DescriptionAttribute::get_Description() */, ((DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86*)CastclassClass((RuntimeObject*)L_19, DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var)));
		V_3 = L_20;
		// } catch {
		goto IL_005c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0055;
		}
		throw e;
	}

CATCH_0055:
	{// begin catch(System.Object)
		// } catch {
		// name = names[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = V_1;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		String_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_3 = L_24;
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005c;
	}// end catch (depth: 1)

IL_005c:
	{
		// _cachedGraphVisualizationNames.Add(name);
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____cachedGraphVisualizationNames_5;
		String_t* L_26 = V_3;
		NullCheck(L_25);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_25, L_26, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (int i = 0; i < names.Length; ++i) {
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_006b:
	{
		// for (int i = 0; i < names.Length; ++i) {
		int32_t L_28 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = V_1;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_002a;
		}
	}

IL_0071:
	{
		// return _cachedGraphVisualizationNames;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_30 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____cachedGraphVisualizationNames_5;
		return L_30;
	}
}
// UnityEngine.Font Fusion.StatsInternal.FusionStatsUtilities::get_Font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* FusionStatsUtilities_get_Font_m8589D1AC74A0BCFA8302603EBD6ADFE1D25AC6FA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_GetBuiltinResource_TisFont_tC95270EA3198038970422D78B74A7F2E218A96B6_m5D498C77B14E440C2C74A22BC3FFB4963CFC3113_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C4303CE90A80E03466A934F3A49CF1FBA75C709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_font == null) {
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_0 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____font_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// _font = Resources.GetBuiltinResource<Font>("Arial.ttf");
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_2;
		L_2 = Resources_GetBuiltinResource_TisFont_tC95270EA3198038970422D78B74A7F2E218A96B6_m5D498C77B14E440C2C74A22BC3FFB4963CFC3113(_stringLiteral1C4303CE90A80E03466A934F3A49CF1FBA75C709, Resources_GetBuiltinResource_TisFont_tC95270EA3198038970422D78B74A7F2E218A96B6_m5D498C77B14E440C2C74A22BC3FFB4963CFC3113_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____font_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____font_6), (void*)L_2);
	}

IL_001c:
	{
		// return _font;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_3 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____font_6;
		return L_3;
	}
}
// UnityEngine.Texture2D Fusion.StatsInternal.FusionStatsUtilities::get_MeterTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* FusionStatsUtilities_get_MeterTexture_mED068CA007E10366DB7A2C0CB0029EE89D4A65BE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	{
		// if (_meterTexture == null) {
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____meterTexture_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_008a;
		}
	}
	{
		// var tex = new Texture2D(METER_TEXTURE_WIDTH, 2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_2, ((int32_t)512), 2, NULL);
		V_0 = L_2;
		// for (int x = 0; x < METER_TEXTURE_WIDTH; ++x) {
		V_1 = 0;
		goto IL_0074;
	}

IL_001d:
	{
		// for (int y = 0; y < 2; ++y) {
		V_2 = 0;
		goto IL_006c;
	}

IL_0021:
	{
		// var color = (x != 0 && x % 16 == 0) ? new Color(1f, 1f, 1f, 0.75f) : new Color(1f, 1f, 1f, 1f);
		int32_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_1;
		if (!((int32_t)(L_4%((int32_t)16))))
		{
			goto IL_0045;
		}
	}

IL_002a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_5), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		G_B7_0 = L_5;
		goto IL_005e;
	}

IL_0045:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_6), (1.0f), (1.0f), (1.0f), (0.75f), /*hidden argument*/NULL);
		G_B7_0 = L_6;
	}

IL_005e:
	{
		V_3 = G_B7_0;
		// tex.SetPixel(x, y, color);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_3;
		NullCheck(L_7);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_7, L_8, L_9, L_10, NULL);
		// for (int y = 0; y < 2; ++y) {
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_006c:
	{
		// for (int y = 0; y < 2; ++y) {
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		// for (int x = 0; x < METER_TEXTURE_WIDTH; ++x) {
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0074:
	{
		// for (int x = 0; x < METER_TEXTURE_WIDTH; ++x) {
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)512))))
		{
			goto IL_001d;
		}
	}
	{
		// tex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = V_0;
		NullCheck(L_15);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_15, NULL);
		// return _meterTexture = tex;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = L_16;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____meterTexture_8 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____meterTexture_8), (void*)L_17);
		return L_17;
	}

IL_008a:
	{
		// return _meterTexture;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____meterTexture_8;
		return L_18;
	}
}
// UnityEngine.Sprite Fusion.StatsInternal.FusionStatsUtilities::get_MeterSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* FusionStatsUtilities_get_MeterSprite_mA424754AA5BD146D52B196594C4124DE47329C56 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_meterSprite == null) {
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____meterSprite_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// _meterSprite = Sprite.Create(MeterTexture, new Rect(0, 0, METER_TEXTURE_WIDTH, 2), new Vector2());
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = FusionStatsUtilities_get_MeterTexture_mED068CA007E10366DB7A2C0CB0029EE89D4A65BE(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_3), (0.0f), (0.0f), (512.0f), (2.0f), /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5;
		L_5 = Sprite_Create_m52CEA0C28557793072A08CF911ACE8C6C550BE79(L_2, L_3, L_4, NULL);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____meterSprite_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____meterSprite_9), (void*)L_5);
	}

IL_003e:
	{
		// return _meterSprite;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____meterSprite_9;
		return L_6;
	}
}
// UnityEngine.Texture2D Fusion.StatsInternal.FusionStatsUtilities::get_Circle32Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* FusionStatsUtilities_get_Circle32Texture_m0CAB14DF4E3770CA811B6F9CC5162B2FE6CDBE38 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	float V_4 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_5;
	memset((&V_5), 0, sizeof(V_5));
	float G_B8_0 = 0.0f;
	{
		// if (_circle32Texture == null) {
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____circle32Texture_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00f3;
		}
	}
	{
		// var tex = new Texture2D(R * 2, R * 2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_2, ((int32_t)128), ((int32_t)128), NULL);
		V_0 = L_2;
		// for (int x = 0; x < R; ++x) {
		V_1 = 0;
		goto IL_00dd;
	}

IL_0027:
	{
		// for (int y = 0; y < R; ++y) {
		V_2 = 0;
		goto IL_00d1;
	}

IL_002e:
	{
		// double h = System.Math.Abs( System.Math.Sqrt(x * x + y * y));
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = sqrt(((double)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3, L_4)), ((int32_t)il2cpp_codegen_multiply(L_5, L_6))))));
		double L_8;
		L_8 = fabs(L_7);
		V_3 = L_8;
		// float a = h > R ? 0.0f : h < (R - 1) ? 1.0f :(float) (R - h);
		double L_9 = V_3;
		if ((((double)L_9) > ((double)(64.0))))
		{
			goto IL_006e;
		}
	}
	{
		double L_10 = V_3;
		if ((((double)L_10) < ((double)(63.0))))
		{
			goto IL_0067;
		}
	}
	{
		double L_11 = V_3;
		G_B8_0 = ((float)((double)il2cpp_codegen_subtract((64.0), L_11)));
		goto IL_0073;
	}

IL_0067:
	{
		G_B8_0 = (1.0f);
		goto IL_0073;
	}

IL_006e:
	{
		G_B8_0 = (0.0f);
	}

IL_0073:
	{
		V_4 = G_B8_0;
		// var c = new Color(1.0f, 1.0f, 1.0f, a);
		float L_12 = V_4;
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_5), (1.0f), (1.0f), (1.0f), L_12, NULL);
		// tex.SetPixel(R + 0 + x, R + 0 + y, c);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = V_5;
		NullCheck(L_13);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_13, ((int32_t)il2cpp_codegen_add(((int32_t)64), L_14)), ((int32_t)il2cpp_codegen_add(((int32_t)64), L_15)), L_16, NULL);
		// tex.SetPixel(R - 1 - x, R + 0 + y, c);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = V_5;
		NullCheck(L_17);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_17, ((int32_t)il2cpp_codegen_subtract(((int32_t)63), L_18)), ((int32_t)il2cpp_codegen_add(((int32_t)64), L_19)), L_20, NULL);
		// tex.SetPixel(R + 0 + x, R - 1 - y, c);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = V_5;
		NullCheck(L_21);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_21, ((int32_t)il2cpp_codegen_add(((int32_t)64), L_22)), ((int32_t)il2cpp_codegen_subtract(((int32_t)63), L_23)), L_24, NULL);
		// tex.SetPixel(R - 1 - x, R - 1 - y, c);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = V_0;
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_5;
		NullCheck(L_25);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_25, ((int32_t)il2cpp_codegen_subtract(((int32_t)63), L_26)), ((int32_t)il2cpp_codegen_subtract(((int32_t)63), L_27)), L_28, NULL);
		// for (int y = 0; y < R; ++y) {
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00d1:
	{
		// for (int y = 0; y < R; ++y) {
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)64))))
		{
			goto IL_002e;
		}
	}
	{
		// for (int x = 0; x < R; ++x) {
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00dd:
	{
		// for (int x = 0; x < R; ++x) {
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)64))))
		{
			goto IL_0027;
		}
	}
	{
		// tex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = V_0;
		NullCheck(L_33);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_33, NULL);
		// return _circle32Texture = tex;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_35 = L_34;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____circle32Texture_11 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____circle32Texture_11), (void*)L_35);
		return L_35;
	}

IL_00f3:
	{
		// return _circle32Texture;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_36 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____circle32Texture_11;
		return L_36;
	}
}
// UnityEngine.Sprite Fusion.StatsInternal.FusionStatsUtilities::get_CircleSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* FusionStatsUtilities_get_CircleSprite_mFE6F6ECEC146CF4C13764F17CF40EC017E73753D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_circle32Sprite == null) {
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____circle32Sprite_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0064;
		}
	}
	{
		// _circle32Sprite = Sprite.Create(Circle32Texture, new Rect(0, 0, R * 2, R * 2), new Vector2(R , R), 10f, 0, SpriteMeshType.Tight, new Vector4(R-1, R-1, R-1, R-1));
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = FusionStatsUtilities_get_Circle32Texture_m0CAB14DF4E3770CA811B6F9CC5162B2FE6CDBE38(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_3), (0.0f), (0.0f), (128.0f), (128.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), (64.0f), (64.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_5), (63.0f), (63.0f), (63.0f), (63.0f), /*hidden argument*/NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6;
		L_6 = Sprite_Create_mDC3D234BAAAF10910F340FAE925AFACE505246B8(L_2, L_3, L_4, (10.0f), 0, 1, L_5, NULL);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____circle32Sprite_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____circle32Sprite_12), (void*)L_6);
	}

IL_0064:
	{
		// return _circle32Sprite;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____circle32Sprite_12;
		return L_7;
	}
}
// System.Boolean Fusion.StatsInternal.FusionStatsUtilities::TryFindActiveRunner(FusionStats,Fusion.NetworkRunner&,System.Nullable`1<Fusion.SimulationModes>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FusionStatsUtilities_TryFindActiveRunner_m904BFBB4A507A336CEE70D52FA7586378C97F062 (FusionStats_t0361C00ADA9A527C7EF810A31F4D964A0DAB864F* ___fusionStats0, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A** ___runner1, Nullable_1_tA7AB74DCC49231122BDE6A56B38A849C29538EF7 ___mode2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m8ED79880725281B975FFF0D1E75C8C3F3018B842_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m80B7F96D7D17A583B34736C90E2B91A8FB71419D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* V_2 = NULL;
	{
		// var gameObject = fusionStats.gameObject;
		FusionStats_t0361C00ADA9A527C7EF810A31F4D964A0DAB864F* L_0 = ___fusionStats0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		// var gameobjScene = fusionStats.gameObject.scene;
		FusionStats_t0361C00ADA9A527C7EF810A31F4D964A0DAB864F* L_2 = ___fusionStats0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_3, NULL);
		V_0 = L_4;
		// var enumerator = NetworkRunner.GetInstancesEnumerator();
		il2cpp_codegen_runtime_class_init_inline(NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4 L_5;
		L_5 = NetworkRunner_GetInstancesEnumerator_mF2E62C8F9C3FDF810C268B1112C9CDEFF8347DC0(NULL);
		V_1 = L_5;
		goto IL_006c;
	}

IL_001b:
	{
		// var found = enumerator.Current;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_6;
		L_6 = Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_inline((&V_1), Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_RuntimeMethod_var);
		V_2 = L_6;
		// if (found && found.IsRunning) {
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		if (!L_8)
		{
			goto IL_006c;
		}
	}
	{
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_9 = V_2;
		NullCheck(L_9);
		bool L_10;
		L_10 = NetworkRunner_get_IsRunning_mD44E761C42BFE8D5A4580B915F1204E38F47C570(L_9, NULL);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		// if (mode.HasValue && (mode.Value & found.Mode) == 0) {
		bool L_11;
		L_11 = Nullable_1_get_HasValue_m8ED79880725281B975FFF0D1E75C8C3F3018B842_inline((&___mode2), Nullable_1_get_HasValue_m8ED79880725281B975FFF0D1E75C8C3F3018B842_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_12;
		L_12 = Nullable_1_get_Value_m80B7F96D7D17A583B34736C90E2B91A8FB71419D((&___mode2), Nullable_1_get_Value_m80B7F96D7D17A583B34736C90E2B91A8FB71419D_RuntimeMethod_var);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = NetworkRunner_get_Mode_m2B4077D7A5AF533F89A3098FD6A824C32CD080BF(L_13, NULL);
		if (!((int32_t)((int32_t)L_12&(int32_t)L_14)))
		{
			goto IL_006c;
		}
	}

IL_004c:
	{
		// if (fusionStats.EnforceSingle) {
		FusionStats_t0361C00ADA9A527C7EF810A31F4D964A0DAB864F* L_15 = ___fusionStats0;
		NullCheck(L_15);
		bool L_16 = L_15->___EnforceSingle_52;
		if (!L_16)
		{
			goto IL_0059;
		}
	}
	{
		// runner = found;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A** L_17 = ___runner1;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_18 = V_2;
		*((RuntimeObject**)L_17) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)L_18);
		// return true;
		return (bool)1;
	}

IL_0059:
	{
		// if (found.SimulationUnityScene == gameobjScene) {
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_19 = V_2;
		NullCheck(L_19);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_20;
		L_20 = NetworkRunner_get_SimulationUnityScene_mD1F08EE8BF063672E6308279336BBF3135012E65(L_19, NULL);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_21 = V_0;
		bool L_22;
		L_22 = Scene_op_Equality_m299018477251CD19CF480FB98EE3C79F9DBE3482(L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_006c;
		}
	}
	{
		// runner = found;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A** L_23 = ___runner1;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_24 = V_2;
		*((RuntimeObject**)L_23) = (RuntimeObject*)L_24;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_23, (void*)(RuntimeObject*)L_24);
		// return true;
		return (bool)1;
	}

IL_006c:
	{
		// while (enumerator.MoveNext()) {
		bool L_25;
		L_25 = Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76((&V_1), Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76_RuntimeMethod_var);
		if (L_25)
		{
			goto IL_001b;
		}
	}
	{
		// runner = null;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A** L_26 = ___runner1;
		*((RuntimeObject**)L_26) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_26, (void*)(RuntimeObject*)NULL);
		// return false;
		return (bool)0;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::CreateRectTransform(UnityEngine.Transform,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, String_t* ___name1, bool ___expand2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var go = new GameObject(name);
		String_t* L_0 = ___name1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, L_0, NULL);
		// var rt = go.AddComponent<RectTransform>();
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_1, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		V_0 = L_2;
		// rt.SetParent(parent);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___parent0;
		NullCheck(L_3);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_4, NULL);
		// rt.localPosition = default;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_6, NULL);
		// rt.localScale = default;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		NullCheck(L_7);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_8, NULL);
		// rt.localScale = new Vector3(1, 1, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
		// if (expand) {
		bool L_11 = ___expand2;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		// ExpandAnchor(rt);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_13 = V_2;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = FusionStatsUtilities_ExpandAnchor_m587744CEB8C0607C2E6D36F693243170961B342B(L_12, L_13, NULL);
	}

IL_005e:
	{
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::CreateRectTransform(System.String,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_CreateRectTransform_mF67B00C6DD46D58EDA5878936D8810B65A2AF1C8 (String_t* ___name0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___expand2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var go = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, L_0, NULL);
		// var rt = go.AddComponent<RectTransform>();
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_1, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		V_0 = L_2;
		// rt.SetParent(parent);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___parent1;
		NullCheck(L_3);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_4, NULL);
		// rt.localPosition = default;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_6, NULL);
		// rt.localScale = default;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		NullCheck(L_7);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_8, NULL);
		// rt.localScale = new Vector3(1, 1, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
		// if (expand) {
		bool L_11 = ___expand2;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		// ExpandAnchor(rt);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_13 = V_2;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = FusionStatsUtilities_ExpandAnchor_m587744CEB8C0607C2E6D36F693243170961B342B(L_12, L_13, NULL);
	}

IL_005e:
	{
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.UI.Dropdown Fusion.StatsInternal.FusionStatsUtilities::CreateDropdown(UnityEngine.RectTransform,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* FusionStatsUtilities_CreateDropdown_m20291B0CC8F59FCCED2BFADC94559FE3CDE908F2 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, float ___padding1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fontColor2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_mDE25E2D9598E3478E8CD12EA6C61F743882E27B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m0E1C6713C85CAAB22DE299872377285F55C106D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15F6EFCDBE17EFB279217A9B699852DE1E193450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABA4B0EF423AE8EF8E94BF8F8B6A69E900270F03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE85487689556D8DE56201A0CD308B4B5B114A4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC084887FC479038DDA12E60E8FA1EEF449CA1A07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF07FCB7FD52F00A3F38E8D87EC9B368CC5533A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7EBB41AAA6DCE2694BE6E79BACC448EECCB1F3C);
		s_Il2CppMethodInitialized = true;
	}
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_0 = NULL;
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* V_1 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_2 = NULL;
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* V_3 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_4 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_5 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_6 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_7;
	memset((&V_7), 0, sizeof(V_7));
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// var dropRT = rt.CreateRectTransform("Dropdown")
		//   .ExpandAnchor(-MARGIN);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rt0;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_0, _stringLiteralCAF07FCB7FD52F00A3F38E8D87EC9B368CC5533A, (bool)0, NULL);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_2), ((float)((int32_t)-6)), /*hidden argument*/Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = FusionStatsUtilities_ExpandAnchor_m587744CEB8C0607C2E6D36F693243170961B342B(L_1, L_2, NULL);
		// var dropimg = dropRT.gameObject.AddComponent<UI.Image>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = L_3;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_5, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		V_0 = L_6;
		// var dropdown = dropRT.gameObject.AddComponent<UI.Dropdown>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = L_4;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_9;
		L_9 = GameObject_AddComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_mDE25E2D9598E3478E8CD12EA6C61F743882E27B7(L_8, GameObject_AddComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_mDE25E2D9598E3478E8CD12EA6C61F743882E27B7_RuntimeMethod_var);
		V_1 = L_9;
		// dropimg.color = new Color(0, 0, 0, 0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_11), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		// dropdown.image = dropimg;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_12 = V_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = V_0;
		NullCheck(L_12);
		Selectable_set_image_mE9DDDBE46C5A435F9788E88EEF0187B5E09A30A8_inline(L_12, L_13, NULL);
		// var templateRT = dropRT.CreateRectTransform("Template", true)
		//   .ExpandTopAnchor()
		//   .SetOffsets(0, 0, -150, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_7, _stringLiteralBE85487689556D8DE56201A0CD308B4B5B114A4B, (bool)1, NULL);
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_15 = V_7;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16;
		L_16 = FusionStatsUtilities_ExpandTopAnchor_m6BDD2E579A36CBC9629232BBF2ED0EF4B7A8B978(L_14, L_15, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17;
		L_17 = FusionStatsUtilities_SetOffsets_mDA9D585C78E2A3F2C242201A7D76BB237E0ED8A5(L_16, (0.0f), (0.0f), (-150.0f), (0.0f), NULL);
		V_2 = L_17;
		// var contentRT = templateRT.CreateRectTransform("Content")
		//   .ExpandTopAnchor()
		//   .SetOffsets(0, 0, -150, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = V_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19;
		L_19 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_18, _stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1, (bool)0, NULL);
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_20 = V_7;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21;
		L_21 = FusionStatsUtilities_ExpandTopAnchor_m6BDD2E579A36CBC9629232BBF2ED0EF4B7A8B978(L_19, L_20, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22;
		L_22 = FusionStatsUtilities_SetOffsets_mDA9D585C78E2A3F2C242201A7D76BB237E0ED8A5(L_21, (0.0f), (0.0f), (-150.0f), (0.0f), NULL);
		// var itemRT = contentRT.CreateRectTransform("Item", true)
		//   .SetAnchors(0, 1, 1, 1)
		//   .SetPivot(0.5f, 1)
		//   .SetSizeDelta(0, 50);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23;
		L_23 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_22, _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, (bool)1, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24;
		L_24 = FusionStatsUtilities_SetAnchors_m0892EE3E7F12D3D63F5041DEE9D603C1124D18F4(L_23, (0.0f), (1.0f), (1.0f), (1.0f), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_25;
		L_25 = FusionStatsUtilities_SetPivot_mAAF2FF7164762F6FE69B41A74C562343A2CF3A9C(L_24, (0.5f), (1.0f), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26;
		L_26 = FusionStatsUtilities_SetSizeDelta_m09E490DCB3EAC2E743E600EC7E591B3F50FC58EC(L_25, (0.0f), (50.0f), NULL);
		// var toggle = itemRT.gameObject.AddComponent<UI.Toggle>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27 = L_26;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		NullCheck(L_28);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_29;
		L_29 = GameObject_AddComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m0E1C6713C85CAAB22DE299872377285F55C106D1(L_28, GameObject_AddComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m0E1C6713C85CAAB22DE299872377285F55C106D1_RuntimeMethod_var);
		V_3 = L_29;
		// toggle.colors = new UI.ColorBlock() {
		//   colorMultiplier = 1,
		//   normalColor = new Color(0.2f, 0.2f, 0.2f, 1f),
		//   highlightedColor = new Color(.3f, .3f, .3f, 1f),
		//   pressedColor = new Color(.4f, .4f, .4f, 4f),
		//   selectedColor = new Color(.25f, .25f, .25f, 1f),
		// };
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_30 = V_3;
		il2cpp_codegen_initobj((&V_8), sizeof(ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11));
		ColorBlock_set_colorMultiplier_m920A048B95541DB0E92AF4AF3894BE7CD2D37102_inline((&V_8), (1.0f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		memset((&L_31), 0, sizeof(L_31));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_31), (0.200000003f), (0.200000003f), (0.200000003f), (1.0f), /*hidden argument*/NULL);
		ColorBlock_set_normalColor_m3EBF594F6FA2C6494ACA9FCB9B458807D85B96F8_inline((&V_8), L_31, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32;
		memset((&L_32), 0, sizeof(L_32));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_32), (0.300000012f), (0.300000012f), (0.300000012f), (1.0f), /*hidden argument*/NULL);
		ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline((&V_8), L_32, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
		memset((&L_33), 0, sizeof(L_33));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_33), (0.400000006f), (0.400000006f), (0.400000006f), (4.0f), /*hidden argument*/NULL);
		ColorBlock_set_pressedColor_m644C938090857AB07C57B25FE53F6DC2BB0DD5A8_inline((&V_8), L_33, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		memset((&L_34), 0, sizeof(L_34));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_34), (0.25f), (0.25f), (0.25f), (1.0f), /*hidden argument*/NULL);
		ColorBlock_set_selectedColor_m76FEFB1148798B7A356C974CDEA3BA2E2E3C1D21_inline((&V_8), L_34, NULL);
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_35 = V_8;
		NullCheck(L_30);
		Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A(L_30, L_35, NULL);
		// var itemBackRT = itemRT.CreateRectTransform("Item Background", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_36 = L_27;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_37;
		L_37 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_36, _stringLiteralC084887FC479038DDA12E60E8FA1EEF449CA1A07, (bool)1, NULL);
		// var itemBack = itemBackRT.gameObject.AddComponent<UI.Image>();
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_37, NULL);
		NullCheck(L_38);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_39;
		L_39 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_38, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		V_4 = L_39;
		// var itemChckRT = itemRT.CreateRectTransform("Item Checkmark", true)
		//   .SetAnchors(0.05f, 0.1f, 0.1f, 0.9f)
		//   .SetOffsets(0, 0, 0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_40 = L_36;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_41;
		L_41 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_40, _stringLiteral15F6EFCDBE17EFB279217A9B699852DE1E193450, (bool)1, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_42;
		L_42 = FusionStatsUtilities_SetAnchors_m0892EE3E7F12D3D63F5041DEE9D603C1124D18F4(L_41, (0.0500000007f), (0.100000001f), (0.100000001f), (0.899999976f), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_43;
		L_43 = FusionStatsUtilities_SetOffsets_mDA9D585C78E2A3F2C242201A7D76BB237E0ED8A5(L_42, (0.0f), (0.0f), (0.0f), (0.0f), NULL);
		// var check = itemChckRT.gameObject.AddComponent<UI.Image>();
		NullCheck(L_43);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_43, NULL);
		NullCheck(L_44);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_45;
		L_45 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_44, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		V_5 = L_45;
		// check.sprite = CircleSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = V_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_47;
		L_47 = FusionStatsUtilities_get_CircleSprite_mFE6F6ECEC146CF4C13764F17CF40EC017E73753D(NULL);
		NullCheck(L_46);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_46, L_47, NULL);
		// check.preserveAspect = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = V_5;
		NullCheck(L_48);
		Image_set_preserveAspect_mF465AFD1313C0F002B37C8B86C75F98CB72A4098(L_48, (bool)1, NULL);
		// var itemLablRT = itemRT.CreateRectTransform("Item Label", true)
		//   .SetAnchors(0.15f, 0.9f, 0.1f, 0.9f)
		//   .SetOffsets(0, 0, 0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_49;
		L_49 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_40, _stringLiteralABA4B0EF423AE8EF8E94BF8F8B6A69E900270F03, (bool)1, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_50;
		L_50 = FusionStatsUtilities_SetAnchors_m0892EE3E7F12D3D63F5041DEE9D603C1124D18F4(L_49, (0.150000006f), (0.899999976f), (0.100000001f), (0.899999976f), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_51;
		L_51 = FusionStatsUtilities_SetOffsets_mDA9D585C78E2A3F2C242201A7D76BB237E0ED8A5(L_50, (0.0f), (0.0f), (0.0f), (0.0f), NULL);
		// var itemLabl = itemLablRT.AddText("Sample", TextAnchor.UpperLeft, fontColor);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52 = ___fontColor2;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_53;
		L_53 = FusionStatsUtilities_AddText_m64EF7C5E39B82119DF8F46EF049EB23AD90A9F21(L_51, _stringLiteralE7EBB41AAA6DCE2694BE6E79BACC448EECCB1F3C, 0, L_52, NULL);
		V_6 = L_53;
		// itemLabl.alignment = TextAnchor.MiddleLeft;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_54 = V_6;
		NullCheck(L_54);
		Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A(L_54, 3, NULL);
		// itemLabl.resizeTextMaxSize = 24;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_55 = V_6;
		NullCheck(L_55);
		Text_set_resizeTextMaxSize_m25EB2C9302AA9354237A2F56BB3E019192C6015B(L_55, ((int32_t)24), NULL);
		// toggle.targetGraphic = itemBack;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_56 = V_3;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_57 = V_4;
		NullCheck(L_56);
		Selectable_set_targetGraphic_m23DB0DF4E5F2DABD50C662C708B4555162171FB9(L_56, L_57, NULL);
		// toggle.graphic = check;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_58 = V_3;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_59 = V_5;
		NullCheck(L_58);
		L_58->___graphic_21 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&L_58->___graphic_21), (void*)L_59);
		// toggle.isOn = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_60 = V_3;
		NullCheck(L_60);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_60, (bool)1, NULL);
		// dropdown.template = templateRT;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_61 = V_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_62 = V_2;
		NullCheck(L_61);
		Dropdown_set_template_m13FE93E0ED2414A5D8D4595D3123DDFD726DB619(L_61, L_62, NULL);
		// dropdown.itemText = itemLabl;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_63 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_64 = V_6;
		NullCheck(L_63);
		Dropdown_set_itemText_m901981335866C0A856E31D7D1C87C7D8E76FBFAA(L_63, L_64, NULL);
		// templateRT.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_65 = V_2;
		NullCheck(L_65);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_65, NULL);
		NullCheck(L_66);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_66, (bool)0, NULL);
		// return dropdown;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_67 = V_1;
		return L_67;
	}
}
// UnityEngine.UI.Text Fusion.StatsInternal.FusionStatsUtilities::AddText(UnityEngine.RectTransform,System.String,UnityEngine.TextAnchor,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* FusionStatsUtilities_AddText_m64EF7C5E39B82119DF8F46EF049EB23AD90A9F21 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, String_t* ___label1, int32_t ___anchor2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___FontColor3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var text = rt.gameObject.AddComponent<UI.Text>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rt0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2;
		L_2 = GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9(L_1, GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9_RuntimeMethod_var);
		// text.text = label;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = L_2;
		String_t* L_4 = ___label1;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// text.color = FontColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___FontColor3;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// text.font = Font;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = L_5;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_8;
		L_8 = FusionStatsUtilities_get_Font_m8589D1AC74A0BCFA8302603EBD6ADFE1D25AC6FA(NULL);
		NullCheck(L_7);
		Text_set_font_mA0D2999281A72029A5BC7294A886C5674F07DC5F(L_7, L_8, NULL);
		// text.alignment = anchor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = L_7;
		int32_t L_10 = ___anchor2;
		NullCheck(L_9);
		Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A(L_9, L_10, NULL);
		// text.fontSize = FONT_SIZE;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = L_9;
		NullCheck(L_11);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_11, ((int32_t)12), NULL);
		// text.raycastTarget = false;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = L_11;
		NullCheck(L_12);
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_12, (bool)0);
		// text.resizeTextMinSize = FONT_SIZE_MIN;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = L_12;
		NullCheck(L_13);
		Text_set_resizeTextMinSize_m1DC5160514ED872A8C572024A94D7EA9D6357655(L_13, 4, NULL);
		// text.resizeTextMaxSize = FONT_SIZE_MAX;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = L_13;
		NullCheck(L_14);
		Text_set_resizeTextMaxSize_m25EB2C9302AA9354237A2F56BB3E019192C6015B(L_14, ((int32_t)200), NULL);
		// text.resizeTextForBestFit = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = L_14;
		NullCheck(L_15);
		Text_set_resizeTextForBestFit_m1376BB9FDBAC5571E0F24564E22391AC8EB89A35(L_15, (bool)1, NULL);
		// return text;
		return L_15;
	}
}
// System.Void Fusion.StatsInternal.FusionStatsUtilities::MakeButton(UnityEngine.RectTransform,UnityEngine.UI.Button&,System.String,System.String,UnityEngine.UI.Text&,UnityEngine.UI.Text&,UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionStatsUtilities_MakeButton_mE806ED53D446F03364297FA0AD0E58D16AAB104F (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___parent0, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** ___button1, String_t* ___iconText2, String_t* ___labelText3, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** ___icon4, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** ___text5, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___action6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21C54BF860BF41F6CB5FA90618AD96345DB385CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_2 = NULL;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var rt = parent.CreateRectTransform(labelText);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___parent0;
		String_t* L_1 = ___labelText3;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_0, L_1, (bool)0, NULL);
		V_0 = L_2;
		// button = rt.gameObject.AddComponent<UI.Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** L_3 = ___button1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = V_0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6;
		L_6 = GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC(L_5, GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC_RuntimeMethod_var);
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_6);
		// var iconRt = rt.CreateRectTransform("Icon", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_7, _stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37, (bool)1, NULL);
		V_1 = L_8;
		// iconRt.anchorMin = new Vector2(0, BTTN_LBL_NORM_HGHT);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), (0.0f), (0.174999997f), /*hidden argument*/NULL);
		NullCheck(L_9);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_9, L_10, NULL);
		// iconRt.anchorMax = new Vector2(1, 1.0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_11, L_12, NULL);
		// iconRt.offsetMin = new Vector2(0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_13, L_14, NULL);
		// iconRt.offsetMax = new Vector2(0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_15, L_16, NULL);
		// icon = iconRt.gameObject.AddComponent<UI.Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_17 = ___icon4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = V_1;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		NullCheck(L_19);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20;
		L_20 = GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9(L_19, GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9_RuntimeMethod_var);
		*((RuntimeObject**)L_17) = (RuntimeObject*)L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)L_20);
		// button.targetGraphic = icon;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** L_21 = ___button1;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_22 = *((Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098**)L_21);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_23 = ___icon4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_23);
		NullCheck(L_22);
		Selectable_set_targetGraphic_m23DB0DF4E5F2DABD50C662C708B4555162171FB9(L_22, L_24, NULL);
		// icon.font = FusionStatsUtilities.Font;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_25 = ___icon4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_25);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_27;
		L_27 = FusionStatsUtilities_get_Font_m8589D1AC74A0BCFA8302603EBD6ADFE1D25AC6FA(NULL);
		NullCheck(L_26);
		Text_set_font_mA0D2999281A72029A5BC7294A886C5674F07DC5F(L_26, L_27, NULL);
		// icon.text = iconText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_28 = ___icon4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_28);
		String_t* L_30 = ___iconText2;
		NullCheck(L_29);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, L_30);
		// icon.alignment = TextAnchor.MiddleCenter;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_31 = ___icon4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_32 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_31);
		NullCheck(L_32);
		Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A(L_32, 4, NULL);
		// icon.fontStyle = FontStyle.Bold;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_33 = ___icon4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_34 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_33);
		NullCheck(L_34);
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_34, 1, NULL);
		// icon.fontSize = BTTN_FONT_SIZE_MAX;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_35 = ___icon4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_36 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_35);
		NullCheck(L_36);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_36, ((int32_t)100), NULL);
		// icon.resizeTextMinSize = 0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_37 = ___icon4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_38 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_37);
		NullCheck(L_38);
		Text_set_resizeTextMinSize_m1DC5160514ED872A8C572024A94D7EA9D6357655(L_38, 0, NULL);
		// icon.resizeTextMaxSize = BTTN_FONT_SIZE_MAX;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_39 = ___icon4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_40 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_39);
		NullCheck(L_40);
		Text_set_resizeTextMaxSize_m25EB2C9302AA9354237A2F56BB3E019192C6015B(L_40, ((int32_t)100), NULL);
		// icon.alignByGeometry = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_41 = ___icon4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_42 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_41);
		NullCheck(L_42);
		Text_set_alignByGeometry_mB427C41097943370E11579A3DA822A3295836CE2(L_42, (bool)1, NULL);
		// icon.resizeTextForBestFit = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_43 = ___icon4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_44 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_43);
		NullCheck(L_44);
		Text_set_resizeTextForBestFit_m1376BB9FDBAC5571E0F24564E22391AC8EB89A35(L_44, (bool)1, NULL);
		// var textRt = rt.CreateRectTransform("Label", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_45 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_46;
		L_46 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_45, _stringLiteral21C54BF860BF41F6CB5FA90618AD96345DB385CD, (bool)1, NULL);
		V_2 = L_46;
		// textRt.anchorMin = new Vector2(0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_47 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_48), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_47);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_47, L_48, NULL);
		// textRt.anchorMax = new Vector2(1, BTTN_LBL_NORM_HGHT);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_49 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_50), (1.0f), (0.174999997f), /*hidden argument*/NULL);
		NullCheck(L_49);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_49, L_50, NULL);
		// textRt.pivot = new Vector2(.5f, BTTN_LBL_NORM_HGHT * .5f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_51 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_52), (0.5f), (0.0874999985f), /*hidden argument*/NULL);
		NullCheck(L_51);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_51, L_52, NULL);
		// textRt.offsetMin = new Vector2(0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_53 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_54), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_53);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_53, L_54, NULL);
		// textRt.offsetMax = new Vector2(0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_55 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_56), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_55);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_55, L_56, NULL);
		// text = textRt.gameObject.AddComponent<UI.Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_57 = ___text5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_58 = V_2;
		NullCheck(L_58);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59;
		L_59 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_58, NULL);
		NullCheck(L_59);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_60;
		L_60 = GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9(L_59, GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9_RuntimeMethod_var);
		*((RuntimeObject**)L_57) = (RuntimeObject*)L_60;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_57, (void*)(RuntimeObject*)L_60);
		// text.color = Color.black;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_61 = ___text5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_62 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_61);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63;
		L_63 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		NullCheck(L_62);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_62, L_63);
		// text.font = FusionStatsUtilities.Font;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_64 = ___text5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_65 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_64);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_66;
		L_66 = FusionStatsUtilities_get_Font_m8589D1AC74A0BCFA8302603EBD6ADFE1D25AC6FA(NULL);
		NullCheck(L_65);
		Text_set_font_mA0D2999281A72029A5BC7294A886C5674F07DC5F(L_65, L_66, NULL);
		// text.text = labelText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_67 = ___text5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_68 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_67);
		String_t* L_69 = ___labelText3;
		NullCheck(L_68);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_68, L_69);
		// text.alignment = TextAnchor.MiddleCenter;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_70 = ___text5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_71 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_70);
		NullCheck(L_71);
		Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A(L_71, 4, NULL);
		// text.fontStyle = FontStyle.Bold;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_72 = ___text5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_73 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_72);
		NullCheck(L_73);
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_73, 1, NULL);
		// text.fontSize = 0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_74 = ___text5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_75 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_74);
		NullCheck(L_75);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_75, 0, NULL);
		// text.resizeTextMinSize = 0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_76 = ___text5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_77 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_76);
		NullCheck(L_77);
		Text_set_resizeTextMinSize_m1DC5160514ED872A8C572024A94D7EA9D6357655(L_77, 0, NULL);
		// text.resizeTextMaxSize = BTTN_FONT_SIZE_MAX;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_78 = ___text5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_79 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_78);
		NullCheck(L_79);
		Text_set_resizeTextMaxSize_m25EB2C9302AA9354237A2F56BB3E019192C6015B(L_79, ((int32_t)100), NULL);
		// text.resizeTextForBestFit = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_80 = ___text5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_81 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_80);
		NullCheck(L_81);
		Text_set_resizeTextForBestFit_m1376BB9FDBAC5571E0F24564E22391AC8EB89A35(L_81, (bool)1, NULL);
		// text.horizontalOverflow = HorizontalWrapMode.Overflow;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_82 = ___text5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_83 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_82);
		NullCheck(L_83);
		Text_set_horizontalOverflow_m10AAFBA65FD7F4B1934B5D628B3E70D75D02FFD6(L_83, 1, NULL);
		// UI.ColorBlock colors = button.colors;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** L_84 = ___button1;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_85 = *((Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098**)L_84);
		NullCheck(L_85);
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_86;
		L_86 = Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750_inline(L_85, NULL);
		V_3 = L_86;
		// colors.normalColor = new Color(.0f, .0f, .0f, BTTN_ALPHA);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_87;
		memset((&L_87), 0, sizeof(L_87));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_87), (0.0f), (0.0f), (0.0f), (0.925000012f), /*hidden argument*/NULL);
		ColorBlock_set_normalColor_m3EBF594F6FA2C6494ACA9FCB9B458807D85B96F8_inline((&V_3), L_87, NULL);
		// colors.pressedColor = new Color(.5f, .5f, .5f, BTTN_ALPHA);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_88;
		memset((&L_88), 0, sizeof(L_88));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_88), (0.5f), (0.5f), (0.5f), (0.925000012f), /*hidden argument*/NULL);
		ColorBlock_set_pressedColor_m644C938090857AB07C57B25FE53F6DC2BB0DD5A8_inline((&V_3), L_88, NULL);
		// colors.highlightedColor = new Color(.3f, .3f, .3f, BTTN_ALPHA);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_89;
		memset((&L_89), 0, sizeof(L_89));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_89), (0.300000012f), (0.300000012f), (0.300000012f), (0.925000012f), /*hidden argument*/NULL);
		ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline((&V_3), L_89, NULL);
		// colors.selectedColor = new Color(.0f, .0f, .0f, BTTN_ALPHA);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_90;
		memset((&L_90), 0, sizeof(L_90));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_90), (0.0f), (0.0f), (0.0f), (0.925000012f), /*hidden argument*/NULL);
		ColorBlock_set_selectedColor_m76FEFB1148798B7A356C974CDEA3BA2E2E3C1D21_inline((&V_3), L_90, NULL);
		// button.colors = colors;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** L_91 = ___button1;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_92 = *((Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098**)L_91);
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_93 = V_3;
		NullCheck(L_92);
		Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A(L_92, L_93, NULL);
		// button.onClick.AddListener(action);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** L_94 = ___button1;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_95 = *((Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098**)L_94);
		NullCheck(L_95);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_96;
		L_96 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_95, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_97 = ___action6;
		NullCheck(L_96);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_96, L_97, NULL);
		// }
		return;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::AddHorizontalLayoutGroup(UnityEngine.RectTransform,System.Single,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_AddHorizontalLayoutGroup_m2E7703DF5AD58DCDE160E81B9E6860204B40B94E (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, float ___spacing1, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___rgtPad2, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___lftPad3, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___topPad4, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___botPad5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B2_0 = NULL;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B6_2 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B8_2 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B7_2 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B9_3 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B11_3 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B10_3 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	int32_t G_B12_3 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B12_4 = NULL;
	{
		// var group = rt.gameObject.AddComponent<UI.HorizontalLayoutGroup>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rt0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_2;
		L_2 = GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4(L_1, GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4_RuntimeMethod_var);
		// group.childControlHeight = true;
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_3 = L_2;
		NullCheck(L_3);
		HorizontalOrVerticalLayoutGroup_set_childControlHeight_m8DD189C9B1F926641F4A2FD41F41F2097E4D7751(L_3, (bool)1, NULL);
		// group.childControlWidth  = true;
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_4 = L_3;
		NullCheck(L_4);
		HorizontalOrVerticalLayoutGroup_set_childControlWidth_m0B9A78B8284E17C438645684984796AC0E2D1BD8(L_4, (bool)1, NULL);
		// group.spacing = spacing;
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_5 = L_4;
		float L_6 = ___spacing1;
		NullCheck(L_5);
		HorizontalOrVerticalLayoutGroup_set_spacing_m90373F54D37DA8DFA90E102DC60EC33E542FD859(L_5, L_6, NULL);
		// group.padding = new RectOffset(
		//   rgtPad.HasValue ? rgtPad.Value : 0,
		//   lftPad.HasValue ? lftPad.Value : 0,
		//   topPad.HasValue ? topPad.Value : 0,
		//   botPad.HasValue ? botPad.Value : 0
		//   );
		bool L_7;
		L_7 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___rgtPad2), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B1_0 = L_5;
		if (L_7)
		{
			G_B2_0 = L_5;
			goto IL_002c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_002c:
	{
		int32_t L_8;
		L_8 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&___rgtPad2), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		bool L_9;
		L_9 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___lftPad3), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if (L_9)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_003f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0046;
	}

IL_003f:
	{
		int32_t L_10;
		L_10 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&___lftPad3), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0046:
	{
		bool L_11;
		L_11 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___topPad4), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B7_0 = G_B6_0;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		if (L_11)
		{
			G_B8_0 = G_B6_0;
			G_B8_1 = G_B6_1;
			G_B8_2 = G_B6_2;
			goto IL_0052;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0059;
	}

IL_0052:
	{
		int32_t L_12;
		L_12 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&___topPad4), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B9_0 = L_12;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0059:
	{
		bool L_13;
		L_13 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___botPad5), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		if (L_13)
		{
			G_B11_0 = G_B9_0;
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_0065;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		G_B12_4 = G_B10_3;
		goto IL_006c;
	}

IL_0065:
	{
		int32_t L_14;
		L_14 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&___botPad5), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B12_0 = L_14;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
		G_B12_4 = G_B11_3;
	}

IL_006c:
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_15 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_15, G_B12_3, G_B12_2, G_B12_1, G_B12_0, NULL);
		NullCheck(G_B12_4);
		LayoutGroup_set_padding_m9F415F3402E5E4AE684FD153493CE3E8D64D3EB7(G_B12_4, L_15, NULL);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = ___rt0;
		return L_16;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::AddVerticalLayoutGroup(UnityEngine.RectTransform,System.Single,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_AddVerticalLayoutGroup_mC19C7F40D4BFD329578FBD497A04ED818CC6AD99 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, float ___spacing1, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___rgtPad2, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___lftPad3, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___topPad4, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___botPad5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_m8FC80304C9EFC42F9CAE9588753536DC6F224521_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var group = rt.gameObject.AddComponent<UI.VerticalLayoutGroup>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rt0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* L_2;
		L_2 = GameObject_AddComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_m8FC80304C9EFC42F9CAE9588753536DC6F224521(L_1, GameObject_AddComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_m8FC80304C9EFC42F9CAE9588753536DC6F224521_RuntimeMethod_var);
		// group.childControlHeight = true;
		VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* L_3 = L_2;
		NullCheck(L_3);
		HorizontalOrVerticalLayoutGroup_set_childControlHeight_m8DD189C9B1F926641F4A2FD41F41F2097E4D7751(L_3, (bool)1, NULL);
		// group.childControlWidth = true;
		VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* L_4 = L_3;
		NullCheck(L_4);
		HorizontalOrVerticalLayoutGroup_set_childControlWidth_m0B9A78B8284E17C438645684984796AC0E2D1BD8(L_4, (bool)1, NULL);
		// group.spacing = spacing;
		float L_5 = ___spacing1;
		NullCheck(L_4);
		HorizontalOrVerticalLayoutGroup_set_spacing_m90373F54D37DA8DFA90E102DC60EC33E542FD859(L_4, L_5, NULL);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ___rt0;
		return L_6;
	}
}
// UnityEngine.UI.GridLayoutGroup Fusion.StatsInternal.FusionStatsUtilities::AddGridlLayoutGroup(UnityEngine.RectTransform,System.Single,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* FusionStatsUtilities_AddGridlLayoutGroup_mA4201AF5AAC7B0E3B6B33A1DC49BBF47D60C67D3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, float ___spacing1, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___rgtPad2, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___lftPad3, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___topPad4, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___botPad5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mC504566284D32F0111950B862D22B0602995290C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var group = rt.gameObject.AddComponent<UI.GridLayoutGroup>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rt0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_2;
		L_2 = GameObject_AddComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mC504566284D32F0111950B862D22B0602995290C(L_1, GameObject_AddComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mC504566284D32F0111950B862D22B0602995290C_RuntimeMethod_var);
		// group.spacing = new Vector2( spacing, spacing);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_3 = L_2;
		float L_4 = ___spacing1;
		float L_5 = ___spacing1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		GridLayoutGroup_set_spacing_mA5550A683F7B4A7A1510B267B5D4CACEB8981306(L_3, L_6, NULL);
		// return group;
		return L_3;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::AddImage(UnityEngine.RectTransform,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_AddImage_m26B3C34E9632607FDE9D6F75BF6B0D5C82416EAA (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var image = rt.gameObject.AddComponent<UI.Image>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rt0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_1, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		// image.color = color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___color1;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// image.raycastTarget = false;
		NullCheck(L_3);
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_3, (bool)0);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ___rt0;
		return L_5;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::AddCircleSprite(UnityEngine.RectTransform,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_AddCircleSprite_m6B9756044DE8B116578B87DF2D96EA0F77F8DC23 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_0 = NULL;
	{
		// rt.AddCircleSprite(color, out var _);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rt0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___color1;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = FusionStatsUtilities_AddCircleSprite_m057F410F3EF37AE9F95CFFCB3FD061485057E627(L_0, L_1, (&V_0), NULL);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = ___rt0;
		return L_3;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::AddCircleSprite(UnityEngine.RectTransform,UnityEngine.Color,UnityEngine.UI.Image&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_AddCircleSprite_m057F410F3EF37AE9F95CFFCB3FD061485057E627 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** ___image2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// image = rt.gameObject.AddComponent<UI.Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** L_0 = ___image2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___rt0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_2, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_3);
		// image.sprite = CircleSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** L_4 = ___image2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = *((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E**)L_4);
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6;
		L_6 = FusionStatsUtilities_get_CircleSprite_mFE6F6ECEC146CF4C13764F17CF40EC017E73753D(NULL);
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_6, NULL);
		// image.type = UI.Image.Type.Sliced;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** L_7 = ___image2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = *((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E**)L_7);
		NullCheck(L_8);
		Image_set_type_mECB8D34772AA393FFBC867B03D18EA0F1A8546BF(L_8, 1, NULL);
		// image.pixelsPerUnitMultiplier = 100f;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** L_9 = ___image2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = *((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E**)L_9);
		NullCheck(L_10);
		Image_set_pixelsPerUnitMultiplier_m05DA43C7FD5B7B162FCB1ED6FCA850FD41AF7DC1(L_10, (100.0f), NULL);
		// image.color = color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** L_11 = ___image2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = *((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E**)L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___color1;
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
		// image.raycastTarget = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** L_14 = ___image2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = *((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E**)L_14);
		NullCheck(L_15);
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_15, (bool)0);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = ___rt0;
		return L_16;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::ExpandAnchor(UnityEngine.RectTransform,System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_ExpandAnchor_m587744CEB8C0607C2E6D36F693243170961B342B (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___padding1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// rt.anchorMax = new Vector2(1, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rt0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_0, L_1, NULL);
		// rt.anchorMin = new Vector2(0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___rt0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_2, L_3, NULL);
		// rt.pivot = new Vector2(0.5f, 0.5f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___rt0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_4, L_5, NULL);
		// if (padding.HasValue) {
		bool L_6;
		L_6 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___padding1), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_007e;
		}
	}
	{
		// rt.offsetMin = new Vector2(padding.Value, padding.Value);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = ___rt0;
		float L_8;
		L_8 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___padding1), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_9;
		L_9 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___padding1), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_7, L_10, NULL);
		// rt.offsetMax = new Vector2(-padding.Value, -padding.Value);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = ___rt0;
		float L_12;
		L_12 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___padding1), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_13;
		L_13 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___padding1), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), ((-L_12)), ((-L_13)), /*hidden argument*/NULL);
		NullCheck(L_11);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_11, L_14, NULL);
		goto IL_009c;
	}

IL_007e:
	{
		// rt.sizeDelta = default;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = ___rt0;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_0;
		NullCheck(L_15);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_15, L_16, NULL);
		// rt.anchoredPosition = default;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = ___rt0;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_0;
		NullCheck(L_17);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_17, L_18, NULL);
	}

IL_009c:
	{
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = ___rt0;
		return L_19;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::ExpandTopAnchor(UnityEngine.RectTransform,System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_ExpandTopAnchor_m6BDD2E579A36CBC9629232BBF2ED0EF4B7A8B978 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___padding1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// rt.anchorMax = new Vector2(1, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rt0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_0, L_1, NULL);
		// rt.anchorMin = new Vector2(0, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___rt0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_2, L_3, NULL);
		// rt.pivot = new Vector2(0.5f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___rt0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_4, L_5, NULL);
		// if (padding.HasValue) {
		bool L_6;
		L_6 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___padding1), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_007e;
		}
	}
	{
		// rt.offsetMin = new Vector2(padding.Value, padding.Value);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = ___rt0;
		float L_8;
		L_8 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___padding1), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_9;
		L_9 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___padding1), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_7, L_10, NULL);
		// rt.offsetMax = new Vector2(-padding.Value, -padding.Value);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = ___rt0;
		float L_12;
		L_12 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___padding1), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_13;
		L_13 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___padding1), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), ((-L_12)), ((-L_13)), /*hidden argument*/NULL);
		NullCheck(L_11);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_11, L_14, NULL);
		goto IL_009c;
	}

IL_007e:
	{
		// rt.sizeDelta = default;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = ___rt0;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_0;
		NullCheck(L_15);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_15, L_16, NULL);
		// rt.anchoredPosition = default;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = ___rt0;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_0;
		NullCheck(L_17);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_17, L_18, NULL);
	}

IL_009c:
	{
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = ___rt0;
		return L_19;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::ExpandMiddleLeft(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_ExpandMiddleLeft_m45AE1659EDEF29A55F6EEC9C4AD5ED8486EAE72A (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, const RuntimeMethod* method) 
{
	{
		// rt.anchorMax = new Vector2(0, 0.5f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rt0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.0f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_0, L_1, NULL);
		// rt.anchorMin = new Vector2(0, 0.5f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___rt0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), (0.0f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_2, L_3, NULL);
		// rt.pivot = new Vector2(0.0f, .5f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___rt0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_4, L_5, NULL);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ___rt0;
		return L_6;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::SetSizeDelta(UnityEngine.RectTransform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_SetSizeDelta_m09E490DCB3EAC2E743E600EC7E591B3F50FC58EC (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, float ___offsetX1, float ___offsetY2, const RuntimeMethod* method) 
{
	{
		// rt.sizeDelta = new Vector2(offsetX, offsetY);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rt0;
		float L_1 = ___offsetX1;
		float L_2 = ___offsetY2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_0, L_3, NULL);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___rt0;
		return L_4;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::SetOffsets(UnityEngine.RectTransform,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_SetOffsets_mDA9D585C78E2A3F2C242201A7D76BB237E0ED8A5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, float ___minX1, float ___maxX2, float ___minY3, float ___maxY4, const RuntimeMethod* method) 
{
	{
		// rt.offsetMin = new Vector2(minX, minY);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rt0;
		float L_1 = ___minX1;
		float L_2 = ___minY3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_0, L_3, NULL);
		// rt.offsetMax = new Vector2(maxX, maxY);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___rt0;
		float L_5 = ___maxX2;
		float L_6 = ___maxY4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_4, L_7, NULL);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = ___rt0;
		return L_8;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::SetPivot(UnityEngine.RectTransform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_SetPivot_mAAF2FF7164762F6FE69B41A74C562343A2CF3A9C (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, float ___pivotX1, float ___pivotY2, const RuntimeMethod* method) 
{
	{
		// rt.pivot = new Vector2(pivotX, pivotY);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rt0;
		float L_1 = ___pivotX1;
		float L_2 = ___pivotY2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_0, L_3, NULL);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___rt0;
		return L_4;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::SetAnchors(UnityEngine.RectTransform,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_SetAnchors_m0892EE3E7F12D3D63F5041DEE9D603C1124D18F4 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt0, float ___minX1, float ___maxX2, float ___minY3, float ___maxY4, const RuntimeMethod* method) 
{
	{
		// rt.anchorMin = new Vector2(minX, minY);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rt0;
		float L_1 = ___minX1;
		float L_2 = ___minY3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_0, L_3, NULL);
		// rt.anchorMax = new Vector2(maxX, maxY);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___rt0;
		float L_5 = ___maxX2;
		float L_6 = ___maxY4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_4, L_7, NULL);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = ___rt0;
		return L_8;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::MakeGuides(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_MakeGuides_m7CA8BFB6B0A501FF100F97F02D0A2D9E3C87D170 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___parent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49EAC01F1FE1AB3E022D37BA90128673D8F2C359);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A261EB7E7319776625F5A015EA18053797E6890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8FD6D7A92A287CB3B46D187F7143A8EFF28600A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE32F71F01B50192A097A0D355AA140AD6D6D0529);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var outlineColor = new Color(0.5f, 0.5f, 0.5f, 0.75f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_0), (0.5f), (0.5f), (0.5f), (0.75f), NULL);
		// var rect = parent.CreateRectTransform("Guides", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___parent0;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_0, _stringLiteralC8FD6D7A92A287CB3B46D187F7143A8EFF28600A, (bool)1, NULL);
		// rect.SetSiblingIndex(0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = L_1;
		NullCheck(L_2);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_2, 0, NULL);
		// var back = rect.CreateRectTransform("Back", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = L_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_3, _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890, (bool)1, NULL);
		// back.gameObject.AddComponent<UI.Image>().color = new Color(0.5f, 0.5f, 0.5f, 0.25f);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_5, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), (0.5f), (0.5f), (0.5f), (0.25f), /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// var left = rect.CreateRectTransform("Left", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = L_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_8, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, (bool)1, NULL);
		// left.anchorMin = new Vector2(-GUIDE_MARGIN, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), (-0.00999999978f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_10, L_11, NULL);
		// left.anchorMax = new Vector2(0, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = L_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_12, L_13, NULL);
		// left.gameObject.AddComponent<UI.Image>().color = outlineColor;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_14);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15;
		L_15 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_14, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = V_0;
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
		// var right = rect.CreateRectTransform("Right", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = L_8;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18;
		L_18 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_17, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, (bool)1, NULL);
		// right.anchorMin = new Vector2(1, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = L_18;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_19, L_20, NULL);
		// right.anchorMax = new Vector2(1 + GUIDE_MARGIN, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = L_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), (1.00999999f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_21, L_22, NULL);
		// right.gameObject.AddComponent<UI.Image>().color = outlineColor;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		NullCheck(L_23);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24;
		L_24 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_23, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = V_0;
		NullCheck(L_24);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_24, L_25);
		// var top = rect.CreateRectTransform("Top", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = L_17;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27;
		L_27 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_26, _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024, (bool)1, NULL);
		// top.anchorMin = new Vector2(-GUIDE_MARGIN, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_28 = L_27;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_29), (-0.00999999978f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_28, L_29, NULL);
		// top.anchorMax = new Vector2(1 + GUIDE_MARGIN, 1 + GUIDE_MARGIN);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_30 = L_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), (1.00999999f), (1.00999999f), /*hidden argument*/NULL);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_30, L_31, NULL);
		// top.gameObject.AddComponent<UI.Image>().color = outlineColor;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		NullCheck(L_32);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33;
		L_33 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_32, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = V_0;
		NullCheck(L_33);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_33, L_34);
		// var bottom = rect.CreateRectTransform("Bottom", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_35 = L_26;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_36;
		L_36 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_35, _stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118, (bool)1, NULL);
		// bottom.anchorMin = new Vector2(-GUIDE_MARGIN, -GUIDE_MARGIN);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_37 = L_36;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_38), (-0.00999999978f), (-0.00999999978f), /*hidden argument*/NULL);
		NullCheck(L_37);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_37, L_38, NULL);
		// bottom.anchorMax = new Vector2(1 + GUIDE_MARGIN, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_39 = L_37;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), (1.00999999f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_39);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_39, L_40, NULL);
		// bottom.gameObject.AddComponent<UI.Image>().color = outlineColor;
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_39, NULL);
		NullCheck(L_41);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42;
		L_42 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_41, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43 = V_0;
		NullCheck(L_42);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_42, L_43);
		// rect.CreateRectTransform("Center", true)
		//   .SetAnchors(0.5f - GUIDE_MARGIN_HALF, 0.5f + GUIDE_MARGIN_HALF, 0, 1)
		//   .AddImage(outlineColor);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_44 = L_35;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_45;
		L_45 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_44, _stringLiteral49EAC01F1FE1AB3E022D37BA90128673D8F2C359, (bool)1, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_46;
		L_46 = FusionStatsUtilities_SetAnchors_m0892EE3E7F12D3D63F5041DEE9D603C1124D18F4(L_45, (0.495000005f), (0.504999995f), (0.0f), (1.0f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_48;
		L_48 = FusionStatsUtilities_AddImage_m26B3C34E9632607FDE9D6F75BF6B0D5C82416EAA(L_46, L_47, NULL);
		// rect.CreateRectTransform("Middle", true)
		//   .SetAnchors(0, 1, 0.5f - GUIDE_MARGIN_HALF, 0.5f + GUIDE_MARGIN_HALF)
		//   .AddImage(outlineColor);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_49 = L_44;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_50;
		L_50 = FusionStatsUtilities_CreateRectTransform_m721E4A389E8983A271515C2F7A4A40D9E4F128E2(L_49, _stringLiteralE32F71F01B50192A097A0D355AA140AD6D6D0529, (bool)1, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_51;
		L_51 = FusionStatsUtilities_SetAnchors_m0892EE3E7F12D3D63F5041DEE9D603C1124D18F4(L_50, (0.0f), (1.0f), (0.495000005f), (0.504999995f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_53;
		L_53 = FusionStatsUtilities_AddImage_m26B3C34E9632607FDE9D6F75BF6B0D5C82416EAA(L_51, L_52, NULL);
		// return rect;
		return L_49;
	}
}
// System.Void Fusion.StatsInternal.FusionStatsUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionStatsUtilities__cctor_m0395F7DA511B6C884AD050EE7FF6AB5C4A560F0E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m09143BB6CC75A27DC82284874BC7AA9874E3D159_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color DARK_GREEN = new Color(0.0f, 0.5f, 0.0f, 1.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.5f), (0.0f), (1.0f), /*hidden argument*/NULL);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->___DARK_GREEN_13 = L_0;
		// public static Color DARK_BLUE  = new Color(0.0f, 0.0f, 0.5f, 1.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (0.0f), (0.0f), (0.5f), (1.0f), /*hidden argument*/NULL);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->___DARK_BLUE_14 = L_1;
		// public static Color DARK_RED   = new Color(0.5f, 0.0f, 0.0f, 1.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_2), (0.5f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->___DARK_RED_15 = L_2;
		// public static List<NetworkRunner> _reusableList = new List<NetworkRunner>(1);
		List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281* L_3 = (List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281*)il2cpp_codegen_object_new(List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m09143BB6CC75A27DC82284874BC7AA9874E3D159(L_3, 1, List_1__ctor_m09143BB6CC75A27DC82284874BC7AA9874E3D159_RuntimeMethod_var);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____reusableList_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____reusableList_16), (void*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___c0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___c0;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___c0;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FusionUnityLogger_set_GetColor_m91F84BF1AEB7B3FB6A8B0E88DC68F2A261A9E58A_inline (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___value0, const RuntimeMethod* method) 
{
	{
		// public Func<object, int> GetColor { get; set; }
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_0 = ___value0;
		__this->___U3CGetColorU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGetColorU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___c0;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___c0;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, const RuntimeMethod* method) 
{
	{
		// public NetworkRunner Runner { get; private set; }
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = __this->___U3CRunnerU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkObjectFlagsExtensions_IsSceneObject_mF1D0BBB5521D4158A63BDB5AC60213CA3FA72C9D_inline (int32_t ___flags0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___flags0;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&((int32_t)3840)))) == ((int32_t)((int32_t)2560)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkObjectFlagsExtensions_IsActivatedByUser_m32DE8195B0505F463E81FA212651287FF6C7AA63_inline (int32_t ___flags0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___flags0;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&((int32_t)131072)))) == ((int32_t)((int32_t)131072)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_set_Runner_mF623A2AFBBBC35E86821F577FDEFF7F58336EE31_inline (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___value0, const RuntimeMethod* method) 
{
	{
		// public NetworkRunner Runner { get; private set; }
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = ___value0;
		__this->___U3CRunnerU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRunnerU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* NetworkRunner_get_Config_mD7D0F65C494EB1B08A7DC8A9F6C016588006BD0E_inline (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) 
{
	{
		NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* L_0 = __this->____config_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 NetworkRunner_get_MultiplePeerUnityScene_mDCE6D9D72D3127C35F74CADBC5EBC79C833699DF_inline (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) 
{
	{
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = __this->____multiplePeerUnityScene_54;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkRunner_get_IsMultiplePeerSceneTemp_mE64D915B99B214780B73BBAFEAE8EFADCF71D001_inline (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isMultiplePeerUnitySceneTemp_55;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_inline (FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___sceneObjects0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sceneObjects0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Selectable_set_image_mE9DDDBE46C5A435F9788E88EEF0187B5E09A30A8_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_TargetGraphic = value; }
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = ___value0;
		__this->___m_TargetGraphic_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TargetGraphic_13), (void*)L_0);
		// set { m_TargetGraphic = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_colorMultiplier_m920A048B95541DB0E92AF4AF3894BE7CD2D37102_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float colorMultiplier   { get { return m_ColorMultiplier; } set { m_ColorMultiplier = value; } }
		float L_0 = ___value0;
		__this->___m_ColorMultiplier_5 = L_0;
		// public float colorMultiplier   { get { return m_ColorMultiplier; } set { m_ColorMultiplier = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_normalColor_m3EBF594F6FA2C6494ACA9FCB9B458807D85B96F8_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color normalColor       { get { return m_NormalColor; } set { m_NormalColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_NormalColor_0 = L_0;
		// public Color normalColor       { get { return m_NormalColor; } set { m_NormalColor = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color highlightedColor  { get { return m_HighlightedColor; } set { m_HighlightedColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_HighlightedColor_1 = L_0;
		// public Color highlightedColor  { get { return m_HighlightedColor; } set { m_HighlightedColor = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_pressedColor_m644C938090857AB07C57B25FE53F6DC2BB0DD5A8_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color pressedColor      { get { return m_PressedColor; } set { m_PressedColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_PressedColor_2 = L_0;
		// public Color pressedColor      { get { return m_PressedColor; } set { m_PressedColor = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_selectedColor_m76FEFB1148798B7A356C974CDEA3BA2E2E3C1D21_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color selectedColor     { get { return m_SelectedColor; } set { m_SelectedColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_SelectedColor_3 = L_0;
		// public Color selectedColor     { get { return m_SelectedColor; } set { m_SelectedColor = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) 
{
	{
		// public ColorBlock        colors            { get { return m_Colors; } set { if (SetPropertyUtility.SetStruct(ref m_Colors, value))            OnSetProperty(); } }
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_0 = __this->___m_Colors_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF80192BF77173A803E05499C419C61B2BB5AFBA7_gshared_inline (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
