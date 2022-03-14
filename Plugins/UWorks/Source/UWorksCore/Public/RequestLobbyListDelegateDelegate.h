#pragma once
#include "CoreMinimal.h"
#include "RequestLobbyListDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRequestLobbyListDelegate, bool, bSuccessful, int32, LobbiesMatching);

