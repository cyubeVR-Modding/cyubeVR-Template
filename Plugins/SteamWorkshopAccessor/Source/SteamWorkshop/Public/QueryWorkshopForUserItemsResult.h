#pragma once
#include "CoreMinimal.h"
#include "SteamUGCQueryParameterUser.h"
#include "QueryWorkshopForItemsResult.h"
#include "QueryWorkshopForUserItemsResult.generated.h"

USTRUCT(BlueprintType)
struct FQueryWorkshopForUserItemsResult : public FQueryWorkshopForItemsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamUGCQueryParameterUser queryParams;
    
    STEAMWORKSHOP_API FQueryWorkshopForUserItemsResult();
};

