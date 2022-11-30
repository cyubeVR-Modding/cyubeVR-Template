#pragma once
#include "CoreMinimal.h"
#include "RemovePlayerGameBanDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "RemovePlayerGameBanNode.generated.h"

class URemovePlayerGameBanNode;

UCLASS(Blueprintable)
class UWORKSWEB_API URemovePlayerGameBanNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemovePlayerGameBanDelegate Completed;
    
    URemovePlayerGameBanNode();
    UFUNCTION(BlueprintCallable)
    static URemovePlayerGameBanNode* RemovePlayerGameBanNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

