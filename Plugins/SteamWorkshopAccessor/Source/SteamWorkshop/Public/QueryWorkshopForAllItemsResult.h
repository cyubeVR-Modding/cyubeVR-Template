#pragma once
#include "CoreMinimal.h"
#include "QueryWorkshopForItemsResult.h"
#include "SteamUGCQueryParameterAll.h"
#include "QueryWorkshopForAllItemsResult.generated.h"

USTRUCT(BlueprintType)
struct FQueryWorkshopForAllItemsResult : public FQueryWorkshopForItemsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamUGCQueryParameterAll queryParams;
    
    STEAMWORKSHOP_API FQueryWorkshopForAllItemsResult();
};

