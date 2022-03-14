#pragma once
#include "CoreMinimal.h"
#include "GetSchemaForGameMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetSchemaForGameMinimalDelegate, bool, bSuccessful, const FString&, Content);

