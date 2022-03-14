#pragma once
#include "CoreMinimal.h"
#include "GetUserGroupListMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetUserGroupListMinimalDelegate, bool, bSuccessful, const FString&, Content);

