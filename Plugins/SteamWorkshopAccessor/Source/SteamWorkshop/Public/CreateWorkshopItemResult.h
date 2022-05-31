#pragma once
#include "CoreMinimal.h"
#include "UpdateWorkshopItemResult.h"
#include "SteamWorkshopUpdateDetails.h"
#include "CreateWorkshopItemResult.generated.h"

USTRUCT(BlueprintType)
struct FCreateWorkshopItemResult : public FUpdateWorkshopItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamWorkshopUpdateDetails itemDetails;
    
    STEAMWORKSHOP_API FCreateWorkshopItemResult();
};

