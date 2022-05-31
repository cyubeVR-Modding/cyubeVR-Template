#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RequestPlayerGameBanDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "RequestPlayerGameBanNode.generated.h"

class URequestPlayerGameBanNode;

UCLASS(Blueprintable)
class UWORKSWEB_API URequestPlayerGameBanNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestPlayerGameBanDelegate Completed;
    
    URequestPlayerGameBanNode();
    UFUNCTION(BlueprintCallable)
    static URequestPlayerGameBanNode* RequestPlayerGameBanNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID ReportID, const FString& CheatDescription, int32 Duration, bool bDelayBan);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

