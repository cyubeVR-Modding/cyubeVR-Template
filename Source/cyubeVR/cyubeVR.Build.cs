using UnrealBuildTool;

public class cyubeVR : ModuleRules {
    public cyubeVR(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "HeadMountedDisplay",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "ProceduralMeshComponent",
            "PropertyPath",
            "RuntimeMeshComponent",
            "Slate",
            "SlateCore",
            "UMG",
            "UWorks",
            "UWorksCore",
        });
    }
}
