#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>
struct InputProcessor_1_t5FE9D20C88845C162EBF94ECD6ECF57F68FB5147;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>
struct InputProcessor_1_t6A178AD7B8E8747692B56C8DAD90852D71FE6223;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tDEBCEB196547BCEFD0B07DDB401095455A84D880;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_t08D68EA72483838DB44126946DC571CE8586FDDB;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>
struct InputProcessor_1_tF380E4928431948FEAEA0B3B16BF6C2EDAB042B6;
// UnityEngine.IntegratedSubsystem`1<System.Object>
struct IntegratedSubsystem_1_t0B19871ED45EAD9F0E0DD6AB41BABCAFBD8C56E4;
// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_t7DB85F2AAC9FE0F6E60C1D92C24ED53E0BA1A935;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_t56455D217921470E52E7D33A1794256E31084DD8;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>[]
struct InputProcessor_1U5BU5D_tE30F50AD314FD6180510BD62709AF67BD0050D7C;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>[]
struct InputProcessor_1U5BU5D_tAEB710A6314153A2D5FCA363B9D7C9982B2066AC;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tDC09201FBB640F2F85B93FB5FBEC3C5813347ED1;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_t48B97D0FB674AED4A200E90F84A5051091C941A2;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>[]
struct InputProcessor_1U5BU5D_t65158FF056DD8E8BF584554B1AD1EF2B315A9875;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[]
struct KeyValuePair_2U5BU5D_tCF1CB229DCBB9B30F35AB7107F3D767BCAE5E078;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.XR.XRDisplaySubsystem[]
struct XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344;
// UnityEngine.XR.XRDisplaySubsystemDescriptor[]
struct XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642;
// UnityEngine.XR.XRInputSubsystemDescriptor[]
struct XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// Unity.XR.Oculus.Input.GearVRTrackedController
struct GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// UnityEngine.InputSystem.InputControl
struct InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14;
// Unity.XR.Oculus.InputFocus
struct InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002;
// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Unity.XR.Oculus.Input.OculusGoController
struct OculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B;
// Unity.XR.Oculus.Input.OculusHMD
struct OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A;
// Unity.XR.Oculus.Input.OculusHMDExtended
struct OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC;
// Unity.XR.Oculus.OculusLoader
struct OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB;
// Unity.XR.Oculus.Input.OculusRemote
struct OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3;
// Unity.XR.Oculus.OculusSettings
struct OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C;
// Unity.XR.Oculus.Input.OculusTouchController
struct OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA;
// Unity.XR.Oculus.Input.OculusTrackingReference
struct OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807;
// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// Unity.XR.Oculus.Stats
struct Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429;
// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.InputSystem.XR.XRController
struct XRController_tB4E4AE731873CAAAE0C04DFBBE690F385EDF081E;
// UnityEngine.InputSystem.XR.XRControllerWithRumble
struct XRControllerWithRumble_tEECDD4DA81A5133D1F15234762C5CB2C2CD53DB5;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93;
// UnityEngine.XR.XRDisplaySubsystemDescriptor
struct XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833;
// UnityEngine.InputSystem.XR.XRHMD
struct XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputLayoutLoader_t49C5641FC147A26ECBF0BA4435702257FEC65EF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_tAC197AE11A643A89EA3F981A56EBB7A01833745C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t56455D217921470E52E7D33A1794256E31084DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral039FC8798456705B4F372FB22E7B8A75FE2E6D6D;
IL2CPP_EXTERN_C String_t* _stringLiteral04EA248327ED413DE02A011F18AC3C95CE6B8EF0;
IL2CPP_EXTERN_C String_t* _stringLiteral066D7D93F8175DDAAA3D6E4337D52AB827615B03;
IL2CPP_EXTERN_C String_t* _stringLiteral077AC4F37BECA7E305659A36FD4351A1A726D74E;
IL2CPP_EXTERN_C String_t* _stringLiteral07FB9B6025681C5CF07481693E1C2043EA488AFE;
IL2CPP_EXTERN_C String_t* _stringLiteral0E33CA6894EABEA68F4151858D5322F8246508A3;
IL2CPP_EXTERN_C String_t* _stringLiteral100A996F2433F52193B5EFF823ACE8663FC5C8C6;
IL2CPP_EXTERN_C String_t* _stringLiteral156E662C55D382C18194118C3287CEAB98FA2C6F;
IL2CPP_EXTERN_C String_t* _stringLiteral18731F484474DDB7AD0F0E7C15988C0A794DEC4D;
IL2CPP_EXTERN_C String_t* _stringLiteral19EEE9FEA675F3AD8283953350F19D8A2E2934A0;
IL2CPP_EXTERN_C String_t* _stringLiteral2089C15C4332D83D0388E9B6CF7057950BB5CD54;
IL2CPP_EXTERN_C String_t* _stringLiteral24BA0B3EAF2D368DF4A667A3DA43E98A55602935;
IL2CPP_EXTERN_C String_t* _stringLiteral271AF6878EC3872B415EA8A73A1433E4B604ACDF;
IL2CPP_EXTERN_C String_t* _stringLiteral28DC90CC5E864B9BEFE7447A1CCD759D1F2D3991;
IL2CPP_EXTERN_C String_t* _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral2C43BA5A481CBEF412DB695717FC94453B3769F6;
IL2CPP_EXTERN_C String_t* _stringLiteral2D3C0882E8B897E888F8BF5C82A33ED850CDEA80;
IL2CPP_EXTERN_C String_t* _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4;
IL2CPP_EXTERN_C String_t* _stringLiteral3624BAC25188A8C57A604CA0D3ACB2CBF73CF5DF;
IL2CPP_EXTERN_C String_t* _stringLiteral3665CEE66FFACBAAC4FEA9EBCFB744AC1F3A9A57;
IL2CPP_EXTERN_C String_t* _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F;
IL2CPP_EXTERN_C String_t* _stringLiteral40F58D79BFB7F12C0766FBC616821E1891152822;
IL2CPP_EXTERN_C String_t* _stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC;
IL2CPP_EXTERN_C String_t* _stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D;
IL2CPP_EXTERN_C String_t* _stringLiteral494FAA0B659E3A69DCE4CE1C4EB20F594E2E641E;
IL2CPP_EXTERN_C String_t* _stringLiteral4ADB212528F8CF625764142B108030A0499510F0;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9B28579DAB706CEF903A85854B98A08280D27D;
IL2CPP_EXTERN_C String_t* _stringLiteral4DADF60B90978099A286AA09DF75E789888C9904;
IL2CPP_EXTERN_C String_t* _stringLiteral4E267D25EFB4D56321079C3FF27EAE0DC4819CC9;
IL2CPP_EXTERN_C String_t* _stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9;
IL2CPP_EXTERN_C String_t* _stringLiteral50B8349DC34E14AB475F3453803BCDBD9F3B0F85;
IL2CPP_EXTERN_C String_t* _stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA5B233166AA50A8488D3B97E0B5A1D09EA4905;
IL2CPP_EXTERN_C String_t* _stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9;
IL2CPP_EXTERN_C String_t* _stringLiteral60EABBC07A25977B87CF58F7CB0D8D536D013DBA;
IL2CPP_EXTERN_C String_t* _stringLiteral650C77761A0B8B1C5C9AB2BB0D61E4767DDDB6E8;
IL2CPP_EXTERN_C String_t* _stringLiteral666C1D75F394950EFFDBE5C128752A9E0CBD1DEA;
IL2CPP_EXTERN_C String_t* _stringLiteral6A8CECB369E64DA7E1FBB6FDE079801EFD1EBFEB;
IL2CPP_EXTERN_C String_t* _stringLiteral6C095088ADD88C25A47E7BBE6A81D13C798F9E75;
IL2CPP_EXTERN_C String_t* _stringLiteral6E837F416B0AD538A7C4B0B672467CAD351051C1;
IL2CPP_EXTERN_C String_t* _stringLiteral6F2A85EC8DA913664B5C83242F8C325DFB1BC03C;
IL2CPP_EXTERN_C String_t* _stringLiteral71D87D03368ADC0E5018E85E30CA4984F5FF2AA8;
IL2CPP_EXTERN_C String_t* _stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A;
IL2CPP_EXTERN_C String_t* _stringLiteral767FF60B240D13D0E7862196C1340B1049EF4B4B;
IL2CPP_EXTERN_C String_t* _stringLiteral791956718283C9837F3ED95D7886E3C88855114B;
IL2CPP_EXTERN_C String_t* _stringLiteral7B4329AE6518370E7FA79EABB817A9A8F33E72A1;
IL2CPP_EXTERN_C String_t* _stringLiteral7CF7D253C5E081CD8124B453E189315E3AB51312;
IL2CPP_EXTERN_C String_t* _stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456;
IL2CPP_EXTERN_C String_t* _stringLiteral83734951E6CF0220767BDF0CB126B869CED3387A;
IL2CPP_EXTERN_C String_t* _stringLiteral8695EE74D804B608F4CB465B35B41E02389AD412;
IL2CPP_EXTERN_C String_t* _stringLiteral86986460D761FE23D8BB01FB96CFA1B151516AE3;
IL2CPP_EXTERN_C String_t* _stringLiteral86CB83E014FB5A27545E6442E0E4C0E783301DED;
IL2CPP_EXTERN_C String_t* _stringLiteral890FDBCF037770EED7A1937DEF697FFC44FBF0B3;
IL2CPP_EXTERN_C String_t* _stringLiteral8A017E46CE09C02B042A499A98229FB4CB75E992;
IL2CPP_EXTERN_C String_t* _stringLiteral8B2341C27300FE7CC95F015A82D27378FA3E44C2;
IL2CPP_EXTERN_C String_t* _stringLiteral8D4C1624EBCE886FC4F782A22F67C15E64EF0BE1;
IL2CPP_EXTERN_C String_t* _stringLiteral9348643C476E6565E37FC0900AC244BD6F18AC32;
IL2CPP_EXTERN_C String_t* _stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590;
IL2CPP_EXTERN_C String_t* _stringLiteral9CA2736EB42A97B73E816FF8369ACA2005FA5AA2;
IL2CPP_EXTERN_C String_t* _stringLiteral9E98EC4F7D85E6AB585D718D9BEDBB163E42B54C;
IL2CPP_EXTERN_C String_t* _stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF;
IL2CPP_EXTERN_C String_t* _stringLiteralA1B23EF8DFFD7E2D6521CBDDA3630AC111AE5F69;
IL2CPP_EXTERN_C String_t* _stringLiteralA2BD5C6F3FA74D0EF59EAFB5EDD968485F2F807C;
IL2CPP_EXTERN_C String_t* _stringLiteralA7259D04FD257B3E588D4DDE5C297D07A9BF111B;
IL2CPP_EXTERN_C String_t* _stringLiteralB0A88A6DB46B5BCFC8ED5871C81A6C91204F1E45;
IL2CPP_EXTERN_C String_t* _stringLiteralB5CCD6D3CB93DC1BEDD79DB8A4B75174089A3455;
IL2CPP_EXTERN_C String_t* _stringLiteralB5E18713BEC060441013BF24EEFF304074095168;
IL2CPP_EXTERN_C String_t* _stringLiteralB795E7C13E4CFACF08133C1739B538F3A728EF41;
IL2CPP_EXTERN_C String_t* _stringLiteralB81B10F5CAB114184CB2AEC199DE4C618C7F57DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB81FB9482B9D82D5EF7151BE5724BB998E6C5F83;
IL2CPP_EXTERN_C String_t* _stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585;
IL2CPP_EXTERN_C String_t* _stringLiteralC49271934571B500FDC497EFB8A9FA5650E48B32;
IL2CPP_EXTERN_C String_t* _stringLiteralCAD7DAB1A0038F488CE6D7BD2E6F6D83311BED68;
IL2CPP_EXTERN_C String_t* _stringLiteralCC0836D648D015EDCC6EE9D171A855190052F97A;
IL2CPP_EXTERN_C String_t* _stringLiteralCD42F30283C4CE60465C4010C800AD9704733102;
IL2CPP_EXTERN_C String_t* _stringLiteralCDF3E124A1507F39224D73C8EFA9828D8BE3846B;
IL2CPP_EXTERN_C String_t* _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC74641CA8B52702019111B91E29821576E700BB;
IL2CPP_EXTERN_C String_t* _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245;
IL2CPP_EXTERN_C String_t* _stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B;
IL2CPP_EXTERN_C String_t* _stringLiteralE0C17AE8C1199F6CD8F16D39E1B77CC319F01B26;
IL2CPP_EXTERN_C String_t* _stringLiteralEB59BE99DEEFC290177DB43CF6B387636E1E0904;
IL2CPP_EXTERN_C String_t* _stringLiteralEDC78BA63A133C81FC2DD3E3CA7EC02E945F89CE;
IL2CPP_EXTERN_C String_t* _stringLiteralF752B27A3F46D6A1A7B84CA9CC6E730C9B472E9A;
IL2CPP_EXTERN_C String_t* _stringLiteralFABA7B84135B56F6F79588F7B57766574B6E8C66;
IL2CPP_EXTERN_C String_t* _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m204EA717B425B2D05BB91568E62A291F99E44F75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisGearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D_mF550391DF3E5D70BD2BB7992596085E29E6BE764_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B_m8404445F51BF4C98EFD0A9E5E18F5656238237CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC_m31CB97F7F80FBCFEAE4C3AD902AF4C0734617145_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A_m168FECC3D072A32B73F764DC2026C3E9D412C01E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3_mA51D8C1A49667777BCCA3538AD8A8985330A3562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA_m6E170C15D20EF17D6071D95A1ED612FCE147D7FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807_mE5F0227116250634F2CB3F046D4CC7CB283B2560_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_1_get_SubsystemDescriptor_m816FB5D3478D016CBD470BA93CF200BB0FA1DF42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m3F040AE7C1198E6D83A836AB64080C42D7136710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m6098CB15555B2E45C3BCAB9086012011CB382DAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t29E6020F6B208E8C3E84F1F09ED89415CA01DC30 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_t56455D217921470E52E7D33A1794256E31084DD8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____items_1)); }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* get__items_1() const { return ____items_1; }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t56455D217921470E52E7D33A1794256E31084DD8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8_StaticFields, ____emptyArray_5)); }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____items_1)); }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* get__items_1() const { return ____items_1; }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_StaticFields, ____emptyArray_5)); }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____items_1)); }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* get__items_1() const { return ____items_1; }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_StaticFields, ____emptyArray_5)); }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.XR.Oculus.Boundary
struct Boundary_tF1BA1FC40337D9A392078B7087CC32FF5EFE03E4  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// Unity.XR.Oculus.InputFocus
struct InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C  : public RuntimeObject
{
public:

public:
};

struct InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields
{
public:
	// System.Action Unity.XR.Oculus.InputFocus::InputFocusAcquired
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputFocusAcquired_0;
	// System.Action Unity.XR.Oculus.InputFocus::InputFocusLost
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputFocusLost_1;
	// System.Boolean Unity.XR.Oculus.InputFocus::hadInputFocus
	bool ___hadInputFocus_2;

public:
	inline static int32_t get_offset_of_InputFocusAcquired_0() { return static_cast<int32_t>(offsetof(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields, ___InputFocusAcquired_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputFocusAcquired_0() const { return ___InputFocusAcquired_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputFocusAcquired_0() { return &___InputFocusAcquired_0; }
	inline void set_InputFocusAcquired_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputFocusAcquired_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputFocusAcquired_0), (void*)value);
	}

	inline static int32_t get_offset_of_InputFocusLost_1() { return static_cast<int32_t>(offsetof(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields, ___InputFocusLost_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputFocusLost_1() const { return ___InputFocusLost_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputFocusLost_1() { return &___InputFocusLost_1; }
	inline void set_InputFocusLost_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputFocusLost_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputFocusLost_1), (void*)value);
	}

	inline static int32_t get_offset_of_hadInputFocus_2() { return static_cast<int32_t>(offsetof(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields, ___hadInputFocus_2)); }
	inline bool get_hadInputFocus_2() const { return ___hadInputFocus_2; }
	inline bool* get_address_of_hadInputFocus_2() { return &___hadInputFocus_2; }
	inline void set_hadInputFocus_2(bool value)
	{
		___hadInputFocus_2 = value;
	}
};


// Unity.XR.Oculus.InputLayoutLoader
struct InputLayoutLoader_t49C5641FC147A26ECBF0BA4435702257FEC65EF8  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.NativeMethods
struct NativeMethods_t3621D74DE9BA054C3E33DB4FA2CFEC8DD7152EEF  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Performance
struct Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA  : public RuntimeObject
{
public:

public:
};

struct Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields
{
public:
	// System.Single[] Unity.XR.Oculus.Performance::cachedDisplayAvailableFrequencies
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___cachedDisplayAvailableFrequencies_0;

public:
	inline static int32_t get_offset_of_cachedDisplayAvailableFrequencies_0() { return static_cast<int32_t>(offsetof(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields, ___cachedDisplayAvailableFrequencies_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_cachedDisplayAvailableFrequencies_0() const { return ___cachedDisplayAvailableFrequencies_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_cachedDisplayAvailableFrequencies_0() { return &___cachedDisplayAvailableFrequencies_0; }
	inline void set_cachedDisplayAvailableFrequencies_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___cachedDisplayAvailableFrequencies_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedDisplayAvailableFrequencies_0), (void*)value);
	}
};


// Unity.XR.Oculus.RegisterUpdateCallback
struct RegisterUpdateCallback_t1C829E95646132B4A54493595EFCFF669920ACE1  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Stats
struct Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F  : public RuntimeObject
{
public:

public:
};

struct Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields
{
public:
	// UnityEngine.IntegratedSubsystem Unity.XR.Oculus.Stats::m_Display
	IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * ___m_Display_0;
	// System.String Unity.XR.Oculus.Stats::m_PluginVersion
	String_t* ___m_PluginVersion_1;

public:
	inline static int32_t get_offset_of_m_Display_0() { return static_cast<int32_t>(offsetof(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields, ___m_Display_0)); }
	inline IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * get_m_Display_0() const { return ___m_Display_0; }
	inline IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 ** get_address_of_m_Display_0() { return &___m_Display_0; }
	inline void set_m_Display_0(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * value)
	{
		___m_Display_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Display_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PluginVersion_1() { return static_cast<int32_t>(offsetof(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields, ___m_PluginVersion_1)); }
	inline String_t* get_m_PluginVersion_1() const { return ___m_PluginVersion_1; }
	inline String_t** get_address_of_m_PluginVersion_1() { return &___m_PluginVersion_1; }
	inline void set_m_PluginVersion_1(String_t* value)
	{
		___m_PluginVersion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PluginVersion_1), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// Unity.XR.Oculus.Utils
struct Utils_tBC4D75397337A6F2AFDF84A3FCAA54D81045FF2A  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Unity.XR.Oculus.NativeMethods/Internal
struct Internal_tFE0FD2202F25632711238961AAA0DB0A1CB0F0DB  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Stats/AdaptivePerformance
struct AdaptivePerformance_t444AB47F076E0F5099F0163C1F1ED2E721DFC2B4  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Stats/AppMetrics
struct AppMetrics_t3EFC22132A61330CAF1A99FFFD06F8C45F2EEEB5  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Stats/PerfMetrics
struct PerfMetrics_t60645F5550DE7C05412D6701BEB5D055CE055166  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>
struct Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t56455D217921470E52E7D33A1794256E31084DD8 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828, ___list_0)); }
	inline List_1_t56455D217921470E52E7D33A1794256E31084DD8 * get_list_0() const { return ___list_0; }
	inline List_1_t56455D217921470E52E7D33A1794256E31084DD8 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t56455D217921470E52E7D33A1794256E31084DD8 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828, ___current_3)); }
	inline XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * get_current_3() const { return ___current_3; }
	inline XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Int32>>
struct InlinedArray_1_t1E8E973C9909EAC1D2DD5DC2AE05EC2B3D7A328A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t5FE9D20C88845C162EBF94ECD6ECF57F68FB5147 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tE30F50AD314FD6180510BD62709AF67BD0050D7C* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t1E8E973C9909EAC1D2DD5DC2AE05EC2B3D7A328A, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t1E8E973C9909EAC1D2DD5DC2AE05EC2B3D7A328A, ___firstValue_1)); }
	inline InputProcessor_1_t5FE9D20C88845C162EBF94ECD6ECF57F68FB5147 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t5FE9D20C88845C162EBF94ECD6ECF57F68FB5147 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t5FE9D20C88845C162EBF94ECD6ECF57F68FB5147 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t1E8E973C9909EAC1D2DD5DC2AE05EC2B3D7A328A, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tE30F50AD314FD6180510BD62709AF67BD0050D7C* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tE30F50AD314FD6180510BD62709AF67BD0050D7C** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tE30F50AD314FD6180510BD62709AF67BD0050D7C* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>
struct InlinedArray_1_tC46824240B53C7BA196CEBABCAB9F763E45A5A6C 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t6A178AD7B8E8747692B56C8DAD90852D71FE6223 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tAEB710A6314153A2D5FCA363B9D7C9982B2066AC* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tC46824240B53C7BA196CEBABCAB9F763E45A5A6C, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tC46824240B53C7BA196CEBABCAB9F763E45A5A6C, ___firstValue_1)); }
	inline InputProcessor_1_t6A178AD7B8E8747692B56C8DAD90852D71FE6223 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t6A178AD7B8E8747692B56C8DAD90852D71FE6223 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t6A178AD7B8E8747692B56C8DAD90852D71FE6223 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tC46824240B53C7BA196CEBABCAB9F763E45A5A6C, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tAEB710A6314153A2D5FCA363B9D7C9982B2066AC* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tAEB710A6314153A2D5FCA363B9D7C9982B2066AC** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tAEB710A6314153A2D5FCA363B9D7C9982B2066AC* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t3846DFB4D8DB2A5CF2157D9885689E35C5DB4BE1 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tDEBCEB196547BCEFD0B07DDB401095455A84D880 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tDC09201FBB640F2F85B93FB5FBEC3C5813347ED1* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3846DFB4D8DB2A5CF2157D9885689E35C5DB4BE1, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3846DFB4D8DB2A5CF2157D9885689E35C5DB4BE1, ___firstValue_1)); }
	inline InputProcessor_1_tDEBCEB196547BCEFD0B07DDB401095455A84D880 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tDEBCEB196547BCEFD0B07DDB401095455A84D880 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tDEBCEB196547BCEFD0B07DDB401095455A84D880 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3846DFB4D8DB2A5CF2157D9885689E35C5DB4BE1, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tDC09201FBB640F2F85B93FB5FBEC3C5813347ED1* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tDC09201FBB640F2F85B93FB5FBEC3C5813347ED1** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tDC09201FBB640F2F85B93FB5FBEC3C5813347ED1* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>
struct InlinedArray_1_tF881B4FB101C1F7E5C6303B65CCD7E0792AA83BA 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t08D68EA72483838DB44126946DC571CE8586FDDB * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t48B97D0FB674AED4A200E90F84A5051091C941A2* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF881B4FB101C1F7E5C6303B65CCD7E0792AA83BA, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF881B4FB101C1F7E5C6303B65CCD7E0792AA83BA, ___firstValue_1)); }
	inline InputProcessor_1_t08D68EA72483838DB44126946DC571CE8586FDDB * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t08D68EA72483838DB44126946DC571CE8586FDDB ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t08D68EA72483838DB44126946DC571CE8586FDDB * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF881B4FB101C1F7E5C6303B65CCD7E0792AA83BA, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t48B97D0FB674AED4A200E90F84A5051091C941A2* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t48B97D0FB674AED4A200E90F84A5051091C941A2** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t48B97D0FB674AED4A200E90F84A5051091C941A2* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>
struct InlinedArray_1_t44AF1E62AF31475F023E2DAAE329932E88CF39E2 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tF380E4928431948FEAEA0B3B16BF6C2EDAB042B6 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t65158FF056DD8E8BF584554B1AD1EF2B315A9875* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t44AF1E62AF31475F023E2DAAE329932E88CF39E2, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t44AF1E62AF31475F023E2DAAE329932E88CF39E2, ___firstValue_1)); }
	inline InputProcessor_1_tF380E4928431948FEAEA0B3B16BF6C2EDAB042B6 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tF380E4928431948FEAEA0B3B16BF6C2EDAB042B6 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tF380E4928431948FEAEA0B3B16BF6C2EDAB042B6 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t44AF1E62AF31475F023E2DAAE329932E88CF39E2, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t65158FF056DD8E8BF584554B1AD1EF2B315A9875* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t65158FF056DD8E8BF584554B1AD1EF2B315A9875** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t65158FF056DD8E8BF584554B1AD1EF2B315A9875* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E 
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;

public:
	inline static int32_t get_offset_of_m_InterfaceName_0() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E, ___m_InterfaceName_0)); }
	inline String_t* get_m_InterfaceName_0() const { return ___m_InterfaceName_0; }
	inline String_t** get_address_of_m_InterfaceName_0() { return &___m_InterfaceName_0; }
	inline void set_m_InterfaceName_0(String_t* value)
	{
		___m_InterfaceName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterfaceName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceClass_1() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E, ___m_DeviceClass_1)); }
	inline String_t* get_m_DeviceClass_1() const { return ___m_DeviceClass_1; }
	inline String_t** get_address_of_m_DeviceClass_1() { return &___m_DeviceClass_1; }
	inline void set_m_DeviceClass_1(String_t* value)
	{
		___m_DeviceClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Manufacturer_2() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E, ___m_Manufacturer_2)); }
	inline String_t* get_m_Manufacturer_2() const { return ___m_Manufacturer_2; }
	inline String_t** get_address_of_m_Manufacturer_2() { return &___m_Manufacturer_2; }
	inline void set_m_Manufacturer_2(String_t* value)
	{
		___m_Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Manufacturer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Product_3() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E, ___m_Product_3)); }
	inline String_t* get_m_Product_3() const { return ___m_Product_3; }
	inline String_t** get_address_of_m_Product_3() { return &___m_Product_3; }
	inline void set_m_Product_3(String_t* value)
	{
		___m_Product_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Product_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Serial_4() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E, ___m_Serial_4)); }
	inline String_t* get_m_Serial_4() const { return ___m_Serial_4; }
	inline String_t** get_address_of_m_Serial_4() { return &___m_Serial_4; }
	inline void set_m_Serial_4(String_t* value)
	{
		___m_Serial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serial_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E, ___m_Version_5)); }
	inline String_t* get_m_Version_5() const { return ___m_Version_5; }
	inline String_t** get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(String_t* value)
	{
		___m_Version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capabilities_6() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E, ___m_Capabilities_6)); }
	inline String_t* get_m_Capabilities_6() const { return ___m_Capabilities_6; }
	inline String_t** get_address_of_m_Capabilities_6() { return &___m_Capabilities_6; }
	inline void set_m_Capabilities_6(String_t* value)
	{
		___m_Capabilities_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Capabilities_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Unity.XR.Oculus.NativeMethods/UserDefinedSettings
struct UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D 
{
public:
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::sharedDepthBuffer
	uint16_t ___sharedDepthBuffer_0;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::dashSupport
	uint16_t ___dashSupport_1;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::stereoRenderingMode
	uint16_t ___stereoRenderingMode_2;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::colorSpace
	uint16_t ___colorSpace_3;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::lowOverheadMode
	uint16_t ___lowOverheadMode_4;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::protectedContext
	uint16_t ___protectedContext_5;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::focusAware
	uint16_t ___focusAware_6;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::optimizeBufferDiscards
	uint16_t ___optimizeBufferDiscards_7;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::phaseSync
	uint16_t ___phaseSync_8;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::symmetricProjection
	uint16_t ___symmetricProjection_9;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::subsampledLayout
	uint16_t ___subsampledLayout_10;

public:
	inline static int32_t get_offset_of_sharedDepthBuffer_0() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___sharedDepthBuffer_0)); }
	inline uint16_t get_sharedDepthBuffer_0() const { return ___sharedDepthBuffer_0; }
	inline uint16_t* get_address_of_sharedDepthBuffer_0() { return &___sharedDepthBuffer_0; }
	inline void set_sharedDepthBuffer_0(uint16_t value)
	{
		___sharedDepthBuffer_0 = value;
	}

	inline static int32_t get_offset_of_dashSupport_1() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___dashSupport_1)); }
	inline uint16_t get_dashSupport_1() const { return ___dashSupport_1; }
	inline uint16_t* get_address_of_dashSupport_1() { return &___dashSupport_1; }
	inline void set_dashSupport_1(uint16_t value)
	{
		___dashSupport_1 = value;
	}

	inline static int32_t get_offset_of_stereoRenderingMode_2() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___stereoRenderingMode_2)); }
	inline uint16_t get_stereoRenderingMode_2() const { return ___stereoRenderingMode_2; }
	inline uint16_t* get_address_of_stereoRenderingMode_2() { return &___stereoRenderingMode_2; }
	inline void set_stereoRenderingMode_2(uint16_t value)
	{
		___stereoRenderingMode_2 = value;
	}

	inline static int32_t get_offset_of_colorSpace_3() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___colorSpace_3)); }
	inline uint16_t get_colorSpace_3() const { return ___colorSpace_3; }
	inline uint16_t* get_address_of_colorSpace_3() { return &___colorSpace_3; }
	inline void set_colorSpace_3(uint16_t value)
	{
		___colorSpace_3 = value;
	}

	inline static int32_t get_offset_of_lowOverheadMode_4() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___lowOverheadMode_4)); }
	inline uint16_t get_lowOverheadMode_4() const { return ___lowOverheadMode_4; }
	inline uint16_t* get_address_of_lowOverheadMode_4() { return &___lowOverheadMode_4; }
	inline void set_lowOverheadMode_4(uint16_t value)
	{
		___lowOverheadMode_4 = value;
	}

	inline static int32_t get_offset_of_protectedContext_5() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___protectedContext_5)); }
	inline uint16_t get_protectedContext_5() const { return ___protectedContext_5; }
	inline uint16_t* get_address_of_protectedContext_5() { return &___protectedContext_5; }
	inline void set_protectedContext_5(uint16_t value)
	{
		___protectedContext_5 = value;
	}

	inline static int32_t get_offset_of_focusAware_6() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___focusAware_6)); }
	inline uint16_t get_focusAware_6() const { return ___focusAware_6; }
	inline uint16_t* get_address_of_focusAware_6() { return &___focusAware_6; }
	inline void set_focusAware_6(uint16_t value)
	{
		___focusAware_6 = value;
	}

	inline static int32_t get_offset_of_optimizeBufferDiscards_7() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___optimizeBufferDiscards_7)); }
	inline uint16_t get_optimizeBufferDiscards_7() const { return ___optimizeBufferDiscards_7; }
	inline uint16_t* get_address_of_optimizeBufferDiscards_7() { return &___optimizeBufferDiscards_7; }
	inline void set_optimizeBufferDiscards_7(uint16_t value)
	{
		___optimizeBufferDiscards_7 = value;
	}

	inline static int32_t get_offset_of_phaseSync_8() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___phaseSync_8)); }
	inline uint16_t get_phaseSync_8() const { return ___phaseSync_8; }
	inline uint16_t* get_address_of_phaseSync_8() { return &___phaseSync_8; }
	inline void set_phaseSync_8(uint16_t value)
	{
		___phaseSync_8 = value;
	}

	inline static int32_t get_offset_of_symmetricProjection_9() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___symmetricProjection_9)); }
	inline uint16_t get_symmetricProjection_9() const { return ___symmetricProjection_9; }
	inline uint16_t* get_address_of_symmetricProjection_9() { return &___symmetricProjection_9; }
	inline void set_symmetricProjection_9(uint16_t value)
	{
		___symmetricProjection_9 = value;
	}

	inline static int32_t get_offset_of_subsampledLayout_10() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___subsampledLayout_10)); }
	inline uint16_t get_subsampledLayout_10() const { return ___subsampledLayout_10; }
	inline uint16_t* get_address_of_subsampledLayout_10() { return &___subsampledLayout_10; }
	inline void set_subsampledLayout_10(uint16_t value)
	{
		___subsampledLayout_10 = value;
	}
};


// UnityEngine.ColorSpace
struct ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA 
{
public:
	// System.Int32 UnityEngine.ColorSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 
{
public:
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] UnityEngine.InputSystem.Layouts.InputDeviceMatcher::m_Patterns
	KeyValuePair_2U5BU5D_tCF1CB229DCBB9B30F35AB7107F3D767BCAE5E078* ___m_Patterns_0;

public:
	inline static int32_t get_offset_of_m_Patterns_0() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6, ___m_Patterns_0)); }
	inline KeyValuePair_2U5BU5D_tCF1CB229DCBB9B30F35AB7107F3D767BCAE5E078* get_m_Patterns_0() const { return ___m_Patterns_0; }
	inline KeyValuePair_2U5BU5D_tCF1CB229DCBB9B30F35AB7107F3D767BCAE5E078** get_address_of_m_Patterns_0() { return &___m_Patterns_0; }
	inline void set_m_Patterns_0(KeyValuePair_2U5BU5D_tCF1CB229DCBB9B30F35AB7107F3D767BCAE5E078* value)
	{
		___m_Patterns_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Patterns_0), (void*)value);
	}
};

struct InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kInterfaceKey
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___kInterfaceKey_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kDeviceClassKey
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___kDeviceClassKey_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kManufacturerKey
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___kManufacturerKey_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kProductKey
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___kProductKey_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kVersionKey
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___kVersionKey_5;

public:
	inline static int32_t get_offset_of_kInterfaceKey_1() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6_StaticFields, ___kInterfaceKey_1)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_kInterfaceKey_1() const { return ___kInterfaceKey_1; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_kInterfaceKey_1() { return &___kInterfaceKey_1; }
	inline void set_kInterfaceKey_1(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___kInterfaceKey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kInterfaceKey_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kInterfaceKey_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kDeviceClassKey_2() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6_StaticFields, ___kDeviceClassKey_2)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_kDeviceClassKey_2() const { return ___kDeviceClassKey_2; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_kDeviceClassKey_2() { return &___kDeviceClassKey_2; }
	inline void set_kDeviceClassKey_2(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___kDeviceClassKey_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kDeviceClassKey_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kDeviceClassKey_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kManufacturerKey_3() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6_StaticFields, ___kManufacturerKey_3)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_kManufacturerKey_3() const { return ___kManufacturerKey_3; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_kManufacturerKey_3() { return &___kManufacturerKey_3; }
	inline void set_kManufacturerKey_3(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___kManufacturerKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kManufacturerKey_3))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kManufacturerKey_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kProductKey_4() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6_StaticFields, ___kProductKey_4)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_kProductKey_4() const { return ___kProductKey_4; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_kProductKey_4() { return &___kProductKey_4; }
	inline void set_kProductKey_4(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___kProductKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kProductKey_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kProductKey_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kVersionKey_5() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6_StaticFields, ___kVersionKey_5)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_kVersionKey_5() const { return ___kVersionKey_5; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_kVersionKey_5() { return &___kVersionKey_5; }
	inline void set_kVersionKey_5(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___kVersionKey_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kVersionKey_5))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kVersionKey_5))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6_marshaled_pinvoke
{
	KeyValuePair_2_t7DB85F2AAC9FE0F6E60C1D92C24ED53E0BA1A935 * ___m_Patterns_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6_marshaled_com
{
	KeyValuePair_2_t7DB85F2AAC9FE0F6E60C1D92C24ED53E0BA1A935 * ___m_Patterns_0;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3, ___U3CformatU3Ek__BackingField_33)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_U3CformatU3Ek__BackingField_33() const { return ___U3CformatU3Ek__BackingField_33; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_U3CformatU3Ek__BackingField_33() { return &___U3CformatU3Ek__BackingField_33; }
	inline void set_U3CformatU3Ek__BackingField_33(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___U3CformatU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CbyteOffsetU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3, ___U3CbyteOffsetU3Ek__BackingField_34)); }
	inline uint32_t get_U3CbyteOffsetU3Ek__BackingField_34() const { return ___U3CbyteOffsetU3Ek__BackingField_34; }
	inline uint32_t* get_address_of_U3CbyteOffsetU3Ek__BackingField_34() { return &___U3CbyteOffsetU3Ek__BackingField_34; }
	inline void set_U3CbyteOffsetU3Ek__BackingField_34(uint32_t value)
	{
		___U3CbyteOffsetU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3, ___U3CbitOffsetU3Ek__BackingField_35)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_35() const { return ___U3CbitOffsetU3Ek__BackingField_35; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_35() { return &___U3CbitOffsetU3Ek__BackingField_35; }
	inline void set_U3CbitOffsetU3Ek__BackingField_35(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3, ___U3CsizeInBitsU3Ek__BackingField_36)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_36() const { return ___U3CsizeInBitsU3Ek__BackingField_36; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_36() { return &___U3CsizeInBitsU3Ek__BackingField_36; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_36(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_36 = value;
	}
};

struct InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatVector3Byte_32;

public:
	inline static int32_t get_offset_of_FormatBit_2() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatBit_2)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatBit_2() const { return ___FormatBit_2; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatBit_2() { return &___FormatBit_2; }
	inline void set_FormatBit_2(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatBit_2 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_4() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatSBit_4)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatSBit_4() const { return ___FormatSBit_4; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatSBit_4() { return &___FormatSBit_4; }
	inline void set_FormatSBit_4(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatSBit_4 = value;
	}

	inline static int32_t get_offset_of_FormatInt_6() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatInt_6)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatInt_6() const { return ___FormatInt_6; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatInt_6() { return &___FormatInt_6; }
	inline void set_FormatInt_6(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatInt_6 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_8() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatUInt_8)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatUInt_8() const { return ___FormatUInt_8; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatUInt_8() { return &___FormatUInt_8; }
	inline void set_FormatUInt_8(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatUInt_8 = value;
	}

	inline static int32_t get_offset_of_FormatShort_10() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatShort_10)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatShort_10() const { return ___FormatShort_10; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatShort_10() { return &___FormatShort_10; }
	inline void set_FormatShort_10(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatShort_10 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_12() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatUShort_12)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatUShort_12() const { return ___FormatUShort_12; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatUShort_12() { return &___FormatUShort_12; }
	inline void set_FormatUShort_12(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatUShort_12 = value;
	}

	inline static int32_t get_offset_of_FormatByte_14() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatByte_14)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatByte_14() const { return ___FormatByte_14; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatByte_14() { return &___FormatByte_14; }
	inline void set_FormatByte_14(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatByte_14 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_16() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatSByte_16)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatSByte_16() const { return ___FormatSByte_16; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatSByte_16() { return &___FormatSByte_16; }
	inline void set_FormatSByte_16(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatSByte_16 = value;
	}

	inline static int32_t get_offset_of_FormatLong_18() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatLong_18)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatLong_18() const { return ___FormatLong_18; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatLong_18() { return &___FormatLong_18; }
	inline void set_FormatLong_18(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatLong_18 = value;
	}

	inline static int32_t get_offset_of_FormatULong_20() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatULong_20)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatULong_20() const { return ___FormatULong_20; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatULong_20() { return &___FormatULong_20; }
	inline void set_FormatULong_20(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatULong_20 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_22() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatFloat_22)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatFloat_22() const { return ___FormatFloat_22; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatFloat_22() { return &___FormatFloat_22; }
	inline void set_FormatFloat_22(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatFloat_22 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_24() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatDouble_24)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatDouble_24() const { return ___FormatDouble_24; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatDouble_24() { return &___FormatDouble_24; }
	inline void set_FormatDouble_24(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatDouble_24 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_26() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatVector2_26)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatVector2_26() const { return ___FormatVector2_26; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatVector2_26() { return &___FormatVector2_26; }
	inline void set_FormatVector2_26(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatVector2_26 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_27() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatVector3_27)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatVector3_27() const { return ___FormatVector3_27; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatVector3_27() { return &___FormatVector3_27; }
	inline void set_FormatVector3_27(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatVector3_27 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_28() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatQuaternion_28)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatQuaternion_28() const { return ___FormatQuaternion_28; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatQuaternion_28() { return &___FormatQuaternion_28; }
	inline void set_FormatQuaternion_28(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatQuaternion_28 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_29() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatVector2Short_29)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatVector2Short_29() const { return ___FormatVector2Short_29; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatVector2Short_29() { return &___FormatVector2Short_29; }
	inline void set_FormatVector2Short_29(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatVector2Short_29 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_30() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatVector3Short_30)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatVector3Short_30() const { return ___FormatVector3Short_30; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatVector3Short_30() { return &___FormatVector3Short_30; }
	inline void set_FormatVector3Short_30(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatVector3Short_30 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_31() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatVector2Byte_31)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatVector2Byte_31() const { return ___FormatVector2Byte_31; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatVector2Byte_31() { return &___FormatVector2Byte_31; }
	inline void set_FormatVector2Byte_31(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatVector2Byte_31 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_32() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatVector3Byte_32)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatVector3Byte_32() const { return ___FormatVector3Byte_32; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatVector3Byte_32() { return &___FormatVector3Byte_32; }
	inline void set_FormatVector3Byte_32(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatVector3Byte_32 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.XR.Oculus.OculusUsages
struct OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77  : public RuntimeObject
{
public:

public:
};

struct OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::volumeUp
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___volumeUp_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::volumeDown
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___volumeDown_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::thumbrest
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___thumbrest_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::indexTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___indexTouch_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::thumbTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___thumbTouch_4;

public:
	inline static int32_t get_offset_of_volumeUp_0() { return static_cast<int32_t>(offsetof(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields, ___volumeUp_0)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_volumeUp_0() const { return ___volumeUp_0; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_volumeUp_0() { return &___volumeUp_0; }
	inline void set_volumeUp_0(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___volumeUp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___volumeUp_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_volumeDown_1() { return static_cast<int32_t>(offsetof(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields, ___volumeDown_1)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_volumeDown_1() const { return ___volumeDown_1; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_volumeDown_1() { return &___volumeDown_1; }
	inline void set_volumeDown_1(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___volumeDown_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___volumeDown_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbrest_2() { return static_cast<int32_t>(offsetof(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields, ___thumbrest_2)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_thumbrest_2() const { return ___thumbrest_2; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_thumbrest_2() { return &___thumbrest_2; }
	inline void set_thumbrest_2(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___thumbrest_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbrest_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexTouch_3() { return static_cast<int32_t>(offsetof(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields, ___indexTouch_3)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_indexTouch_3() const { return ___indexTouch_3; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_indexTouch_3() { return &___indexTouch_3; }
	inline void set_indexTouch_3(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___indexTouch_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexTouch_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbTouch_4() { return static_cast<int32_t>(offsetof(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields, ___thumbTouch_4)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_thumbTouch_4() const { return ___thumbTouch_4; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_thumbTouch_4() { return &___thumbTouch_4; }
	inline void set_thumbTouch_4(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___thumbTouch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// Unity.XR.Oculus.SystemHeadset
struct SystemHeadset_t16A682CFD8C01E96CE6D9E8AD92C5B33BFAA4137 
{
public:
	// System.Int32 Unity.XR.Oculus.SystemHeadset::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SystemHeadset_t16A682CFD8C01E96CE6D9E8AD92C5B33BFAA4137, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Controls.AxisControl/Clamp
struct Clamp_t3E4FD31C61BFE0691D66D074BE537D4B2FB49B17 
{
public:
	// System.Int32 UnityEngine.InputSystem.Controls.AxisControl/Clamp::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Clamp_t3E4FD31C61BFE0691D66D074BE537D4B2FB49B17, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.Boundary/BoundaryType
struct BoundaryType_t2D787F83347E327691F396B19C5DA6A49B2C29EC 
{
public:
	// System.Int32 Unity.XR.Oculus.Boundary/BoundaryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoundaryType_t2D787F83347E327691F396B19C5DA6A49B2C29EC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.Development/UserDeveloperModeSettingCache
struct UserDeveloperModeSettingCache_tD3FF164E39B8C782608E279A1E9ECA582812B4C8 
{
public:
	// System.Int32 Unity.XR.Oculus.Development/UserDeveloperModeSettingCache::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserDeveloperModeSettingCache_tD3FF164E39B8C782608E279A1E9ECA582812B4C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t1F31BA18251A5E57CB4BBB797F72FE78C1B73045 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_t1F31BA18251A5E57CB4BBB797F72FE78C1B73045, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputDevice/DeviceFlags
struct DeviceFlags_tA98A64E5A47B95C2C8CE09CE2F588B4633DB9E3F 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputDevice/DeviceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceFlags_tA98A64E5A47B95C2C8CE09CE2F588B4633DB9E3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult
struct DeviceSupportedResult_t91515A5FEA3D8ADF6777D4894FF176444CE2F15F 
{
public:
	// System.Int32 Unity.XR.Oculus.OculusLoader/DeviceSupportedResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceSupportedResult_t91515A5FEA3D8ADF6777D4894FF176444CE2F15F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid
struct StereoRenderingModeAndroid_t51C792A37730976614F2A445348686E8467ABCD2 
{
public:
	// System.Int32 Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoRenderingModeAndroid_t51C792A37730976614F2A445348686E8467ABCD2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop
struct StereoRenderingModeDesktop_t0AAEF2D9C556C46E75A630F2CB5145AA78AE3207 
{
public:
	// System.Int32 Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoRenderingModeDesktop_t0AAEF2D9C556C46E75A630F2CB5145AA78AE3207, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRDisplaySubsystem>
struct IntegratedSubsystemDescriptor_1_tFDF96CDD8FD2E980FF0C62E8161C66AF9FC212E2  : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>
struct Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434 
{
public:
	// T System.Nullable`1::value
	InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434, ___value_0)); }
	inline InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  get_value_0() const { return ___value_0; }
	inline InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Patterns_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Unity.XR.Oculus.Development
struct Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83  : public RuntimeObject
{
public:

public:
};

struct Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields
{
public:
	// Unity.XR.Oculus.Development/UserDeveloperModeSettingCache Unity.XR.Oculus.Development::s_CachedMode
	int32_t ___s_CachedMode_0;

public:
	inline static int32_t get_offset_of_s_CachedMode_0() { return static_cast<int32_t>(offsetof(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields, ___s_CachedMode_0)); }
	inline int32_t get_s_CachedMode_0() const { return ___s_CachedMode_0; }
	inline int32_t* get_address_of_s_CachedMode_0() { return &___s_CachedMode_0; }
	inline void set_s_CachedMode_0(int32_t value)
	{
		___s_CachedMode_0 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.InputSystem.InputControl
struct InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  ___m_MaxValue_20;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_StateBlock_0)); }
	inline InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3 * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_Name_1)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_Layout_7)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_Variants_8)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_Device_9)); }
	inline InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_Parent_10)); }
	inline InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_18() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_DefaultState_18)); }
	inline PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  get_m_DefaultState_18() const { return ___m_DefaultState_18; }
	inline PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D * get_address_of_m_DefaultState_18() { return &___m_DefaultState_18; }
	inline void set_m_DefaultState_18(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  value)
	{
		___m_DefaultState_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_MinValue_19)); }
	inline PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D * get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_MaxValue_20)); }
	inline PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D * get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  value)
	{
		___m_MaxValue_20 = value;
	}
};


// Unity.XR.Oculus.OculusSettings
struct OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop Unity.XR.Oculus.OculusSettings::m_StereoRenderingModeDesktop
	int32_t ___m_StereoRenderingModeDesktop_4;
	// Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid Unity.XR.Oculus.OculusSettings::m_StereoRenderingModeAndroid
	int32_t ___m_StereoRenderingModeAndroid_5;
	// System.Boolean Unity.XR.Oculus.OculusSettings::SharedDepthBuffer
	bool ___SharedDepthBuffer_6;
	// System.Boolean Unity.XR.Oculus.OculusSettings::DashSupport
	bool ___DashSupport_7;
	// System.Boolean Unity.XR.Oculus.OculusSettings::V2Signing
	bool ___V2Signing_8;
	// System.Boolean Unity.XR.Oculus.OculusSettings::LowOverheadMode
	bool ___LowOverheadMode_9;
	// System.Boolean Unity.XR.Oculus.OculusSettings::ProtectedContext
	bool ___ProtectedContext_10;
	// System.Boolean Unity.XR.Oculus.OculusSettings::FocusAware
	bool ___FocusAware_11;
	// System.Boolean Unity.XR.Oculus.OculusSettings::OptimizeBufferDiscards
	bool ___OptimizeBufferDiscards_12;
	// System.Boolean Unity.XR.Oculus.OculusSettings::PhaseSync
	bool ___PhaseSync_13;
	// System.Boolean Unity.XR.Oculus.OculusSettings::SymmetricProjection
	bool ___SymmetricProjection_14;
	// System.Boolean Unity.XR.Oculus.OculusSettings::SubsampledLayout
	bool ___SubsampledLayout_15;
	// System.Boolean Unity.XR.Oculus.OculusSettings::TargetQuest
	bool ___TargetQuest_16;
	// System.Boolean Unity.XR.Oculus.OculusSettings::TargetQuest2
	bool ___TargetQuest2_17;
	// UnityEngine.Texture2D Unity.XR.Oculus.OculusSettings::SystemSplashScreen
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___SystemSplashScreen_18;

public:
	inline static int32_t get_offset_of_m_StereoRenderingModeDesktop_4() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___m_StereoRenderingModeDesktop_4)); }
	inline int32_t get_m_StereoRenderingModeDesktop_4() const { return ___m_StereoRenderingModeDesktop_4; }
	inline int32_t* get_address_of_m_StereoRenderingModeDesktop_4() { return &___m_StereoRenderingModeDesktop_4; }
	inline void set_m_StereoRenderingModeDesktop_4(int32_t value)
	{
		___m_StereoRenderingModeDesktop_4 = value;
	}

	inline static int32_t get_offset_of_m_StereoRenderingModeAndroid_5() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___m_StereoRenderingModeAndroid_5)); }
	inline int32_t get_m_StereoRenderingModeAndroid_5() const { return ___m_StereoRenderingModeAndroid_5; }
	inline int32_t* get_address_of_m_StereoRenderingModeAndroid_5() { return &___m_StereoRenderingModeAndroid_5; }
	inline void set_m_StereoRenderingModeAndroid_5(int32_t value)
	{
		___m_StereoRenderingModeAndroid_5 = value;
	}

	inline static int32_t get_offset_of_SharedDepthBuffer_6() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___SharedDepthBuffer_6)); }
	inline bool get_SharedDepthBuffer_6() const { return ___SharedDepthBuffer_6; }
	inline bool* get_address_of_SharedDepthBuffer_6() { return &___SharedDepthBuffer_6; }
	inline void set_SharedDepthBuffer_6(bool value)
	{
		___SharedDepthBuffer_6 = value;
	}

	inline static int32_t get_offset_of_DashSupport_7() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___DashSupport_7)); }
	inline bool get_DashSupport_7() const { return ___DashSupport_7; }
	inline bool* get_address_of_DashSupport_7() { return &___DashSupport_7; }
	inline void set_DashSupport_7(bool value)
	{
		___DashSupport_7 = value;
	}

	inline static int32_t get_offset_of_V2Signing_8() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___V2Signing_8)); }
	inline bool get_V2Signing_8() const { return ___V2Signing_8; }
	inline bool* get_address_of_V2Signing_8() { return &___V2Signing_8; }
	inline void set_V2Signing_8(bool value)
	{
		___V2Signing_8 = value;
	}

	inline static int32_t get_offset_of_LowOverheadMode_9() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___LowOverheadMode_9)); }
	inline bool get_LowOverheadMode_9() const { return ___LowOverheadMode_9; }
	inline bool* get_address_of_LowOverheadMode_9() { return &___LowOverheadMode_9; }
	inline void set_LowOverheadMode_9(bool value)
	{
		___LowOverheadMode_9 = value;
	}

	inline static int32_t get_offset_of_ProtectedContext_10() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___ProtectedContext_10)); }
	inline bool get_ProtectedContext_10() const { return ___ProtectedContext_10; }
	inline bool* get_address_of_ProtectedContext_10() { return &___ProtectedContext_10; }
	inline void set_ProtectedContext_10(bool value)
	{
		___ProtectedContext_10 = value;
	}

	inline static int32_t get_offset_of_FocusAware_11() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___FocusAware_11)); }
	inline bool get_FocusAware_11() const { return ___FocusAware_11; }
	inline bool* get_address_of_FocusAware_11() { return &___FocusAware_11; }
	inline void set_FocusAware_11(bool value)
	{
		___FocusAware_11 = value;
	}

	inline static int32_t get_offset_of_OptimizeBufferDiscards_12() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___OptimizeBufferDiscards_12)); }
	inline bool get_OptimizeBufferDiscards_12() const { return ___OptimizeBufferDiscards_12; }
	inline bool* get_address_of_OptimizeBufferDiscards_12() { return &___OptimizeBufferDiscards_12; }
	inline void set_OptimizeBufferDiscards_12(bool value)
	{
		___OptimizeBufferDiscards_12 = value;
	}

	inline static int32_t get_offset_of_PhaseSync_13() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___PhaseSync_13)); }
	inline bool get_PhaseSync_13() const { return ___PhaseSync_13; }
	inline bool* get_address_of_PhaseSync_13() { return &___PhaseSync_13; }
	inline void set_PhaseSync_13(bool value)
	{
		___PhaseSync_13 = value;
	}

	inline static int32_t get_offset_of_SymmetricProjection_14() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___SymmetricProjection_14)); }
	inline bool get_SymmetricProjection_14() const { return ___SymmetricProjection_14; }
	inline bool* get_address_of_SymmetricProjection_14() { return &___SymmetricProjection_14; }
	inline void set_SymmetricProjection_14(bool value)
	{
		___SymmetricProjection_14 = value;
	}

	inline static int32_t get_offset_of_SubsampledLayout_15() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___SubsampledLayout_15)); }
	inline bool get_SubsampledLayout_15() const { return ___SubsampledLayout_15; }
	inline bool* get_address_of_SubsampledLayout_15() { return &___SubsampledLayout_15; }
	inline void set_SubsampledLayout_15(bool value)
	{
		___SubsampledLayout_15 = value;
	}

	inline static int32_t get_offset_of_TargetQuest_16() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___TargetQuest_16)); }
	inline bool get_TargetQuest_16() const { return ___TargetQuest_16; }
	inline bool* get_address_of_TargetQuest_16() { return &___TargetQuest_16; }
	inline void set_TargetQuest_16(bool value)
	{
		___TargetQuest_16 = value;
	}

	inline static int32_t get_offset_of_TargetQuest2_17() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___TargetQuest2_17)); }
	inline bool get_TargetQuest2_17() const { return ___TargetQuest2_17; }
	inline bool* get_address_of_TargetQuest2_17() { return &___TargetQuest2_17; }
	inline void set_TargetQuest2_17(bool value)
	{
		___TargetQuest2_17 = value;
	}

	inline static int32_t get_offset_of_SystemSplashScreen_18() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___SystemSplashScreen_18)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_SystemSplashScreen_18() const { return ___SystemSplashScreen_18; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_SystemSplashScreen_18() { return &___SystemSplashScreen_18; }
	inline void set_SystemSplashScreen_18(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___SystemSplashScreen_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SystemSplashScreen_18), (void*)value);
	}
};

struct OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields
{
public:
	// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusSettings::s_Settings
	OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * ___s_Settings_19;

public:
	inline static int32_t get_offset_of_s_Settings_19() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields, ___s_Settings_19)); }
	inline OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * get_s_Settings_19() const { return ___s_Settings_19; }
	inline OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C ** get_address_of_s_Settings_19() { return &___s_Settings_19; }
	inline void set_s_Settings_19(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * value)
	{
		___s_Settings_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Settings_19), (void*)value);
	}
};


// System.TypeLoadException
struct TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_17;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_18;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_19;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_20;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyName_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___AssemblyName_18)); }
	inline String_t* get_AssemblyName_18() const { return ___AssemblyName_18; }
	inline String_t** get_address_of_AssemblyName_18() { return &___AssemblyName_18; }
	inline void set_AssemblyName_18(String_t* value)
	{
		___AssemblyName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_18), (void*)value);
	}

	inline static int32_t get_offset_of_MessageArg_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___MessageArg_19)); }
	inline String_t* get_MessageArg_19() const { return ___MessageArg_19; }
	inline String_t** get_address_of_MessageArg_19() { return &___MessageArg_19; }
	inline void set_MessageArg_19(String_t* value)
	{
		___MessageArg_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageArg_19), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceId_20() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___ResourceId_20)); }
	inline int32_t get_ResourceId_20() const { return ___ResourceId_20; }
	inline int32_t* get_address_of_ResourceId_20() { return &___ResourceId_20; }
	inline void set_ResourceId_20(int32_t value)
	{
		___ResourceId_20 = value;
	}
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93  : public IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93, ___displayFocusChanged_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.XRDisplaySubsystemDescriptor
struct XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833  : public IntegratedSubsystemDescriptor_1_tFDF96CDD8FD2E980FF0C62E8161C66AF9FC212E2
{
public:

public:
};


// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09  : public IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___m_DeviceIdsCache_4;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___trackingOriginUpdated_2)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___boundaryChanged_3)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIdsCache_4() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___m_DeviceIdsCache_4)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_m_DeviceIdsCache_4() const { return ___m_DeviceIdsCache_4; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_m_DeviceIdsCache_4() { return &___m_DeviceIdsCache_4; }
	inline void set_m_DeviceIdsCache_4(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___m_DeviceIdsCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceIdsCache_4), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.InputSystem.InputControl`1<System.Int32>
struct InputControl_1_tBBA1E258299FA8251D80D922F3A5FF8291AD95F5  : public InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t1E8E973C9909EAC1D2DD5DC2AE05EC2B3D7A328A  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tBBA1E258299FA8251D80D922F3A5FF8291AD95F5, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t1E8E973C9909EAC1D2DD5DC2AE05EC2B3D7A328A  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t1E8E973C9909EAC1D2DD5DC2AE05EC2B3D7A328A * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t1E8E973C9909EAC1D2DD5DC2AE05EC2B3D7A328A  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>
struct InputControl_1_t8A05BCA52404D2D00FCB899FE0A4BFE98A746ABE  : public InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tC46824240B53C7BA196CEBABCAB9F763E45A5A6C  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t8A05BCA52404D2D00FCB899FE0A4BFE98A746ABE, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_tC46824240B53C7BA196CEBABCAB9F763E45A5A6C  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_tC46824240B53C7BA196CEBABCAB9F763E45A5A6C * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_tC46824240B53C7BA196CEBABCAB9F763E45A5A6C  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_tCEFC6B2B9010D098E9202A04D2559FBC43D6B096  : public InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t3846DFB4D8DB2A5CF2157D9885689E35C5DB4BE1  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tCEFC6B2B9010D098E9202A04D2559FBC43D6B096, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t3846DFB4D8DB2A5CF2157D9885689E35C5DB4BE1  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t3846DFB4D8DB2A5CF2157D9885689E35C5DB4BE1 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t3846DFB4D8DB2A5CF2157D9885689E35C5DB4BE1  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tFF9A76816217BF65BC073EB718F408427089B005  : public InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tF881B4FB101C1F7E5C6303B65CCD7E0792AA83BA  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tFF9A76816217BF65BC073EB718F408427089B005, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_tF881B4FB101C1F7E5C6303B65CCD7E0792AA83BA  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_tF881B4FB101C1F7E5C6303B65CCD7E0792AA83BA * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_tF881B4FB101C1F7E5C6303B65CCD7E0792AA83BA  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>
struct InputControl_1_tAC3938D6DEBEB3383EC43B895AA1F6329E02113D  : public InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t44AF1E62AF31475F023E2DAAE329932E88CF39E2  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tAC3938D6DEBEB3383EC43B895AA1F6329E02113D, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t44AF1E62AF31475F023E2DAAE329932E88CF39E2  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t44AF1E62AF31475F023E2DAAE329932E88CF39E2 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t44AF1E62AF31475F023E2DAAE329932E88CF39E2  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// System.DllNotFoundException
struct DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596  : public TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7
{
public:

public:
};


// UnityEngine.InputSystem.InputDevice
struct InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14  : public InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022
{
public:
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E  ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032* ___m_ChildrenForEachControl_34;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_StateOffsetToControlMap_35;

public:
	inline static int32_t get_offset_of_m_DeviceFlags_24() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_DeviceFlags_24)); }
	inline int32_t get_m_DeviceFlags_24() const { return ___m_DeviceFlags_24; }
	inline int32_t* get_address_of_m_DeviceFlags_24() { return &___m_DeviceFlags_24; }
	inline void set_m_DeviceFlags_24(int32_t value)
	{
		___m_DeviceFlags_24 = value;
	}

	inline static int32_t get_offset_of_m_DeviceId_25() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_DeviceId_25)); }
	inline int32_t get_m_DeviceId_25() const { return ___m_DeviceId_25; }
	inline int32_t* get_address_of_m_DeviceId_25() { return &___m_DeviceId_25; }
	inline void set_m_DeviceId_25(int32_t value)
	{
		___m_DeviceId_25 = value;
	}

	inline static int32_t get_offset_of_m_ParticipantId_26() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_ParticipantId_26)); }
	inline int32_t get_m_ParticipantId_26() const { return ___m_ParticipantId_26; }
	inline int32_t* get_address_of_m_ParticipantId_26() { return &___m_ParticipantId_26; }
	inline void set_m_ParticipantId_26(int32_t value)
	{
		___m_ParticipantId_26 = value;
	}

	inline static int32_t get_offset_of_m_DeviceIndex_27() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_DeviceIndex_27)); }
	inline int32_t get_m_DeviceIndex_27() const { return ___m_DeviceIndex_27; }
	inline int32_t* get_address_of_m_DeviceIndex_27() { return &___m_DeviceIndex_27; }
	inline void set_m_DeviceIndex_27(int32_t value)
	{
		___m_DeviceIndex_27 = value;
	}

	inline static int32_t get_offset_of_m_Description_28() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_Description_28)); }
	inline InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E  get_m_Description_28() const { return ___m_Description_28; }
	inline InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E * get_address_of_m_Description_28() { return &___m_Description_28; }
	inline void set_m_Description_28(InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E  value)
	{
		___m_Description_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_InterfaceName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Capabilities_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_LastUpdateTimeInternal_29() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_LastUpdateTimeInternal_29)); }
	inline double get_m_LastUpdateTimeInternal_29() const { return ___m_LastUpdateTimeInternal_29; }
	inline double* get_address_of_m_LastUpdateTimeInternal_29() { return &___m_LastUpdateTimeInternal_29; }
	inline void set_m_LastUpdateTimeInternal_29(double value)
	{
		___m_LastUpdateTimeInternal_29 = value;
	}

	inline static int32_t get_offset_of_m_CurrentUpdateStepCount_30() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_CurrentUpdateStepCount_30)); }
	inline uint32_t get_m_CurrentUpdateStepCount_30() const { return ___m_CurrentUpdateStepCount_30; }
	inline uint32_t* get_address_of_m_CurrentUpdateStepCount_30() { return &___m_CurrentUpdateStepCount_30; }
	inline void set_m_CurrentUpdateStepCount_30(uint32_t value)
	{
		___m_CurrentUpdateStepCount_30 = value;
	}

	inline static int32_t get_offset_of_m_AliasesForEachControl_31() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_AliasesForEachControl_31)); }
	inline InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA* get_m_AliasesForEachControl_31() const { return ___m_AliasesForEachControl_31; }
	inline InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA** get_address_of_m_AliasesForEachControl_31() { return &___m_AliasesForEachControl_31; }
	inline void set_m_AliasesForEachControl_31(InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA* value)
	{
		___m_AliasesForEachControl_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AliasesForEachControl_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsagesForEachControl_32() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_UsagesForEachControl_32)); }
	inline InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA* get_m_UsagesForEachControl_32() const { return ___m_UsagesForEachControl_32; }
	inline InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA** get_address_of_m_UsagesForEachControl_32() { return &___m_UsagesForEachControl_32; }
	inline void set_m_UsagesForEachControl_32(InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA* value)
	{
		___m_UsagesForEachControl_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsagesForEachControl_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageToControl_33() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_UsageToControl_33)); }
	inline InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032* get_m_UsageToControl_33() const { return ___m_UsageToControl_33; }
	inline InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032** get_address_of_m_UsageToControl_33() { return &___m_UsageToControl_33; }
	inline void set_m_UsageToControl_33(InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032* value)
	{
		___m_UsageToControl_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsageToControl_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildrenForEachControl_34() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_ChildrenForEachControl_34)); }
	inline InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032* get_m_ChildrenForEachControl_34() const { return ___m_ChildrenForEachControl_34; }
	inline InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032** get_address_of_m_ChildrenForEachControl_34() { return &___m_ChildrenForEachControl_34; }
	inline void set_m_ChildrenForEachControl_34(InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032* value)
	{
		___m_ChildrenForEachControl_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildrenForEachControl_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_StateOffsetToControlMap_35() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_StateOffsetToControlMap_35)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_StateOffsetToControlMap_35() const { return ___m_StateOffsetToControlMap_35; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_StateOffsetToControlMap_35() { return &___m_StateOffsetToControlMap_35; }
	inline void set_m_StateOffsetToControlMap_35(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_StateOffsetToControlMap_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StateOffsetToControlMap_35), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013  : public XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * ___m_SubsystemInstanceMap_4;

public:
	inline static int32_t get_offset_of_m_SubsystemInstanceMap_4() { return static_cast<int32_t>(offsetof(XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013, ___m_SubsystemInstanceMap_4)); }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * get_m_SubsystemInstanceMap_4() const { return ___m_SubsystemInstanceMap_4; }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B ** get_address_of_m_SubsystemInstanceMap_4() { return &___m_SubsystemInstanceMap_4; }
	inline void set_m_SubsystemInstanceMap_4(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * value)
	{
		___m_SubsystemInstanceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemInstanceMap_4), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E  : public InputControl_1_tCEFC6B2B9010D098E9202A04D2559FBC43D6B096
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_22;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_23;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_24;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_25;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_26;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_27;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_30;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_31;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_32;

public:
	inline static int32_t get_offset_of_clamp_22() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___clamp_22)); }
	inline int32_t get_clamp_22() const { return ___clamp_22; }
	inline int32_t* get_address_of_clamp_22() { return &___clamp_22; }
	inline void set_clamp_22(int32_t value)
	{
		___clamp_22 = value;
	}

	inline static int32_t get_offset_of_clampMin_23() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___clampMin_23)); }
	inline float get_clampMin_23() const { return ___clampMin_23; }
	inline float* get_address_of_clampMin_23() { return &___clampMin_23; }
	inline void set_clampMin_23(float value)
	{
		___clampMin_23 = value;
	}

	inline static int32_t get_offset_of_clampMax_24() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___clampMax_24)); }
	inline float get_clampMax_24() const { return ___clampMax_24; }
	inline float* get_address_of_clampMax_24() { return &___clampMax_24; }
	inline void set_clampMax_24(float value)
	{
		___clampMax_24 = value;
	}

	inline static int32_t get_offset_of_clampConstant_25() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___clampConstant_25)); }
	inline float get_clampConstant_25() const { return ___clampConstant_25; }
	inline float* get_address_of_clampConstant_25() { return &___clampConstant_25; }
	inline void set_clampConstant_25(float value)
	{
		___clampConstant_25 = value;
	}

	inline static int32_t get_offset_of_invert_26() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___invert_26)); }
	inline bool get_invert_26() const { return ___invert_26; }
	inline bool* get_address_of_invert_26() { return &___invert_26; }
	inline void set_invert_26(bool value)
	{
		___invert_26 = value;
	}

	inline static int32_t get_offset_of_normalize_27() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___normalize_27)); }
	inline bool get_normalize_27() const { return ___normalize_27; }
	inline bool* get_address_of_normalize_27() { return &___normalize_27; }
	inline void set_normalize_27(bool value)
	{
		___normalize_27 = value;
	}

	inline static int32_t get_offset_of_normalizeMin_28() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___normalizeMin_28)); }
	inline float get_normalizeMin_28() const { return ___normalizeMin_28; }
	inline float* get_address_of_normalizeMin_28() { return &___normalizeMin_28; }
	inline void set_normalizeMin_28(float value)
	{
		___normalizeMin_28 = value;
	}

	inline static int32_t get_offset_of_normalizeMax_29() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___normalizeMax_29)); }
	inline float get_normalizeMax_29() const { return ___normalizeMax_29; }
	inline float* get_address_of_normalizeMax_29() { return &___normalizeMax_29; }
	inline void set_normalizeMax_29(float value)
	{
		___normalizeMax_29 = value;
	}

	inline static int32_t get_offset_of_normalizeZero_30() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___normalizeZero_30)); }
	inline float get_normalizeZero_30() const { return ___normalizeZero_30; }
	inline float* get_address_of_normalizeZero_30() { return &___normalizeZero_30; }
	inline void set_normalizeZero_30(float value)
	{
		___normalizeZero_30 = value;
	}

	inline static int32_t get_offset_of_scale_31() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___scale_31)); }
	inline bool get_scale_31() const { return ___scale_31; }
	inline bool* get_address_of_scale_31() { return &___scale_31; }
	inline void set_scale_31(bool value)
	{
		___scale_31 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_32() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___scaleFactor_32)); }
	inline float get_scaleFactor_32() const { return ___scaleFactor_32; }
	inline float* get_address_of_scaleFactor_32() { return &___scaleFactor_32; }
	inline void set_scaleFactor_32(float value)
	{
		___scaleFactor_32 = value;
	}
};


// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF  : public InputControl_1_tBBA1E258299FA8251D80D922F3A5FF8291AD95F5
{
public:

public:
};


// Unity.XR.Oculus.OculusLoader
struct OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB  : public XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013
{
public:

public:
};

struct OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor> Unity.XR.Oculus.OculusLoader::s_DisplaySubsystemDescriptors
	List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * ___s_DisplaySubsystemDescriptors_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor> Unity.XR.Oculus.OculusLoader::s_InputSubsystemDescriptors
	List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * ___s_InputSubsystemDescriptors_6;

public:
	inline static int32_t get_offset_of_s_DisplaySubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields, ___s_DisplaySubsystemDescriptors_5)); }
	inline List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * get_s_DisplaySubsystemDescriptors_5() const { return ___s_DisplaySubsystemDescriptors_5; }
	inline List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 ** get_address_of_s_DisplaySubsystemDescriptors_5() { return &___s_DisplaySubsystemDescriptors_5; }
	inline void set_s_DisplaySubsystemDescriptors_5(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * value)
	{
		___s_DisplaySubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DisplaySubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_InputSubsystemDescriptors_6() { return static_cast<int32_t>(offsetof(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields, ___s_InputSubsystemDescriptors_6)); }
	inline List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * get_s_InputSubsystemDescriptors_6() const { return ___s_InputSubsystemDescriptors_6; }
	inline List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 ** get_address_of_s_InputSubsystemDescriptors_6() { return &___s_InputSubsystemDescriptors_6; }
	inline void set_s_InputSubsystemDescriptors_6(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * value)
	{
		___s_InputSubsystemDescriptors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystemDescriptors_6), (void*)value);
	}
};


// Unity.XR.Oculus.Input.OculusRemote
struct OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3  : public InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14
{
public:
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusRemote::<back>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CbackU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusRemote::<start>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CstartU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusRemote::<touchpad>k__BackingField
	Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___U3CtouchpadU3Ek__BackingField_41;

public:
	inline static int32_t get_offset_of_U3CbackU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3, ___U3CbackU3Ek__BackingField_39)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CbackU3Ek__BackingField_39() const { return ___U3CbackU3Ek__BackingField_39; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CbackU3Ek__BackingField_39() { return &___U3CbackU3Ek__BackingField_39; }
	inline void set_U3CbackU3Ek__BackingField_39(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CbackU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbackU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3, ___U3CstartU3Ek__BackingField_40)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CstartU3Ek__BackingField_40() const { return ___U3CstartU3Ek__BackingField_40; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CstartU3Ek__BackingField_40() { return &___U3CstartU3Ek__BackingField_40; }
	inline void set_U3CstartU3Ek__BackingField_40(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CstartU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstartU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchpadU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3, ___U3CtouchpadU3Ek__BackingField_41)); }
	inline Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * get_U3CtouchpadU3Ek__BackingField_41() const { return ___U3CtouchpadU3Ek__BackingField_41; }
	inline Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 ** get_address_of_U3CtouchpadU3Ek__BackingField_41() { return &___U3CtouchpadU3Ek__BackingField_41; }
	inline void set_U3CtouchpadU3Ek__BackingField_41(Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * value)
	{
		___U3CtouchpadU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadU3Ek__BackingField_41), (void*)value);
	}
};


// Unity.XR.Oculus.Input.OculusTrackingReference
struct OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807  : public InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14
{
public:
	// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusTrackingReference::<trackingState>k__BackingField
	IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___U3CtrackingStateU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTrackingReference::<isTracked>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CisTrackedU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTrackingReference::<devicePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdevicePositionU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusTrackingReference::<deviceRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CdeviceRotationU3Ek__BackingField_42;

public:
	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807, ___U3CtrackingStateU3Ek__BackingField_39)); }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * get_U3CtrackingStateU3Ek__BackingField_39() const { return ___U3CtrackingStateU3Ek__BackingField_39; }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF ** get_address_of_U3CtrackingStateU3Ek__BackingField_39() { return &___U3CtrackingStateU3Ek__BackingField_39; }
	inline void set_U3CtrackingStateU3Ek__BackingField_39(IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * value)
	{
		___U3CtrackingStateU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807, ___U3CisTrackedU3Ek__BackingField_40)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CisTrackedU3Ek__BackingField_40() const { return ___U3CisTrackedU3Ek__BackingField_40; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CisTrackedU3Ek__BackingField_40() { return &___U3CisTrackedU3Ek__BackingField_40; }
	inline void set_U3CisTrackedU3Ek__BackingField_40(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CisTrackedU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807, ___U3CdevicePositionU3Ek__BackingField_41)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdevicePositionU3Ek__BackingField_41() const { return ___U3CdevicePositionU3Ek__BackingField_41; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdevicePositionU3Ek__BackingField_41() { return &___U3CdevicePositionU3Ek__BackingField_41; }
	inline void set_U3CdevicePositionU3Ek__BackingField_41(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdevicePositionU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_41), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807, ___U3CdeviceRotationU3Ek__BackingField_42)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CdeviceRotationU3Ek__BackingField_42() const { return ___U3CdeviceRotationU3Ek__BackingField_42; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CdeviceRotationU3Ek__BackingField_42() { return &___U3CdeviceRotationU3Ek__BackingField_42; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_42(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_42), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525  : public InputControl_1_t8A05BCA52404D2D00FCB899FE0A4BFE98A746ABE
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<x>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<y>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CyU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<z>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CzU3Ek__BackingField_24;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<w>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CwU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_U3CxU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525, ___U3CxU3Ek__BackingField_22)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CxU3Ek__BackingField_22() const { return ___U3CxU3Ek__BackingField_22; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CxU3Ek__BackingField_22() { return &___U3CxU3Ek__BackingField_22; }
	inline void set_U3CxU3Ek__BackingField_22(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CxU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525, ___U3CyU3Ek__BackingField_23)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CyU3Ek__BackingField_23() const { return ___U3CyU3Ek__BackingField_23; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CyU3Ek__BackingField_23() { return &___U3CyU3Ek__BackingField_23; }
	inline void set_U3CyU3Ek__BackingField_23(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CyU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CzU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525, ___U3CzU3Ek__BackingField_24)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CzU3Ek__BackingField_24() const { return ___U3CzU3Ek__BackingField_24; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CzU3Ek__BackingField_24() { return &___U3CzU3Ek__BackingField_24; }
	inline void set_U3CzU3Ek__BackingField_24(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CzU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CzU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525, ___U3CwU3Ek__BackingField_25)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CwU3Ek__BackingField_25() const { return ___U3CwU3Ek__BackingField_25; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CwU3Ek__BackingField_25() { return &___U3CwU3Ek__BackingField_25; }
	inline void set_U3CwU3Ek__BackingField_25(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CwU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwU3Ek__BackingField_25), (void*)value);
	}
};


// UnityEngine.InputSystem.TrackedDevice
struct TrackedDevice_t9CC7239E4FE23193A710E51D80C0F82F214EE9C0  : public InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14
{
public:
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.TrackedDevice::<trackingState>k__BackingField
	IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___U3CtrackingStateU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.TrackedDevice::<isTracked>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CisTrackedU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.TrackedDevice::<devicePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdevicePositionU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.TrackedDevice::<deviceRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CdeviceRotationU3Ek__BackingField_42;

public:
	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(TrackedDevice_t9CC7239E4FE23193A710E51D80C0F82F214EE9C0, ___U3CtrackingStateU3Ek__BackingField_39)); }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * get_U3CtrackingStateU3Ek__BackingField_39() const { return ___U3CtrackingStateU3Ek__BackingField_39; }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF ** get_address_of_U3CtrackingStateU3Ek__BackingField_39() { return &___U3CtrackingStateU3Ek__BackingField_39; }
	inline void set_U3CtrackingStateU3Ek__BackingField_39(IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * value)
	{
		___U3CtrackingStateU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(TrackedDevice_t9CC7239E4FE23193A710E51D80C0F82F214EE9C0, ___U3CisTrackedU3Ek__BackingField_40)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CisTrackedU3Ek__BackingField_40() const { return ___U3CisTrackedU3Ek__BackingField_40; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CisTrackedU3Ek__BackingField_40() { return &___U3CisTrackedU3Ek__BackingField_40; }
	inline void set_U3CisTrackedU3Ek__BackingField_40(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CisTrackedU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(TrackedDevice_t9CC7239E4FE23193A710E51D80C0F82F214EE9C0, ___U3CdevicePositionU3Ek__BackingField_41)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdevicePositionU3Ek__BackingField_41() const { return ___U3CdevicePositionU3Ek__BackingField_41; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdevicePositionU3Ek__BackingField_41() { return &___U3CdevicePositionU3Ek__BackingField_41; }
	inline void set_U3CdevicePositionU3Ek__BackingField_41(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdevicePositionU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_41), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(TrackedDevice_t9CC7239E4FE23193A710E51D80C0F82F214EE9C0, ___U3CdeviceRotationU3Ek__BackingField_42)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CdeviceRotationU3Ek__BackingField_42() const { return ___U3CdeviceRotationU3Ek__BackingField_42; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CdeviceRotationU3Ek__BackingField_42() { return &___U3CdeviceRotationU3Ek__BackingField_42; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_42(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_42), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429  : public InputControl_1_tFF9A76816217BF65BC073EB718F408427089B005
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<x>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<y>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CyU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CxU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429, ___U3CxU3Ek__BackingField_22)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CxU3Ek__BackingField_22() const { return ___U3CxU3Ek__BackingField_22; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CxU3Ek__BackingField_22() { return &___U3CxU3Ek__BackingField_22; }
	inline void set_U3CxU3Ek__BackingField_22(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CxU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429, ___U3CyU3Ek__BackingField_23)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CyU3Ek__BackingField_23() const { return ___U3CyU3Ek__BackingField_23; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CyU3Ek__BackingField_23() { return &___U3CyU3Ek__BackingField_23; }
	inline void set_U3CyU3Ek__BackingField_23(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CyU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyU3Ek__BackingField_23), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E  : public InputControl_1_tAC3938D6DEBEB3383EC43B895AA1F6329E02113D
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<x>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<y>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CyU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<z>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CzU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_U3CxU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E, ___U3CxU3Ek__BackingField_22)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CxU3Ek__BackingField_22() const { return ___U3CxU3Ek__BackingField_22; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CxU3Ek__BackingField_22() { return &___U3CxU3Ek__BackingField_22; }
	inline void set_U3CxU3Ek__BackingField_22(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CxU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E, ___U3CyU3Ek__BackingField_23)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CyU3Ek__BackingField_23() const { return ___U3CyU3Ek__BackingField_23; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CyU3Ek__BackingField_23() { return &___U3CyU3Ek__BackingField_23; }
	inline void set_U3CyU3Ek__BackingField_23(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CyU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CzU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E, ___U3CzU3Ek__BackingField_24)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CzU3Ek__BackingField_24() const { return ___U3CzU3Ek__BackingField_24; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CzU3Ek__BackingField_24() { return &___U3CzU3Ek__BackingField_24; }
	inline void set_U3CzU3Ek__BackingField_24(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CzU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CzU3Ek__BackingField_24), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2  : public AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_33;

public:
	inline static int32_t get_offset_of_pressPoint_33() { return static_cast<int32_t>(offsetof(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2, ___pressPoint_33)); }
	inline float get_pressPoint_33() const { return ___pressPoint_33; }
	inline float* get_address_of_pressPoint_33() { return &___pressPoint_33; }
	inline void set_pressPoint_33(float value)
	{
		___pressPoint_33 = value;
	}
};

struct ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_StaticFields
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_34;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_35;

public:
	inline static int32_t get_offset_of_s_GlobalDefaultButtonPressPoint_34() { return static_cast<int32_t>(offsetof(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_StaticFields, ___s_GlobalDefaultButtonPressPoint_34)); }
	inline float get_s_GlobalDefaultButtonPressPoint_34() const { return ___s_GlobalDefaultButtonPressPoint_34; }
	inline float* get_address_of_s_GlobalDefaultButtonPressPoint_34() { return &___s_GlobalDefaultButtonPressPoint_34; }
	inline void set_s_GlobalDefaultButtonPressPoint_34(float value)
	{
		___s_GlobalDefaultButtonPressPoint_34 = value;
	}

	inline static int32_t get_offset_of_s_GlobalDefaultButtonReleaseThreshold_35() { return static_cast<int32_t>(offsetof(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_StaticFields, ___s_GlobalDefaultButtonReleaseThreshold_35)); }
	inline float get_s_GlobalDefaultButtonReleaseThreshold_35() const { return ___s_GlobalDefaultButtonReleaseThreshold_35; }
	inline float* get_address_of_s_GlobalDefaultButtonReleaseThreshold_35() { return &___s_GlobalDefaultButtonReleaseThreshold_35; }
	inline void set_s_GlobalDefaultButtonReleaseThreshold_35(float value)
	{
		___s_GlobalDefaultButtonReleaseThreshold_35 = value;
	}
};


// UnityEngine.InputSystem.XR.XRController
struct XRController_tB4E4AE731873CAAAE0C04DFBBE690F385EDF081E  : public TrackedDevice_t9CC7239E4FE23193A710E51D80C0F82F214EE9C0
{
public:

public:
};


// UnityEngine.InputSystem.XR.XRHMD
struct XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2  : public TrackedDevice_t9CC7239E4FE23193A710E51D80C0F82F214EE9C0
{
public:
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.XRHMD::<leftEyePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CleftEyePositionU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.XRHMD::<leftEyeRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CleftEyeRotationU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.XRHMD::<rightEyePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CrightEyePositionU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.XRHMD::<rightEyeRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CrightEyeRotationU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.XRHMD::<centerEyePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CcenterEyePositionU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.XRHMD::<centerEyeRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CcenterEyeRotationU3Ek__BackingField_48;

public:
	inline static int32_t get_offset_of_U3CleftEyePositionU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2, ___U3CleftEyePositionU3Ek__BackingField_43)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CleftEyePositionU3Ek__BackingField_43() const { return ___U3CleftEyePositionU3Ek__BackingField_43; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CleftEyePositionU3Ek__BackingField_43() { return &___U3CleftEyePositionU3Ek__BackingField_43; }
	inline void set_U3CleftEyePositionU3Ek__BackingField_43(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CleftEyePositionU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyePositionU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeRotationU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2, ___U3CleftEyeRotationU3Ek__BackingField_44)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CleftEyeRotationU3Ek__BackingField_44() const { return ___U3CleftEyeRotationU3Ek__BackingField_44; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CleftEyeRotationU3Ek__BackingField_44() { return &___U3CleftEyeRotationU3Ek__BackingField_44; }
	inline void set_U3CleftEyeRotationU3Ek__BackingField_44(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CleftEyeRotationU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeRotationU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyePositionU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2, ___U3CrightEyePositionU3Ek__BackingField_45)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CrightEyePositionU3Ek__BackingField_45() const { return ___U3CrightEyePositionU3Ek__BackingField_45; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CrightEyePositionU3Ek__BackingField_45() { return &___U3CrightEyePositionU3Ek__BackingField_45; }
	inline void set_U3CrightEyePositionU3Ek__BackingField_45(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CrightEyePositionU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyePositionU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeRotationU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2, ___U3CrightEyeRotationU3Ek__BackingField_46)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CrightEyeRotationU3Ek__BackingField_46() const { return ___U3CrightEyeRotationU3Ek__BackingField_46; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CrightEyeRotationU3Ek__BackingField_46() { return &___U3CrightEyeRotationU3Ek__BackingField_46; }
	inline void set_U3CrightEyeRotationU3Ek__BackingField_46(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CrightEyeRotationU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeRotationU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyePositionU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2, ___U3CcenterEyePositionU3Ek__BackingField_47)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CcenterEyePositionU3Ek__BackingField_47() const { return ___U3CcenterEyePositionU3Ek__BackingField_47; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CcenterEyePositionU3Ek__BackingField_47() { return &___U3CcenterEyePositionU3Ek__BackingField_47; }
	inline void set_U3CcenterEyePositionU3Ek__BackingField_47(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CcenterEyePositionU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyePositionU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeRotationU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2, ___U3CcenterEyeRotationU3Ek__BackingField_48)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CcenterEyeRotationU3Ek__BackingField_48() const { return ___U3CcenterEyeRotationU3Ek__BackingField_48; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CcenterEyeRotationU3Ek__BackingField_48() { return &___U3CcenterEyeRotationU3Ek__BackingField_48; }
	inline void set_U3CcenterEyeRotationU3Ek__BackingField_48(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CcenterEyeRotationU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeRotationU3Ek__BackingField_48), (void*)value);
	}
};


// Unity.XR.Oculus.Input.GearVRTrackedController
struct GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D  : public XRController_tB4E4AE731873CAAAE0C04DFBBE690F385EDF081E
{
public:
	// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.GearVRTrackedController::<touchpad>k__BackingField
	Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___U3CtouchpadU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.GearVRTrackedController::<trigger>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CtriggerU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::<back>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CbackU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::<triggerPressed>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CtriggerPressedU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::<touchpadClicked>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CtouchpadClickedU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::<touchpadTouched>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CtouchpadTouchedU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.GearVRTrackedController::<trackingState>k__BackingField
	IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___U3CtrackingStateU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::<isTracked>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CisTrackedU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::<devicePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdevicePositionU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.GearVRTrackedController::<deviceRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CdeviceRotationU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::<deviceAngularVelocity>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdeviceAngularVelocityU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::<deviceAcceleration>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdeviceAccelerationU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::<deviceAngularAcceleration>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdeviceAngularAccelerationU3Ek__BackingField_55;

public:
	inline static int32_t get_offset_of_U3CtouchpadU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtouchpadU3Ek__BackingField_43)); }
	inline Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * get_U3CtouchpadU3Ek__BackingField_43() const { return ___U3CtouchpadU3Ek__BackingField_43; }
	inline Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 ** get_address_of_U3CtouchpadU3Ek__BackingField_43() { return &___U3CtouchpadU3Ek__BackingField_43; }
	inline void set_U3CtouchpadU3Ek__BackingField_43(Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * value)
	{
		___U3CtouchpadU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtriggerU3Ek__BackingField_44)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CtriggerU3Ek__BackingField_44() const { return ___U3CtriggerU3Ek__BackingField_44; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CtriggerU3Ek__BackingField_44() { return &___U3CtriggerU3Ek__BackingField_44; }
	inline void set_U3CtriggerU3Ek__BackingField_44(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CtriggerU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbackU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CbackU3Ek__BackingField_45)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CbackU3Ek__BackingField_45() const { return ___U3CbackU3Ek__BackingField_45; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CbackU3Ek__BackingField_45() { return &___U3CbackU3Ek__BackingField_45; }
	inline void set_U3CbackU3Ek__BackingField_45(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CbackU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbackU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerPressedU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtriggerPressedU3Ek__BackingField_46)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CtriggerPressedU3Ek__BackingField_46() const { return ___U3CtriggerPressedU3Ek__BackingField_46; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CtriggerPressedU3Ek__BackingField_46() { return &___U3CtriggerPressedU3Ek__BackingField_46; }
	inline void set_U3CtriggerPressedU3Ek__BackingField_46(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CtriggerPressedU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerPressedU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchpadClickedU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtouchpadClickedU3Ek__BackingField_47)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CtouchpadClickedU3Ek__BackingField_47() const { return ___U3CtouchpadClickedU3Ek__BackingField_47; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CtouchpadClickedU3Ek__BackingField_47() { return &___U3CtouchpadClickedU3Ek__BackingField_47; }
	inline void set_U3CtouchpadClickedU3Ek__BackingField_47(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CtouchpadClickedU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadClickedU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchpadTouchedU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtouchpadTouchedU3Ek__BackingField_48)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CtouchpadTouchedU3Ek__BackingField_48() const { return ___U3CtouchpadTouchedU3Ek__BackingField_48; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CtouchpadTouchedU3Ek__BackingField_48() { return &___U3CtouchpadTouchedU3Ek__BackingField_48; }
	inline void set_U3CtouchpadTouchedU3Ek__BackingField_48(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CtouchpadTouchedU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadTouchedU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtrackingStateU3Ek__BackingField_49)); }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * get_U3CtrackingStateU3Ek__BackingField_49() const { return ___U3CtrackingStateU3Ek__BackingField_49; }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF ** get_address_of_U3CtrackingStateU3Ek__BackingField_49() { return &___U3CtrackingStateU3Ek__BackingField_49; }
	inline void set_U3CtrackingStateU3Ek__BackingField_49(IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * value)
	{
		___U3CtrackingStateU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CisTrackedU3Ek__BackingField_50)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CisTrackedU3Ek__BackingField_50() const { return ___U3CisTrackedU3Ek__BackingField_50; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CisTrackedU3Ek__BackingField_50() { return &___U3CisTrackedU3Ek__BackingField_50; }
	inline void set_U3CisTrackedU3Ek__BackingField_50(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CisTrackedU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CdevicePositionU3Ek__BackingField_51)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdevicePositionU3Ek__BackingField_51() const { return ___U3CdevicePositionU3Ek__BackingField_51; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdevicePositionU3Ek__BackingField_51() { return &___U3CdevicePositionU3Ek__BackingField_51; }
	inline void set_U3CdevicePositionU3Ek__BackingField_51(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdevicePositionU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CdeviceRotationU3Ek__BackingField_52)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CdeviceRotationU3Ek__BackingField_52() const { return ___U3CdeviceRotationU3Ek__BackingField_52; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CdeviceRotationU3Ek__BackingField_52() { return &___U3CdeviceRotationU3Ek__BackingField_52; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_52(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_52), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularVelocityU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CdeviceAngularVelocityU3Ek__BackingField_53)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdeviceAngularVelocityU3Ek__BackingField_53() const { return ___U3CdeviceAngularVelocityU3Ek__BackingField_53; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdeviceAngularVelocityU3Ek__BackingField_53() { return &___U3CdeviceAngularVelocityU3Ek__BackingField_53; }
	inline void set_U3CdeviceAngularVelocityU3Ek__BackingField_53(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdeviceAngularVelocityU3Ek__BackingField_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularVelocityU3Ek__BackingField_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAccelerationU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CdeviceAccelerationU3Ek__BackingField_54)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdeviceAccelerationU3Ek__BackingField_54() const { return ___U3CdeviceAccelerationU3Ek__BackingField_54; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdeviceAccelerationU3Ek__BackingField_54() { return &___U3CdeviceAccelerationU3Ek__BackingField_54; }
	inline void set_U3CdeviceAccelerationU3Ek__BackingField_54(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdeviceAccelerationU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAccelerationU3Ek__BackingField_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularAccelerationU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CdeviceAngularAccelerationU3Ek__BackingField_55)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdeviceAngularAccelerationU3Ek__BackingField_55() const { return ___U3CdeviceAngularAccelerationU3Ek__BackingField_55; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdeviceAngularAccelerationU3Ek__BackingField_55() { return &___U3CdeviceAngularAccelerationU3Ek__BackingField_55; }
	inline void set_U3CdeviceAngularAccelerationU3Ek__BackingField_55(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdeviceAngularAccelerationU3Ek__BackingField_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularAccelerationU3Ek__BackingField_55), (void*)value);
	}
};


// Unity.XR.Oculus.Input.OculusHMD
struct OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A  : public XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2
{
public:
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMD::<userPresence>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CuserPresenceU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusHMD::<trackingState>k__BackingField
	IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___U3CtrackingStateU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMD::<isTracked>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CisTrackedU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<devicePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdevicePositionU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::<deviceRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CdeviceRotationU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<deviceAngularVelocity>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdeviceAngularVelocityU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<deviceAcceleration>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdeviceAccelerationU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<deviceAngularAcceleration>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdeviceAngularAccelerationU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<leftEyePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CleftEyePositionU3Ek__BackingField_57;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::<leftEyeRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CleftEyeRotationU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<leftEyeAngularVelocity>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CleftEyeAngularVelocityU3Ek__BackingField_59;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<leftEyeAcceleration>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CleftEyeAccelerationU3Ek__BackingField_60;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<leftEyeAngularAcceleration>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CleftEyeAngularAccelerationU3Ek__BackingField_61;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<rightEyePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CrightEyePositionU3Ek__BackingField_62;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::<rightEyeRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CrightEyeRotationU3Ek__BackingField_63;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<rightEyeAngularVelocity>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CrightEyeAngularVelocityU3Ek__BackingField_64;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<rightEyeAcceleration>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CrightEyeAccelerationU3Ek__BackingField_65;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<rightEyeAngularAcceleration>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CrightEyeAngularAccelerationU3Ek__BackingField_66;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<centerEyePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CcenterEyePositionU3Ek__BackingField_67;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::<centerEyeRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CcenterEyeRotationU3Ek__BackingField_68;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<centerEyeAngularVelocity>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CcenterEyeAngularVelocityU3Ek__BackingField_69;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<centerEyeAcceleration>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CcenterEyeAccelerationU3Ek__BackingField_70;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<centerEyeAngularAcceleration>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CcenterEyeAngularAccelerationU3Ek__BackingField_71;

public:
	inline static int32_t get_offset_of_U3CuserPresenceU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CuserPresenceU3Ek__BackingField_49)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CuserPresenceU3Ek__BackingField_49() const { return ___U3CuserPresenceU3Ek__BackingField_49; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CuserPresenceU3Ek__BackingField_49() { return &___U3CuserPresenceU3Ek__BackingField_49; }
	inline void set_U3CuserPresenceU3Ek__BackingField_49(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CuserPresenceU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CuserPresenceU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CtrackingStateU3Ek__BackingField_50)); }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * get_U3CtrackingStateU3Ek__BackingField_50() const { return ___U3CtrackingStateU3Ek__BackingField_50; }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF ** get_address_of_U3CtrackingStateU3Ek__BackingField_50() { return &___U3CtrackingStateU3Ek__BackingField_50; }
	inline void set_U3CtrackingStateU3Ek__BackingField_50(IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * value)
	{
		___U3CtrackingStateU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CisTrackedU3Ek__BackingField_51)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CisTrackedU3Ek__BackingField_51() const { return ___U3CisTrackedU3Ek__BackingField_51; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CisTrackedU3Ek__BackingField_51() { return &___U3CisTrackedU3Ek__BackingField_51; }
	inline void set_U3CisTrackedU3Ek__BackingField_51(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CisTrackedU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CdevicePositionU3Ek__BackingField_52)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdevicePositionU3Ek__BackingField_52() const { return ___U3CdevicePositionU3Ek__BackingField_52; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdevicePositionU3Ek__BackingField_52() { return &___U3CdevicePositionU3Ek__BackingField_52; }
	inline void set_U3CdevicePositionU3Ek__BackingField_52(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdevicePositionU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_52), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CdeviceRotationU3Ek__BackingField_53)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CdeviceRotationU3Ek__BackingField_53() const { return ___U3CdeviceRotationU3Ek__BackingField_53; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CdeviceRotationU3Ek__BackingField_53() { return &___U3CdeviceRotationU3Ek__BackingField_53; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_53(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularVelocityU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CdeviceAngularVelocityU3Ek__BackingField_54)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdeviceAngularVelocityU3Ek__BackingField_54() const { return ___U3CdeviceAngularVelocityU3Ek__BackingField_54; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdeviceAngularVelocityU3Ek__BackingField_54() { return &___U3CdeviceAngularVelocityU3Ek__BackingField_54; }
	inline void set_U3CdeviceAngularVelocityU3Ek__BackingField_54(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdeviceAngularVelocityU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularVelocityU3Ek__BackingField_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAccelerationU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CdeviceAccelerationU3Ek__BackingField_55)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdeviceAccelerationU3Ek__BackingField_55() const { return ___U3CdeviceAccelerationU3Ek__BackingField_55; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdeviceAccelerationU3Ek__BackingField_55() { return &___U3CdeviceAccelerationU3Ek__BackingField_55; }
	inline void set_U3CdeviceAccelerationU3Ek__BackingField_55(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdeviceAccelerationU3Ek__BackingField_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAccelerationU3Ek__BackingField_55), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularAccelerationU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CdeviceAngularAccelerationU3Ek__BackingField_56)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdeviceAngularAccelerationU3Ek__BackingField_56() const { return ___U3CdeviceAngularAccelerationU3Ek__BackingField_56; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdeviceAngularAccelerationU3Ek__BackingField_56() { return &___U3CdeviceAngularAccelerationU3Ek__BackingField_56; }
	inline void set_U3CdeviceAngularAccelerationU3Ek__BackingField_56(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdeviceAngularAccelerationU3Ek__BackingField_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularAccelerationU3Ek__BackingField_56), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyePositionU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CleftEyePositionU3Ek__BackingField_57)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CleftEyePositionU3Ek__BackingField_57() const { return ___U3CleftEyePositionU3Ek__BackingField_57; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CleftEyePositionU3Ek__BackingField_57() { return &___U3CleftEyePositionU3Ek__BackingField_57; }
	inline void set_U3CleftEyePositionU3Ek__BackingField_57(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CleftEyePositionU3Ek__BackingField_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyePositionU3Ek__BackingField_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeRotationU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CleftEyeRotationU3Ek__BackingField_58)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CleftEyeRotationU3Ek__BackingField_58() const { return ___U3CleftEyeRotationU3Ek__BackingField_58; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CleftEyeRotationU3Ek__BackingField_58() { return &___U3CleftEyeRotationU3Ek__BackingField_58; }
	inline void set_U3CleftEyeRotationU3Ek__BackingField_58(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CleftEyeRotationU3Ek__BackingField_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeRotationU3Ek__BackingField_58), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeAngularVelocityU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CleftEyeAngularVelocityU3Ek__BackingField_59)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CleftEyeAngularVelocityU3Ek__BackingField_59() const { return ___U3CleftEyeAngularVelocityU3Ek__BackingField_59; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CleftEyeAngularVelocityU3Ek__BackingField_59() { return &___U3CleftEyeAngularVelocityU3Ek__BackingField_59; }
	inline void set_U3CleftEyeAngularVelocityU3Ek__BackingField_59(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CleftEyeAngularVelocityU3Ek__BackingField_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeAngularVelocityU3Ek__BackingField_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeAccelerationU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CleftEyeAccelerationU3Ek__BackingField_60)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CleftEyeAccelerationU3Ek__BackingField_60() const { return ___U3CleftEyeAccelerationU3Ek__BackingField_60; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CleftEyeAccelerationU3Ek__BackingField_60() { return &___U3CleftEyeAccelerationU3Ek__BackingField_60; }
	inline void set_U3CleftEyeAccelerationU3Ek__BackingField_60(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CleftEyeAccelerationU3Ek__BackingField_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeAccelerationU3Ek__BackingField_60), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeAngularAccelerationU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CleftEyeAngularAccelerationU3Ek__BackingField_61)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CleftEyeAngularAccelerationU3Ek__BackingField_61() const { return ___U3CleftEyeAngularAccelerationU3Ek__BackingField_61; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CleftEyeAngularAccelerationU3Ek__BackingField_61() { return &___U3CleftEyeAngularAccelerationU3Ek__BackingField_61; }
	inline void set_U3CleftEyeAngularAccelerationU3Ek__BackingField_61(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CleftEyeAngularAccelerationU3Ek__BackingField_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeAngularAccelerationU3Ek__BackingField_61), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyePositionU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CrightEyePositionU3Ek__BackingField_62)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CrightEyePositionU3Ek__BackingField_62() const { return ___U3CrightEyePositionU3Ek__BackingField_62; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CrightEyePositionU3Ek__BackingField_62() { return &___U3CrightEyePositionU3Ek__BackingField_62; }
	inline void set_U3CrightEyePositionU3Ek__BackingField_62(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CrightEyePositionU3Ek__BackingField_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyePositionU3Ek__BackingField_62), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeRotationU3Ek__BackingField_63() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CrightEyeRotationU3Ek__BackingField_63)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CrightEyeRotationU3Ek__BackingField_63() const { return ___U3CrightEyeRotationU3Ek__BackingField_63; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CrightEyeRotationU3Ek__BackingField_63() { return &___U3CrightEyeRotationU3Ek__BackingField_63; }
	inline void set_U3CrightEyeRotationU3Ek__BackingField_63(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CrightEyeRotationU3Ek__BackingField_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeRotationU3Ek__BackingField_63), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeAngularVelocityU3Ek__BackingField_64() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CrightEyeAngularVelocityU3Ek__BackingField_64)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CrightEyeAngularVelocityU3Ek__BackingField_64() const { return ___U3CrightEyeAngularVelocityU3Ek__BackingField_64; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CrightEyeAngularVelocityU3Ek__BackingField_64() { return &___U3CrightEyeAngularVelocityU3Ek__BackingField_64; }
	inline void set_U3CrightEyeAngularVelocityU3Ek__BackingField_64(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CrightEyeAngularVelocityU3Ek__BackingField_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeAngularVelocityU3Ek__BackingField_64), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeAccelerationU3Ek__BackingField_65() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CrightEyeAccelerationU3Ek__BackingField_65)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CrightEyeAccelerationU3Ek__BackingField_65() const { return ___U3CrightEyeAccelerationU3Ek__BackingField_65; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CrightEyeAccelerationU3Ek__BackingField_65() { return &___U3CrightEyeAccelerationU3Ek__BackingField_65; }
	inline void set_U3CrightEyeAccelerationU3Ek__BackingField_65(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CrightEyeAccelerationU3Ek__BackingField_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeAccelerationU3Ek__BackingField_65), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeAngularAccelerationU3Ek__BackingField_66() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CrightEyeAngularAccelerationU3Ek__BackingField_66)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CrightEyeAngularAccelerationU3Ek__BackingField_66() const { return ___U3CrightEyeAngularAccelerationU3Ek__BackingField_66; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CrightEyeAngularAccelerationU3Ek__BackingField_66() { return &___U3CrightEyeAngularAccelerationU3Ek__BackingField_66; }
	inline void set_U3CrightEyeAngularAccelerationU3Ek__BackingField_66(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CrightEyeAngularAccelerationU3Ek__BackingField_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeAngularAccelerationU3Ek__BackingField_66), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyePositionU3Ek__BackingField_67() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CcenterEyePositionU3Ek__BackingField_67)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CcenterEyePositionU3Ek__BackingField_67() const { return ___U3CcenterEyePositionU3Ek__BackingField_67; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CcenterEyePositionU3Ek__BackingField_67() { return &___U3CcenterEyePositionU3Ek__BackingField_67; }
	inline void set_U3CcenterEyePositionU3Ek__BackingField_67(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CcenterEyePositionU3Ek__BackingField_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyePositionU3Ek__BackingField_67), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeRotationU3Ek__BackingField_68() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CcenterEyeRotationU3Ek__BackingField_68)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CcenterEyeRotationU3Ek__BackingField_68() const { return ___U3CcenterEyeRotationU3Ek__BackingField_68; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CcenterEyeRotationU3Ek__BackingField_68() { return &___U3CcenterEyeRotationU3Ek__BackingField_68; }
	inline void set_U3CcenterEyeRotationU3Ek__BackingField_68(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CcenterEyeRotationU3Ek__BackingField_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeRotationU3Ek__BackingField_68), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeAngularVelocityU3Ek__BackingField_69() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CcenterEyeAngularVelocityU3Ek__BackingField_69)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CcenterEyeAngularVelocityU3Ek__BackingField_69() const { return ___U3CcenterEyeAngularVelocityU3Ek__BackingField_69; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CcenterEyeAngularVelocityU3Ek__BackingField_69() { return &___U3CcenterEyeAngularVelocityU3Ek__BackingField_69; }
	inline void set_U3CcenterEyeAngularVelocityU3Ek__BackingField_69(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CcenterEyeAngularVelocityU3Ek__BackingField_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeAngularVelocityU3Ek__BackingField_69), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeAccelerationU3Ek__BackingField_70() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CcenterEyeAccelerationU3Ek__BackingField_70)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CcenterEyeAccelerationU3Ek__BackingField_70() const { return ___U3CcenterEyeAccelerationU3Ek__BackingField_70; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CcenterEyeAccelerationU3Ek__BackingField_70() { return &___U3CcenterEyeAccelerationU3Ek__BackingField_70; }
	inline void set_U3CcenterEyeAccelerationU3Ek__BackingField_70(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CcenterEyeAccelerationU3Ek__BackingField_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeAccelerationU3Ek__BackingField_70), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeAngularAccelerationU3Ek__BackingField_71() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CcenterEyeAngularAccelerationU3Ek__BackingField_71)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CcenterEyeAngularAccelerationU3Ek__BackingField_71() const { return ___U3CcenterEyeAngularAccelerationU3Ek__BackingField_71; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CcenterEyeAngularAccelerationU3Ek__BackingField_71() { return &___U3CcenterEyeAngularAccelerationU3Ek__BackingField_71; }
	inline void set_U3CcenterEyeAngularAccelerationU3Ek__BackingField_71(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CcenterEyeAngularAccelerationU3Ek__BackingField_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeAngularAccelerationU3Ek__BackingField_71), (void*)value);
	}
};


// UnityEngine.InputSystem.XR.XRControllerWithRumble
struct XRControllerWithRumble_tEECDD4DA81A5133D1F15234762C5CB2C2CD53DB5  : public XRController_tB4E4AE731873CAAAE0C04DFBBE690F385EDF081E
{
public:

public:
};


// Unity.XR.Oculus.Input.OculusGoController
struct OculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B  : public GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D
{
public:

public:
};


// Unity.XR.Oculus.Input.OculusHMDExtended
struct OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC  : public OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A
{
public:
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMDExtended::<back>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CbackU3Ek__BackingField_72;
	// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusHMDExtended::<touchpad>k__BackingField
	Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___U3CtouchpadU3Ek__BackingField_73;

public:
	inline static int32_t get_offset_of_U3CbackU3Ek__BackingField_72() { return static_cast<int32_t>(offsetof(OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC, ___U3CbackU3Ek__BackingField_72)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CbackU3Ek__BackingField_72() const { return ___U3CbackU3Ek__BackingField_72; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CbackU3Ek__BackingField_72() { return &___U3CbackU3Ek__BackingField_72; }
	inline void set_U3CbackU3Ek__BackingField_72(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CbackU3Ek__BackingField_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbackU3Ek__BackingField_72), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchpadU3Ek__BackingField_73() { return static_cast<int32_t>(offsetof(OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC, ___U3CtouchpadU3Ek__BackingField_73)); }
	inline Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * get_U3CtouchpadU3Ek__BackingField_73() const { return ___U3CtouchpadU3Ek__BackingField_73; }
	inline Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 ** get_address_of_U3CtouchpadU3Ek__BackingField_73() { return &___U3CtouchpadU3Ek__BackingField_73; }
	inline void set_U3CtouchpadU3Ek__BackingField_73(Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * value)
	{
		___U3CtouchpadU3Ek__BackingField_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadU3Ek__BackingField_73), (void*)value);
	}
};


// Unity.XR.Oculus.Input.OculusTouchController
struct OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA  : public XRControllerWithRumble_tEECDD4DA81A5133D1F15234762C5CB2C2CD53DB5
{
public:
	// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusTouchController::<thumbstick>k__BackingField
	Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___U3CthumbstickU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::<trigger>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CtriggerU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::<grip>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CgripU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<primaryButton>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CprimaryButtonU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<secondaryButton>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CsecondaryButtonU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<gripPressed>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CgripPressedU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<start>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CstartU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<thumbstickClicked>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CthumbstickClickedU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<primaryTouched>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CprimaryTouchedU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<secondaryTouched>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CsecondaryTouchedU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::<triggerTouched>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CtriggerTouchedU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<triggerPressed>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CtriggerPressedU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<thumbstickTouched>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CthumbstickTouchedU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusTouchController::<trackingState>k__BackingField
	IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___U3CtrackingStateU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<isTracked>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CisTrackedU3Ek__BackingField_57;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::<devicePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdevicePositionU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusTouchController::<deviceRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CdeviceRotationU3Ek__BackingField_59;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::<deviceVelocity>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdeviceVelocityU3Ek__BackingField_60;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::<deviceAngularVelocity>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdeviceAngularVelocityU3Ek__BackingField_61;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::<deviceAcceleration>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdeviceAccelerationU3Ek__BackingField_62;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::<deviceAngularAcceleration>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdeviceAngularAccelerationU3Ek__BackingField_63;

public:
	inline static int32_t get_offset_of_U3CthumbstickU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CthumbstickU3Ek__BackingField_43)); }
	inline Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * get_U3CthumbstickU3Ek__BackingField_43() const { return ___U3CthumbstickU3Ek__BackingField_43; }
	inline Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 ** get_address_of_U3CthumbstickU3Ek__BackingField_43() { return &___U3CthumbstickU3Ek__BackingField_43; }
	inline void set_U3CthumbstickU3Ek__BackingField_43(Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * value)
	{
		___U3CthumbstickU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CthumbstickU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CtriggerU3Ek__BackingField_44)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CtriggerU3Ek__BackingField_44() const { return ___U3CtriggerU3Ek__BackingField_44; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CtriggerU3Ek__BackingField_44() { return &___U3CtriggerU3Ek__BackingField_44; }
	inline void set_U3CtriggerU3Ek__BackingField_44(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CtriggerU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgripU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CgripU3Ek__BackingField_45)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CgripU3Ek__BackingField_45() const { return ___U3CgripU3Ek__BackingField_45; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CgripU3Ek__BackingField_45() { return &___U3CgripU3Ek__BackingField_45; }
	inline void set_U3CgripU3Ek__BackingField_45(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CgripU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgripU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CprimaryButtonU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CprimaryButtonU3Ek__BackingField_46)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CprimaryButtonU3Ek__BackingField_46() const { return ___U3CprimaryButtonU3Ek__BackingField_46; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CprimaryButtonU3Ek__BackingField_46() { return &___U3CprimaryButtonU3Ek__BackingField_46; }
	inline void set_U3CprimaryButtonU3Ek__BackingField_46(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CprimaryButtonU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprimaryButtonU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsecondaryButtonU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CsecondaryButtonU3Ek__BackingField_47)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CsecondaryButtonU3Ek__BackingField_47() const { return ___U3CsecondaryButtonU3Ek__BackingField_47; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CsecondaryButtonU3Ek__BackingField_47() { return &___U3CsecondaryButtonU3Ek__BackingField_47; }
	inline void set_U3CsecondaryButtonU3Ek__BackingField_47(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CsecondaryButtonU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsecondaryButtonU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgripPressedU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CgripPressedU3Ek__BackingField_48)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CgripPressedU3Ek__BackingField_48() const { return ___U3CgripPressedU3Ek__BackingField_48; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CgripPressedU3Ek__BackingField_48() { return &___U3CgripPressedU3Ek__BackingField_48; }
	inline void set_U3CgripPressedU3Ek__BackingField_48(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CgripPressedU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgripPressedU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CstartU3Ek__BackingField_49)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CstartU3Ek__BackingField_49() const { return ___U3CstartU3Ek__BackingField_49; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CstartU3Ek__BackingField_49() { return &___U3CstartU3Ek__BackingField_49; }
	inline void set_U3CstartU3Ek__BackingField_49(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CstartU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstartU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CthumbstickClickedU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CthumbstickClickedU3Ek__BackingField_50)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CthumbstickClickedU3Ek__BackingField_50() const { return ___U3CthumbstickClickedU3Ek__BackingField_50; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CthumbstickClickedU3Ek__BackingField_50() { return &___U3CthumbstickClickedU3Ek__BackingField_50; }
	inline void set_U3CthumbstickClickedU3Ek__BackingField_50(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CthumbstickClickedU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CthumbstickClickedU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3CprimaryTouchedU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CprimaryTouchedU3Ek__BackingField_51)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CprimaryTouchedU3Ek__BackingField_51() const { return ___U3CprimaryTouchedU3Ek__BackingField_51; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CprimaryTouchedU3Ek__BackingField_51() { return &___U3CprimaryTouchedU3Ek__BackingField_51; }
	inline void set_U3CprimaryTouchedU3Ek__BackingField_51(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CprimaryTouchedU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprimaryTouchedU3Ek__BackingField_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsecondaryTouchedU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CsecondaryTouchedU3Ek__BackingField_52)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CsecondaryTouchedU3Ek__BackingField_52() const { return ___U3CsecondaryTouchedU3Ek__BackingField_52; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CsecondaryTouchedU3Ek__BackingField_52() { return &___U3CsecondaryTouchedU3Ek__BackingField_52; }
	inline void set_U3CsecondaryTouchedU3Ek__BackingField_52(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CsecondaryTouchedU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsecondaryTouchedU3Ek__BackingField_52), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerTouchedU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CtriggerTouchedU3Ek__BackingField_53)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CtriggerTouchedU3Ek__BackingField_53() const { return ___U3CtriggerTouchedU3Ek__BackingField_53; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CtriggerTouchedU3Ek__BackingField_53() { return &___U3CtriggerTouchedU3Ek__BackingField_53; }
	inline void set_U3CtriggerTouchedU3Ek__BackingField_53(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CtriggerTouchedU3Ek__BackingField_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerTouchedU3Ek__BackingField_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerPressedU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CtriggerPressedU3Ek__BackingField_54)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CtriggerPressedU3Ek__BackingField_54() const { return ___U3CtriggerPressedU3Ek__BackingField_54; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CtriggerPressedU3Ek__BackingField_54() { return &___U3CtriggerPressedU3Ek__BackingField_54; }
	inline void set_U3CtriggerPressedU3Ek__BackingField_54(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CtriggerPressedU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerPressedU3Ek__BackingField_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3CthumbstickTouchedU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CthumbstickTouchedU3Ek__BackingField_55)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CthumbstickTouchedU3Ek__BackingField_55() const { return ___U3CthumbstickTouchedU3Ek__BackingField_55; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CthumbstickTouchedU3Ek__BackingField_55() { return &___U3CthumbstickTouchedU3Ek__BackingField_55; }
	inline void set_U3CthumbstickTouchedU3Ek__BackingField_55(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CthumbstickTouchedU3Ek__BackingField_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CthumbstickTouchedU3Ek__BackingField_55), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CtrackingStateU3Ek__BackingField_56)); }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * get_U3CtrackingStateU3Ek__BackingField_56() const { return ___U3CtrackingStateU3Ek__BackingField_56; }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF ** get_address_of_U3CtrackingStateU3Ek__BackingField_56() { return &___U3CtrackingStateU3Ek__BackingField_56; }
	inline void set_U3CtrackingStateU3Ek__BackingField_56(IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * value)
	{
		___U3CtrackingStateU3Ek__BackingField_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_56), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CisTrackedU3Ek__BackingField_57)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CisTrackedU3Ek__BackingField_57() const { return ___U3CisTrackedU3Ek__BackingField_57; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CisTrackedU3Ek__BackingField_57() { return &___U3CisTrackedU3Ek__BackingField_57; }
	inline void set_U3CisTrackedU3Ek__BackingField_57(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CisTrackedU3Ek__BackingField_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdevicePositionU3Ek__BackingField_58)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdevicePositionU3Ek__BackingField_58() const { return ___U3CdevicePositionU3Ek__BackingField_58; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdevicePositionU3Ek__BackingField_58() { return &___U3CdevicePositionU3Ek__BackingField_58; }
	inline void set_U3CdevicePositionU3Ek__BackingField_58(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdevicePositionU3Ek__BackingField_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_58), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdeviceRotationU3Ek__BackingField_59)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CdeviceRotationU3Ek__BackingField_59() const { return ___U3CdeviceRotationU3Ek__BackingField_59; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CdeviceRotationU3Ek__BackingField_59() { return &___U3CdeviceRotationU3Ek__BackingField_59; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_59(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceVelocityU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdeviceVelocityU3Ek__BackingField_60)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdeviceVelocityU3Ek__BackingField_60() const { return ___U3CdeviceVelocityU3Ek__BackingField_60; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdeviceVelocityU3Ek__BackingField_60() { return &___U3CdeviceVelocityU3Ek__BackingField_60; }
	inline void set_U3CdeviceVelocityU3Ek__BackingField_60(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdeviceVelocityU3Ek__BackingField_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceVelocityU3Ek__BackingField_60), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularVelocityU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdeviceAngularVelocityU3Ek__BackingField_61)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdeviceAngularVelocityU3Ek__BackingField_61() const { return ___U3CdeviceAngularVelocityU3Ek__BackingField_61; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdeviceAngularVelocityU3Ek__BackingField_61() { return &___U3CdeviceAngularVelocityU3Ek__BackingField_61; }
	inline void set_U3CdeviceAngularVelocityU3Ek__BackingField_61(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdeviceAngularVelocityU3Ek__BackingField_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularVelocityU3Ek__BackingField_61), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAccelerationU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdeviceAccelerationU3Ek__BackingField_62)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdeviceAccelerationU3Ek__BackingField_62() const { return ___U3CdeviceAccelerationU3Ek__BackingField_62; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdeviceAccelerationU3Ek__BackingField_62() { return &___U3CdeviceAccelerationU3Ek__BackingField_62; }
	inline void set_U3CdeviceAccelerationU3Ek__BackingField_62(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdeviceAccelerationU3Ek__BackingField_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAccelerationU3Ek__BackingField_62), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularAccelerationU3Ek__BackingField_63() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdeviceAngularAccelerationU3Ek__BackingField_63)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdeviceAngularAccelerationU3Ek__BackingField_63() const { return ___U3CdeviceAngularAccelerationU3Ek__BackingField_63; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdeviceAngularAccelerationU3Ek__BackingField_63() { return &___U3CdeviceAngularAccelerationU3Ek__BackingField_63; }
	inline void set_U3CdeviceAngularAccelerationU3Ek__BackingField_63(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdeviceAngularAccelerationU3Ek__BackingField_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularAccelerationU3Ek__BackingField_63), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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


// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * InputControl_GetChildControl_TisRuntimeObject_m9EBCDC6C554DED4DC95DE73260882258A07609D2_gshared (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m3F040AE7C1198E6D83A836AB64080C42D7136710_gshared (Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434 * __this, InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<System.Object>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RegisterLayout_TisRuntimeObject_m2CE5733182975973FB24CC33AC5F2B1EFF1A53DC_gshared (String_t* ___name0, Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434  ___matches1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<!!0>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StartSubsystem_TisRuntimeObject_m5FFD6719D8FE560199B25C5D3AF8D0D40DFD038E_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5700EB064085C2D3E817458AD01E0C97624102A7_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_m43760686D2E4C1FBCE4BD18489E767F294A68E8A_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_gshared (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Byte>(!!0[],!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m204EA717B425B2D05BB91568E62A291F99E44F75_gshared (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, uint8_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mF37532CC93E9088116D7150AA6A94582E7B7D3F4_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___subsystems0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 UnityEngine.IntegratedSubsystem`1<System.Object>::get_SubsystemDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IntegratedSubsystem_1_get_SubsystemDescriptor_m17720E650E467036888C6716BD15BCB82C3BD30D_gshared (IntegratedSubsystem_1_t0B19871ED45EAD9F0E0DD6AB41BABCAFBD8C56E4 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryConfigured_m63425B4A401546727492B96CEDDBDF636499D961 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryDimensions_m32B73039BE0E747DAFB358D71514D5E7C75153A6 (int32_t ___boundaryType0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___dimensions1, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryVisible_m274038DDF26F9FE120C68CD993C31D751C18B369 (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetBoundaryVisible_mC4CAB764018040FFB39B8034D86B8E282DB73FF1 (bool ___boundaryVisible0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_mEFC4658EA34BA262EB8D6D1AB5FDB73478EA32C7 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDeveloperModeStrict_mB7F4A67FF3C6396D8600290B3BBA555A6CF56767 (bool ___active0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRController::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRController_FinishSetup_m2D73A4DE4C5AF7CB4AB8C4EEEA2BAA6189E2A8B6 (XRController_tB4E4AE731873CAAAE0C04DFBBE690F385EDF081E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector2Control>(System.String)
inline Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062 (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * (*) (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m9EBCDC6C554DED4DC95DE73260882258A07609D2_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpad_m728CC0149FAF741A657C956FF63AE6F0C4A88C26_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.AxisControl>(System.String)
inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041 (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * (*) (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m9EBCDC6C554DED4DC95DE73260882258A07609D2_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_trigger(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trigger_m41CACCCC4FD5A612CE3EE70A2663D5102473DFD2_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.ButtonControl>(System.String)
inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * (*) (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m9EBCDC6C554DED4DC95DE73260882258A07609D2_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_back_m2B601FC6A620D0C91D90BF67E5262AF34566EFC1_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_triggerPressed_m1837E8D245B82837E46E07C90E0F9FEC02226545_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpadClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadClicked_m398F59F0EB184F1463598D88F8E9BC814998C501_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpadTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadTouched_mDD7518F88B65FE2623E29A326E196206CEA06A85_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.IntegerControl>(System.String)
inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6 (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * (*) (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m9EBCDC6C554DED4DC95DE73260882258A07609D2_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trackingState_mCEFD18F509035CB0645DBECF619016F84DBD462E_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_isTracked_mE82B2A82B62CDF213FBDB34815BEF7BCBF596723_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector3Control>(System.String)
inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * (*) (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m9EBCDC6C554DED4DC95DE73260882258A07609D2_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_devicePosition_m56F1712967E8040570CC17B8381F4A60E875D7F9_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.QuaternionControl>(System.String)
inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5 (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * (*) (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m9EBCDC6C554DED4DC95DE73260882258A07609D2_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceRotation_m7CA996AD51C8A4354ACD49D3E393565F03EBBB7E_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularVelocity_m1590692B6034AC2311A6E7E3E6AF2E67D2A94CBB_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAcceleration_mBADF86AD1807E68CF8F6B14C3C70404026D6F647_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularAcceleration_mECE2C130BC15718811A6B9DD8710D103CFC4B370_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRController__ctor_m66809170B52E4A3E20BEDC54CA8D46CDD182057B (XRController_tB4E4AE731873CAAAE0C04DFBBE690F385EDF081E * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetHasInputFocus_mC5174AB5E09FCDEC72E3FE70EE041824A3328806 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.InputFocus::get_hasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFocus_get_hasInputFocus_m89BC1D49BF5D1BD9207D5D32780FA93CEC6AD793 (const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.InputLayoutLoader::RegisterInputLayouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputLayoutLoader_RegisterInputLayouts_m7D259AB887FFDEB3E4FA2F7D991F498BDC00DE15 (const RuntimeMethod* method);
// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher::WithInterface(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  InputDeviceMatcher_WithInterface_m3971BD3FAA007B0AA19FF5C7F54FA81A676AAFBE (InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 * __this, String_t* ___pattern0, bool ___supportRegex1, const RuntimeMethod* method);
// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher::WithProduct(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  InputDeviceMatcher_WithProduct_m14E04D2DF48E0E692DB3CFACB8B53F9642320B5A (InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 * __this, String_t* ___pattern0, bool ___supportRegex1, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>::.ctor(!0)
inline void Nullable_1__ctor_m3F040AE7C1198E6D83A836AB64080C42D7136710 (Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434 * __this, InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434 *, InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 , const RuntimeMethod*))Nullable_1__ctor_m3F040AE7C1198E6D83A836AB64080C42D7136710_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusHMD>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A_m168FECC3D072A32B73F764DC2026C3E9D412C01E (String_t* ___name0, Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m2CE5733182975973FB24CC33AC5F2B1EFF1A53DC_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusTouchController>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA_m6E170C15D20EF17D6071D95A1ED612FCE147D7FC (String_t* ___name0, Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m2CE5733182975973FB24CC33AC5F2B1EFF1A53DC_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusRemote>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3_mA51D8C1A49667777BCCA3538AD8A8985330A3562 (String_t* ___name0, Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m2CE5733182975973FB24CC33AC5F2B1EFF1A53DC_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusTrackingReference>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807_mE5F0227116250634F2CB3F046D4CC7CB283B2560 (String_t* ___name0, Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m2CE5733182975973FB24CC33AC5F2B1EFF1A53DC_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusGoController>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B_m8404445F51BF4C98EFD0A9E5E18F5656238237CB (String_t* ___name0, Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m2CE5733182975973FB24CC33AC5F2B1EFF1A53DC_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusHMDExtended>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC_m31CB97F7F80FBCFEAE4C3AD902AF4C0734617145 (String_t* ___name0, Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m2CE5733182975973FB24CC33AC5F2B1EFF1A53DC_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.GearVRTrackedController>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisGearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D_mF550391DF3E5D70BD2BB7992596085E29E6BE764 (String_t* ___name0, Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m2CE5733182975973FB24CC33AC5F2B1EFF1A53DC_gshared)(___name0, ___matches1, method);
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetColorScale_mA8ED134FCC56CCD16F92734ADCBF2526342EB02C (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetColorOffset_m6765A7EC8EFFDB061AE48B3F53658BBD3FC26FBF (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetIsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetIsSupportedDevice_mA3EF73A5F9CA1AD2B6E9D8F1F560A62D14A19E92 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_LoadOVRPlugin_m20BF6ADFC47F043ED9CB9F86199E26C8A46AD5AF (String_t* ___ovrpPath0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::UnloadOVRPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_UnloadOVRPlugin_m6C683304420498120BF38390A1129A5B01A67F1E (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetUserDefinedSettings_mE187F03B58FEB8FE874B938E28401C06C919221E (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  ___settings0, const RuntimeMethod* method);
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::SetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_SetCPULevel_m0568DA61DDC47E9F28D26C52EA4035A6A139CCA8 (int32_t ___cpuLevel0, const RuntimeMethod* method);
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::SetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_SetGPULevel_mBC46AC72882E2FFD4358F5812B8F45329C62843A (int32_t ___gpuLevel0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_GetOVRPVersion_m1E2BB4B4CDC04F9DAD64DF67D3CFC76085AF305B (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___version0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_EnablePerfMetrics_m2572EAFC2373A4E10168EDD76D576A44212466D4 (bool ___enable0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_EnableAppMetrics_m327F6E0F90F1A962D000C105EFE540CD43E78D70 (bool ___enable0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDeveloperModeStrict_m0A2121361A4FFDA8D0EF716D2C011F0EF19A34F8 (bool ___active0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppHasInputFocus_mA679379FDE6F3AFAFBF35841818A0BD5A492579F (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryConfigured_m38A8FB6A7F2DCE7882E9DF3707530E40D85E6492 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryDimensions_m07ED6D4A7E3C368766B953282AE8FA76A257849B (int32_t ___boundaryType0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___dimensions1, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryVisible_mFFBE7E9B928B930A6C4B1F8F7391F3403CD9F72F (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetBoundaryVisible_m3F762D66ED2E7998D8EDD6B065398796C32B2139 (bool ___boundaryVisible0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppShouldQuit_m2201DC6D753AE50E8E041C75816721CC622DA353 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetDisplayAvailableFrequencies(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetDisplayAvailableFrequencies_mA6A02093DF72E979557B913FEE19BA4B9CF61159 (intptr_t ___ptr0, int32_t* ___numFrequencies1, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDisplayFrequency_m3221766C0E2DF541A57A44508194B245E038A965 (float ___refreshRate0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetDisplayFrequency(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetDisplayFrequency_m3264CC851EAF260CA1EFD7E4984362B1B7BC8676 (float* ___refreshRate0, const RuntimeMethod* method);
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.NativeMethods/Internal::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_GetSystemHeadsetType_mC0537BB4F5EA3EDD3993C7A05487B04A0FADAEFB (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetTiledMultiResSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetTiledMultiResSupported_mEE711350D975E6C4FD4D0634AEDD64F3FEF2E0BB (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetTiledMultiResLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetTiledMultiResLevel_mEEC4003CC9AEA6156EE976678E3409FCABE6EDD2 (int32_t ___level0, const RuntimeMethod* method);
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::GetTiledMultiResLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_GetTiledMultiResLevel_m2BC392E4824622E98F610EC02CB4A8196FEF96CE (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetTiledMultiResDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetTiledMultiResDynamic_m037817F3884FC015AC28AB27520A40B3511D2A10 (bool ___isDynamic0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController__ctor_m35059DBECC8470F3A2695CF33528C805722D6B6B (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRHMD::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHMD_FinishSetup_mFA083256B40891104F2B70E2802F0FD4B27AE99C (XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_userPresence(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_userPresence_m771670EA018ED5CA98992F225B5A8D46EAD3785F_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_trackingState_m23D4A9C067EE07856C7A4E479134DD140C4895FF_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_isTracked_m9AF4021F5074AD0DF15FC5C92FF0D95A671FCDFC_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_devicePosition_mAD72847BDB45A18C0BBF3B8FF400506391EC22F4_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceRotation_mEB447DB998A6EBECE103A22BE84495193BBDF554_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularVelocity_m544E45366F673214112CE3841FA140505FBEC5EA_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAcceleration_m30EED57043866B11773759CEC24C1CE900244375_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularAcceleration_m66BC6C304CD9B6542911BA59B3888B689C73D491_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyePosition_m76C7948890AA7C2DF39244BBFBBD29AECDE259C5_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeRotation_mD678B3993D0FCB4C210BA99C22AC42F00C79070A_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularVelocity_m58A8062DEF7C997BF2C7D394CA5D6389B0D31DAD_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAcceleration_m0F933CB5833C936292657808FF004BF233FF4CF3_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularAcceleration_m2649A57029FD70E62BD81DECCDC39E14E4A2FA82_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyePosition_m4438F675E0AF84B543A1C56B231FF0813381628B_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeRotation_m171A188164B8F95EC8F850C6DA5DF9778876577D_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularVelocity_m0CA022605B663B328D4835477171D69A33E043A7_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAcceleration_m8D5BCE67143C560F81CE7CCB419F87870CE0F45D_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularAcceleration_mC843D8FAA433CCF9AF32D179FE25867BAD241C22_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyePosition_m53F3EBB8BFAC99EFA4A891BBFF0C7DDC033F9F9C_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeRotation_m56EA7AE2EC553B6D05479729C53ABECFE8FBD7A6_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularVelocity_mDD6F9EF08A916CDE0B09C11610F9476B500F2311_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAcceleration_m38F4A3595D707814CC80CB0FF19AA701E0F87D70_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularAcceleration_m8CAD36D9B5C6C1AD6BB3348F03FE1D4AA6CA29A3_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRHMD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHMD__ctor_m5219C151479C24B8AC88CF76AF908C25227E240D (XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_FinishSetup_m476E392C04F8BBB6E230BE6A37A90269820CA796 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMDExtended_set_back_m5BEDA0810B1E10BB3018853646D7C00E64B84D03_inline (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMDExtended_set_touchpad_mB9AEFFE8E5CBAE8A2F8161522443C01481F8FBB0_inline (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD__ctor_mE497EDF74203D170F59426A5FFA99DA118BA67FD (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetIsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetIsSupportedDevice_mFC86118E0FC74ABE30C84639472ADE492083AFD2 (const RuntimeMethod* method);
// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult Unity.XR.Oculus.OculusLoader::IsDeviceSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OculusLoader_IsDeviceSupported_mC2E5A317811DBD9EB506037FD358CF7F64814286 (const RuntimeMethod* method);
// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusLoader::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * OculusLoader_GetSettings_mF0D5694BD84372039D4227997B00CAB33A419CAC (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.UInt16 Unity.XR.Oculus.OculusSettings::GetStereoRenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t OculusSettings_GetStereoRenderingMode_mB4FF47E7831A653C90D7B08E336C40D66968F2FD (OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * __this, const RuntimeMethod* method);
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_mE0C265DD8E215FC537CFA8B000C0977B10C6A49C (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetUserDefinedSettings_m60831E50BCEB63E8B8E3A6421CE2D6BC21FB6FCD (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  ___settings0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRDisplaySubsystemDescriptor,UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<!!0>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 *, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_gshared)(__this, ___descriptors0, ___id1, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRInputSubsystemDescriptor,UnityEngine.XR.XRInputSubsystem>(System.Collections.Generic.List`1<!!0>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_gshared)(__this, ___descriptors0, ___id1, method);
}
// UnityEngine.XR.XRDisplaySubsystem Unity.XR.Oculus.OculusLoader::get_displaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method);
// UnityEngine.XR.XRInputSubsystem Unity.XR.Oculus.OculusLoader::get_inputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Initialize_m009EBB49477FAD1D7E03DA45EB80F15E6D28F521 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_StartSubsystem_TisRuntimeObject_m5FFD6719D8FE560199B25C5D3AF8D0D40DFD038E_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_StartSubsystem_TisRuntimeObject_m5FFD6719D8FE560199B25C5D3AF8D0D40DFD038E_gshared)(__this, method);
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStart_mC9E24212121397B0C37A27904F5B95B4FD871C88 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5700EB064085C2D3E817458AD01E0C97624102A7_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5700EB064085C2D3E817458AD01E0C97624102A7_gshared)(__this, method);
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStop_mF62FEF98A60806E453F85B7419FE8A726A54A621 (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Deinitialize_m5783A25B492DD2271AF20528CC7225AA69B48D2B (const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_m43760686D2E4C1FBCE4BD18489E767F294A68E8A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_m43760686D2E4C1FBCE4BD18489E767F294A68E8A_gshared)(__this, method);
}
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m10E44C187C0E5807F9C955A176885FAA95829267 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_LoadOVRPlugin_m4D4C796D2F76D0CA13969C61603C01B0A26478E7 (String_t* ___ovrpPath0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper__ctor_mD27E0396EC4B11E208CF891642475B496CADAC9B (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::.ctor()
inline void List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00 (List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.InputControl::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_FinishSetup_m2F42B1EE9FAE7D94E2A35F92115F6A535BCD2E62 (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_back_m491E697DCD37A9B95DC5D1C73F7068D78E334AEF_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_start(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_start_m46A6FD1D22D5D6DF333F19B51A85CC8D81AD2683_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_touchpad_m7D04E201084045328F04345076B920B4EABA52AD_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevice__ctor_m06F1C304C450B020F0D96FEC8485536D1D0C98BC (InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstick(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstick_m6298BE7A8953E351BE124A7EB8955F3B0784D226_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_trigger(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_trigger_m25340AF73E5E533C59310FCCF36CEABE80414347_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_triggerTouched(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerTouched_mC1CA0DD733E35B4B0FDFADEFA839017F88D5C009_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_grip(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_grip_m7365F9B548F735B7E1C4EEA076A2BEA956AE1D81_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_primaryButton(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryButton_m30E15AB1A3A510D364FCDD02DB65158B7E6ED9E2_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_secondaryButton(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryButton_m1D457887B59C4E3084B56424F2BC00806EE878DA_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_gripPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_gripPressed_m2821E882B28BB4E241FDC113354F85D2632BD6F0_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_start(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_start_mAF7B100AAE7B4C92E132B9398B827E53D60058FF_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstickClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickClicked_m95075EE8FFB21658C01811C12629EF7B9DD91702_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_primaryTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryTouched_mB4603A8EE60563935E3EFD1B0256EC39BE5D16EA_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_secondaryTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryTouched_m808610BF02C6AF39171429F2EF8A4C5EFD1EE7EF_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstickTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickTouched_m196F8D8CEE80B395CB8A0F05B1F02357E269786C_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerPressed_m1BB5F09869F5B4C35ADC99E447B23248ACEA6786_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_trackingState_m1DF9A55440417576A269AC9671D74BD289B15D10_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_isTracked_m9D7697DE4D1154DF2977F119AC2564EEE2F43653_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_devicePosition_mD3B8942C90778C8C5956467CC132B2A63CC1C545_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceRotation_m4D4259B5CAA20556723ADFC6515EB18830497369_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceVelocity_m0873827197CDB80237BE605E5A841E856B867E45_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularVelocity_mD18F809B1657E53F0B7985F57EAB750D4D4EBE7E_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAcceleration_mAB43F86D03C0767DC5EC4E3FF605D419DCD54AA9_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularAcceleration_m2AFA5EA372A02AD28A4DA15CD0062AA63067ABE4_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRControllerWithRumble::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRControllerWithRumble__ctor_m0FBE065D60AEF3D7E19F29A6F392EB5819D13EBB (XRControllerWithRumble_tEECDD4DA81A5133D1F15234762C5CB2C2CD53DB5 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_trackingState_m1D72C4867593A561DC929C7105EF9F4C4AFE1B29_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_isTracked_m2D5DCD8E29E2939BF8BDDFF73C6620E98A8F5426_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_devicePosition_m9AF2BA44440BB6FF4941F2C7B26102B79DEDBA13_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_deviceRotation_m8F67A11A110C452455016E5E70C7E297B2513D41_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_gshared)(__this, ___usageName0, method);
}
// System.Int32 Unity.XR.Oculus.NativeMethods::SetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SetCPULevel_mABD8BE1F1CE41DC683BA43822DB456530FD6D929 (int32_t ___cpuLevel0, const RuntimeMethod* method);
// System.Int32 Unity.XR.Oculus.NativeMethods::SetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SetGPULevel_m055FCE766C4C218F61A06ACA963F5ED637834DF7 (int32_t ___gpuLevel0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetDisplayAvailableFrequencies(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetDisplayAvailableFrequencies_m2E4C861D87369CCA6A40AAFF6EA5CF65093D4F39 (intptr_t ___ptr0, int32_t* ___numFrequencies1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mB339DD0B9D5778400B8CA9BA45169C9C1C14835D (int32_t ___cb0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m5B004FA5DF0DC280EB8677D5E253BA93924C40AD (intptr_t ___source0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390 (intptr_t ___hglobal0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDisplayFrequency_m0C913002249CA6C2FDAD4AB57A0957D4F5F8646C (float ___refreshRate0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetDisplayFrequency(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetDisplayFrequency_m5D89A6D7DF13E557DCF74B65770B5945A2C327BE (float* ___refreshRate0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_m1324FCAC06439BC14CFCE062C6BEFB76C7501228 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::remove_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_mD2FFDA214D242F524EFF15932A7334F1F0D526D0 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.InputFocus::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_Update_mA29F59D3148E351431EF53DEEE921320DC66945E (const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCB0E1C045647658CF6B7C646F98F938750AB1B19 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_GetOVRPVersion_mB328CD13DA707D9B1B26A3EBC82A9F364F140BE9 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___version0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Byte>(!!0[],!!0)
inline int32_t Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m204EA717B425B2D05BB91568E62A291F99E44F75 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, uint8_t ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, uint8_t, const RuntimeMethod*))Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m204EA717B425B2D05BB91568E62A291F99E44F75_gshared)(___array0, ___value1, method);
}
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_ASCII_mFA250EFF131288B0C4572FC27C7393FD469DC1C0 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::.ctor()
inline void List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4 (List_1_t56455D217921470E52E7D33A1794256E31084DD8 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880 (List_1_t56455D217921470E52E7D33A1794256E31084DD8 * ___subsystems0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_mF37532CC93E9088116D7150AA6A94582E7B7D3F4_gshared)(___subsystems0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::GetEnumerator()
inline Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D (List_1_t56455D217921470E52E7D33A1794256E31084DD8 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  (*) (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::get_Current()
inline XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_inline (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 * __this, const RuntimeMethod* method)
{
	return ((  XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * (*) (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// !0 UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::get_SubsystemDescriptor()
inline XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833 * IntegratedSubsystem_1_get_SubsystemDescriptor_m816FB5D3478D016CBD470BA93CF200BB0FA1DF42 (IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4 * __this, const RuntimeMethod* method)
{
	return ((  XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833 * (*) (IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4 *, const RuntimeMethod*))IntegratedSubsystem_1_get_SubsystemDescriptor_m17720E650E467036888C6716BD15BCB82C3BD30D_gshared)(__this, method);
}
// System.String UnityEngine.IntegratedSubsystemDescriptor::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntegratedSubsystemDescriptor_get_id_m0347A7AE998F0210CC7DAD1DA974F788AB2CF879 (IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.IntegratedSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m3C6870588AA0F9816A3947F045BCB8F5662A9EC2 (IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::Dispose()
inline void Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5 (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Unity.XR.Oculus.NativeMethods::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetColorScale_mABAA1FBFC163D8DE94AD47D7B8F848B78CD5E9A0 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetColorOffset_m62E7000E8A015D685D76D915941FDE958732213D (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.NativeMethods::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_GetSystemHeadsetType_m5D2B6BFDE86FE8DB56A48641E1EA3B3AC788C0AE (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetTiledMultiResSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetTiledMultiResSupported_mA3B09B2A1F0299A3AAD86C0DEB36625D598CD871 (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::SetTiledMultiResLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetTiledMultiResLevel_mB738658807A7B692985B9CD55A0AEE8AAE58FF2D (int32_t ___level0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::SetTiledMultiResDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetTiledMultiResDynamic_mC79DF59B055FA02F3605881A38984454869DA66B (bool ___isDynamic0, const RuntimeMethod* method);
// System.Int32 Unity.XR.Oculus.NativeMethods::GetTiledMultiResLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_GetTiledMultiResLevel_m8082A03420962D025A24554936BC8802D190F3F0 (const RuntimeMethod* method);
// UnityEngine.IntegratedSubsystem Unity.XR.Oculus.Stats::GetOculusDisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetAppGPUTimeLastFrame(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetAppGPUTimeLastFrame_m6101C924131D97949D0BB807F0075C28464B6451 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float* ___gpuTimeLastFrame0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetCompositorGPUTimeLastFrame(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetCompositorGPUTimeLastFrame_m168019E7D1D33CFA7218F9BC79E3C5E1640CC41B (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float* ___gpuTimeLastFrameCompositor0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetMotionToPhoton(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetMotionToPhoton_m10E75B632588DB76D4C88E022CC2B5D678E1C9F5 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float* ___motionToPhoton0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetDisplayRefreshRate(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetDisplayRefreshRate_m83B7B48711B68E8D05F3B5D2F1EDE61154EAC7A3 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float* ___displayRefreshRate0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Provider.XRStats::TryGetStat(UnityEngine.IntegratedSubsystem,System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10 (IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * ___xrSubsystem0, String_t* ___tag1, float* ___value2, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_EnableAppMetrics_mBFF69EB9C54389B25A9FC271819E9B3FB2A6CDB6 (bool ___enable0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_EnablePerfMetrics_mB9E9467765E2141254EAC993FF87E6595831DC74 (bool ___enable0, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetColorScale(float, float, float, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetColorOffset(float, float, float, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetIsSupportedDevice();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL LoadOVRPlugin(Il2CppChar*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnloadOVRPlugin();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetUserDefinedSettings(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D );
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetCPULevel(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetGPULevel(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GetOVRPVersion(uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL EnablePerfMetrics(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL EnableAppMetrics(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetDeveloperModeStrict(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetAppHasInputFocus();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetBoundaryConfigured();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetBoundaryDimensions(int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetBoundaryVisible();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetBoundaryVisible(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetAppShouldQuit();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetDisplayAvailableFrequencies(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetDisplayFrequency(float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetDisplayFrequency(float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetSystemHeadsetType();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetTiledMultiResSupported();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetTiledMultiResLevel(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetTiledMultiResLevel();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetTiledMultiResDynamic(int32_t);
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
// System.Boolean Unity.XR.Oculus.Boundary::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_GetBoundaryConfigured_m3084C1D2ED0E1456840215C4D022838D34A51CAB (const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return NativeMethods.GetBoundaryConfigured();
		bool L_0;
		L_0 = NativeMethods_GetBoundaryConfigured_m63425B4A401546727492B96CEDDBDF636499D961(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.Boundary::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_GetBoundaryDimensions_m687BD292B02EC436F995EECDF128F88366575FE1 (int32_t ___boundaryType0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___dimensions1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return NativeMethods.GetBoundaryDimensions(boundaryType, out dimensions);
		int32_t L_0 = ___boundaryType0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___dimensions1;
		bool L_2;
		L_2 = NativeMethods_GetBoundaryDimensions_m32B73039BE0E747DAFB358D71514D5E7C75153A6(L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.XR.Oculus.Boundary::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_GetBoundaryVisible_m29E7D20DA141AA1666466B54833DFC1990338C69 (const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return NativeMethods.GetBoundaryVisible();
		bool L_0;
		L_0 = NativeMethods_GetBoundaryVisible_m274038DDF26F9FE120C68CD993C31D751C18B369(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.XR.Oculus.Boundary::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_SetBoundaryVisible_mAE47C1076E3C28BB7A80CB3169C3DA411BEB347C (bool ___boundaryVisible0, const RuntimeMethod* method)
{
	{
		// NativeMethods.SetBoundaryVisible(boundaryVisible);
		bool L_0 = ___boundaryVisible0;
		NativeMethods_SetBoundaryVisible_mC4CAB764018040FFB39B8034D86B8E282DB73FF1(L_0, /*hidden argument*/NULL);
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
// System.Void Unity.XR.Oculus.Development::TrySetDeveloperMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_TrySetDeveloperMode_m42C081BDF42482D60F1FE1FCDEB1D4CA9E72B320 (bool ___active0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// s_CachedMode = active ? UserDeveloperModeSettingCache.UserSettingTrue : UserDeveloperModeSettingCache.UserSettingFalse;
		bool L_0 = ___active0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 2;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		((Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields*)il2cpp_codegen_static_fields_for(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var))->set_s_CachedMode_0(G_B3_0);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStart_mC9E24212121397B0C37A27904F5B95B4FD871C88 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CA2736EB42A97B73E816FF8369ACA2005FA5AA2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// bool enable = true;
		V_0 = (bool)1;
		// bool shouldOverride = false;
		V_1 = (bool)0;
		// if (s_CachedMode != UserDeveloperModeSettingCache.NoUserSettingCached)
		IL2CPP_RUNTIME_CLASS_INIT(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields*)il2cpp_codegen_static_fields_for(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var))->get_s_CachedMode_0();
		V_2 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// shouldOverride = true;
		V_1 = (bool)1;
		// enable = (s_CachedMode == UserDeveloperModeSettingCache.UserSettingTrue);
		IL2CPP_RUNTIME_CLASS_INIT(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields*)il2cpp_codegen_static_fields_for(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var))->get_s_CachedMode_0();
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		goto IL_002b;
	}

IL_0020:
	{
		// else if (Debug.isDebugBuild)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Debug_get_isDebugBuild_mEFC4658EA34BA262EB8D6D1AB5FDB73478EA32C7(/*hidden argument*/NULL);
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// shouldOverride = true;
		V_1 = (bool)1;
	}

IL_002b:
	{
		// if (shouldOverride && !NativeMethods.SetDeveloperModeStrict(enable))
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		bool L_6 = V_0;
		bool L_7;
		L_7 = NativeMethods_SetDeveloperModeStrict_mB7F4A67FF3C6396D8600290B3BBA555A6CF56767(L_6, /*hidden argument*/NULL);
		G_B7_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B7_0 = 0;
	}

IL_003a:
	{
		V_4 = (bool)G_B7_0;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// Debug.LogError("Failed to set DeveloperMode on Start.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral9CA2736EB42A97B73E816FF8369ACA2005FA5AA2, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStop_mF62FEF98A60806E453F85B7419FE8A726A54A621 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C095088ADD88C25A47E7BBE6A81D13C798F9E75);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!NativeMethods.SetDeveloperModeStrict(false))
		bool L_0;
		L_0 = NativeMethods_SetDeveloperModeStrict_mB7F4A67FF3C6396D8600290B3BBA555A6CF56767((bool)0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogError("Failed to set DeveloperMode to false on Stop.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral6C095088ADD88C25A47E7BBE6A81D13C798F9E75, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Development::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development__cctor_mBFD72BE5D5819D1EEBCB7D11CCD064B26AC4518C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static UserDeveloperModeSettingCache s_CachedMode = UserDeveloperModeSettingCache.NoUserSettingCached;
		((Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields*)il2cpp_codegen_static_fields_for(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var))->set_s_CachedMode_0(0);
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
// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.GearVRTrackedController::get_touchpad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * GearVRTrackedController_get_touchpad_m36167D64E78688749D035791539194F53D6A7DAE (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = __this->get_U3CtouchpadU3Ek__BackingField_43();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpad_m728CC0149FAF741A657C956FF63AE6F0C4A88C26 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_43(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.GearVRTrackedController::get_trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * GearVRTrackedController_get_trigger_mABADE110BA9F0BBFB20EB7F7F07C1546331FBE37 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = __this->get_U3CtriggerU3Ek__BackingField_44();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_trigger(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trigger_m41CACCCC4FD5A612CE3EE70A2663D5102473DFD2 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CtriggerU3Ek__BackingField_44(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * GearVRTrackedController_get_back_mAF70843BED285CCCA9A8FB8A56DA9B7167D0D196 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CbackU3Ek__BackingField_45();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_back_m2B601FC6A620D0C91D90BF67E5262AF34566EFC1 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_45(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::get_triggerPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * GearVRTrackedController_get_triggerPressed_m9332FB26B145E710AC70351CE08A3DF3DAFBAF36 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CtriggerPressedU3Ek__BackingField_46();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_triggerPressed_m1837E8D245B82837E46E07C90E0F9FEC02226545 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CtriggerPressedU3Ek__BackingField_46(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::get_touchpadClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * GearVRTrackedController_get_touchpadClicked_mA703677741DAB4D56D57F2A88270C81479F4CE25 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadClicked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CtouchpadClickedU3Ek__BackingField_47();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpadClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadClicked_m398F59F0EB184F1463598D88F8E9BC814998C501 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadClicked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CtouchpadClickedU3Ek__BackingField_47(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::get_touchpadTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * GearVRTrackedController_get_touchpadTouched_m5980E6C187905A5D6DE995B83C23ADBAB512520C (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadTouched { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CtouchpadTouchedU3Ek__BackingField_48();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpadTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadTouched_mDD7518F88B65FE2623E29A326E196206CEA06A85 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadTouched { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CtouchpadTouchedU3Ek__BackingField_48(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.GearVRTrackedController::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * GearVRTrackedController_get_trackingState_m4D2E663FF5E8FC307953438FB4624C2CACA683E5 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = __this->get_U3CtrackingStateU3Ek__BackingField_49();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trackingState_mCEFD18F509035CB0645DBECF619016F84DBD462E (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_49(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::get_isTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * GearVRTrackedController_get_isTracked_mF41117AC9EFB29F99337F13FDDE28FBAB0965817 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CisTrackedU3Ek__BackingField_50();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_isTracked_mE82B2A82B62CDF213FBDB34815BEF7BCBF596723 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_50(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * GearVRTrackedController_get_devicePosition_m9CDEDC7C158214E790CDAB7DE21D9781012564C3 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdevicePositionU3Ek__BackingField_51();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_devicePosition_m56F1712967E8040570CC17B8381F4A60E875D7F9 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_51(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.GearVRTrackedController::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * GearVRTrackedController_get_deviceRotation_mEC7DA53E8997389EB6353FDDED6E22C8660E460A (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = __this->get_U3CdeviceRotationU3Ek__BackingField_52();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceRotation_m7CA996AD51C8A4354ACD49D3E393565F03EBBB7E (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_52(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::get_deviceAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * GearVRTrackedController_get_deviceAngularVelocity_m02EF274F70A2C89A08FFB8F091D47742FB86281F (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdeviceAngularVelocityU3Ek__BackingField_53();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularVelocity_m1590692B6034AC2311A6E7E3E6AF2E67D2A94CBB (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_53(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::get_deviceAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * GearVRTrackedController_get_deviceAcceleration_m0105457433D62F9627E1776A56469D67585752CB (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdeviceAccelerationU3Ek__BackingField_54();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAcceleration_mBADF86AD1807E68CF8F6B14C3C70404026D6F647 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_54(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::get_deviceAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * GearVRTrackedController_get_deviceAngularAcceleration_m44DB0510FE03D2EA65A7550113C3007E86C055D6 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdeviceAngularAccelerationU3Ek__BackingField_55();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularAcceleration_mECE2C130BC15718811A6B9DD8710D103CFC4B370 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_55(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_FinishSetup_m435CA1B37517D6EA68D43DDBBC4A334C1B5F955D (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB81B10F5CAB114184CB2AEC199DE4C618C7F57DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC78BA63A133C81FC2DD3E3CA7EC02E945F89CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		XRController_FinishSetup_m2D73A4DE4C5AF7CB4AB8C4EEEA2BAA6189E2A8B6(__this, /*hidden argument*/NULL);
		// touchpad = GetChildControl<Vector2Control>("touchpad");
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0;
		L_0 = InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062(__this, _stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC, /*hidden argument*/InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062_RuntimeMethod_var);
		GearVRTrackedController_set_touchpad_m728CC0149FAF741A657C956FF63AE6F0C4A88C26_inline(__this, L_0, /*hidden argument*/NULL);
		// trigger = GetChildControl<AxisControl>("trigger");
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_1;
		L_1 = InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041(__this, _stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041_RuntimeMethod_var);
		GearVRTrackedController_set_trigger_m41CACCCC4FD5A612CE3EE70A2663D5102473DFD2_inline(__this, L_1, /*hidden argument*/NULL);
		// back = GetChildControl<ButtonControl>("back");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_2;
		L_2 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		GearVRTrackedController_set_back_m2B601FC6A620D0C91D90BF67E5262AF34566EFC1_inline(__this, L_2, /*hidden argument*/NULL);
		// triggerPressed = GetChildControl<ButtonControl>("triggerPressed");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_3;
		L_3 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		GearVRTrackedController_set_triggerPressed_m1837E8D245B82837E46E07C90E0F9FEC02226545_inline(__this, L_3, /*hidden argument*/NULL);
		// touchpadClicked = GetChildControl<ButtonControl>("touchpadClicked");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_4;
		L_4 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteralEDC78BA63A133C81FC2DD3E3CA7EC02E945F89CE, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		GearVRTrackedController_set_touchpadClicked_m398F59F0EB184F1463598D88F8E9BC814998C501_inline(__this, L_4, /*hidden argument*/NULL);
		// touchpadTouched = GetChildControl<ButtonControl>("touchpadTouched");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_5;
		L_5 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteralB81B10F5CAB114184CB2AEC199DE4C618C7F57DB, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		GearVRTrackedController_set_touchpadTouched_mDD7518F88B65FE2623E29A326E196206CEA06A85_inline(__this, L_5, /*hidden argument*/NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_6;
		L_6 = InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var);
		GearVRTrackedController_set_trackingState_mCEFD18F509035CB0645DBECF619016F84DBD462E_inline(__this, L_6, /*hidden argument*/NULL);
		// isTracked = GetChildControl<ButtonControl>("isTracked");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_7;
		L_7 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		GearVRTrackedController_set_isTracked_mE82B2A82B62CDF213FBDB34815BEF7BCBF596723_inline(__this, L_7, /*hidden argument*/NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_8;
		L_8 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		GearVRTrackedController_set_devicePosition_m56F1712967E8040570CC17B8381F4A60E875D7F9_inline(__this, L_8, /*hidden argument*/NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_9;
		L_9 = InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		GearVRTrackedController_set_deviceRotation_m7CA996AD51C8A4354ACD49D3E393565F03EBBB7E_inline(__this, L_9, /*hidden argument*/NULL);
		// deviceAngularVelocity = GetChildControl<Vector3Control>("deviceAngularVelocity");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_10;
		L_10 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		GearVRTrackedController_set_deviceAngularVelocity_m1590692B6034AC2311A6E7E3E6AF2E67D2A94CBB_inline(__this, L_10, /*hidden argument*/NULL);
		// deviceAcceleration = GetChildControl<Vector3Control>("deviceAcceleration");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_11;
		L_11 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		GearVRTrackedController_set_deviceAcceleration_mBADF86AD1807E68CF8F6B14C3C70404026D6F647_inline(__this, L_11, /*hidden argument*/NULL);
		// deviceAngularAcceleration = GetChildControl<Vector3Control>("deviceAngularAcceleration");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_12;
		L_12 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		GearVRTrackedController_set_deviceAngularAcceleration_mECE2C130BC15718811A6B9DD8710D103CFC4B370_inline(__this, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController__ctor_m35059DBECC8470F3A2695CF33528C805722D6B6B (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		XRController__ctor_m66809170B52E4A3E20BEDC54CA8D46CDD182057B(__this, /*hidden argument*/NULL);
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
// System.Void Unity.XR.Oculus.InputFocus::add_InputFocusAcquired(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_add_InputFocusAcquired_m792AC75AEC3F732433E7490A43EDD5ED153F6094 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusAcquired_0();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_address_of_InputFocusAcquired_0()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::remove_InputFocusAcquired(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_remove_InputFocusAcquired_m19273BB66624D67CE968DEC379569ECA0AA7D43A (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusAcquired_0();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_address_of_InputFocusAcquired_0()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::add_InputFocusLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_add_InputFocusLost_m11782A9ADE16C0FE65636052AEEACA5BF4BE07C1 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusLost_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_address_of_InputFocusLost_1()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::remove_InputFocusLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_remove_InputFocusLost_m381E9CF962F5C1CBB6E737334ED070A356C02582 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusLost_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_address_of_InputFocusLost_1()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Boolean Unity.XR.Oculus.InputFocus::get_hasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFocus_get_hasInputFocus_m89BC1D49BF5D1BD9207D5D32780FA93CEC6AD793 (const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return NativeMethods.GetHasInputFocus();
		bool L_0;
		L_0 = NativeMethods_GetHasInputFocus_mC5174AB5E09FCDEC72E3FE70EE041824A3328806(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_Update_mA29F59D3148E351431EF53DEEE921320DC66945E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B10_0 = 0;
	{
		// bool appHasInputFocus = hasInputFocus;
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = InputFocus_get_hasInputFocus_m89BC1D49BF5D1BD9207D5D32780FA93CEC6AD793(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (!appHasInputFocus && hadInputFocus)
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		bool L_2 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_hadInputFocus_2();
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// if (InputFocusLost != null)
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusLost_1();
		V_2 = (bool)((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		// InputFocusLost();
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusLost_1();
		NullCheck(L_6);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_6, /*hidden argument*/NULL);
	}

IL_002e:
	{
	}

IL_002f:
	{
		// if (appHasInputFocus && !hadInputFocus)
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		bool L_8 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_hadInputFocus_2();
		G_B10_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		goto IL_003d;
	}

IL_003c:
	{
		G_B10_0 = 0;
	}

IL_003d:
	{
		V_3 = (bool)G_B10_0;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_005c;
		}
	}
	{
		// if (InputFocusAcquired != null)
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusAcquired_0();
		V_4 = (bool)((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_005b;
		}
	}
	{
		// InputFocusAcquired();
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusAcquired_0();
		NullCheck(L_12);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_12, /*hidden argument*/NULL);
	}

IL_005b:
	{
	}

IL_005c:
	{
		// hadInputFocus = appHasInputFocus;
		bool L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->set_hadInputFocus_2(L_13);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus__ctor_m3EC50CAA3520F2BB04B7258680BD4B4081B9C9F3 (InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus__cctor_mB6300AFCE681F96FFBB24D1AAB76E815716B8C95 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool hadInputFocus = false;
		((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->set_hadInputFocus_2((bool)0);
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
// System.Void Unity.XR.Oculus.InputLayoutLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputLayoutLoader__cctor_m7BFAE3F72F69BA6A7FA77F14FFD935C18DF5530D (const RuntimeMethod* method)
{
	{
		// RegisterInputLayouts();
		InputLayoutLoader_RegisterInputLayouts_m7D259AB887FFDEB3E4FA2F7D991F498BDC00DE15(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.InputLayoutLoader::RegisterInputLayouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputLayoutLoader_RegisterInputLayouts_m7D259AB887FFDEB3E4FA2F7D991F498BDC00DE15 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisGearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D_mF550391DF3E5D70BD2BB7992596085E29E6BE764_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B_m8404445F51BF4C98EFD0A9E5E18F5656238237CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC_m31CB97F7F80FBCFEAE4C3AD902AF4C0734617145_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A_m168FECC3D072A32B73F764DC2026C3E9D412C01E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3_mA51D8C1A49667777BCCA3538AD8A8985330A3562_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA_m6E170C15D20EF17D6071D95A1ED612FCE147D7FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807_mE5F0227116250634F2CB3F046D4CC7CB283B2560_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_tAC197AE11A643A89EA3F981A56EBB7A01833745C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m3F040AE7C1198E6D83A836AB64080C42D7136710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07FB9B6025681C5CF07481693E1C2043EA488AFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86986460D761FE23D8BB01FB96CFA1B151516AE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2BD5C6F3FA74D0EF59EAFB5EDD968485F2F807C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7259D04FD257B3E588D4DDE5C297D07A9BF111B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5E18713BEC060441013BF24EEFF304074095168);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245);
		s_Il2CppMethodInitialized = true;
	}
	InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// InputSystem.RegisterLayout<OculusHMD>(
		//     matches: new InputDeviceMatcher()
		//         .WithInterface(XRUtilities.InterfaceMatchAnyVersion)
		//         .WithProduct("^(Oculus Rift)|^(Oculus Quest)|^(Oculus Go)"));
		InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 * L_0 = (&V_0);
		il2cpp_codegen_initobj(L_0, sizeof(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 ));
		InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  L_1;
		L_1 = InputDeviceMatcher_WithInterface_m3971BD3FAA007B0AA19FF5C7F54FA81A676AAFBE((InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 *)L_0, _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  L_2;
		L_2 = InputDeviceMatcher_WithProduct_m14E04D2DF48E0E692DB3CFACB8B53F9642320B5A((InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 *)(&V_0), _stringLiteral86986460D761FE23D8BB01FB96CFA1B151516AE3, (bool)1, /*hidden argument*/NULL);
		Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m3F040AE7C1198E6D83A836AB64080C42D7136710((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m3F040AE7C1198E6D83A836AB64080C42D7136710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_tAC197AE11A643A89EA3F981A56EBB7A01833745C_il2cpp_TypeInfo_var);
		InputSystem_RegisterLayout_TisOculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A_m168FECC3D072A32B73F764DC2026C3E9D412C01E((String_t*)NULL, L_3, /*hidden argument*/InputSystem_RegisterLayout_TisOculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A_m168FECC3D072A32B73F764DC2026C3E9D412C01E_RuntimeMethod_var);
		// InputSystem.RegisterLayout<OculusTouchController>(
		//     matches: new InputDeviceMatcher()
		//         .WithInterface(XRUtilities.InterfaceMatchAnyVersion)
		//         .WithProduct(@"(^(Oculus Touch Controller))|(^(Oculus Quest Controller))"));
		InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 * L_4 = (&V_0);
		il2cpp_codegen_initobj(L_4, sizeof(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 ));
		InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  L_5;
		L_5 = InputDeviceMatcher_WithInterface_m3971BD3FAA007B0AA19FF5C7F54FA81A676AAFBE((InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 *)L_4, _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245, (bool)1, /*hidden argument*/NULL);
		V_0 = L_5;
		InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  L_6;
		L_6 = InputDeviceMatcher_WithProduct_m14E04D2DF48E0E692DB3CFACB8B53F9642320B5A((InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 *)(&V_0), _stringLiteralA2BD5C6F3FA74D0EF59EAFB5EDD968485F2F807C, (bool)1, /*hidden argument*/NULL);
		Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_m3F040AE7C1198E6D83A836AB64080C42D7136710((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_m3F040AE7C1198E6D83A836AB64080C42D7136710_RuntimeMethod_var);
		InputSystem_RegisterLayout_TisOculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA_m6E170C15D20EF17D6071D95A1ED612FCE147D7FC((String_t*)NULL, L_7, /*hidden argument*/InputSystem_RegisterLayout_TisOculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA_m6E170C15D20EF17D6071D95A1ED612FCE147D7FC_RuntimeMethod_var);
		// InputSystem.RegisterLayout<OculusRemote>(
		//     matches: new InputDeviceMatcher()
		//         .WithInterface(XRUtilities.InterfaceMatchAnyVersion)
		//         .WithProduct(@"Oculus Remote"));
		InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 * L_8 = (&V_0);
		il2cpp_codegen_initobj(L_8, sizeof(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 ));
		InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  L_9;
		L_9 = InputDeviceMatcher_WithInterface_m3971BD3FAA007B0AA19FF5C7F54FA81A676AAFBE((InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 *)L_8, _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245, (bool)1, /*hidden argument*/NULL);
		V_0 = L_9;
		InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  L_10;
		L_10 = InputDeviceMatcher_WithProduct_m14E04D2DF48E0E692DB3CFACB8B53F9642320B5A((InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 *)(&V_0), _stringLiteralA7259D04FD257B3E588D4DDE5C297D07A9BF111B, (bool)1, /*hidden argument*/NULL);
		Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_m3F040AE7C1198E6D83A836AB64080C42D7136710((&L_11), L_10, /*hidden argument*/Nullable_1__ctor_m3F040AE7C1198E6D83A836AB64080C42D7136710_RuntimeMethod_var);
		InputSystem_RegisterLayout_TisOculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3_mA51D8C1A49667777BCCA3538AD8A8985330A3562((String_t*)NULL, L_11, /*hidden argument*/InputSystem_RegisterLayout_TisOculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3_mA51D8C1A49667777BCCA3538AD8A8985330A3562_RuntimeMethod_var);
		// InputSystem.RegisterLayout<OculusTrackingReference>(
		//     matches: new InputDeviceMatcher()
		//         .WithInterface(XRUtilities.InterfaceMatchAnyVersion)
		//         .WithProduct(@"((Tracking Reference)|(^(Oculus Rift [a-zA-Z0-9]* \(Camera)))"));
		InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 * L_12 = (&V_0);
		il2cpp_codegen_initobj(L_12, sizeof(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 ));
		InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  L_13;
		L_13 = InputDeviceMatcher_WithInterface_m3971BD3FAA007B0AA19FF5C7F54FA81A676AAFBE((InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 *)L_12, _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245, (bool)1, /*hidden argument*/NULL);
		V_0 = L_13;
		InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  L_14;
		L_14 = InputDeviceMatcher_WithProduct_m14E04D2DF48E0E692DB3CFACB8B53F9642320B5A((InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 *)(&V_0), _stringLiteral07FB9B6025681C5CF07481693E1C2043EA488AFE, (bool)1, /*hidden argument*/NULL);
		Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Nullable_1__ctor_m3F040AE7C1198E6D83A836AB64080C42D7136710((&L_15), L_14, /*hidden argument*/Nullable_1__ctor_m3F040AE7C1198E6D83A836AB64080C42D7136710_RuntimeMethod_var);
		InputSystem_RegisterLayout_TisOculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807_mE5F0227116250634F2CB3F046D4CC7CB283B2560((String_t*)NULL, L_15, /*hidden argument*/InputSystem_RegisterLayout_TisOculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807_mE5F0227116250634F2CB3F046D4CC7CB283B2560_RuntimeMethod_var);
		// InputSystem.RegisterLayout<OculusGoController>(
		//     matches: new InputDeviceMatcher()
		//         .WithInterface(XRUtilities.InterfaceMatchAnyVersion)
		//         .WithProduct("^(Oculus Tracked Remote)"));
		InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 * L_16 = (&V_0);
		il2cpp_codegen_initobj(L_16, sizeof(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 ));
		InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  L_17;
		L_17 = InputDeviceMatcher_WithInterface_m3971BD3FAA007B0AA19FF5C7F54FA81A676AAFBE((InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 *)L_16, _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245, (bool)1, /*hidden argument*/NULL);
		V_0 = L_17;
		InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  L_18;
		L_18 = InputDeviceMatcher_WithProduct_m14E04D2DF48E0E692DB3CFACB8B53F9642320B5A((InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 *)(&V_0), _stringLiteralB5E18713BEC060441013BF24EEFF304074095168, (bool)1, /*hidden argument*/NULL);
		Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Nullable_1__ctor_m3F040AE7C1198E6D83A836AB64080C42D7136710((&L_19), L_18, /*hidden argument*/Nullable_1__ctor_m3F040AE7C1198E6D83A836AB64080C42D7136710_RuntimeMethod_var);
		InputSystem_RegisterLayout_TisOculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B_m8404445F51BF4C98EFD0A9E5E18F5656238237CB((String_t*)NULL, L_19, /*hidden argument*/InputSystem_RegisterLayout_TisOculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B_m8404445F51BF4C98EFD0A9E5E18F5656238237CB_RuntimeMethod_var);
		// InputSystem.RegisterLayout<OculusHMDExtended>();
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434 ));
		Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434  L_20 = V_1;
		InputSystem_RegisterLayout_TisOculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC_m31CB97F7F80FBCFEAE4C3AD902AF4C0734617145((String_t*)NULL, L_20, /*hidden argument*/InputSystem_RegisterLayout_TisOculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC_m31CB97F7F80FBCFEAE4C3AD902AF4C0734617145_RuntimeMethod_var);
		// InputSystem.RegisterLayout<GearVRTrackedController>();
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434 ));
		Nullable_1_t698D61BE39DD9869BAD6C38935CE5EEC81958434  L_21 = V_1;
		InputSystem_RegisterLayout_TisGearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D_mF550391DF3E5D70BD2BB7992596085E29E6BE764((String_t*)NULL, L_21, /*hidden argument*/InputSystem_RegisterLayout_TisGearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D_mF550391DF3E5D70BD2BB7992596085E29E6BE764_RuntimeMethod_var);
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
// System.Void Unity.XR.Oculus.NativeMethods::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetColorScale_mABAA1FBFC163D8DE94AD47D7B8F848B78CD5E9A0 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	{
		// Internal.SetColorScale(x, y, z, w);
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		float L_3 = ___w3;
		Internal_SetColorScale_mA8ED134FCC56CCD16F92734ADCBF2526342EB02C(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetColorOffset_m62E7000E8A015D685D76D915941FDE958732213D (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	{
		// Internal.SetColorOffset(x, y, z, w);
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		float L_3 = ___w3;
		Internal_SetColorOffset_m6765A7EC8EFFDB061AE48B3F53658BBD3FC26FBF(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetIsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetIsSupportedDevice_mFC86118E0FC74ABE30C84639472ADE492083AFD2 (const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return Internal.GetIsSupportedDevice();
		bool L_0;
		L_0 = Internal_GetIsSupportedDevice_mA3EF73A5F9CA1AD2B6E9D8F1F560A62D14A19E92(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_LoadOVRPlugin_m4D4C796D2F76D0CA13969C61603C01B0A26478E7 (String_t* ___ovrpPath0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return Internal.LoadOVRPlugin(ovrpPath);
		String_t* L_0 = ___ovrpPath0;
		bool L_1;
		L_1 = Internal_LoadOVRPlugin_m20BF6ADFC47F043ED9CB9F86199E26C8A46AD5AF(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::UnloadOVRPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_UnloadOVRPlugin_mF9B47E517AB3E99DA9AE3E712054150C04D7D7DA (const RuntimeMethod* method)
{
	{
		// Internal.UnloadOVRPlugin();
		Internal_UnloadOVRPlugin_m6C683304420498120BF38390A1129A5B01A67F1E(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetUserDefinedSettings_m60831E50BCEB63E8B8E3A6421CE2D6BC21FB6FCD (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  ___settings0, const RuntimeMethod* method)
{
	{
		// Internal.SetUserDefinedSettings(settings);
		UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  L_0 = ___settings0;
		Internal_SetUserDefinedSettings_mE187F03B58FEB8FE874B938E28401C06C919221E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Unity.XR.Oculus.NativeMethods::SetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SetCPULevel_mABD8BE1F1CE41DC683BA43822DB456530FD6D929 (int32_t ___cpuLevel0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return Internal.SetCPULevel(cpuLevel);
		int32_t L_0 = ___cpuLevel0;
		int32_t L_1;
		L_1 = Internal_SetCPULevel_m0568DA61DDC47E9F28D26C52EA4035A6A139CCA8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.XR.Oculus.NativeMethods::SetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SetGPULevel_m055FCE766C4C218F61A06ACA963F5ED637834DF7 (int32_t ___gpuLevel0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return Internal.SetGPULevel(gpuLevel);
		int32_t L_0 = ___gpuLevel0;
		int32_t L_1;
		L_1 = Internal_SetGPULevel_mBC46AC72882E2FFD4358F5812B8F45329C62843A(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_GetOVRPVersion_mB328CD13DA707D9B1B26A3EBC82A9F364F140BE9 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___version0, const RuntimeMethod* method)
{
	{
		// Internal.GetOVRPVersion(version);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___version0;
		Internal_GetOVRPVersion_m1E2BB4B4CDC04F9DAD64DF67D3CFC76085AF305B(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_EnablePerfMetrics_mB9E9467765E2141254EAC993FF87E6595831DC74 (bool ___enable0, const RuntimeMethod* method)
{
	{
		// Internal.EnablePerfMetrics(enable);
		bool L_0 = ___enable0;
		Internal_EnablePerfMetrics_m2572EAFC2373A4E10168EDD76D576A44212466D4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_EnableAppMetrics_mBFF69EB9C54389B25A9FC271819E9B3FB2A6CDB6 (bool ___enable0, const RuntimeMethod* method)
{
	{
		// Internal.EnableAppMetrics(enable);
		bool L_0 = ___enable0;
		Internal_EnableAppMetrics_m327F6E0F90F1A962D000C105EFE540CD43E78D70(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDeveloperModeStrict_mB7F4A67FF3C6396D8600290B3BBA555A6CF56767 (bool ___active0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return Internal.SetDeveloperModeStrict(active);
		bool L_0 = ___active0;
		bool L_1;
		L_1 = Internal_SetDeveloperModeStrict_m0A2121361A4FFDA8D0EF716D2C011F0EF19A34F8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetHasInputFocus_mC5174AB5E09FCDEC72E3FE70EE041824A3328806 (const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return Internal.GetAppHasInputFocus();
		bool L_0;
		L_0 = Internal_GetAppHasInputFocus_mA679379FDE6F3AFAFBF35841818A0BD5A492579F(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryConfigured_m63425B4A401546727492B96CEDDBDF636499D961 (const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return Internal.GetBoundaryConfigured();
		bool L_0;
		L_0 = Internal_GetBoundaryConfigured_m38A8FB6A7F2DCE7882E9DF3707530E40D85E6492(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryDimensions_m32B73039BE0E747DAFB358D71514D5E7C75153A6 (int32_t ___boundaryType0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___dimensions1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return Internal.GetBoundaryDimensions(boundaryType, out dimensions);
		int32_t L_0 = ___boundaryType0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___dimensions1;
		bool L_2;
		L_2 = Internal_GetBoundaryDimensions_m07ED6D4A7E3C368766B953282AE8FA76A257849B(L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryVisible_m274038DDF26F9FE120C68CD993C31D751C18B369 (const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return Internal.GetBoundaryVisible();
		bool L_0;
		L_0 = Internal_GetBoundaryVisible_mFFBE7E9B928B930A6C4B1F8F7391F3403CD9F72F(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetBoundaryVisible_mC4CAB764018040FFB39B8034D86B8E282DB73FF1 (bool ___boundaryVisible0, const RuntimeMethod* method)
{
	{
		// Internal.SetBoundaryVisible(boundaryVisible);
		bool L_0 = ___boundaryVisible0;
		Internal_SetBoundaryVisible_m3F762D66ED2E7998D8EDD6B065398796C32B2139(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetAppShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetAppShouldQuit_m4A8AC6995227A1AA4F5EF087051DA57735D0C486 (const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return Internal.GetAppShouldQuit();
		bool L_0;
		L_0 = Internal_GetAppShouldQuit_m2201DC6D753AE50E8E041C75816721CC622DA353(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetDisplayAvailableFrequencies(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetDisplayAvailableFrequencies_m2E4C861D87369CCA6A40AAFF6EA5CF65093D4F39 (intptr_t ___ptr0, int32_t* ___numFrequencies1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return Internal.GetDisplayAvailableFrequencies(ptr, ref numFrequencies);
		intptr_t L_0 = ___ptr0;
		int32_t* L_1 = ___numFrequencies1;
		bool L_2;
		L_2 = Internal_GetDisplayAvailableFrequencies_mA6A02093DF72E979557B913FEE19BA4B9CF61159((intptr_t)L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDisplayFrequency_m0C913002249CA6C2FDAD4AB57A0957D4F5F8646C (float ___refreshRate0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return Internal.SetDisplayFrequency(refreshRate);
		float L_0 = ___refreshRate0;
		bool L_1;
		L_1 = Internal_SetDisplayFrequency_m3221766C0E2DF541A57A44508194B245E038A965(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetDisplayFrequency(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetDisplayFrequency_m5D89A6D7DF13E557DCF74B65770B5945A2C327BE (float* ___refreshRate0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return Internal.GetDisplayFrequency(out refreshRate);
		float* L_0 = ___refreshRate0;
		bool L_1;
		L_1 = Internal_GetDisplayFrequency_m3264CC851EAF260CA1EFD7E4984362B1B7BC8676((float*)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.NativeMethods::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_GetSystemHeadsetType_m5D2B6BFDE86FE8DB56A48641E1EA3B3AC788C0AE (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return Internal.GetSystemHeadsetType();
		int32_t L_0;
		L_0 = Internal_GetSystemHeadsetType_mC0537BB4F5EA3EDD3993C7A05487B04A0FADAEFB(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetTiledMultiResSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetTiledMultiResSupported_mA3B09B2A1F0299A3AAD86C0DEB36625D598CD871 (const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return Internal.GetTiledMultiResSupported();
		bool L_0;
		L_0 = Internal_GetTiledMultiResSupported_mEE711350D975E6C4FD4D0634AEDD64F3FEF2E0BB(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetTiledMultiResLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetTiledMultiResLevel_mB738658807A7B692985B9CD55A0AEE8AAE58FF2D (int32_t ___level0, const RuntimeMethod* method)
{
	{
		// Internal.SetTiledMultiResLevel(level);
		int32_t L_0 = ___level0;
		Internal_SetTiledMultiResLevel_mEEC4003CC9AEA6156EE976678E3409FCABE6EDD2(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Unity.XR.Oculus.NativeMethods::GetTiledMultiResLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_GetTiledMultiResLevel_m8082A03420962D025A24554936BC8802D190F3F0 (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return Internal.GetTiledMultiResLevel();
		int32_t L_0;
		L_0 = Internal_GetTiledMultiResLevel_m2BC392E4824622E98F610EC02CB4A8196FEF96CE(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetTiledMultiResDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetTiledMultiResDynamic_mC79DF59B055FA02F3605881A38984454869DA66B (bool ___isDynamic0, const RuntimeMethod* method)
{
	{
		// Internal.SetTiledMultiResDynamic(isDynamic);
		bool L_0 = ___isDynamic0;
		Internal_SetTiledMultiResDynamic_m037817F3884FC015AC28AB27520A40B3511D2A10(L_0, /*hidden argument*/NULL);
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
// System.Void Unity.XR.Oculus.Input.OculusGoController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusGoController__ctor_mA08B0DA17D85ACD7166DE362B280B0E019F02719 (OculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B * __this, const RuntimeMethod* method)
{
	{
		GearVRTrackedController__ctor_m35059DBECC8470F3A2695CF33528C805722D6B6B(__this, /*hidden argument*/NULL);
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
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMD::get_userPresence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * OculusHMD_get_userPresence_mC77945F9838AEC06582FCD412D66398B8A26F6A9 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl userPresence { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CuserPresenceU3Ek__BackingField_49();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_userPresence(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_userPresence_m771670EA018ED5CA98992F225B5A8D46EAD3785F (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl userPresence { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CuserPresenceU3Ek__BackingField_49(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusHMD::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * OculusHMD_get_trackingState_mCD43A26298CFCDEFD96AD3A08F82C64D8461BB83 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = __this->get_U3CtrackingStateU3Ek__BackingField_50();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_trackingState_m23D4A9C067EE07856C7A4E479134DD140C4895FF (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_50(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMD::get_isTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * OculusHMD_get_isTracked_mA733146521489D70E3392C2FE8F981614F2D3750 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CisTrackedU3Ek__BackingField_51();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_isTracked_m9AF4021F5074AD0DF15FC5C92FF0D95A671FCDFC (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_51(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusHMD_get_devicePosition_m397D3E9FFD3C07D4AEAAD810AF564305B6B922A8 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdevicePositionU3Ek__BackingField_52();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_devicePosition_mAD72847BDB45A18C0BBF3B8FF400506391EC22F4 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_52(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * OculusHMD_get_deviceRotation_mF72780DD44548617C0592E8989AAF36B5A3A3E65 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = __this->get_U3CdeviceRotationU3Ek__BackingField_53();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_deviceRotation_mEB447DB998A6EBECE103A22BE84495193BBDF554 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_53(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_deviceAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusHMD_get_deviceAngularVelocity_m58E0D75AC25DF83DE5A62E7E7B08E297987A97BB (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdeviceAngularVelocityU3Ek__BackingField_54();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularVelocity_m544E45366F673214112CE3841FA140505FBEC5EA (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_54(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_deviceAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusHMD_get_deviceAcceleration_m62A7BBEAE8DC20682048170AAACC53E2BF615B04 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdeviceAccelerationU3Ek__BackingField_55();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAcceleration_m30EED57043866B11773759CEC24C1CE900244375 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_55(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_deviceAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusHMD_get_deviceAngularAcceleration_mC4307B3C4C58C73905EC90CDFA4894C91642D01A (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdeviceAngularAccelerationU3Ek__BackingField_56();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularAcceleration_m66BC6C304CD9B6542911BA59B3888B689C73D491 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_56(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_leftEyePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusHMD_get_leftEyePosition_mA2A191DD6654E736667963286600A9DA6801D453 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control leftEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CleftEyePositionU3Ek__BackingField_57();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyePosition_m76C7948890AA7C2DF39244BBFBBD29AECDE259C5 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control leftEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CleftEyePositionU3Ek__BackingField_57(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::get_leftEyeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * OculusHMD_get_leftEyeRotation_m3FDCDC0F2254521235009E48DED596BF0DDFE987 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl leftEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = __this->get_U3CleftEyeRotationU3Ek__BackingField_58();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeRotation_mD678B3993D0FCB4C210BA99C22AC42F00C79070A (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl leftEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CleftEyeRotationU3Ek__BackingField_58(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_leftEyeAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusHMD_get_leftEyeAngularVelocity_m4AE8BF07EFFCB7B07F51E12F98B7A4769644A7A3 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CleftEyeAngularVelocityU3Ek__BackingField_59();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularVelocity_m58A8062DEF7C997BF2C7D394CA5D6389B0D31DAD (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CleftEyeAngularVelocityU3Ek__BackingField_59(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_leftEyeAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusHMD_get_leftEyeAcceleration_m20E1FDEA8E4D626A7229906CB347059437C16CC3 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CleftEyeAccelerationU3Ek__BackingField_60();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAcceleration_m0F933CB5833C936292657808FF004BF233FF4CF3 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CleftEyeAccelerationU3Ek__BackingField_60(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_leftEyeAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusHMD_get_leftEyeAngularAcceleration_mE4DE0370DB29F96D3D73776CAD8434B046BB8494 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CleftEyeAngularAccelerationU3Ek__BackingField_61();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularAcceleration_m2649A57029FD70E62BD81DECCDC39E14E4A2FA82 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CleftEyeAngularAccelerationU3Ek__BackingField_61(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_rightEyePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusHMD_get_rightEyePosition_m8B67B6A44011EAAAA3FB5AC0F16F5F377E65CE41 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control rightEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CrightEyePositionU3Ek__BackingField_62();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyePosition_m4438F675E0AF84B543A1C56B231FF0813381628B (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control rightEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CrightEyePositionU3Ek__BackingField_62(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::get_rightEyeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * OculusHMD_get_rightEyeRotation_m1900E16773A47E2A3E191B9010B4A9AC03BA804B (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl rightEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = __this->get_U3CrightEyeRotationU3Ek__BackingField_63();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeRotation_m171A188164B8F95EC8F850C6DA5DF9778876577D (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl rightEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CrightEyeRotationU3Ek__BackingField_63(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_rightEyeAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusHMD_get_rightEyeAngularVelocity_m6AE907BA647BAC3E72F64CA2024F9495CD5D4614 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CrightEyeAngularVelocityU3Ek__BackingField_64();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularVelocity_m0CA022605B663B328D4835477171D69A33E043A7 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CrightEyeAngularVelocityU3Ek__BackingField_64(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_rightEyeAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusHMD_get_rightEyeAcceleration_m30185E7B1E208B117953C003983A137184C13BA3 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CrightEyeAccelerationU3Ek__BackingField_65();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAcceleration_m8D5BCE67143C560F81CE7CCB419F87870CE0F45D (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CrightEyeAccelerationU3Ek__BackingField_65(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_rightEyeAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusHMD_get_rightEyeAngularAcceleration_m167D36B409BCA8791EABC0FB0933A76A2A2BA266 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CrightEyeAngularAccelerationU3Ek__BackingField_66();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularAcceleration_mC843D8FAA433CCF9AF32D179FE25867BAD241C22 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CrightEyeAngularAccelerationU3Ek__BackingField_66(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_centerEyePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusHMD_get_centerEyePosition_m516B200396495CA0996060EA3E6F7BDC86996155 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control centerEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CcenterEyePositionU3Ek__BackingField_67();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyePosition_m53F3EBB8BFAC99EFA4A891BBFF0C7DDC033F9F9C (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control centerEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CcenterEyePositionU3Ek__BackingField_67(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::get_centerEyeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * OculusHMD_get_centerEyeRotation_mF083B23132C2DEEAE3B0312DE09015CFCACA2368 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl centerEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = __this->get_U3CcenterEyeRotationU3Ek__BackingField_68();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeRotation_m56EA7AE2EC553B6D05479729C53ABECFE8FBD7A6 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl centerEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CcenterEyeRotationU3Ek__BackingField_68(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_centerEyeAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusHMD_get_centerEyeAngularVelocity_mE5B51638249A3BA0F4C52AF0D6426C1CD0C5F2FF (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CcenterEyeAngularVelocityU3Ek__BackingField_69();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularVelocity_mDD6F9EF08A916CDE0B09C11610F9476B500F2311 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CcenterEyeAngularVelocityU3Ek__BackingField_69(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_centerEyeAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusHMD_get_centerEyeAcceleration_m678A4BFC81646373065981A74963C16E4982EB50 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CcenterEyeAccelerationU3Ek__BackingField_70();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAcceleration_m38F4A3595D707814CC80CB0FF19AA701E0F87D70 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CcenterEyeAccelerationU3Ek__BackingField_70(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_centerEyeAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusHMD_get_centerEyeAngularAcceleration_m107D78C9DA16A83A823015510F432BB9FDD7F5BD (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CcenterEyeAngularAccelerationU3Ek__BackingField_71();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularAcceleration_m8CAD36D9B5C6C1AD6BB3348F03FE1D4AA6CA29A3 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CcenterEyeAngularAccelerationU3Ek__BackingField_71(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_FinishSetup_m476E392C04F8BBB6E230BE6A37A90269820CA796 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04EA248327ED413DE02A011F18AC3C95CE6B8EF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral077AC4F37BECA7E305659A36FD4351A1A726D74E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral100A996F2433F52193B5EFF823ACE8663FC5C8C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral156E662C55D382C18194118C3287CEAB98FA2C6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24BA0B3EAF2D368DF4A667A3DA43E98A55602935);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C43BA5A481CBEF412DB695717FC94453B3769F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3624BAC25188A8C57A604CA0D3ACB2CBF73CF5DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F58D79BFB7F12C0766FBC616821E1891152822);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral494FAA0B659E3A69DCE4CE1C4EB20F594E2E641E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E267D25EFB4D56321079C3FF27EAE0DC4819CC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F2A85EC8DA913664B5C83242F8C325DFB1BC03C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral791956718283C9837F3ED95D7886E3C88855114B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB795E7C13E4CFACF08133C1739B538F3A728EF41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC49271934571B500FDC497EFB8A9FA5650E48B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC0836D648D015EDCC6EE9D171A855190052F97A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFABA7B84135B56F6F79588F7B57766574B6E8C66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		XRHMD_FinishSetup_mFA083256B40891104F2B70E2802F0FD4B27AE99C(__this, /*hidden argument*/NULL);
		// userPresence = GetChildControl<ButtonControl>("userPresence");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0;
		L_0 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteralC49271934571B500FDC497EFB8A9FA5650E48B32, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		OculusHMD_set_userPresence_m771670EA018ED5CA98992F225B5A8D46EAD3785F_inline(__this, L_0, /*hidden argument*/NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_1;
		L_1 = InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var);
		OculusHMD_set_trackingState_m23D4A9C067EE07856C7A4E479134DD140C4895FF_inline(__this, L_1, /*hidden argument*/NULL);
		// isTracked = GetChildControl<ButtonControl>("isTracked");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_2;
		L_2 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		OculusHMD_set_isTracked_m9AF4021F5074AD0DF15FC5C92FF0D95A671FCDFC_inline(__this, L_2, /*hidden argument*/NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_3;
		L_3 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusHMD_set_devicePosition_mAD72847BDB45A18C0BBF3B8FF400506391EC22F4_inline(__this, L_3, /*hidden argument*/NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_4;
		L_4 = InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		OculusHMD_set_deviceRotation_mEB447DB998A6EBECE103A22BE84495193BBDF554_inline(__this, L_4, /*hidden argument*/NULL);
		// deviceAngularVelocity = GetChildControl<Vector3Control>("deviceAngularVelocity");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_5;
		L_5 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusHMD_set_deviceAngularVelocity_m544E45366F673214112CE3841FA140505FBEC5EA_inline(__this, L_5, /*hidden argument*/NULL);
		// deviceAcceleration = GetChildControl<Vector3Control>("deviceAcceleration");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_6;
		L_6 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusHMD_set_deviceAcceleration_m30EED57043866B11773759CEC24C1CE900244375_inline(__this, L_6, /*hidden argument*/NULL);
		// deviceAngularAcceleration = GetChildControl<Vector3Control>("deviceAngularAcceleration");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_7;
		L_7 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusHMD_set_deviceAngularAcceleration_m66BC6C304CD9B6542911BA59B3888B689C73D491_inline(__this, L_7, /*hidden argument*/NULL);
		// leftEyePosition = GetChildControl<Vector3Control>("leftEyePosition");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_8;
		L_8 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral40F58D79BFB7F12C0766FBC616821E1891152822, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusHMD_set_leftEyePosition_m76C7948890AA7C2DF39244BBFBBD29AECDE259C5_inline(__this, L_8, /*hidden argument*/NULL);
		// leftEyeRotation = GetChildControl<QuaternionControl>("leftEyeRotation");
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_9;
		L_9 = InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5(__this, _stringLiteralCC0836D648D015EDCC6EE9D171A855190052F97A, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		OculusHMD_set_leftEyeRotation_mD678B3993D0FCB4C210BA99C22AC42F00C79070A_inline(__this, L_9, /*hidden argument*/NULL);
		// leftEyeAngularVelocity = GetChildControl<Vector3Control>("leftEyeAngularVelocity");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_10;
		L_10 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral2C43BA5A481CBEF412DB695717FC94453B3769F6, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusHMD_set_leftEyeAngularVelocity_m58A8062DEF7C997BF2C7D394CA5D6389B0D31DAD_inline(__this, L_10, /*hidden argument*/NULL);
		// leftEyeAcceleration = GetChildControl<Vector3Control>("leftEyeAcceleration");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_11;
		L_11 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral3624BAC25188A8C57A604CA0D3ACB2CBF73CF5DF, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusHMD_set_leftEyeAcceleration_m0F933CB5833C936292657808FF004BF233FF4CF3_inline(__this, L_11, /*hidden argument*/NULL);
		// leftEyeAngularAcceleration = GetChildControl<Vector3Control>("leftEyeAngularAcceleration");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_12;
		L_12 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral156E662C55D382C18194118C3287CEAB98FA2C6F, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusHMD_set_leftEyeAngularAcceleration_m2649A57029FD70E62BD81DECCDC39E14E4A2FA82_inline(__this, L_12, /*hidden argument*/NULL);
		// rightEyePosition = GetChildControl<Vector3Control>("rightEyePosition");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_13;
		L_13 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral100A996F2433F52193B5EFF823ACE8663FC5C8C6, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusHMD_set_rightEyePosition_m4438F675E0AF84B543A1C56B231FF0813381628B_inline(__this, L_13, /*hidden argument*/NULL);
		// rightEyeRotation = GetChildControl<QuaternionControl>("rightEyeRotation");
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_14;
		L_14 = InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5(__this, _stringLiteral6F2A85EC8DA913664B5C83242F8C325DFB1BC03C, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		OculusHMD_set_rightEyeRotation_m171A188164B8F95EC8F850C6DA5DF9778876577D_inline(__this, L_14, /*hidden argument*/NULL);
		// rightEyeAngularVelocity = GetChildControl<Vector3Control>("rightEyeAngularVelocity");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_15;
		L_15 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral24BA0B3EAF2D368DF4A667A3DA43E98A55602935, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusHMD_set_rightEyeAngularVelocity_m0CA022605B663B328D4835477171D69A33E043A7_inline(__this, L_15, /*hidden argument*/NULL);
		// rightEyeAcceleration = GetChildControl<Vector3Control>("rightEyeAcceleration");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_16;
		L_16 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteralB795E7C13E4CFACF08133C1739B538F3A728EF41, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusHMD_set_rightEyeAcceleration_m8D5BCE67143C560F81CE7CCB419F87870CE0F45D_inline(__this, L_16, /*hidden argument*/NULL);
		// rightEyeAngularAcceleration = GetChildControl<Vector3Control>("rightEyeAngularAcceleration");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_17;
		L_17 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteralFABA7B84135B56F6F79588F7B57766574B6E8C66, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusHMD_set_rightEyeAngularAcceleration_mC843D8FAA433CCF9AF32D179FE25867BAD241C22_inline(__this, L_17, /*hidden argument*/NULL);
		// centerEyePosition = GetChildControl<Vector3Control>("centerEyePosition");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_18;
		L_18 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral791956718283C9837F3ED95D7886E3C88855114B, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusHMD_set_centerEyePosition_m53F3EBB8BFAC99EFA4A891BBFF0C7DDC033F9F9C_inline(__this, L_18, /*hidden argument*/NULL);
		// centerEyeRotation = GetChildControl<QuaternionControl>("centerEyeRotation");
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_19;
		L_19 = InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5(__this, _stringLiteral494FAA0B659E3A69DCE4CE1C4EB20F594E2E641E, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		OculusHMD_set_centerEyeRotation_m56EA7AE2EC553B6D05479729C53ABECFE8FBD7A6_inline(__this, L_19, /*hidden argument*/NULL);
		// centerEyeAngularVelocity = GetChildControl<Vector3Control>("centerEyeAngularVelocity");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_20;
		L_20 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral077AC4F37BECA7E305659A36FD4351A1A726D74E, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusHMD_set_centerEyeAngularVelocity_mDD6F9EF08A916CDE0B09C11610F9476B500F2311_inline(__this, L_20, /*hidden argument*/NULL);
		// centerEyeAcceleration = GetChildControl<Vector3Control>("centerEyeAcceleration");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_21;
		L_21 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral4E267D25EFB4D56321079C3FF27EAE0DC4819CC9, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusHMD_set_centerEyeAcceleration_m38F4A3595D707814CC80CB0FF19AA701E0F87D70_inline(__this, L_21, /*hidden argument*/NULL);
		// centerEyeAngularAcceleration = GetChildControl<Vector3Control>("centerEyeAngularAcceleration");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_22;
		L_22 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral04EA248327ED413DE02A011F18AC3C95CE6B8EF0, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusHMD_set_centerEyeAngularAcceleration_m8CAD36D9B5C6C1AD6BB3348F03FE1D4AA6CA29A3_inline(__this, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD__ctor_mE497EDF74203D170F59426A5FFA99DA118BA67FD (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		XRHMD__ctor_m5219C151479C24B8AC88CF76AF908C25227E240D(__this, /*hidden argument*/NULL);
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
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMDExtended::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * OculusHMDExtended_get_back_m8893A0D45B2FEFF28E2A699F993358E355B6CBE5 (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CbackU3Ek__BackingField_72();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMDExtended_set_back_m5BEDA0810B1E10BB3018853646D7C00E64B84D03 (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_72(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusHMDExtended::get_touchpad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * OculusHMDExtended_get_touchpad_mC44F646C219803EB7E0F494F76FE7B88F0256F30 (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = __this->get_U3CtouchpadU3Ek__BackingField_73();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMDExtended_set_touchpad_mB9AEFFE8E5CBAE8A2F8161522443C01481F8FBB0 (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_73(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMDExtended_FinishSetup_mA390A06FAC20D884C637738168848C44E5BBDD3C (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		OculusHMD_FinishSetup_m476E392C04F8BBB6E230BE6A37A90269820CA796(__this, /*hidden argument*/NULL);
		// back = GetChildControl<ButtonControl>("back");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0;
		L_0 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		OculusHMDExtended_set_back_m5BEDA0810B1E10BB3018853646D7C00E64B84D03_inline(__this, L_0, /*hidden argument*/NULL);
		// touchpad = GetChildControl<Vector2Control>("touchpad");
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_1;
		L_1 = InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062(__this, _stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC, /*hidden argument*/InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062_RuntimeMethod_var);
		OculusHMDExtended_set_touchpad_mB9AEFFE8E5CBAE8A2F8161522443C01481F8FBB0_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMDExtended__ctor_mB98D9DF9D7D27CD8EE8E72E0111C29E94D7FB64A (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, const RuntimeMethod* method)
{
	{
		OculusHMD__ctor_mE497EDF74203D170F59426A5FFA99DA118BA67FD(__this, /*hidden argument*/NULL);
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
// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult Unity.XR.Oculus.OculusLoader::IsDeviceSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OculusLoader_IsDeviceSupported_mC2E5A317811DBD9EB506037FD358CF7F64814286 (const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			// if (NativeMethods.GetIsSupportedDevice())
			bool L_0;
			L_0 = NativeMethods_GetIsSupportedDevice_mFC86118E0FC74ABE30C84639472ADE492083AFD2(/*hidden argument*/NULL);
			V_0 = L_0;
			bool L_1 = V_0;
			if (!L_1)
			{
				goto IL_000f;
			}
		}

IL_000b:
		{
			// return DeviceSupportedResult.Supported;
			V_1 = 0;
			goto IL_0019;
		}

IL_000f:
		{
			// return DeviceSupportedResult.ExitApplication;
			V_1 = 2;
			goto IL_0019;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0013;
		}
		throw e;
	}

CATCH_0013:
	{ // begin catch(System.DllNotFoundException)
		// catch(DllNotFoundException)
		// return DeviceSupportedResult.NotSupported;
		V_1 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0019;
	} // end catch (depth: 1)

IL_0019:
	{
		// }
		int32_t L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.XR.XRDisplaySubsystem Unity.XR.Oculus.OculusLoader::get_displaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m6098CB15555B2E45C3BCAB9086012011CB382DAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * V_0 = NULL;
	{
		// return GetLoadedSubsystem<XRDisplaySubsystem>();
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_0;
		L_0 = GenericVirtFuncInvoker0< XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * >::Invoke(XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m6098CB15555B2E45C3BCAB9086012011CB382DAA_RuntimeMethod_var, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.XR.XRInputSubsystem Unity.XR.Oculus.OculusLoader::get_inputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * V_0 = NULL;
	{
		// return GetLoadedSubsystem<XRInputSubsystem>();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_0;
		L_0 = GenericVirtFuncInvoker0< XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * >::Invoke(XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Initialize_m9F45EA7F9134BED3F23133D3B2A3467CF51B5561 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputLayoutLoader_t49C5641FC147A26ECBF0BA4435702257FEC65EF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral271AF6878EC3872B415EA8A73A1433E4B604ACDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50B8349DC34E14AB475F3453803BCDBD9F3B0F85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral666C1D75F394950EFFDBE5C128752A9E0CBD1DEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71D87D03368ADC0E5018E85E30CA4984F5FF2AA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A);
		s_Il2CppMethodInitialized = true;
	}
	OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B5_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B6_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B8_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B9_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B11_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B12_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B14_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B15_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B17_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B18_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B20_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B19_0 = NULL;
	int32_t G_B21_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B21_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B23_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B24_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B26_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B25_0 = NULL;
	int32_t G_B27_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B27_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B29_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B30_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B32_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B33_1 = NULL;
	int32_t G_B37_0 = 0;
	int32_t G_B47_0 = 0;
	{
		//             if (IsDeviceSupported() != DeviceSupportedResult.Supported
		// #if UNITY_EDITOR_WIN
		//                 || SystemInfo.graphicsDeviceType != GraphicsDeviceType.Direct3D11
		// #endif
		//             )
		IL2CPP_RUNTIME_CLASS_INIT(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OculusLoader_IsDeviceSupported_mC2E5A317811DBD9EB506037FD358CF7F64814286(/*hidden argument*/NULL);
		V_1 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_01b5;
	}

IL_0015:
	{
		// InputLayoutLoader.RegisterInputLayouts();
		IL2CPP_RUNTIME_CLASS_INIT(InputLayoutLoader_t49C5641FC147A26ECBF0BA4435702257FEC65EF8_il2cpp_TypeInfo_var);
		InputLayoutLoader_RegisterInputLayouts_m7D259AB887FFDEB3E4FA2F7D991F498BDC00DE15(/*hidden argument*/NULL);
		// OculusSettings settings = GetSettings();
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_2;
		L_2 = OculusLoader_GetSettings_mF0D5694BD84372039D4227997B00CAB33A419CAC(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (settings != null)
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_4;
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_010f;
		}
	}
	{
		// userDefinedSettings.sharedDepthBuffer = (ushort)(settings.SharedDepthBuffer ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = L_6->get_SharedDepthBuffer_6();
		G_B4_0 = (&V_4);
		if (L_7)
		{
			G_B5_0 = (&V_4);
			goto IL_003e;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_003f;
	}

IL_003e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_003f:
	{
		G_B6_1->set_sharedDepthBuffer_0((uint16_t)((int32_t)((uint16_t)G_B6_0)));
		// userDefinedSettings.dashSupport = (ushort)(settings.DashSupport ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = L_8->get_DashSupport_7();
		G_B7_0 = (&V_4);
		if (L_9)
		{
			G_B8_0 = (&V_4);
			goto IL_0052;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_0053;
	}

IL_0052:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_0053:
	{
		G_B9_1->set_dashSupport_1((uint16_t)((int32_t)((uint16_t)G_B9_0)));
		// userDefinedSettings.stereoRenderingMode = (ushort)settings.GetStereoRenderingMode();
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_10 = V_0;
		NullCheck(L_10);
		uint16_t L_11;
		L_11 = OculusSettings_GetStereoRenderingMode_mB4FF47E7831A653C90D7B08E336C40D66968F2FD(L_10, /*hidden argument*/NULL);
		(&V_4)->set_stereoRenderingMode_2(L_11);
		// userDefinedSettings.colorSpace = (ushort)((QualitySettings.activeColorSpace == ColorSpace.Linear) ? 1 : 0);
		int32_t L_12;
		L_12 = QualitySettings_get_activeColorSpace_mE0C265DD8E215FC537CFA8B000C0977B10C6A49C(/*hidden argument*/NULL);
		G_B10_0 = (&V_4);
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			G_B11_0 = (&V_4);
			goto IL_0073;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		goto IL_0074;
	}

IL_0073:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
	}

IL_0074:
	{
		G_B12_1->set_colorSpace_3((uint16_t)((int32_t)((uint16_t)G_B12_0)));
		// userDefinedSettings.lowOverheadMode = (ushort)(settings.LowOverheadMode ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = L_13->get_LowOverheadMode_9();
		G_B13_0 = (&V_4);
		if (L_14)
		{
			G_B14_0 = (&V_4);
			goto IL_0087;
		}
	}
	{
		G_B15_0 = 0;
		G_B15_1 = G_B13_0;
		goto IL_0088;
	}

IL_0087:
	{
		G_B15_0 = 1;
		G_B15_1 = G_B14_0;
	}

IL_0088:
	{
		G_B15_1->set_lowOverheadMode_4((uint16_t)((int32_t)((uint16_t)G_B15_0)));
		// userDefinedSettings.protectedContext = (ushort)(settings.ProtectedContext ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_15 = V_0;
		NullCheck(L_15);
		bool L_16 = L_15->get_ProtectedContext_10();
		G_B16_0 = (&V_4);
		if (L_16)
		{
			G_B17_0 = (&V_4);
			goto IL_009b;
		}
	}
	{
		G_B18_0 = 0;
		G_B18_1 = G_B16_0;
		goto IL_009c;
	}

IL_009b:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
	}

IL_009c:
	{
		G_B18_1->set_protectedContext_5((uint16_t)((int32_t)((uint16_t)G_B18_0)));
		// userDefinedSettings.focusAware = (ushort)(settings.FocusAware ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_17 = V_0;
		NullCheck(L_17);
		bool L_18 = L_17->get_FocusAware_11();
		G_B19_0 = (&V_4);
		if (L_18)
		{
			G_B20_0 = (&V_4);
			goto IL_00af;
		}
	}
	{
		G_B21_0 = 0;
		G_B21_1 = G_B19_0;
		goto IL_00b0;
	}

IL_00af:
	{
		G_B21_0 = 1;
		G_B21_1 = G_B20_0;
	}

IL_00b0:
	{
		G_B21_1->set_focusAware_6((uint16_t)((int32_t)((uint16_t)G_B21_0)));
		// userDefinedSettings.optimizeBufferDiscards = (ushort)(settings.OptimizeBufferDiscards ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_19 = V_0;
		NullCheck(L_19);
		bool L_20 = L_19->get_OptimizeBufferDiscards_12();
		G_B22_0 = (&V_4);
		if (L_20)
		{
			G_B23_0 = (&V_4);
			goto IL_00c3;
		}
	}
	{
		G_B24_0 = 0;
		G_B24_1 = G_B22_0;
		goto IL_00c4;
	}

IL_00c3:
	{
		G_B24_0 = 1;
		G_B24_1 = G_B23_0;
	}

IL_00c4:
	{
		G_B24_1->set_optimizeBufferDiscards_7((uint16_t)((int32_t)((uint16_t)G_B24_0)));
		// userDefinedSettings.phaseSync = (ushort)(settings.PhaseSync ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_21 = V_0;
		NullCheck(L_21);
		bool L_22 = L_21->get_PhaseSync_13();
		G_B25_0 = (&V_4);
		if (L_22)
		{
			G_B26_0 = (&V_4);
			goto IL_00d7;
		}
	}
	{
		G_B27_0 = 0;
		G_B27_1 = G_B25_0;
		goto IL_00d8;
	}

IL_00d7:
	{
		G_B27_0 = 1;
		G_B27_1 = G_B26_0;
	}

IL_00d8:
	{
		G_B27_1->set_phaseSync_8((uint16_t)((int32_t)((uint16_t)G_B27_0)));
		// userDefinedSettings.symmetricProjection = (ushort)(settings.SymmetricProjection ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_23 = V_0;
		NullCheck(L_23);
		bool L_24 = L_23->get_SymmetricProjection_14();
		G_B28_0 = (&V_4);
		if (L_24)
		{
			G_B29_0 = (&V_4);
			goto IL_00eb;
		}
	}
	{
		G_B30_0 = 0;
		G_B30_1 = G_B28_0;
		goto IL_00ec;
	}

IL_00eb:
	{
		G_B30_0 = 1;
		G_B30_1 = G_B29_0;
	}

IL_00ec:
	{
		G_B30_1->set_symmetricProjection_9((uint16_t)((int32_t)((uint16_t)G_B30_0)));
		// userDefinedSettings.subsampledLayout = (ushort)(settings.SubsampledLayout ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_25 = V_0;
		NullCheck(L_25);
		bool L_26 = L_25->get_SubsampledLayout_15();
		G_B31_0 = (&V_4);
		if (L_26)
		{
			G_B32_0 = (&V_4);
			goto IL_00ff;
		}
	}
	{
		G_B33_0 = 0;
		G_B33_1 = G_B31_0;
		goto IL_0100;
	}

IL_00ff:
	{
		G_B33_0 = 1;
		G_B33_1 = G_B32_0;
	}

IL_0100:
	{
		G_B33_1->set_subsampledLayout_10((uint16_t)((int32_t)((uint16_t)G_B33_0)));
		// NativeMethods.SetUserDefinedSettings(userDefinedSettings);
		UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  L_27 = V_4;
		NativeMethods_SetUserDefinedSettings_m60831E50BCEB63E8B8E3A6421CE2D6BC21FB6FCD(L_27, /*hidden argument*/NULL);
	}

IL_010f:
	{
		// CreateSubsystem<XRDisplaySubsystemDescriptor, XRDisplaySubsystem>(s_DisplaySubsystemDescriptors, "oculus display");
		IL2CPP_RUNTIME_CLASS_INIT(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * L_28 = ((OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var))->get_s_DisplaySubsystemDescriptors_5();
		XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF(__this, L_28, _stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A, /*hidden argument*/XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF_RuntimeMethod_var);
		// CreateSubsystem<XRInputSubsystemDescriptor, XRInputSubsystem>(s_InputSubsystemDescriptors, "oculus input");
		List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * L_29 = ((OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var))->get_s_InputSubsystemDescriptors_6();
		XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56(__this, L_29, _stringLiteral71D87D03368ADC0E5018E85E30CA4984F5FF2AA8, /*hidden argument*/XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56_RuntimeMethod_var);
		// if (displaySubsystem == null && inputSubsystem == null)
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_30;
		L_30 = OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A(__this, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0144;
		}
	}
	{
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_31;
		L_31 = OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95(__this, /*hidden argument*/NULL);
		G_B37_0 = ((((RuntimeObject*)(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 *)L_31) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0145;
	}

IL_0144:
	{
		G_B37_0 = 0;
	}

IL_0145:
	{
		V_5 = (bool)G_B37_0;
		bool L_32 = V_5;
		if (!L_32)
		{
			goto IL_015a;
		}
	}
	{
		// Debug.LogWarning("Unable to start Oculus XR Plugin.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteral666C1D75F394950EFFDBE5C128752A9E0CBD1DEA, /*hidden argument*/NULL);
		goto IL_019e;
	}

IL_015a:
	{
		// else if (displaySubsystem == null)
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_33;
		L_33 = OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)L_33) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0178;
		}
	}
	{
		// Debug.LogError("Unable to start Oculus XR Plugin. Failed to load display subsystem.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral50B8349DC34E14AB475F3453803BCDBD9F3B0F85, /*hidden argument*/NULL);
		goto IL_019e;
	}

IL_0178:
	{
		// else if (inputSubsystem == null)
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_35;
		L_35 = OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95(__this, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 *)L_35) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_36 = V_7;
		if (!L_36)
		{
			goto IL_0196;
		}
	}
	{
		// Debug.LogError("Unable to start Oculus XR Plugin. Failed to load input subsystem.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral271AF6878EC3872B415EA8A73A1433E4B604ACDF, /*hidden argument*/NULL);
		goto IL_019e;
	}

IL_0196:
	{
		// RegisterUpdateCallback.Initialize();
		RegisterUpdateCallback_Initialize_m009EBB49477FAD1D7E03DA45EB80F15E6D28F521(/*hidden argument*/NULL);
	}

IL_019e:
	{
		// return displaySubsystem != null && inputSubsystem != null;
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_37;
		L_37 = OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A(__this, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_01b1;
		}
	}
	{
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_38;
		L_38 = OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95(__this, /*hidden argument*/NULL);
		G_B47_0 = ((!(((RuntimeObject*)(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 *)L_38) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_01b2;
	}

IL_01b1:
	{
		G_B47_0 = 0;
	}

IL_01b2:
	{
		V_2 = (bool)G_B47_0;
		goto IL_01b5;
	}

IL_01b5:
	{
		// }
		bool L_39 = V_2;
		return L_39;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Start_m48219B334C6D430348D0A6CE4B0BB8E9493E29F5 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// StartSubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7(__this, /*hidden argument*/XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7_RuntimeMethod_var);
		// StartSubsystem<XRInputSubsystem>();
		XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98(__this, /*hidden argument*/XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98_RuntimeMethod_var);
		// Development.OverrideDeveloperModeStart();
		IL2CPP_RUNTIME_CLASS_INIT(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		Development_OverrideDeveloperModeStart_mC9E24212121397B0C37A27904F5B95B4FD871C88(/*hidden argument*/NULL);
		// return true;
		V_0 = (bool)1;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Stop_m096A1F5907CFA0315161CDE8C28F889CC1709482 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// StopSubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD(__this, /*hidden argument*/XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD_RuntimeMethod_var);
		// StopSubsystem<XRInputSubsystem>();
		XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686(__this, /*hidden argument*/XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686_RuntimeMethod_var);
		// Development.OverrideDeveloperModeStop();
		IL2CPP_RUNTIME_CLASS_INIT(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		Development_OverrideDeveloperModeStop_mF62FEF98A60806E453F85B7419FE8A726A54A621(/*hidden argument*/NULL);
		// return true;
		V_0 = (bool)1;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Deinitialize_m1DBBE6B4710416D0793C6869DC3C17656431599F (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// RegisterUpdateCallback.Deinitialize();
		RegisterUpdateCallback_Deinitialize_m5783A25B492DD2271AF20528CC7225AA69B48D2B(/*hidden argument*/NULL);
		// DestroySubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3(__this, /*hidden argument*/XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3_RuntimeMethod_var);
		// DestroySubsystem<XRInputSubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8(__this, /*hidden argument*/XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8_RuntimeMethod_var);
		// return true;
		V_0 = (bool)1;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.OculusLoader::RuntimeLoadOVRPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader_RuntimeLoadOVRPlugin_m2CA81B2C2F621A6BEF5495DF46AE5B2E2F04C042 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral066D7D93F8175DDAAA3D6E4337D52AB827615B03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A017E46CE09C02B042A499A98229FB4CB75E992);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// var supported = IsDeviceSupported();
		IL2CPP_RUNTIME_CLASS_INIT(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OculusLoader_IsDeviceSupported_mC2E5A317811DBD9EB506037FD358CF7F64814286(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (supported == DeviceSupportedResult.ExitApplication)
		int32_t L_1 = V_0;
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// Debug.LogError("\n\nExiting application:\n\nThis .apk was built with the Oculus XR Plugin loader enabled, but is attempting to run on a non-Oculus device.\nTo build for general Android devices, please disable the Oculus XR Plugin before building the Android player.\n\n\n");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral8A017E46CE09C02B042A499A98229FB4CB75E992, /*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m10E44C187C0E5807F9C955A176885FAA95829267(/*hidden argument*/NULL);
	}

IL_0022:
	{
		// if (supported != DeviceSupportedResult.Supported)
		int32_t L_3 = V_0;
		V_2 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// return;
		goto IL_0052;
	}

IL_002c:
	{
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			// if (!NativeMethods.LoadOVRPlugin(""))
			bool L_5;
			L_5 = NativeMethods_LoadOVRPlugin_m4D4C796D2F76D0CA13969C61603C01B0A26478E7(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
			bool L_6 = V_3;
			if (!L_6)
			{
				goto IL_004a;
			}
		}

IL_003f:
		{
			// Debug.LogError("Failed to load libOVRPlugin.so");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral066D7D93F8175DDAAA3D6E4337D52AB827615B03, /*hidden argument*/NULL);
		}

IL_004a:
		{
			goto IL_0052;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004d;
		}
		throw e;
	}

CATCH_004d:
	{ // begin catch(System.Object)
		// catch
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0052;
	} // end catch (depth: 1)

IL_0052:
	{
		// }
		return;
	}
}
// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusLoader::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * OculusLoader_GetSettings_mF0D5694BD84372039D4227997B00CAB33A419CAC (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * V_0 = NULL;
	OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * V_1 = NULL;
	{
		// OculusSettings settings = null;
		V_0 = (OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C *)NULL;
		// settings = OculusSettings.s_Settings;
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_0 = ((OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var))->get_s_Settings_19();
		V_0 = L_0;
		// return settings;
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_1 = V_0;
		V_1 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_2 = V_1;
		return L_2;
	}
}
// System.Void Unity.XR.Oculus.OculusLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader__ctor_mF6A80167D63792923ADC3AB04D39BC1D0B3EB360 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	{
		XRLoaderHelper__ctor_mD27E0396EC4B11E208CF891642475B496CADAC9B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader__cctor_mD99F1A4C2C8FA6EE03E450E22062EDC2AEF809BE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<XRDisplaySubsystemDescriptor> s_DisplaySubsystemDescriptors = new List<XRDisplaySubsystemDescriptor>();
		List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * L_0 = (List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 *)il2cpp_codegen_object_new(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_il2cpp_TypeInfo_var);
		List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00(L_0, /*hidden argument*/List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00_RuntimeMethod_var);
		((OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var))->set_s_DisplaySubsystemDescriptors_5(L_0);
		// private static List<XRInputSubsystemDescriptor> s_InputSubsystemDescriptors = new List<XRInputSubsystemDescriptor>();
		List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * L_1 = (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *)il2cpp_codegen_object_new(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var);
		List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB(L_1, /*hidden argument*/List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var);
		((OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var))->set_s_InputSubsystemDescriptors_6(L_1);
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
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusRemote::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * OculusRemote_get_back_mB5132FDC1B115D1292177E91BF53635FACE0970F (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CbackU3Ek__BackingField_39();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRemote_set_back_m491E697DCD37A9B95DC5D1C73F7068D78E334AEF (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_39(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusRemote::get_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * OculusRemote_get_start_mEE291B42AD7E6D3361DDA59FF2A217932EB0BFCA (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CstartU3Ek__BackingField_40();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_start(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRemote_set_start_m46A6FD1D22D5D6DF333F19B51A85CC8D81AD2683 (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CstartU3Ek__BackingField_40(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusRemote::get_touchpad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * OculusRemote_get_touchpad_m6913B1019802FB78D1B2E2863BC51B41430599D4 (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = __this->get_U3CtouchpadU3Ek__BackingField_41();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRemote_set_touchpad_m7D04E201084045328F04345076B920B4EABA52AD (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_41(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusRemote::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRemote_FinishSetup_m5C9517EF579C721B0ADC03E00EBFF1F0C5BA7F7F (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		InputControl_FinishSetup_m2F42B1EE9FAE7D94E2A35F92115F6A535BCD2E62(__this, /*hidden argument*/NULL);
		// back = GetChildControl<ButtonControl>("back");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0;
		L_0 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		OculusRemote_set_back_m491E697DCD37A9B95DC5D1C73F7068D78E334AEF_inline(__this, L_0, /*hidden argument*/NULL);
		// start = GetChildControl<ButtonControl>("start");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_1;
		L_1 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		OculusRemote_set_start_m46A6FD1D22D5D6DF333F19B51A85CC8D81AD2683_inline(__this, L_1, /*hidden argument*/NULL);
		// touchpad = GetChildControl<Vector2Control>("touchpad");
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_2;
		L_2 = InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062(__this, _stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC, /*hidden argument*/InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062_RuntimeMethod_var);
		OculusRemote_set_touchpad_m7D04E201084045328F04345076B920B4EABA52AD_inline(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusRemote::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRemote__ctor_m2BCE3ECEF5DBFEAD59595E747A26E7A314788A3C (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, const RuntimeMethod* method)
{
	{
		InputDevice__ctor_m06F1C304C450B020F0D96FEC8485536D1D0C98BC(__this, /*hidden argument*/NULL);
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
// System.UInt16 Unity.XR.Oculus.OculusSettings::GetStereoRenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t OculusSettings_GetStereoRenderingMode_mB4FF47E7831A653C90D7B08E336C40D66968F2FD (OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		// return (ushort)m_StereoRenderingModeAndroid;
		int32_t L_0 = __this->get_m_StereoRenderingModeAndroid_5();
		V_0 = (uint16_t)((int32_t)((uint16_t)L_0));
		goto IL_000b;
	}

IL_000b:
	{
		// }
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.XR.Oculus.OculusSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusSettings_Awake_m525FBEB4247E44DBC0D7E147581BD5EE751DCDB1 (OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Settings = this;
		((OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var))->set_s_Settings_19(__this);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusSettings__ctor_mBD02A264D1619566E55F183F6BE3E2F9D8C9747B (OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * __this, const RuntimeMethod* method)
{
	{
		// public StereoRenderingModeDesktop m_StereoRenderingModeDesktop = StereoRenderingModeDesktop.MultiPass;
		__this->set_m_StereoRenderingModeDesktop_4(0);
		// public StereoRenderingModeAndroid m_StereoRenderingModeAndroid = StereoRenderingModeAndroid.MultiPass;
		__this->set_m_StereoRenderingModeAndroid_5(0);
		// public bool SharedDepthBuffer = true;
		__this->set_SharedDepthBuffer_6((bool)1);
		// public bool DashSupport = true;
		__this->set_DashSupport_7((bool)1);
		// public bool V2Signing = true;
		__this->set_V2Signing_8((bool)1);
		// public bool LowOverheadMode = false;
		__this->set_LowOverheadMode_9((bool)0);
		// public bool ProtectedContext = false;
		__this->set_ProtectedContext_10((bool)0);
		// public bool FocusAware = true;
		__this->set_FocusAware_11((bool)1);
		// public bool OptimizeBufferDiscards = true;
		__this->set_OptimizeBufferDiscards_12((bool)1);
		// public bool PhaseSync = false;
		__this->set_PhaseSync_13((bool)0);
		// public bool SymmetricProjection = false;
		__this->set_SymmetricProjection_14((bool)0);
		// public bool SubsampledLayout = false;
		__this->set_SubsampledLayout_15((bool)0);
		// public bool TargetQuest = true;
		__this->set_TargetQuest_16((bool)1);
		// public bool TargetQuest2 = true;
		__this->set_TargetQuest2_17((bool)1);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusTouchController::get_thumbstick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * OculusTouchController_get_thumbstick_mEA364EF231DED32CCA34E23C5AAA791424E89753 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Control thumbstick { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = __this->get_U3CthumbstickU3Ek__BackingField_43();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstick(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstick_m6298BE7A8953E351BE124A7EB8955F3B0784D226 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control thumbstick { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = ___value0;
		__this->set_U3CthumbstickU3Ek__BackingField_43(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::get_trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * OculusTouchController_get_trigger_m798532A4B3FACBAA8E2B83E9B7FDBC749DCFF606 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = __this->get_U3CtriggerU3Ek__BackingField_44();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_trigger(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_trigger_m25340AF73E5E533C59310FCCF36CEABE80414347 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CtriggerU3Ek__BackingField_44(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::get_grip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * OculusTouchController_get_grip_mC8FCE1638BECC26424D4604F94E7FB510B33081F (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = __this->get_U3CgripU3Ek__BackingField_45();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_grip(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_grip_m7365F9B548F735B7E1C4EEA076A2BEA956AE1D81 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CgripU3Ek__BackingField_45(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_primaryButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * OculusTouchController_get_primaryButton_mBE50D7932F79858A560EAE5ACA1636AF41D0B023 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryButton { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CprimaryButtonU3Ek__BackingField_46();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_primaryButton(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryButton_m30E15AB1A3A510D364FCDD02DB65158B7E6ED9E2 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryButton { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CprimaryButtonU3Ek__BackingField_46(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_secondaryButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * OculusTouchController_get_secondaryButton_m0B72C8113C1D789E358DAA34C63D954E6AD08CC6 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryButton { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CsecondaryButtonU3Ek__BackingField_47();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_secondaryButton(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryButton_m1D457887B59C4E3084B56424F2BC00806EE878DA (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryButton { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CsecondaryButtonU3Ek__BackingField_47(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_gripPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * OculusTouchController_get_gripPressed_m24F1B6450A46933BDB49074C527C1D125261701F (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CgripPressedU3Ek__BackingField_48();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_gripPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_gripPressed_m2821E882B28BB4E241FDC113354F85D2632BD6F0 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CgripPressedU3Ek__BackingField_48(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * OculusTouchController_get_start_mF275D9C36426D27F2A3D3595BAFE253B8B2952BA (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CstartU3Ek__BackingField_49();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_start(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_start_mAF7B100AAE7B4C92E132B9398B827E53D60058FF (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CstartU3Ek__BackingField_49(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_thumbstickClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * OculusTouchController_get_thumbstickClicked_mEAC5451C220DE75121F690023146CD684E67407F (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickClicked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CthumbstickClickedU3Ek__BackingField_50();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstickClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickClicked_m95075EE8FFB21658C01811C12629EF7B9DD91702 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickClicked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CthumbstickClickedU3Ek__BackingField_50(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_primaryTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * OculusTouchController_get_primaryTouched_m7F11CDBCE28C4E08161B8D3E473D79E60DCBA709 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryTouched { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CprimaryTouchedU3Ek__BackingField_51();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_primaryTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryTouched_mB4603A8EE60563935E3EFD1B0256EC39BE5D16EA (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryTouched { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CprimaryTouchedU3Ek__BackingField_51(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_secondaryTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * OculusTouchController_get_secondaryTouched_m868B2B3C53C54C06C75D1EFEA7C8B330E543F1FC (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryTouched { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CsecondaryTouchedU3Ek__BackingField_52();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_secondaryTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryTouched_m808610BF02C6AF39171429F2EF8A4C5EFD1EE7EF (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryTouched { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CsecondaryTouchedU3Ek__BackingField_52(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::get_triggerTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * OculusTouchController_get_triggerTouched_mA37F7EB63E3272E84ED8A1D28FEE6CB09C3D990E (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl triggerTouched { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = __this->get_U3CtriggerTouchedU3Ek__BackingField_53();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_triggerTouched(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerTouched_mC1CA0DD733E35B4B0FDFADEFA839017F88D5C009 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl triggerTouched { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CtriggerTouchedU3Ek__BackingField_53(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_triggerPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * OculusTouchController_get_triggerPressed_mE6D30A26724DFB418E35D410C81A9F36E2AB3CB3 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CtriggerPressedU3Ek__BackingField_54();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerPressed_m1BB5F09869F5B4C35ADC99E447B23248ACEA6786 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CtriggerPressedU3Ek__BackingField_54(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_thumbstickTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * OculusTouchController_get_thumbstickTouched_m0E369CA081868FA60F5E3D20E22257E5A7ED20F0 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickTouched { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CthumbstickTouchedU3Ek__BackingField_55();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstickTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickTouched_m196F8D8CEE80B395CB8A0F05B1F02357E269786C (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickTouched { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CthumbstickTouchedU3Ek__BackingField_55(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusTouchController::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * OculusTouchController_get_trackingState_m583CAA7FC7C024F5ED451A5EEC51D5D8C9743A20 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = __this->get_U3CtrackingStateU3Ek__BackingField_56();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_trackingState_m1DF9A55440417576A269AC9671D74BD289B15D10 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_56(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_isTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * OculusTouchController_get_isTracked_m51A8E62EA9CB1BF42F6B31B0B8A3BC4372B6E21D (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CisTrackedU3Ek__BackingField_57();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_isTracked_m9D7697DE4D1154DF2977F119AC2564EEE2F43653 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_57(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusTouchController_get_devicePosition_mC3E2CC7068423CE59C194328A7150A30861DA324 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdevicePositionU3Ek__BackingField_58();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_devicePosition_mD3B8942C90778C8C5956467CC132B2A63CC1C545 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_58(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusTouchController::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * OculusTouchController_get_deviceRotation_mEB03085A6E4B56EBB2784A19E40DF4B98E06FA10 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = __this->get_U3CdeviceRotationU3Ek__BackingField_59();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceRotation_m4D4259B5CAA20556723ADFC6515EB18830497369 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_59(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::get_deviceVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusTouchController_get_deviceVelocity_mACBF7C933740AD5A97CAF01DBF5E3531E121E640 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdeviceVelocityU3Ek__BackingField_60();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceVelocity_m0873827197CDB80237BE605E5A841E856B867E45 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceVelocityU3Ek__BackingField_60(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::get_deviceAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusTouchController_get_deviceAngularVelocity_m48C71A21418C236895B92621D6BB7AE1D01978BC (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdeviceAngularVelocityU3Ek__BackingField_61();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularVelocity_mD18F809B1657E53F0B7985F57EAB750D4D4EBE7E (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_61(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::get_deviceAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusTouchController_get_deviceAcceleration_m89863CF2148213CCCF99AE4A28C4141185C500FE (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdeviceAccelerationU3Ek__BackingField_62();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAcceleration_mAB43F86D03C0767DC5EC4E3FF605D419DCD54AA9 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_62(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::get_deviceAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusTouchController_get_deviceAngularAcceleration_mEC073221B4D10915175DCD07E56C6B1C44DB4E69 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdeviceAngularAccelerationU3Ek__BackingField_63();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularAcceleration_m2AFA5EA372A02AD28A4DA15CD0062AA63067ABE4 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_63(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_FinishSetup_mCFB90E6EBDEB8F694B926E12EDE38DA7D3BD394A (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D3C0882E8B897E888F8BF5C82A33ED850CDEA80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ADB212528F8CF625764142B108030A0499510F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C9B28579DAB706CEF903A85854B98A08280D27D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA5B233166AA50A8488D3B97E0B5A1D09EA4905);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A8CECB369E64DA7E1FBB6FDE079801EFD1EBFEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral767FF60B240D13D0E7862196C1340B1049EF4B4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral890FDBCF037770EED7A1937DEF697FFC44FBF0B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E98EC4F7D85E6AB585D718D9BEDBB163E42B54C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5CCD6D3CB93DC1BEDD79DB8A4B75174089A3455);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		XRController_FinishSetup_m2D73A4DE4C5AF7CB4AB8C4EEEA2BAA6189E2A8B6(__this, /*hidden argument*/NULL);
		// thumbstick = GetChildControl<Vector2Control>("thumbstick");
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0;
		L_0 = InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062(__this, _stringLiteral6A8CECB369E64DA7E1FBB6FDE079801EFD1EBFEB, /*hidden argument*/InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062_RuntimeMethod_var);
		OculusTouchController_set_thumbstick_m6298BE7A8953E351BE124A7EB8955F3B0784D226_inline(__this, L_0, /*hidden argument*/NULL);
		// trigger = GetChildControl<AxisControl>("trigger");
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_1;
		L_1 = InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041(__this, _stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041_RuntimeMethod_var);
		OculusTouchController_set_trigger_m25340AF73E5E533C59310FCCF36CEABE80414347_inline(__this, L_1, /*hidden argument*/NULL);
		// triggerTouched = GetChildControl<AxisControl>("triggerTouched");
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_2;
		L_2 = InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041(__this, _stringLiteral767FF60B240D13D0E7862196C1340B1049EF4B4B, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041_RuntimeMethod_var);
		OculusTouchController_set_triggerTouched_mC1CA0DD733E35B4B0FDFADEFA839017F88D5C009_inline(__this, L_2, /*hidden argument*/NULL);
		// grip = GetChildControl<AxisControl>("grip");
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_3;
		L_3 = InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041(__this, _stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041_RuntimeMethod_var);
		OculusTouchController_set_grip_m7365F9B548F735B7E1C4EEA076A2BEA956AE1D81_inline(__this, L_3, /*hidden argument*/NULL);
		// primaryButton = GetChildControl<ButtonControl>("primaryButton");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_4;
		L_4 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral5DA5B233166AA50A8488D3B97E0B5A1D09EA4905, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		OculusTouchController_set_primaryButton_m30E15AB1A3A510D364FCDD02DB65158B7E6ED9E2_inline(__this, L_4, /*hidden argument*/NULL);
		// secondaryButton = GetChildControl<ButtonControl>("secondaryButton");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_5;
		L_5 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral4ADB212528F8CF625764142B108030A0499510F0, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		OculusTouchController_set_secondaryButton_m1D457887B59C4E3084B56424F2BC00806EE878DA_inline(__this, L_5, /*hidden argument*/NULL);
		// gripPressed = GetChildControl<ButtonControl>("gripPressed");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_6;
		L_6 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		OculusTouchController_set_gripPressed_m2821E882B28BB4E241FDC113354F85D2632BD6F0_inline(__this, L_6, /*hidden argument*/NULL);
		// start = GetChildControl<ButtonControl>("start");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_7;
		L_7 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		OculusTouchController_set_start_mAF7B100AAE7B4C92E132B9398B827E53D60058FF_inline(__this, L_7, /*hidden argument*/NULL);
		// thumbstickClicked = GetChildControl<ButtonControl>("thumbstickClicked");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_8;
		L_8 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteralB5CCD6D3CB93DC1BEDD79DB8A4B75174089A3455, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		OculusTouchController_set_thumbstickClicked_m95075EE8FFB21658C01811C12629EF7B9DD91702_inline(__this, L_8, /*hidden argument*/NULL);
		// primaryTouched = GetChildControl<ButtonControl>("primaryTouched");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_9;
		L_9 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral9E98EC4F7D85E6AB585D718D9BEDBB163E42B54C, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		OculusTouchController_set_primaryTouched_mB4603A8EE60563935E3EFD1B0256EC39BE5D16EA_inline(__this, L_9, /*hidden argument*/NULL);
		// secondaryTouched = GetChildControl<ButtonControl>("secondaryTouched");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_10;
		L_10 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral890FDBCF037770EED7A1937DEF697FFC44FBF0B3, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		OculusTouchController_set_secondaryTouched_m808610BF02C6AF39171429F2EF8A4C5EFD1EE7EF_inline(__this, L_10, /*hidden argument*/NULL);
		// thumbstickTouched = GetChildControl<ButtonControl>("thumbstickTouched");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_11;
		L_11 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral4C9B28579DAB706CEF903A85854B98A08280D27D, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		OculusTouchController_set_thumbstickTouched_m196F8D8CEE80B395CB8A0F05B1F02357E269786C_inline(__this, L_11, /*hidden argument*/NULL);
		// triggerPressed = GetChildControl<ButtonControl>("triggerPressed");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_12;
		L_12 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		OculusTouchController_set_triggerPressed_m1BB5F09869F5B4C35ADC99E447B23248ACEA6786_inline(__this, L_12, /*hidden argument*/NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_13;
		L_13 = InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var);
		OculusTouchController_set_trackingState_m1DF9A55440417576A269AC9671D74BD289B15D10_inline(__this, L_13, /*hidden argument*/NULL);
		// isTracked = GetChildControl<ButtonControl>("isTracked");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_14;
		L_14 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		OculusTouchController_set_isTracked_m9D7697DE4D1154DF2977F119AC2564EEE2F43653_inline(__this, L_14, /*hidden argument*/NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_15;
		L_15 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusTouchController_set_devicePosition_mD3B8942C90778C8C5956467CC132B2A63CC1C545_inline(__this, L_15, /*hidden argument*/NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_16;
		L_16 = InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		OculusTouchController_set_deviceRotation_m4D4259B5CAA20556723ADFC6515EB18830497369_inline(__this, L_16, /*hidden argument*/NULL);
		// deviceVelocity = GetChildControl<Vector3Control>("deviceVelocity");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_17;
		L_17 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral2D3C0882E8B897E888F8BF5C82A33ED850CDEA80, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusTouchController_set_deviceVelocity_m0873827197CDB80237BE605E5A841E856B867E45_inline(__this, L_17, /*hidden argument*/NULL);
		// deviceAngularVelocity = GetChildControl<Vector3Control>("deviceAngularVelocity");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_18;
		L_18 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusTouchController_set_deviceAngularVelocity_mD18F809B1657E53F0B7985F57EAB750D4D4EBE7E_inline(__this, L_18, /*hidden argument*/NULL);
		// deviceAcceleration = GetChildControl<Vector3Control>("deviceAcceleration");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_19;
		L_19 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusTouchController_set_deviceAcceleration_mAB43F86D03C0767DC5EC4E3FF605D419DCD54AA9_inline(__this, L_19, /*hidden argument*/NULL);
		// deviceAngularAcceleration = GetChildControl<Vector3Control>("deviceAngularAcceleration");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_20;
		L_20 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusTouchController_set_deviceAngularAcceleration_m2AFA5EA372A02AD28A4DA15CD0062AA63067ABE4_inline(__this, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController__ctor_m3DF25FC6EBC1D65AFDBDB011BCF9ABB1A85793C8 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		XRControllerWithRumble__ctor_m0FBE065D60AEF3D7E19F29A6F392EB5819D13EBB(__this, /*hidden argument*/NULL);
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
// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusTrackingReference::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * OculusTrackingReference_get_trackingState_mE820D28C1064D147ABA08F7B9607CA4B56685320 (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	{
		// public IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = __this->get_U3CtrackingStateU3Ek__BackingField_39();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference_set_trackingState_m1D72C4867593A561DC929C7105EF9F4C4AFE1B29 (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_39(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTrackingReference::get_isTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * OculusTrackingReference_get_isTracked_mD3045E0173A90F598D71D042352DC0E8B6A9580C (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CisTrackedU3Ek__BackingField_40();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference_set_isTracked_m2D5DCD8E29E2939BF8BDDFF73C6620E98A8F5426 (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_40(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTrackingReference::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * OculusTrackingReference_get_devicePosition_mEE5F223F2AD746A6273EA94CB325A5B10A90791D (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdevicePositionU3Ek__BackingField_41();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference_set_devicePosition_m9AF2BA44440BB6FF4941F2C7B26102B79DEDBA13 (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_41(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusTrackingReference::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * OculusTrackingReference_get_deviceRotation_mA5A4E06441E1FE4D3184D4C1F6CB1FDEC1F6D9EA (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = __this->get_U3CdeviceRotationU3Ek__BackingField_42();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference_set_deviceRotation_m8F67A11A110C452455016E5E70C7E297B2513D41 (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_42(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference_FinishSetup_mC8CDDD455575F2A0FF9F9E3E996CDD200752BC33 (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		InputControl_FinishSetup_m2F42B1EE9FAE7D94E2A35F92115F6A535BCD2E62(__this, /*hidden argument*/NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0;
		L_0 = InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var);
		OculusTrackingReference_set_trackingState_m1D72C4867593A561DC929C7105EF9F4C4AFE1B29_inline(__this, L_0, /*hidden argument*/NULL);
		// isTracked = GetChildControl<ButtonControl>("isTracked");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_1;
		L_1 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		OculusTrackingReference_set_isTracked_m2D5DCD8E29E2939BF8BDDFF73C6620E98A8F5426_inline(__this, L_1, /*hidden argument*/NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_2;
		L_2 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		OculusTrackingReference_set_devicePosition_m9AF2BA44440BB6FF4941F2C7B26102B79DEDBA13_inline(__this, L_2, /*hidden argument*/NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_3;
		L_3 = InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		OculusTrackingReference_set_deviceRotation_m8F67A11A110C452455016E5E70C7E297B2513D41_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference__ctor_m034388DDCC9F71833408E6C24C10F4F8C9FFE15E (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	{
		InputDevice__ctor_m06F1C304C450B020F0D96FEC8485536D1D0C98BC(__this, /*hidden argument*/NULL);
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
// System.Void Unity.XR.Oculus.OculusUsages::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusUsages__cctor_m95A9C1418F76CD4C0603062DD186F0FC4362316C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83734951E6CF0220767BDF0CB126B869CED3387A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAD7DAB1A0038F488CE6D7BD2E6F6D83311BED68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD42F30283C4CE60465C4010C800AD9704733102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static InputFeatureUsage<bool> volumeUp = new InputFeatureUsage<bool>("VolumeUp");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_0;
		memset((&L_0), 0, sizeof(L_0));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_0), _stringLiteralCAD7DAB1A0038F488CE6D7BD2E6F6D83311BED68, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var))->set_volumeUp_0(L_0);
		// public static InputFeatureUsage<bool> volumeDown = new InputFeatureUsage<bool>("VolumeDown");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_1;
		memset((&L_1), 0, sizeof(L_1));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_1), _stringLiteral83734951E6CF0220767BDF0CB126B869CED3387A, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var))->set_volumeDown_1(L_1);
		// public static InputFeatureUsage<bool> thumbrest = new InputFeatureUsage<bool>("Thumbrest");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_2;
		memset((&L_2), 0, sizeof(L_2));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_2), _stringLiteralCD42F30283C4CE60465C4010C800AD9704733102, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var))->set_thumbrest_2(L_2);
		// public static InputFeatureUsage<bool> indexTouch = new InputFeatureUsage<bool>("IndexTouch");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_3;
		memset((&L_3), 0, sizeof(L_3));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_3), _stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var))->set_indexTouch_3(L_3);
		// public static InputFeatureUsage<bool> thumbTouch = new InputFeatureUsage<bool>("ThumbTouch");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_4), _stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var))->set_thumbTouch_4(L_4);
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
// System.Boolean Unity.XR.Oculus.Performance::TrySetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TrySetCPULevel_m168A76958F71C27D5A17A346F699F874CD119D39 (int32_t ___level0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return (NativeMethods.SetCPULevel(level) == 0);
		int32_t L_0 = ___level0;
		int32_t L_1;
		L_1 = NativeMethods_SetCPULevel_mABD8BE1F1CE41DC683BA43822DB456530FD6D929(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.XR.Oculus.Performance::TrySetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TrySetGPULevel_mE13008C6066A522BAEFE7B171A51AB78BDD81EDC (int32_t ___level0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return (NativeMethods.SetGPULevel(level) == 0);
		int32_t L_0 = ___level0;
		int32_t L_1;
		L_1 = NativeMethods_SetGPULevel_m055FCE766C4C218F61A06ACA963F5ED637834DF7(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.XR.Oculus.Performance::TryGetAvailableDisplayRefreshRates(System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TryGetAvailableDisplayRefreshRates_m6322292C481D9F84FF1A56DCC33897047FF0AA42 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___refreshRates0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// if (cachedDisplayAvailableFrequencies == null || cachedDisplayAvailableFrequencies.Length == 0)
		IL2CPP_RUNTIME_CLASS_INIT(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->get_cachedDisplayAvailableFrequencies_0();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->get_cachedDisplayAvailableFrequencies_0();
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_008a;
		}
	}
	{
		// cachedDisplayAvailableFrequencies = new float[0];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)0);
		IL2CPP_RUNTIME_CLASS_INIT(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->set_cachedDisplayAvailableFrequencies_0(L_3);
		// int numFrequencies = 0;
		V_1 = 0;
		// if (NativeMethods.GetDisplayAvailableFrequencies(IntPtr.Zero, ref numFrequencies) && numFrequencies > 0)
		bool L_4;
		L_4 = NativeMethods_GetDisplayAvailableFrequencies_m2E4C861D87369CCA6A40AAFF6EA5CF65093D4F39((intptr_t)(0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_5 = V_1;
		G_B7_0 = ((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		goto IL_003b;
	}

IL_003a:
	{
		G_B7_0 = 0;
	}

IL_003b:
	{
		V_2 = (bool)G_B7_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0089;
		}
	}
	{
		// int size = sizeof(float) * numFrequencies;
		int32_t L_7 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_7));
		// IntPtr ptr = Marshal.AllocHGlobal(size);
		int32_t L_8 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = Marshal_AllocHGlobal_mB339DD0B9D5778400B8CA9BA45169C9C1C14835D(L_8, /*hidden argument*/NULL);
		V_4 = (intptr_t)L_9;
		// if (NativeMethods.GetDisplayAvailableFrequencies(ptr, ref numFrequencies) && numFrequencies > 0)
		intptr_t L_10 = V_4;
		bool L_11;
		L_11 = NativeMethods_GetDisplayAvailableFrequencies_m2E4C861D87369CCA6A40AAFF6EA5CF65093D4F39((intptr_t)L_10, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_12 = V_1;
		G_B11_0 = ((((int32_t)L_12) > ((int32_t)0))? 1 : 0);
		goto IL_005e;
	}

IL_005d:
	{
		G_B11_0 = 0;
	}

IL_005e:
	{
		V_5 = (bool)G_B11_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		// cachedDisplayAvailableFrequencies = new float[numFrequencies];
		int32_t L_14 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->set_cachedDisplayAvailableFrequencies_0(L_15);
		// Marshal.Copy(ptr, cachedDisplayAvailableFrequencies, 0, numFrequencies);
		intptr_t L_16 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = ((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->get_cachedDisplayAvailableFrequencies_0();
		int32_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m5B004FA5DF0DC280EB8677D5E253BA93924C40AD((intptr_t)L_16, L_17, 0, L_18, /*hidden argument*/NULL);
	}

IL_0080:
	{
		// Marshal.FreeHGlobal(ptr);
		intptr_t L_19 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390((intptr_t)L_19, /*hidden argument*/NULL);
	}

IL_0089:
	{
	}

IL_008a:
	{
		// refreshRates = cachedDisplayAvailableFrequencies;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_20 = ___refreshRates0;
		IL2CPP_RUNTIME_CLASS_INIT(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_21 = ((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->get_cachedDisplayAvailableFrequencies_0();
		*((RuntimeObject **)L_20) = (RuntimeObject *)L_21;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_20, (void*)(RuntimeObject *)L_21);
		// return (cachedDisplayAvailableFrequencies.Length > 0);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_22 = ((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->get_cachedDisplayAvailableFrequencies_0();
		NullCheck(L_22);
		V_6 = (bool)((!(((uint32_t)(((RuntimeArray*)L_22)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_009e;
	}

IL_009e:
	{
		// }
		bool L_23 = V_6;
		return L_23;
	}
}
// System.Boolean Unity.XR.Oculus.Performance::TrySetDisplayRefreshRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TrySetDisplayRefreshRate_m08D4B41CCE153758A990FE1D45E90344B3AFB583 (float ___refreshRate0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return NativeMethods.SetDisplayFrequency(refreshRate);
		float L_0 = ___refreshRate0;
		bool L_1;
		L_1 = NativeMethods_SetDisplayFrequency_m0C913002249CA6C2FDAD4AB57A0957D4F5F8646C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.XR.Oculus.Performance::TryGetDisplayRefreshRate(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TryGetDisplayRefreshRate_mE352668E6C1C1FF8B6184F23FF31C047B8F34C45 (float* ___refreshRate0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return NativeMethods.GetDisplayFrequency(out refreshRate);
		float* L_0 = ___refreshRate0;
		bool L_1;
		L_1 = NativeMethods_GetDisplayFrequency_m5D89A6D7DF13E557DCF74B65770B5945A2C327BE((float*)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.XR.Oculus.Performance::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Performance__cctor_m01F738B7F7C2CC8CFBFA44910D5BF0ABB33F820B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static float[] cachedDisplayAvailableFrequencies = null;
		((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->set_cachedDisplayAvailableFrequencies_0((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)NULL);
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
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Initialize_m009EBB49477FAD1D7E03DA45EB80F15E6D28F521 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.onBeforeRender += Update;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_0, NULL, (intptr_t)((intptr_t)RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_add_onBeforeRender_m1324FCAC06439BC14CFCE062C6BEFB76C7501228(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Deinitialize_m5783A25B492DD2271AF20528CC7225AA69B48D2B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.onBeforeRender -= Update;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_0, NULL, (intptr_t)((intptr_t)RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_remove_onBeforeRender_mD2FFDA214D242F524EFF15932A7334F1F0D526D0(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputFocus.Update();
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		InputFocus_Update_mA29F59D3148E351431EF53DEEE921320DC66945E(/*hidden argument*/NULL);
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
// System.String Unity.XR.Oculus.Stats::get_PluginVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Stats_get_PluginVersion_m66F99A5B04F4CADEE440E825BF1A29E927363674 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m204EA717B425B2D05BB91568E62A291F99E44F75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// if (string.Equals(string.Empty, m_PluginVersion))
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		String_t* L_1 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_PluginVersion_1();
		bool L_2;
		L_2 = String_Equals_mCB0E1C045647658CF6B7C646F98F938750AB1B19(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		// byte[] buf = new byte[256];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_1 = L_4;
		// NativeMethods.GetOVRPVersion(buf);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_1;
		NativeMethods_GetOVRPVersion_mB328CD13DA707D9B1B26A3EBC82A9F364F140BE9(L_5, /*hidden argument*/NULL);
		// var end = Array.IndexOf<byte>(buf, 0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_1;
		int32_t L_7;
		L_7 = Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m204EA717B425B2D05BB91568E62A291F99E44F75(L_6, (uint8_t)0, /*hidden argument*/Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m204EA717B425B2D05BB91568E62A291F99E44F75_RuntimeMethod_var);
		V_2 = L_7;
		// m_PluginVersion = System.Text.Encoding.ASCII.GetString(buf, 0, end);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_8;
		L_8 = Encoding_get_ASCII_mFA250EFF131288B0C4572FC27C7393FD469DC1C0(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, L_10);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->set_m_PluginVersion_1(L_11);
	}

IL_0042:
	{
		// return m_PluginVersion;
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		String_t* L_12 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_PluginVersion_1();
		V_3 = L_12;
		goto IL_004a;
	}

IL_004a:
	{
		// }
		String_t* L_13 = V_3;
		return L_13;
	}
}
// UnityEngine.IntegratedSubsystem Unity.XR.Oculus.Stats::GetOculusDisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_1_get_SubsystemDescriptor_m816FB5D3478D016CBD470BA93CF200BB0FA1DF42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t56455D217921470E52E7D33A1794256E31084DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86CB83E014FB5A27545E6442E0E4C0E783301DED);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t56455D217921470E52E7D33A1794256E31084DD8 * V_0 = NULL;
	bool V_1 = false;
	IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * V_2 = NULL;
	Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  V_3;
	memset((&V_3), 0, sizeof(V_3));
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * V_4 = NULL;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B7_0 = 0;
	{
		// if (m_Display != null)
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_Display_0();
		V_1 = (bool)((!(((RuntimeObject*)(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return m_Display;
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_2 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_Display_0();
		V_2 = L_2;
		goto IL_009f;
	}

IL_0018:
	{
		// List<XRDisplaySubsystem> displays = new List<XRDisplaySubsystem>();
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_3 = (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *)il2cpp_codegen_object_new(List_1_t56455D217921470E52E7D33A1794256E31084DD8_il2cpp_TypeInfo_var);
		List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4(L_3, /*hidden argument*/List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4_RuntimeMethod_var);
		V_0 = L_3;
		// SubsystemManager.GetInstances(displays);
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880(L_4, /*hidden argument*/SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880_RuntimeMethod_var);
		// foreach (XRDisplaySubsystem xrDisplaySubsystem in displays)
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_5 = V_0;
		NullCheck(L_5);
		Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  L_6;
		L_6 = List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D(L_5, /*hidden argument*/List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D_RuntimeMethod_var);
		V_3 = L_6;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_002f:
		{
			// foreach (XRDisplaySubsystem xrDisplaySubsystem in displays)
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_7;
			L_7 = Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_inline((Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *)(&V_3), /*hidden argument*/Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_RuntimeMethod_var);
			V_4 = L_7;
			// if (xrDisplaySubsystem.SubsystemDescriptor.id == "oculus display" && xrDisplaySubsystem.running)
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_8 = V_4;
			NullCheck(L_8);
			XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833 * L_9;
			L_9 = IntegratedSubsystem_1_get_SubsystemDescriptor_m816FB5D3478D016CBD470BA93CF200BB0FA1DF42(L_8, /*hidden argument*/IntegratedSubsystem_1_get_SubsystemDescriptor_m816FB5D3478D016CBD470BA93CF200BB0FA1DF42_RuntimeMethod_var);
			NullCheck(L_9);
			String_t* L_10;
			L_10 = IntegratedSubsystemDescriptor_get_id_m0347A7AE998F0210CC7DAD1DA974F788AB2CF879(L_9, /*hidden argument*/NULL);
			bool L_11;
			L_11 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_10, _stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_005a;
			}
		}

IL_0051:
		{
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_12 = V_4;
			NullCheck(L_12);
			bool L_13;
			L_13 = IntegratedSubsystem_get_running_m3C6870588AA0F9816A3947F045BCB8F5662A9EC2(L_12, /*hidden argument*/NULL);
			G_B7_0 = ((int32_t)(L_13));
			goto IL_005b;
		}

IL_005a:
		{
			G_B7_0 = 0;
		}

IL_005b:
		{
			V_5 = (bool)G_B7_0;
			bool L_14 = V_5;
			if (!L_14)
			{
				goto IL_0071;
			}
		}

IL_0061:
		{
			// m_Display = xrDisplaySubsystem;
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_15 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
			((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->set_m_Display_0(L_15);
			// return m_Display;
			IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_16 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_Display_0();
			V_2 = L_16;
			IL2CPP_LEAVE(0x9F, FINALLY_007d);
		}

IL_0071:
		{
		}

IL_0072:
		{
			// foreach (XRDisplaySubsystem xrDisplaySubsystem in displays)
			bool L_17;
			L_17 = Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C((Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_002f;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x8C, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5((Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9F, IL_009f)
		IL2CPP_JUMP_TBL(0x8C, IL_008c)
	}

IL_008c:
	{
		// Debug.LogError("No active Oculus display subsystem was found.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral86CB83E014FB5A27545E6442E0E4C0E783301DED, /*hidden argument*/NULL);
		// return m_Display;
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_18 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_Display_0();
		V_2 = L_18;
		goto IL_009f;
	}

IL_009f:
	{
		// }
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_19 = V_2;
		return L_19;
	}
}
// System.Void Unity.XR.Oculus.Stats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stats__ctor_mA96DB2D702AAB276E41CD7C005AB64B599C0B63C (Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.XR.Oculus.Stats::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stats__cctor_mC93F4550849911809F978CF11798655CAAB0E528 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string m_PluginVersion = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->set_m_PluginVersion_1(L_0);
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
// System.Void Unity.XR.Oculus.Utils::SetColorScaleAndOffset(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetColorScaleAndOffset_m6434F29CDE9823397828ECE9F9A2817D44D48D84 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___colorScale0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___colorOffset1, const RuntimeMethod* method)
{
	{
		// NativeMethods.SetColorScale(colorScale.x, colorScale.y, colorScale.z, colorScale.w);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___colorScale0;
		float L_1 = L_0.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___colorScale0;
		float L_3 = L_2.get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___colorScale0;
		float L_5 = L_4.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___colorScale0;
		float L_7 = L_6.get_w_4();
		NativeMethods_SetColorScale_mABAA1FBFC163D8DE94AD47D7B8F848B78CD5E9A0(L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		// NativeMethods.SetColorOffset(colorOffset.x, colorOffset.y, colorOffset.z, colorOffset.w);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8 = ___colorOffset1;
		float L_9 = L_8.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10 = ___colorOffset1;
		float L_11 = L_10.get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12 = ___colorOffset1;
		float L_13 = L_12.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_14 = ___colorOffset1;
		float L_15 = L_14.get_w_4();
		NativeMethods_SetColorOffset_m62E7000E8A015D685D76D915941FDE958732213D(L_9, L_11, L_13, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.Utils::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetSystemHeadsetType_m383047E3555F08E216DD00B53BFE5F3C016FAFE9 (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return NativeMethods.GetSystemHeadsetType();
		int32_t L_0;
		L_0 = NativeMethods_GetSystemHeadsetType_m5D2B6BFDE86FE8DB56A48641E1EA3B3AC788C0AE(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.XR.Oculus.Utils::SetFoveationLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetFoveationLevel_m16335000BA8172A666725F27407B2FEC32EB43D0 (int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D4C1624EBCE886FC4F782A22F67C15E64EF0BE1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!NativeMethods.GetTiledMultiResSupported())
		bool L_0;
		L_0 = NativeMethods_GetTiledMultiResSupported_mA3B09B2A1F0299A3AAD86C0DEB36625D598CD871(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// Debug.LogWarning("Can't set foveation level on current platform");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteral8D4C1624EBCE886FC4F782A22F67C15E64EF0BE1, /*hidden argument*/NULL);
		// return;
		goto IL_0022;
	}

IL_001b:
	{
		// NativeMethods.SetTiledMultiResLevel(level);
		int32_t L_2 = ___level0;
		NativeMethods_SetTiledMultiResLevel_mB738658807A7B692985B9CD55A0AEE8AAE58FF2D(L_2, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.Utils::EnableDynamicFFR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_EnableDynamicFFR_mAFC73962AAB99074606ED7D65ECC9D35B41C430A (bool ___enable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral039FC8798456705B4F372FB22E7B8A75FE2E6D6D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!NativeMethods.GetTiledMultiResSupported())
		bool L_0;
		L_0 = NativeMethods_GetTiledMultiResSupported_mA3B09B2A1F0299A3AAD86C0DEB36625D598CD871(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.LogWarning("Can't enable dynamic FFR on current platform");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteral039FC8798456705B4F372FB22E7B8A75FE2E6D6D, /*hidden argument*/NULL);
		// return false;
		V_1 = (bool)0;
		goto IL_0028;
	}

IL_001d:
	{
		// NativeMethods.SetTiledMultiResDynamic(enable);
		bool L_2 = ___enable0;
		NativeMethods_SetTiledMultiResDynamic_mC79DF59B055FA02F3605881A38984454869DA66B(L_2, /*hidden argument*/NULL);
		// return true;
		V_1 = (bool)1;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Int32 Unity.XR.Oculus.Utils::GetFoveationLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetFoveationLevel_m922BB229AFE1AA65CDD41B454CCD930F0D93522B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E33CA6894EABEA68F4151858D5322F8246508A3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (!NativeMethods.GetTiledMultiResSupported())
		bool L_0;
		L_0 = NativeMethods_GetTiledMultiResSupported_mA3B09B2A1F0299A3AAD86C0DEB36625D598CD871(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.LogWarning("Can't get foveation level on current platform");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteral0E33CA6894EABEA68F4151858D5322F8246508A3, /*hidden argument*/NULL);
		// return -1;
		V_1 = (-1);
		goto IL_0025;
	}

IL_001d:
	{
		// return NativeMethods.GetTiledMultiResLevel();
		int32_t L_2;
		L_2 = NativeMethods_GetTiledMultiResLevel_m8082A03420962D025A24554936BC8802D190F3F0(/*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		int32_t L_3 = V_1;
		return L_3;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetColorScale_mA8ED134FCC56CCD16F92734ADCBF2526342EB02C (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float, float, float, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float) + sizeof(float) + sizeof(float) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetColorScale", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetColorScale)(___x0, ___y1, ___z2, ___w3);
	#else
	il2cppPInvokeFunc(___x0, ___y1, ___z2, ___w3);
	#endif

}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetColorOffset_m6765A7EC8EFFDB061AE48B3F53658BBD3FC26FBF (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float, float, float, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float) + sizeof(float) + sizeof(float) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetColorOffset", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetColorOffset)(___x0, ___y1, ___z2, ___w3);
	#else
	il2cppPInvokeFunc(___x0, ___y1, ___z2, ___w3);
	#endif

}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetIsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetIsSupportedDevice_mA3EF73A5F9CA1AD2B6E9D8F1F560A62D14A19E92 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetIsSupportedDevice", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetIsSupportedDevice)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_LoadOVRPlugin_m20BF6ADFC47F043ED9CB9F86199E26C8A46AD5AF (String_t* ___ovrpPath0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "LoadOVRPlugin", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___ovrpPath0' to native representation
	Il2CppChar* ____ovrpPath0_marshaled = NULL;
	if (___ovrpPath0 != NULL)
	{
		____ovrpPath0_marshaled = ___ovrpPath0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(LoadOVRPlugin)(____ovrpPath0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____ovrpPath0_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::UnloadOVRPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_UnloadOVRPlugin_m6C683304420498120BF38390A1129A5B01A67F1E (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "UnloadOVRPlugin", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnloadOVRPlugin)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetUserDefinedSettings_mE187F03B58FEB8FE874B938E28401C06C919221E (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  ___settings0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D );
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D ) + 2;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetUserDefinedSettings", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetUserDefinedSettings)(___settings0);
	#else
	il2cppPInvokeFunc(___settings0);
	#endif

}
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::SetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_SetCPULevel_m0568DA61DDC47E9F28D26C52EA4035A6A139CCA8 (int32_t ___cpuLevel0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetCPULevel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetCPULevel)(___cpuLevel0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cpuLevel0);
	#endif

	return returnValue;
}
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::SetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_SetGPULevel_mBC46AC72882E2FFD4358F5812B8F45329C62843A (int32_t ___gpuLevel0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetGPULevel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetGPULevel)(___gpuLevel0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___gpuLevel0);
	#endif

	return returnValue;
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_GetOVRPVersion_m1E2BB4B4CDC04F9DAD64DF67D3CFC76085AF305B (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___version0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetOVRPVersion", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___version0' to native representation
	uint8_t* ____version0_marshaled = NULL;
	if (___version0 != NULL)
	{
		____version0_marshaled = reinterpret_cast<uint8_t*>((___version0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GetOVRPVersion)(____version0_marshaled);
	#else
	il2cppPInvokeFunc(____version0_marshaled);
	#endif

}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_EnablePerfMetrics_m2572EAFC2373A4E10168EDD76D576A44212466D4 (bool ___enable0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "EnablePerfMetrics", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(EnablePerfMetrics)(static_cast<int32_t>(___enable0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___enable0));
	#endif

}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_EnableAppMetrics_m327F6E0F90F1A962D000C105EFE540CD43E78D70 (bool ___enable0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "EnableAppMetrics", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(EnableAppMetrics)(static_cast<int32_t>(___enable0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___enable0));
	#endif

}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDeveloperModeStrict_m0A2121361A4FFDA8D0EF716D2C011F0EF19A34F8 (bool ___active0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetDeveloperModeStrict", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetDeveloperModeStrict)(static_cast<int32_t>(___active0));
	#else
	int32_t returnValue = il2cppPInvokeFunc(static_cast<int32_t>(___active0));
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppHasInputFocus_mA679379FDE6F3AFAFBF35841818A0BD5A492579F (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetAppHasInputFocus", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetAppHasInputFocus)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryConfigured_m38A8FB6A7F2DCE7882E9DF3707530E40D85E6492 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetBoundaryConfigured", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetBoundaryConfigured)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryDimensions_m07ED6D4A7E3C368766B953282AE8FA76A257849B (int32_t ___boundaryType0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___dimensions1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetBoundaryDimensions", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetBoundaryDimensions)(___boundaryType0, ___dimensions1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___boundaryType0, ___dimensions1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryVisible_mFFBE7E9B928B930A6C4B1F8F7391F3403CD9F72F (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetBoundaryVisible", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetBoundaryVisible)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetBoundaryVisible_m3F762D66ED2E7998D8EDD6B065398796C32B2139 (bool ___boundaryVisible0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetBoundaryVisible", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetBoundaryVisible)(static_cast<int32_t>(___boundaryVisible0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___boundaryVisible0));
	#endif

}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppShouldQuit_m2201DC6D753AE50E8E041C75816721CC622DA353 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetAppShouldQuit", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetAppShouldQuit)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetDisplayAvailableFrequencies(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetDisplayAvailableFrequencies_mA6A02093DF72E979557B913FEE19BA4B9CF61159 (intptr_t ___ptr0, int32_t* ___numFrequencies1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetDisplayAvailableFrequencies", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetDisplayAvailableFrequencies)(___ptr0, ___numFrequencies1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0, ___numFrequencies1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDisplayFrequency_m3221766C0E2DF541A57A44508194B245E038A965 (float ___refreshRate0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetDisplayFrequency", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetDisplayFrequency)(___refreshRate0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___refreshRate0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetDisplayFrequency(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetDisplayFrequency_m3264CC851EAF260CA1EFD7E4984362B1B7BC8676 (float* ___refreshRate0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetDisplayFrequency", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetDisplayFrequency)(___refreshRate0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___refreshRate0);
	#endif

	return static_cast<bool>(returnValue);
}
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.NativeMethods/Internal::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_GetSystemHeadsetType_mC0537BB4F5EA3EDD3993C7A05487B04A0FADAEFB (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetSystemHeadsetType", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetSystemHeadsetType)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetTiledMultiResSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetTiledMultiResSupported_mEE711350D975E6C4FD4D0634AEDD64F3FEF2E0BB (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetTiledMultiResSupported", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetTiledMultiResSupported)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetTiledMultiResLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetTiledMultiResLevel_mEEC4003CC9AEA6156EE976678E3409FCABE6EDD2 (int32_t ___level0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetTiledMultiResLevel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetTiledMultiResLevel)(___level0);
	#else
	il2cppPInvokeFunc(___level0);
	#endif

}
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::GetTiledMultiResLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_GetTiledMultiResLevel_m2BC392E4824622E98F610EC02CB4A8196FEF96CE (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetTiledMultiResLevel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetTiledMultiResLevel)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetTiledMultiResDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetTiledMultiResDynamic_m037817F3884FC015AC28AB27520A40B3511D2A10 (bool ___isDynamic0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetTiledMultiResDynamic", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetTiledMultiResDynamic)(static_cast<int32_t>(___isDynamic0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___isDynamic0));
	#endif

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
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_GPUAppTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_GPUAppTime_mFEEFEEDF7634F4064C690F07B1DB26825692A238 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetAppGPUTimeLastFrame(out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		NullCheck(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = XRDisplaySubsystem_TryGetAppGPUTimeLastFrame_m6101C924131D97949D0BB807F0075C28464B6451(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)), (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_GPUCompositorTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_GPUCompositorTime_mE88C5D2A9508EC775678D4AAFE172D644DD3B27E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetCompositorGPUTimeLastFrame(out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		NullCheck(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = XRDisplaySubsystem_TryGetCompositorGPUTimeLastFrame_m168019E7D1D33CFA7218F9BC79E3C5E1640CC41B(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)), (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_MotionToPhoton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_MotionToPhoton_m80740922FD30B202610BDB102AD95D46D3FB9F7C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetMotionToPhoton(out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		NullCheck(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = XRDisplaySubsystem_TryGetMotionToPhoton_m10E75B632588DB76D4C88E022CC2B5D678E1C9F5(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)), (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_RefreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_RefreshRate_mF58D1D911B6983F6C8E04DF0FD8D31863842F3D5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetDisplayRefreshRate(out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		NullCheck(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = XRDisplaySubsystem_TryGetDisplayRefreshRate_m83B7B48711B68E8D05F3B5D2F1EDE61154EAC7A3(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)), (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_BatteryTemp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_BatteryTemp_m47FB27D2D8E551DC256CDB9616F2142D2DEB2175 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral650C77761A0B8B1C5C9AB2BB0D61E4767DDDB6E8);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "batteryTemperature", out batteryTemp);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral650C77761A0B8B1C5C9AB2BB0D61E4767DDDB6E8, (float*)(&V_0), /*hidden argument*/NULL);
		// return batteryTemp;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_BatteryLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_BatteryLevel_mAA3234732E5829EA40C79610386C23B00D5DF07C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2089C15C4332D83D0388E9B6CF7057950BB5CD54);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "batteryLevel", out batteryLevel);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral2089C15C4332D83D0388E9B6CF7057950BB5CD54, (float*)(&V_0), /*hidden argument*/NULL);
		// return batteryLevel;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Boolean Unity.XR.Oculus.Stats/AdaptivePerformance::get_PowerSavingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdaptivePerformance_get_PowerSavingMode_m99226E3F46426919FA68C75216FA229A8F7F9851 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1B23EF8DFFD7E2D6521CBDDA3630AC111AE5F69);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "powerSavingMode", out powerSavingMode);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteralA1B23EF8DFFD7E2D6521CBDDA3630AC111AE5F69, (float*)(&V_0), /*hidden argument*/NULL);
		// return !(powerSavingMode == 0.0f);
		float L_2 = V_0;
		V_1 = (bool)((((int32_t)((((float)L_2) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0021:
	{
		// }
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_AdaptivePerformanceScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_AdaptivePerformanceScale_m9947FB5DB23E0092A71D3E08A775082FEC71B43E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DADF60B90978099A286AA09DF75E789888C9904);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "adaptivePerformanceScale", out performanceScale);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral4DADF60B90978099A286AA09DF75E789888C9904, (float*)(&V_0), /*hidden argument*/NULL);
		// return performanceScale;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Int32 Unity.XR.Oculus.Stats/AdaptivePerformance::get_CPULevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdaptivePerformance_get_CPULevel_m1AD7E50E684841C20C52A92B65C516E112960847 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18731F484474DDB7AD0F0E7C15988C0A794DEC4D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "cpuLevel", out cpuLevel);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral18731F484474DDB7AD0F0E7C15988C0A794DEC4D, (float*)(&V_0), /*hidden argument*/NULL);
		// return (int) cpuLevel;
		float L_2 = V_0;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_2);
		goto IL_0018;
	}

IL_0018:
	{
		// }
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Int32 Unity.XR.Oculus.Stats/AdaptivePerformance::get_GPULevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdaptivePerformance_get_GPULevel_mBEFC052317F45BB89DC42293713AD696D24CBF2A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0A88A6DB46B5BCFC8ED5871C81A6C91204F1E45);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "gpuLevel", out gpuLevel);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteralB0A88A6DB46B5BCFC8ED5871C81A6C91204F1E45, (float*)(&V_0), /*hidden argument*/NULL);
		// return (int) gpuLevel;
		float L_2 = V_0;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_2);
		goto IL_0018;
	}

IL_0018:
	{
		// }
		int32_t L_3 = V_1;
		return L_3;
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
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_AppQueueAheadTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_AppQueueAheadTime_m6269E5088701FEB294099FA3B9411C7E631529EE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB59BE99DEEFC290177DB43CF6B387636E1E0904);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.appqueueahead", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteralEB59BE99DEEFC290177DB43CF6B387636E1E0904, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_AppCPUElapsedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_AppCPUElapsedTime_m27DCDA440E31783E74022FE2C088959ABA79CDA2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC74641CA8B52702019111B91E29821576E700BB);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.cpuelapsedtime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteralDC74641CA8B52702019111B91E29821576E700BB, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_CompositorDroppedFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CompositorDroppedFrames_m76EAF296BC146D237038A450AE6616C2AD3E7547 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60EABBC07A25977B87CF58F7CB0D8D536D013DBA);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositordroppedframes", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral60EABBC07A25977B87CF58F7CB0D8D536D013DBA, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_CompositorLatency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CompositorLatency_m0C0237CDA7D800BF3151C8309B50F03ED194CEEA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B2341C27300FE7CC95F015A82D27378FA3E44C2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorlatency", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral8B2341C27300FE7CC95F015A82D27378FA3E44C2, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_CompositorCPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CompositorCPUTime_m75C30FD99DB6696C222044E0E4102007C15FB253 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28DC90CC5E864B9BEFE7447A1CCD759D1F2D3991);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorcputime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral28DC90CC5E864B9BEFE7447A1CCD759D1F2D3991, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_CPUStartToGPUEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CPUStartToGPUEnd_mA294A8E4B82FEA622DA1E042C70385655D45BD44 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDF3E124A1507F39224D73C8EFA9828D8BE3846B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorcpustartgpuendelapsedtime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteralCDF3E124A1507F39224D73C8EFA9828D8BE3846B, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_GPUEndToVsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_GPUEndToVsync_m38FA875E11D5A9E5C377C09C60030243E3872B6D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8695EE74D804B608F4CB465B35B41E02389AD412);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorgpuendtovsyncelapsedtime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral8695EE74D804B608F4CB465B35B41E02389AD412, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Void Unity.XR.Oculus.Stats/AppMetrics::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppMetrics_EnableAppMetrics_m3D99B6DC2574C718873D2DC9941FDD14049F6779 (bool ___enable0, const RuntimeMethod* method)
{
	{
		// NativeMethods.EnableAppMetrics(enable);
		bool L_0 = ___enable0;
		NativeMethods_EnableAppMetrics_mBFF69EB9C54389B25A9FC271819E9B3FB2A6CDB6(L_0, /*hidden argument*/NULL);
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
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_AppCPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_AppCPUTime_mE53A84B8202BCA2E221EA0297D6F4C067434344D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3665CEE66FFACBAAC4FEA9EBCFB744AC1F3A9A57);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.appcputime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral3665CEE66FFACBAAC4FEA9EBCFB744AC1F3A9A57, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_AppGPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_AppGPUTime_m6055F2F6B1F987492D42B376AAF23F7DAB2CA9F9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E837F416B0AD538A7C4B0B672467CAD351051C1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.appgputime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral6E837F416B0AD538A7C4B0B672467CAD351051C1, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CompositorCPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CompositorCPUTime_mA25DE33A0AE7CE98363AD9CC589A275390602982 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19EEE9FEA675F3AD8283953350F19D8A2E2934A0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.compositorcputime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral19EEE9FEA675F3AD8283953350F19D8A2E2934A0, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CompositorGPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CompositorGPUTime_m42BD7C18C2BE1ABBAAEB0BA3A832A54C4B57478A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B4329AE6518370E7FA79EABB817A9A8F33E72A1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.compositorgputime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral7B4329AE6518370E7FA79EABB817A9A8F33E72A1, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_GPUUtilization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_GPUUtilization_m1D6176628FCB67FE5C1F4665D1BA7FB608184E4C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0C17AE8C1199F6CD8F16D39E1B77CC319F01B26);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.gpuutil", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteralE0C17AE8C1199F6CD8F16D39E1B77CC319F01B26, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CPUUtilizationAverage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CPUUtilizationAverage_mC7D22DDB555F09C483D19D7D6CA9EF911D8E0A8E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9348643C476E6565E37FC0900AC244BD6F18AC32);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.cpuutilavg", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral9348643C476E6565E37FC0900AC244BD6F18AC32, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CPUUtilizationWorst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CPUUtilizationWorst_m2F112911B6C7BB7A2D684B01E41292857D9E54FD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF752B27A3F46D6A1A7B84CA9CC6E730C9B472E9A);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.cpuutilworst", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteralF752B27A3F46D6A1A7B84CA9CC6E730C9B472E9A, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CPUClockFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CPUClockFrequency_m6A41A80961206C86DC37E23869EC04A4B506AC4B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF7D253C5E081CD8124B453E189315E3AB51312);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.cpuclockfreq", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral7CF7D253C5E081CD8124B453E189315E3AB51312, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_GPUClockFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_GPUClockFrequency_mE67C9D0558582243809FDFD11CEDBCE4B9C709E3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB81FB9482B9D82D5EF7151BE5724BB998E6C5F83);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.gpuclockfreq", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteralB81FB9482B9D82D5EF7151BE5724BB998E6C5F83, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Void Unity.XR.Oculus.Stats/PerfMetrics::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerfMetrics_EnablePerfMetrics_m6DCAC8F8AAC829B357E7DA4876D7377FB3F45FAD (bool ___enable0, const RuntimeMethod* method)
{
	{
		// NativeMethods.EnablePerfMetrics(enable);
		bool L_0 = ___enable0;
		NativeMethods_EnablePerfMetrics_mB9E9467765E2141254EAC993FF87E6595831DC74(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpad_m728CC0149FAF741A657C956FF63AE6F0C4A88C26_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_43(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trigger_m41CACCCC4FD5A612CE3EE70A2663D5102473DFD2_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CtriggerU3Ek__BackingField_44(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_back_m2B601FC6A620D0C91D90BF67E5262AF34566EFC1_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_45(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_triggerPressed_m1837E8D245B82837E46E07C90E0F9FEC02226545_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CtriggerPressedU3Ek__BackingField_46(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadClicked_m398F59F0EB184F1463598D88F8E9BC814998C501_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadClicked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CtouchpadClickedU3Ek__BackingField_47(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadTouched_mDD7518F88B65FE2623E29A326E196206CEA06A85_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadTouched { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CtouchpadTouchedU3Ek__BackingField_48(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trackingState_mCEFD18F509035CB0645DBECF619016F84DBD462E_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_49(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_isTracked_mE82B2A82B62CDF213FBDB34815BEF7BCBF596723_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_50(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_devicePosition_m56F1712967E8040570CC17B8381F4A60E875D7F9_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_51(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceRotation_m7CA996AD51C8A4354ACD49D3E393565F03EBBB7E_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_52(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularVelocity_m1590692B6034AC2311A6E7E3E6AF2E67D2A94CBB_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_53(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAcceleration_mBADF86AD1807E68CF8F6B14C3C70404026D6F647_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_54(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularAcceleration_mECE2C130BC15718811A6B9DD8710D103CFC4B370_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_55(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_userPresence_m771670EA018ED5CA98992F225B5A8D46EAD3785F_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl userPresence { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CuserPresenceU3Ek__BackingField_49(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_trackingState_m23D4A9C067EE07856C7A4E479134DD140C4895FF_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_50(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_isTracked_m9AF4021F5074AD0DF15FC5C92FF0D95A671FCDFC_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_51(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_devicePosition_mAD72847BDB45A18C0BBF3B8FF400506391EC22F4_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_52(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceRotation_mEB447DB998A6EBECE103A22BE84495193BBDF554_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_53(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularVelocity_m544E45366F673214112CE3841FA140505FBEC5EA_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_54(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAcceleration_m30EED57043866B11773759CEC24C1CE900244375_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_55(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularAcceleration_m66BC6C304CD9B6542911BA59B3888B689C73D491_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_56(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyePosition_m76C7948890AA7C2DF39244BBFBBD29AECDE259C5_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control leftEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CleftEyePositionU3Ek__BackingField_57(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeRotation_mD678B3993D0FCB4C210BA99C22AC42F00C79070A_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl leftEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CleftEyeRotationU3Ek__BackingField_58(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularVelocity_m58A8062DEF7C997BF2C7D394CA5D6389B0D31DAD_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CleftEyeAngularVelocityU3Ek__BackingField_59(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAcceleration_m0F933CB5833C936292657808FF004BF233FF4CF3_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CleftEyeAccelerationU3Ek__BackingField_60(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularAcceleration_m2649A57029FD70E62BD81DECCDC39E14E4A2FA82_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CleftEyeAngularAccelerationU3Ek__BackingField_61(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyePosition_m4438F675E0AF84B543A1C56B231FF0813381628B_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control rightEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CrightEyePositionU3Ek__BackingField_62(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeRotation_m171A188164B8F95EC8F850C6DA5DF9778876577D_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl rightEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CrightEyeRotationU3Ek__BackingField_63(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularVelocity_m0CA022605B663B328D4835477171D69A33E043A7_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CrightEyeAngularVelocityU3Ek__BackingField_64(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAcceleration_m8D5BCE67143C560F81CE7CCB419F87870CE0F45D_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CrightEyeAccelerationU3Ek__BackingField_65(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularAcceleration_mC843D8FAA433CCF9AF32D179FE25867BAD241C22_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CrightEyeAngularAccelerationU3Ek__BackingField_66(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyePosition_m53F3EBB8BFAC99EFA4A891BBFF0C7DDC033F9F9C_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control centerEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CcenterEyePositionU3Ek__BackingField_67(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeRotation_m56EA7AE2EC553B6D05479729C53ABECFE8FBD7A6_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl centerEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CcenterEyeRotationU3Ek__BackingField_68(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularVelocity_mDD6F9EF08A916CDE0B09C11610F9476B500F2311_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CcenterEyeAngularVelocityU3Ek__BackingField_69(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAcceleration_m38F4A3595D707814CC80CB0FF19AA701E0F87D70_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CcenterEyeAccelerationU3Ek__BackingField_70(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularAcceleration_m8CAD36D9B5C6C1AD6BB3348F03FE1D4AA6CA29A3_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CcenterEyeAngularAccelerationU3Ek__BackingField_71(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMDExtended_set_back_m5BEDA0810B1E10BB3018853646D7C00E64B84D03_inline (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_72(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMDExtended_set_touchpad_mB9AEFFE8E5CBAE8A2F8161522443C01481F8FBB0_inline (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_73(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_back_m491E697DCD37A9B95DC5D1C73F7068D78E334AEF_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_39(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_start_m46A6FD1D22D5D6DF333F19B51A85CC8D81AD2683_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CstartU3Ek__BackingField_40(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_touchpad_m7D04E201084045328F04345076B920B4EABA52AD_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_41(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstick_m6298BE7A8953E351BE124A7EB8955F3B0784D226_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control thumbstick { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = ___value0;
		__this->set_U3CthumbstickU3Ek__BackingField_43(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_trigger_m25340AF73E5E533C59310FCCF36CEABE80414347_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CtriggerU3Ek__BackingField_44(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerTouched_mC1CA0DD733E35B4B0FDFADEFA839017F88D5C009_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl triggerTouched { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CtriggerTouchedU3Ek__BackingField_53(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_grip_m7365F9B548F735B7E1C4EEA076A2BEA956AE1D81_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CgripU3Ek__BackingField_45(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryButton_m30E15AB1A3A510D364FCDD02DB65158B7E6ED9E2_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryButton { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CprimaryButtonU3Ek__BackingField_46(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryButton_m1D457887B59C4E3084B56424F2BC00806EE878DA_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryButton { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CsecondaryButtonU3Ek__BackingField_47(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_gripPressed_m2821E882B28BB4E241FDC113354F85D2632BD6F0_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CgripPressedU3Ek__BackingField_48(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_start_mAF7B100AAE7B4C92E132B9398B827E53D60058FF_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CstartU3Ek__BackingField_49(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickClicked_m95075EE8FFB21658C01811C12629EF7B9DD91702_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickClicked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CthumbstickClickedU3Ek__BackingField_50(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryTouched_mB4603A8EE60563935E3EFD1B0256EC39BE5D16EA_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryTouched { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CprimaryTouchedU3Ek__BackingField_51(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryTouched_m808610BF02C6AF39171429F2EF8A4C5EFD1EE7EF_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryTouched { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CsecondaryTouchedU3Ek__BackingField_52(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickTouched_m196F8D8CEE80B395CB8A0F05B1F02357E269786C_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickTouched { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CthumbstickTouchedU3Ek__BackingField_55(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerPressed_m1BB5F09869F5B4C35ADC99E447B23248ACEA6786_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CtriggerPressedU3Ek__BackingField_54(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_trackingState_m1DF9A55440417576A269AC9671D74BD289B15D10_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_56(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_isTracked_m9D7697DE4D1154DF2977F119AC2564EEE2F43653_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_57(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_devicePosition_mD3B8942C90778C8C5956467CC132B2A63CC1C545_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_58(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceRotation_m4D4259B5CAA20556723ADFC6515EB18830497369_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_59(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceVelocity_m0873827197CDB80237BE605E5A841E856B867E45_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceVelocityU3Ek__BackingField_60(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularVelocity_mD18F809B1657E53F0B7985F57EAB750D4D4EBE7E_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_61(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAcceleration_mAB43F86D03C0767DC5EC4E3FF605D419DCD54AA9_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_62(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularAcceleration_m2AFA5EA372A02AD28A4DA15CD0062AA63067ABE4_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_63(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_trackingState_m1D72C4867593A561DC929C7105EF9F4C4AFE1B29_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_39(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_isTracked_m2D5DCD8E29E2939BF8BDDFF73C6620E98A8F5426_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_40(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_devicePosition_m9AF2BA44440BB6FF4941F2C7B26102B79DEDBA13_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_41(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_deviceRotation_m8F67A11A110C452455016E5E70C7E297B2513D41_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_42(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
