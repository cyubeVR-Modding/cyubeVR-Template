#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "SubscribePublishedFileDelegateDelegate.h"
#include "SubscribePublishedFileMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebSubscribePublishedFile.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebSubscribePublishedFile : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubscribePublishedFileDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubscribePublishedFileMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSubscribePublishedFile();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

