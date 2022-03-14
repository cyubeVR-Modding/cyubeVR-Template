#pragma once
#include "CoreMinimal.h"
#include "HistoryExecuteCommandsDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "HistoryExecuteCommandsNode.generated.h"

class UHistoryExecuteCommandsNode;

UCLASS()
class UWORKSWEB_API UHistoryExecuteCommandsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHistoryExecuteCommandsDelegate Completed;
    
    UHistoryExecuteCommandsNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UHistoryExecuteCommandsNode* HistoryExecuteCommandsNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& ContextID, const FString& ActorId);
    
};

