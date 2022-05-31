#pragma once
#include "CoreMinimal.h"
#include "StartAssetTransactionDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "StartAssetTransactionNode.generated.h"

class UStartAssetTransactionNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UStartAssetTransactionNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartAssetTransactionDelegate Completed;
    
    UStartAssetTransactionNode();
    UFUNCTION(BlueprintCallable)
    static UStartAssetTransactionNode* StartAssetTransactionNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& AssetID0, int32 AssetQuantity0, const FString& Currency, const FString& Language, const FString& IPAddress, const FString& Referrer, bool bClientAuth);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

