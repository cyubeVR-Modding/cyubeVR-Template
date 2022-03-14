#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "EndSecureMultiplayerSessionDelegateDelegate.h"
#include "EndSecureMultiplayerSessionNode.generated.h"

class UEndSecureMultiplayerSessionNode;

UCLASS()
class UWORKSWEB_API UEndSecureMultiplayerSessionNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEndSecureMultiplayerSessionDelegate Completed;
    
    UEndSecureMultiplayerSessionNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UEndSecureMultiplayerSessionNode* EndSecureMultiplayerSessionNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& SessionId);
    
};

