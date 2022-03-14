#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetNumberOfCurrentPlayersDelegateDelegate.h"
#include "CoreGetNumberOfCurrentPlayersNode.generated.h"

class UCoreGetNumberOfCurrentPlayersNode;

UCLASS()
class UWORKSCORE_API UCoreGetNumberOfCurrentPlayersNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetNumberOfCurrentPlayersDelegate Completed;
    
    UCoreGetNumberOfCurrentPlayersNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, bool bSuccess, int32 Players);
    
    UFUNCTION(BlueprintCallable)
    static UCoreGetNumberOfCurrentPlayersNode* GetNumberOfCurrentPlayersNode();
    
};

