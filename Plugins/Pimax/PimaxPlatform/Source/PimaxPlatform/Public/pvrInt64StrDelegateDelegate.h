#pragma once
#include "CoreMinimal.h"
#include "pvrInt64StrDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FpvrInt64StrDelegate, int64, pvrint64, const FString&, pvrStr);

