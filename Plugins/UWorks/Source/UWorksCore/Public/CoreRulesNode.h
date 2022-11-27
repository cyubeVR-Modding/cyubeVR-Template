#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksRuleInfo.h"
#include "RulesUpdateDelegateDelegate.h"
#include "CoreRulesNode.generated.h"

class UCoreRulesNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreRulesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRulesUpdateDelegate Updated;
    
    UCoreRulesNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRulesNode* RulesNode(const FString& IP, int32 Port, int32 MaxUpdates);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestUpdated(bool bSuccessful, FUWorksRuleInfo Rule);
    
};

