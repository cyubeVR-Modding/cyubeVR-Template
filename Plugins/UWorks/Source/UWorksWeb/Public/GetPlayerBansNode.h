#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetPlayerBansDelegateDelegate.h"
#include "GetPlayerBansNode.generated.h"

class UGetPlayerBansNode;

UCLASS()
class UWORKSWEB_API UGetPlayerBansNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPlayerBansDelegate Completed;
    
    UGetPlayerBansNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetPlayerBansNode* GetPlayerBansNode(const FString& Key, const FString& SteamIDs);
    
};

