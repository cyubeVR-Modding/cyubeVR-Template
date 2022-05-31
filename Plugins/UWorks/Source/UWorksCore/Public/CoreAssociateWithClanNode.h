#pragma once
#include "CoreMinimal.h"
#include "AssociateWithClanDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "CoreAssociateWithClanNode.generated.h"

class UCoreAssociateWithClanNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreAssociateWithClanNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAssociateWithClanDelegate Completed;
    
    UCoreAssociateWithClanNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    
    UFUNCTION(BlueprintCallable)
    static UCoreAssociateWithClanNode* AssociateWithClanNode(FUWorksSteamID SteamIDClan);
    
};

