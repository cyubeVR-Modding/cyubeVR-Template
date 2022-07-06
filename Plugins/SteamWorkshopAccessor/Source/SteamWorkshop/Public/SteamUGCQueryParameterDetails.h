#pragma once
#include "CoreMinimal.h"
#include "SteamUGCQueryParameterAllUserDetails.h"
#include "SteamUGCItemId.h"
#include "SteamUGCQueryParameterTagsAllUserDetails.h"
#include "SteamUGCQueryParameterDetails.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCQueryParameterDetails : public FSteamUGCQueryParameterAllUserDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamUGCQueryParameterTagsAllUserDetails tagParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSteamUGCItemId> workshopItemIds;
    
    STEAMWORKSHOP_API FSteamUGCQueryParameterDetails();
};

