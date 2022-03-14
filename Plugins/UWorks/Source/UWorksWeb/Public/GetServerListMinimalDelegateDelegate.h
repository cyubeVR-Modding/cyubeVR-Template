#pragma once
#include "CoreMinimal.h"
#include "GetServerListMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetServerListMinimalDelegate, bool, bSuccessful, const FString&, Content);

