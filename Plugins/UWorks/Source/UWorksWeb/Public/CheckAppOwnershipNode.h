#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CheckAppOwnershipDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "CheckAppOwnershipNode.generated.h"

class UCheckAppOwnershipNode;

UCLASS()
class UWORKSWEB_API UCheckAppOwnershipNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCheckAppOwnershipDelegate Completed;
    
    UCheckAppOwnershipNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UCheckAppOwnershipNode* CheckAppOwnershipNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
};

