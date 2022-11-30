#pragma once
#include "CoreMinimal.h"
#include "GetPublisherAppOwnershipDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetPublisherAppOwnershipMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebGetPublisherAppOwnership.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetPublisherAppOwnership : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPublisherAppOwnershipDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPublisherAppOwnershipMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPublisherAppOwnership();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

