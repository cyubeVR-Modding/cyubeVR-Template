#pragma once
#include "CoreMinimal.h"
#include "RankedByPublicationOrderMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRankedByPublicationOrderMinimalDelegate, bool, bSuccessful, const FString&, Content);

