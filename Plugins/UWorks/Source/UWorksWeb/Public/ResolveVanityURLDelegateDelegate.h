#pragma once
#include "CoreMinimal.h"
#include "ResolveVanityURLDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResolveVanityURLDelegate, bool, bSuccessful, const FString&, Content);

