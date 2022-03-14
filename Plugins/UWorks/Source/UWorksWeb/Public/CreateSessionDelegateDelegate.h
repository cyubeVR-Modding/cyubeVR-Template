#pragma once
#include "CoreMinimal.h"
#include "CreateSessionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCreateSessionDelegate, bool, bSuccessful, const FString&, Content);

