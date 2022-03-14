#pragma once
#include "CoreMinimal.h"
#include "QueryFilesMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FQueryFilesMinimalDelegate, bool, bSuccessful, const FString&, Content);

