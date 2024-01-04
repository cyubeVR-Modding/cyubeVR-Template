#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PlayersUpdateDelegateDelegate.h"
#include "UWorksPlayerInfo.h"
#include "CorePlayersNode.generated.h"

class UCorePlayersNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCorePlayersNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersUpdateDelegate Updated;
    
    UCorePlayersNode();

    UFUNCTION(BlueprintCallable)
    static UCorePlayersNode* PlayersNode(const FString& IP, int32 Port, int32 MaxUpdates);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestUpdated(bool bSuccessful, FUWorksPlayerInfo Player);
    
};

