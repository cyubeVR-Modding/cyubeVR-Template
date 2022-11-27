#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceCore.h"
#include "ScreenshotRequestedDelegateDelegate.h"
#include "ScreenshotReadyDelegateDelegate.h"
#include "UWorksScreenshotHandle.h"
#include "UWorksSteamID.h"
#include "UWorksPublishedFileID.h"
#include "EUWorksVRScreenshotType.h"
#include "UWorksInterfaceCoreScreenshots.generated.h"

class UTexture2D;
class UUWorksInterfaceCoreScreenshots;

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksInterfaceCoreScreenshots : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScreenshotReadyDelegate ScreenshotReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScreenshotRequestedDelegate ScreenshotRequested;
    
    UUWorksInterfaceCoreScreenshots();
    UFUNCTION(BlueprintCallable)
    FUWorksScreenshotHandle WriteScreenshot(UTexture2D* Image);
    
    UFUNCTION(BlueprintCallable)
    void TriggerScreenshot();
    
    UFUNCTION(BlueprintCallable)
    bool TagUser(FUWorksScreenshotHandle Screenshot, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    bool TagPublishedFile(FUWorksScreenshotHandle Screenshot, FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    bool SetLocation(FUWorksScreenshotHandle Screenshot, const FString& Location);
    
    UFUNCTION(BlueprintCallable)
    bool IsScreenshotsHooked();
    
    UFUNCTION(BlueprintCallable)
    void HookScreenshots(bool bHook);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUWorksInterfaceCoreScreenshots* GetScreenshots();
    
    UFUNCTION(BlueprintCallable)
    FUWorksScreenshotHandle AddVRScreenshotToLibrary(EUWorksVRScreenshotType Type, const FString& Filename, const FString& VRFileName);
    
    UFUNCTION(BlueprintCallable)
    FUWorksScreenshotHandle AddScreenshotToLibrary(const FString& FileMame, const FString& ThumbnailFileName, int32 Width, int32 Height);
    
};

