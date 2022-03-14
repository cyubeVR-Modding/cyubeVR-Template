#pragma once
#include "CoreMinimal.h"
#include "GrantPackageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGrantPackageDelegate, bool, bSuccessful, const FString&, Content);

