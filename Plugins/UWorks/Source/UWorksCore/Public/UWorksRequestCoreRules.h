#pragma once
#include "CoreMinimal.h"
#include "RulesUpdateMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "RulesDelegateDelegate.h"
#include "UWorksRuleInfo.h"
#include "RulesUpdateDelegateDelegate.h"
#include "RulesMinimalDelegateDelegate.h"
#include "UWorksRequestCoreRules.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreRules : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRulesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRulesUpdateDelegate OnRequestUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRulesMinimalDelegate OnRequestCompletedMinimal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRulesUpdateMinimalDelegate OnRequestUpdatedMinimal;
    
    UUWorksRequestCoreRules();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& IP, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksRuleInfo& UpdatedRule, TArray<FUWorksRuleInfo>& Rules);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

