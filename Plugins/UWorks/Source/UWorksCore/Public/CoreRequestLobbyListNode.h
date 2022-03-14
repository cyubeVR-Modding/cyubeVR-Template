#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RequestLobbyListDelegateDelegate.h"
#include "CoreRequestLobbyListNode.generated.h"

class UCoreRequestLobbyListNode;

UCLASS()
class UWORKSCORE_API UCoreRequestLobbyListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestLobbyListDelegate Completed;
    
    UCoreRequestLobbyListNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestLobbyListNode* RequestLobbyListNode();
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, int32 LobbiesMatching);
    
};

