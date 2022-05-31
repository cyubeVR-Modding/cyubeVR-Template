#pragma once
#include "CoreMinimal.h"
#include "EUWorksAuthSessionResponse.h"
#include "UWorksSteamID.h"
#include "GSValidateAuthTicketResponseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGSValidateAuthTicketResponseDelegate, FUWorksSteamID, SteamID, EUWorksAuthSessionResponse, AuthSessionResponse, FUWorksSteamID, OwnerSteamID);

