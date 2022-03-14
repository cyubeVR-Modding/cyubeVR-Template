#pragma once
#include "CoreMinimal.h"
#include "GrantPackageMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGrantPackageMinimalDelegate, bool, bSuccessful, const FString&, Content);

