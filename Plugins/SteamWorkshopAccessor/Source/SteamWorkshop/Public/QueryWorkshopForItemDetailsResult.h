#pragma once
#include "CoreMinimal.h"
#include "QueryWorkshopForItemsResult.h"
#include "SteamUGCQueryParameterDetails.h"
#include "QueryWorkshopForItemDetailsResult.generated.h"

USTRUCT(BlueprintType)
struct FQueryWorkshopForItemDetailsResult : public FQueryWorkshopForItemsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamUGCQueryParameterDetails queryParams;
    
    STEAMWORKSHOP_API FQueryWorkshopForItemDetailsResult();
};

