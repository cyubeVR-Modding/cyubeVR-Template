#pragma once
#include "CoreMinimal.h"
#include "RefreshCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRefreshCompleteDelegate, const FString&, AddressSteam, const FString&, AddressExternal, const FString&, AddressInternal, int32, Port);

