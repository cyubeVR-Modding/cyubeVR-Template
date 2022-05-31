#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "FileReadAsyncDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FFileReadAsyncDelegate, bool, bSuccessful, EUWorksResult, Result, int32, Offset, const TArray<uint8>&, Buffer);

