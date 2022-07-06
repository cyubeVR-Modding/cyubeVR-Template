#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetUserHistoryDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GetUserHistoryNode.generated.h"

class UGetUserHistoryNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetUserHistoryNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUserHistoryDelegate Completed;
    
    UGetUserHistoryNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetUserHistoryNode* GetUserHistoryNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& ContextID, int32 StartTime, int32 EndTime);
    
};

