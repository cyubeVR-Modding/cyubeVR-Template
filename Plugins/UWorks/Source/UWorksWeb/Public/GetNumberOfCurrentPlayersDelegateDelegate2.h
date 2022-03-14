#pragma once
#include "CoreMinimal.h"
#include "GetNumberOfCurrentPlayersDelegateDelegate2.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetNumberOfCurrentPlayersDelegate, bool, bSuccessful, const FString&, Content);

