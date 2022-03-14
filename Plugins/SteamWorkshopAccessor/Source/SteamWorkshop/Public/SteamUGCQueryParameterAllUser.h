#pragma once
#include "CoreMinimal.h"
#include "SteamUGCQueryParameterAllUserDetails.h"
#include "SteamUGCQueryParameterTagsAllUser.h"
#include "SteamUGCQueryParameterAllUser.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCQueryParameterAllUser : public FSteamUGCQueryParameterAllUserDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FSteamUGCQueryParameterTagsAllUser tagParameter;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnTotalOnly;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnIdsOnly;
    
    STEAMWORKSHOP_API FSteamUGCQueryParameterAllUser();
};

