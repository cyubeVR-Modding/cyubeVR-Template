#pragma once
#include "CoreMinimal.h"
#include "SteamUGCQueryParameterDetails.h"
#include "QueryWorkshopForItemsResult.h"
#include "QueryWorkshopForItemDetailsResult.generated.h"

USTRUCT(BlueprintType)
struct FQueryWorkshopForItemDetailsResult : public FQueryWorkshopForItemsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamUGCQueryParameterDetails queryParams;
    
    STEAMWORKSHOP_API FQueryWorkshopForItemDetailsResult();
};

