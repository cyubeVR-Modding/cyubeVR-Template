#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BPVRControllerProfile.h"
#include "UObject/NoExportTypes.h"
#include "VRGlobalSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, config = Engine)
class UVRGlobalSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCCDPasses;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OneEuroMinCutoff;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OneEuroCutoffSlope;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OneEuroDeltaCutoff;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBPVRControllerProfile> ControllerProfiles;
    
    UVRGlobalSettings();
    UFUNCTION(BlueprintCallable)
    static void SaveControllerProfiles();
    
    UFUNCTION(BlueprintCallable)
    static void OverwriteControllerProfile(UPARAM(Ref) FBPVRControllerProfile& OverwritingProfile, bool bSaveOutToConfig);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadControllerProfileByName(FName ControllerProfileName, bool bSetAsCurrentProfile);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadControllerProfile(const FBPVRControllerProfile& ControllerProfile, bool bSetAsCurrentProfile);
    
    UFUNCTION(BlueprintCallable)
    static FName GetCurrentProfileName(bool& bHadLoadedProfile);
    
    UFUNCTION(BlueprintCallable)
    static FBPVRControllerProfile GetCurrentProfile(bool& bHadLoadedProfile);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FBPVRControllerProfile> GetControllerProfiles();
    
    UFUNCTION(BlueprintCallable)
    static bool GetControllerProfile(FName ControllerProfileName, FBPVRControllerProfile& OutProfile);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteControllerProfile(FName ControllerProfileName, bool bSaveOutToConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform AdjustTransformByGivenControllerProfile(UPARAM(Ref) FBPVRControllerProfile& ControllerProfile, const FTransform& SocketTransform, bool bIsRightHand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform AdjustTransformByControllerProfile(FName OptionalControllerProfileName, const FTransform& SocketTransform, bool bIsRightHand);
    
    UFUNCTION(BlueprintCallable)
    static void AddControllerProfile(UPARAM(Ref) FBPVRControllerProfile& NewProfile, bool bSaveOutToConfig);
    
};

