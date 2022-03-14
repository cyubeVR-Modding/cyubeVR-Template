#pragma once
#include "CoreMinimal.h"
#include "SetDeveloperMetadataMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSetDeveloperMetadataMinimalDelegate, bool, bSuccessful, const FString&, Content);

