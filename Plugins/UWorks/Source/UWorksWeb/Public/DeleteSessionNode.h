#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DeleteSessionDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "DeleteSessionNode.generated.h"

class UDeleteSessionNode;

UCLASS()
class UWORKSWEB_API UDeleteSessionNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeleteSessionDelegate Completed;
    
    UDeleteSessionNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UDeleteSessionNode* DeleteSessionNode(const FString& Key, const FString& SessionId, int32 AppID, FUWorksSteamID SteamID);
    
};

