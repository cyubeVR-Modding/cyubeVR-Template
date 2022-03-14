#pragma once
#include "CoreMinimal.h"
#include "CheckAppOwnershipDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCheckAppOwnershipDelegate, bool, bSuccessful, const FString&, Content);

