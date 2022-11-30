#pragma once
#include "CoreMinimal.h"
#include "SteamUGCQueryParameterAllUser.h"
#include "EUserUGCListSortOrderBP.h"
#include "EUserUGCListBP.h"
#include "EUGCMatchingUGCTypeBP.h"
#include "SteamUGCQueryParameterUser.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCQueryParameterUser : public FSteamUGCQueryParameterAllUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString filenameFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUserUGCListBP list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUGCMatchingUGCTypeBP Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUserUGCListSortOrderBP sortOrder;
    
    STEAMWORKSHOP_API FSteamUGCQueryParameterUser();
};

