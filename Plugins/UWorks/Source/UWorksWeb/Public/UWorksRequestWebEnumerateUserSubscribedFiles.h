#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "EnumerateUserSubscribedFilesDelegateDelegate.h"
#include "EnumerateUserSubscribedFilesMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebEnumerateUserSubscribedFiles.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebEnumerateUserSubscribedFiles : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEnumerateUserSubscribedFilesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEnumerateUserSubscribedFilesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebEnumerateUserSubscribedFiles();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 ListType);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

