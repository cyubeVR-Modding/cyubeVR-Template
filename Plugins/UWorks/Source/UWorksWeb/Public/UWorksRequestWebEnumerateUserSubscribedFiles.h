#pragma once
#include "CoreMinimal.h"
#include "EnumerateUserSubscribedFilesDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "EnumerateUserSubscribedFilesMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebEnumerateUserSubscribedFiles.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebEnumerateUserSubscribedFiles : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnumerateUserSubscribedFilesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnumerateUserSubscribedFilesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebEnumerateUserSubscribedFiles();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 ListType);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

