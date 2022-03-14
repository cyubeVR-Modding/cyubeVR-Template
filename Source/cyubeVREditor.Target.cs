using UnrealBuildTool;

public class cyubeVREditorTarget : TargetRules {
	public cyubeVREditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"cyubeVR",
		});
	}
}
