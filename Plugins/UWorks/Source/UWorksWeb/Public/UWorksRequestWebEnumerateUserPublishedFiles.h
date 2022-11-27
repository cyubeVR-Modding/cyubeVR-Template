#pragma once
#include "CoreMinimal.h"
#include "EnumerateUserPublishedFilesMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksSteamID.h"
#include "EnumerateUserPublishedFilesDelegateDelegate.h"
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

