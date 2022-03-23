#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FinalizeAssetTransactionDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "FinalizeAssetTransactionNode.generated.h"

class UFinalizeAssetTransactionNode;

UCLASS()
class UWORKSWEB_API UFinalizeAssetTransactionNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFinalizeAssetTransactionDelegate Completed;
    
    UFinalizeAssetTransactionNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UFinalizeAssetTransactionNode* FinalizeAssetTransactionNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& TxnID, const FString& Language);
    
};

