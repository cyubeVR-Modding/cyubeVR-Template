#pragma once
#include "CoreMinimal.h"
#include "UWorksRuleInfo.h"
#include "RulesDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRulesDelegate, const TArray<FUWorksRuleInfo>&, Rules);

