#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "GetPublisherAppOwnershipDelegateDelegate.h"
#include "GetPublisherAppOwnershipNode.generated.h"

class UGetPublisherAppOwnershipNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetPublisherAppOwnershipNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPublisherAppOwnershipDelegate Completed;
    
    UGetPublisherAppOwnershipNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetPublisherAppOwnershipNode* GetPublisherAppOwnershipNode(const FString& Key, FUWorksSteamID SteamID);
    
};

