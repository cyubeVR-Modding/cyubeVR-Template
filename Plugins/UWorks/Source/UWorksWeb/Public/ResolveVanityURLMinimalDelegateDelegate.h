#pragma once
#include "CoreMinimal.h"
#include "ResolveVanityURLMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FResolveVanityURLMinimalDelegate, bool, bSuccessful, const FString&, Content);

