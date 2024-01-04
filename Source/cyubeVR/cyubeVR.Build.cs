using UnrealBuildTool;

public class cyubeVR : ModuleRules {
    public cyubeVR(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "HeadMountedDisplay",
            "InputCore",
            "Niagara",
            "ProceduralMeshComponent",
            "RuntimeMeshComponent",
            "UMG",
        });
    }
}
