#pragma once
#include "CoreMinimal.h"
#include "EUGCMatchingUGCTypeBP.h"
#include "SteamUGCQueryParameterAllUser.h"
#include "EUserUGCListSortOrderBP.h"
#include "EUserUGCListBP.h"
#include "SteamUGCQueryParameterUser.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCQueryParameterUser : public FSteamUGCQueryParameterAllUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString filenameFilter;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    EUserUGCListBP list;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    EUGCMatchingUGCTypeBP Type;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    EUserUGCListSortOrderBP sortOrder;
    
    STEAMWORKSHOP_API FSteamUGCQueryParameterUser();
};

