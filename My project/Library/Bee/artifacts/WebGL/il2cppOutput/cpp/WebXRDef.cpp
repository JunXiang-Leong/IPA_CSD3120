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

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<WebXR.WebXRHandData>
struct Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B;
// System.Collections.Generic.List`1<Zinnia.Action.BooleanAction>
struct List_1_t12235B29D25E521224D1B3E7E775EBD17D5BFA71;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// WebXR.WebXRControllerButton[]
struct WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75;
// Zinnia.Action.BooleanAction
struct BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WebGrip
struct WebGrip_t9FACD6407E941943C54D1032FC0392490FC74159;
// WebThumb
struct WebThumb_tA2F5E38D604FD35C0CB9D3C64CE1C153964D04A9;
// WebXR.WebXRController
struct WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00;
// Zinnia.Action.Action/BooleanUnityEvent
struct BooleanUnityEvent_t88DFD031AB6B49F4F56CEE582BEBD380DBA655E8;
// Zinnia.Action.BooleanAction/UnityEvent
struct UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB0EC39A13A1C63BFC6B2768F05625572461E3657 
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Zinnia.Action.Action
struct Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Zinnia.Action.Action/BooleanUnityEvent Zinnia.Action.Action::ActivationStateChanged
	BooleanUnityEvent_t88DFD031AB6B49F4F56CEE582BEBD380DBA655E8* ___ActivationStateChanged_4;
	// System.Boolean Zinnia.Action.Action::isActivated
	bool ___isActivated_5;
};

// WebXR.WebXRController
struct WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<System.Boolean> WebXR.WebXRController::OnControllerActive
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnControllerActive_4;
	// System.Action`1<System.Boolean> WebXR.WebXRController::OnHandActive
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnHandActive_5;
	// System.Action`1<WebXR.WebXRHandData> WebXR.WebXRController::OnHandUpdate
	Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B* ___OnHandUpdate_6;
	// System.Action`1<System.Boolean> WebXR.WebXRController::OnAlwaysUseGripChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnAlwaysUseGripChanged_7;
	// WebXR.WebXRControllerHand WebXR.WebXRController::hand
	int32_t ___hand_8;
	// System.Single WebXR.WebXRController::trigger
	float ___trigger_9;
	// System.Boolean WebXR.WebXRController::triggerTouched
	bool ___triggerTouched_10;
	// System.Single WebXR.WebXRController::squeeze
	float ___squeeze_11;
	// System.Boolean WebXR.WebXRController::squeezeTouched
	bool ___squeezeTouched_12;
	// System.Single WebXR.WebXRController::thumbstick
	float ___thumbstick_13;
	// System.Boolean WebXR.WebXRController::thumbstickTouched
	bool ___thumbstickTouched_14;
	// System.Single WebXR.WebXRController::thumbstickX
	float ___thumbstickX_15;
	// System.Single WebXR.WebXRController::thumbstickY
	float ___thumbstickY_16;
	// System.Single WebXR.WebXRController::touchpad
	float ___touchpad_17;
	// System.Boolean WebXR.WebXRController::touchpadTouched
	bool ___touchpadTouched_18;
	// System.Single WebXR.WebXRController::touchpadX
	float ___touchpadX_19;
	// System.Single WebXR.WebXRController::touchpadY
	float ___touchpadY_20;
	// System.Single WebXR.WebXRController::buttonA
	float ___buttonA_21;
	// System.Boolean WebXR.WebXRController::buttonATouched
	bool ___buttonATouched_22;
	// System.Single WebXR.WebXRController::buttonB
	float ___buttonB_23;
	// System.Boolean WebXR.WebXRController::buttonBTouched
	bool ___buttonBTouched_24;
	// WebXR.WebXRControllerButton[] WebXR.WebXRController::buttons
	WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___buttons_25;
	// System.Boolean WebXR.WebXRController::controllerActive
	bool ___controllerActive_26;
	// System.Boolean WebXR.WebXRController::handActive
	bool ___handActive_27;
	// System.String[] WebXR.WebXRController::profiles
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___profiles_28;
	// System.Int32 WebXR.WebXRController::oculusLinkBugTest
	int32_t ___oculusLinkBugTest_29;
	// UnityEngine.Quaternion WebXR.WebXRController::oculusOffsetRay
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___oculusOffsetRay_30;
	// UnityEngine.Quaternion WebXR.WebXRController::oculusOffsetGrip
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___oculusOffsetGrip_31;
	// System.Boolean WebXR.WebXRController::alwaysUseGrip
	bool ___alwaysUseGrip_32;
	// UnityEngine.Vector3 WebXR.WebXRController::<gripPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CgripPositionU3Ek__BackingField_33;
	// UnityEngine.Quaternion WebXR.WebXRController::<gripRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CgripRotationU3Ek__BackingField_34;
};

// Zinnia.Action.Action`3<Zinnia.Action.BooleanAction,System.Boolean,Zinnia.Action.BooleanAction/UnityEvent>
struct Action_3_tAB0B844DB62E1DB5EABF32957B0CBE95441E7344  : public Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70
{
	// TValue Zinnia.Action.Action`3::initialValue
	bool ___initialValue_6;
	// TValue Zinnia.Action.Action`3::defaultValue
	bool ___defaultValue_7;
	// System.Collections.Generic.List`1<TSelf> Zinnia.Action.Action`3::sources
	List_1_t12235B29D25E521224D1B3E7E775EBD17D5BFA71* ___sources_8;
	// TEvent Zinnia.Action.Action`3::Activated
	UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776* ___Activated_9;
	// TEvent Zinnia.Action.Action`3::ValueChanged
	UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776* ___ValueChanged_10;
	// TEvent Zinnia.Action.Action`3::ValueUnchanged
	UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776* ___ValueUnchanged_11;
	// TEvent Zinnia.Action.Action`3::Deactivated
	UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776* ___Deactivated_12;
	// TValue Zinnia.Action.Action`3::value
	bool ___value_13;
};

// Zinnia.Action.BooleanAction
struct BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E  : public Action_3_tAB0B844DB62E1DB5EABF32957B0CBE95441E7344
{
};

// WebGrip
struct WebGrip_t9FACD6407E941943C54D1032FC0392490FC74159  : public BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E
{
	// WebXR.WebXRController WebGrip::controller
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* ___controller_14;
};

// WebThumb
struct WebThumb_tA2F5E38D604FD35C0CB9D3C64CE1C153964D04A9  : public BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E
{
	// WebXR.WebXRController WebThumb::controller
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* ___controller_14;
};

// <Module>

// <Module>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Void

// System.Void

// WebXR.WebXRController

// WebXR.WebXRController

// Zinnia.Action.Action`3<Zinnia.Action.BooleanAction,System.Boolean,Zinnia.Action.BooleanAction/UnityEvent>

// Zinnia.Action.Action`3<Zinnia.Action.BooleanAction,System.Boolean,Zinnia.Action.BooleanAction/UnityEvent>

// Zinnia.Action.BooleanAction

// Zinnia.Action.BooleanAction

// WebGrip

// WebGrip

// WebThumb

// WebThumb
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Boolean WebXR.WebXRController::GetButton(WebXR.WebXRController/ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButton_m19BA8616C36DCCDF42DF9193599757361A82DA51 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___0_buttonType, const RuntimeMethod* method) ;
// System.Void Zinnia.Action.BooleanAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanAction__ctor_m73843E146B1DA54AA269FB660C6278B9CE850D74 (BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* __this, const RuntimeMethod* method) ;
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
// System.Void WebGrip::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGrip_Start_m3C4083FB6B3D6C114C574D5BBE5A53F8A8B7DA29 (WebGrip_t9FACD6407E941943C54D1032FC0392490FC74159* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WebGrip::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGrip_Update_mF903305DB905B16F99E018A81C93EAB8A6285601 (WebGrip_t9FACD6407E941943C54D1032FC0392490FC74159* __this, const RuntimeMethod* method) 
{
	{
		// Receive(controller.GetButton(WebXRController.ButtonTypes.Grip));
		WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* L_0 = __this->___controller_14;
		bool L_1;
		L_1 = WebXRController_GetButton_m19BA8616C36DCCDF42DF9193599757361A82DA51(L_0, 1, NULL);
		VirtualActionInvoker1< bool >::Invoke(15 /* System.Void Zinnia.Action.Action`3<Zinnia.Action.BooleanAction,System.Boolean,Zinnia.Action.BooleanAction/UnityEvent>::Receive(TValue) */, __this, L_1);
		// }
		return;
	}
}
// System.Void WebGrip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGrip__ctor_mBA9BD41785C45103D5BAEA4D692AA15CA8936C69 (WebGrip_t9FACD6407E941943C54D1032FC0392490FC74159* __this, const RuntimeMethod* method) 
{
	{
		BooleanAction__ctor_m73843E146B1DA54AA269FB660C6278B9CE850D74(__this, NULL);
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
// System.Void WebThumb::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebThumb_Update_m1E67CB36360273650B4D868CFE9FEE5A5F822E70 (WebThumb_tA2F5E38D604FD35C0CB9D3C64CE1C153964D04A9* __this, const RuntimeMethod* method) 
{
	{
		// Receive(controller.GetButton(WebXRController.ButtonTypes.Thumbstick));
		WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* L_0 = __this->___controller_14;
		bool L_1;
		L_1 = WebXRController_GetButton_m19BA8616C36DCCDF42DF9193599757361A82DA51(L_0, 2, NULL);
		VirtualActionInvoker1< bool >::Invoke(15 /* System.Void Zinnia.Action.Action`3<Zinnia.Action.BooleanAction,System.Boolean,Zinnia.Action.BooleanAction/UnityEvent>::Receive(TValue) */, __this, L_1);
		// }
		return;
	}
}
// System.Void WebThumb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebThumb__ctor_m631AFB1C1F17E8B9A3914EF833755CE748B39445 (WebThumb_tA2F5E38D604FD35C0CB9D3C64CE1C153964D04A9* __this, const RuntimeMethod* method) 
{
	{
		BooleanAction__ctor_m73843E146B1DA54AA269FB660C6278B9CE850D74(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
