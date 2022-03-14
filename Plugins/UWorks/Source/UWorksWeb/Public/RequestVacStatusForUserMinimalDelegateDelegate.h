#pragma once
#include "CoreMinimal.h"
#include "RequestVacStatusForUserMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRequestVacStatusForUserMinimalDelegate, bool, bSuccessful, const FString&, Content);

