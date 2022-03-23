#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AssociateWithClanDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "CoreAssociateWithClanNode.generated.h"

class UCoreAssociateWithClanNode;

UCLASS()
class UWORKSCORE_API UCoreAssociateWithClanNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAssociateWithClanDelegate Completed;
    
    UCoreAssociateWithClanNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    
    UFUNCTION(BlueprintCallable)
    static UCoreAssociateWithClanNode* AssociateWithClanNode(FUWorksSteamID SteamIDClan);
    
};

