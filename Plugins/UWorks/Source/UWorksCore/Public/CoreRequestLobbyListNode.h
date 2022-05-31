#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RequestLobbyListDelegateDelegate.h"
#include "CoreRequestLobbyListNode.generated.h"

class UCoreRequestLobbyListNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreRequestLobbyListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestLobbyListDelegate Completed;
    
    UCoreRequestLobbyListNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestLobbyListNode* RequestLobbyListNode();
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, int32 LobbiesMatching);
    
};

