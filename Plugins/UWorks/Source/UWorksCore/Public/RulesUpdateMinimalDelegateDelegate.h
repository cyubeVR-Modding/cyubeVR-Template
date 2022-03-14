#pragma once
#include "CoreMinimal.h"
#include "UWorksRuleInfo.h"
#include "RulesUpdateMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRulesUpdateMinimalDelegate, bool, bSuccessful, FUWorksRuleInfo, Rule);

