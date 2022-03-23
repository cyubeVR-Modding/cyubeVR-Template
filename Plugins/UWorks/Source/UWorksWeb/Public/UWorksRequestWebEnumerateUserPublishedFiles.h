#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "EnumerateUserPublishedFilesDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "EnumerateUserPublishedFilesMinimalDelegateDelegate.h"
#include "UWorksRequestWebEnumerateUserPublishedFiles.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebEnumerateUserPublishedFiles : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEnumerateUserPublishedFilesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEnumerateUserPublishedFilesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebEnumerateUserPublishedFiles();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

