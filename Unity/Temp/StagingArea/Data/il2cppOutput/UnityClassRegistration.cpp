struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 69 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//6. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//7. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//8. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//9. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//10. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//11. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//12. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//13. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//14. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//15. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//16. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//17. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//18. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//19. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//20. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//21. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//22. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//23. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//24. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//25. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//26. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//27. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//28. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//29. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//30. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//31. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//32. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//33. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//34. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//35. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//36. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//37. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//38. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//39. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//40. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//41. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//42. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//43. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//44. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//45. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//46. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//47. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//48. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//49. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//50. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//51. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//52. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//53. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//54. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//55. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//56. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//57. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//58. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//59. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//60. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//61. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//62. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//63. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//64. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//65. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//66. NetworkManager
	//Skipping NetworkManager

	//67. MasterServerInterface
	//Skipping MasterServerInterface

	//68. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
