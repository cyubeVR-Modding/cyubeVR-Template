#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "EnumerateUserPublishedFilesDelegateDelegate.h"
#include "EnumerateUserPublishedFilesMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebEnumerateUserPublishedFiles.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebEnumerateUserPublishedFiles : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnumerateUserPublishedFilesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnumerateUserPublishedFilesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebEnumerateUserPublishedFiles();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

