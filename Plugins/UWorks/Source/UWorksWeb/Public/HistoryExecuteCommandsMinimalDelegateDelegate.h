#pragma once
#include "CoreMinimal.h"
#include "HistoryExecuteCommandsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FHistoryExecuteCommandsMinimalDelegate, bool, bSuccessful, const FString&, Content);

