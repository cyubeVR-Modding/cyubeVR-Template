using UnrealBuildTool;

public class OnlineSubsystemUWorks : ModuleRules {
    public OnlineSubsystemUWorks(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioMixer",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
        });
    }
}
