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
	//Total: 75 classes
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

	//5. GUITexture
	void RegisterClass_GUITexture();
	RegisterClass_GUITexture();

	//6. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//7. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//8. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//9. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//10. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//11. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//12. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//13. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//14. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//15. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//16. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//17. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//18. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//19. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//20. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//21. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//22. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//23. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//24. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//25. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//26. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//27. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//28. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//29. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//30. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//31. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//32. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//33. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//34. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//35. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//36. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//37. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//38. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//39. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//40. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//41. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//42. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//43. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//44. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//45. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//46. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//47. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//48. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//49. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//50. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//51. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//52. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//53. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//54. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//55. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//56. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//57. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//58. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//59. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//60. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//61. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//62. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//63. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//64. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//65. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//66. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//67. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//68. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//69. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//70. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//71. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//72. NetworkManager
	//Skipping NetworkManager

	//73. MasterServerInterface
	//Skipping MasterServerInterface

	//74. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
