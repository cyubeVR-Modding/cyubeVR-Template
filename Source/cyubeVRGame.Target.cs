using UnrealBuildTool;

public class cyubeVRGameTarget : TargetRules {
	public cyubeVRGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"cyubeVR",
		});
	}
}
