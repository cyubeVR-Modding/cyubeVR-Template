#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "FileReadAsyncMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_FourParams(FFileReadAsyncMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, int32, Offset, const TArray<uint8>&, Buffer);

