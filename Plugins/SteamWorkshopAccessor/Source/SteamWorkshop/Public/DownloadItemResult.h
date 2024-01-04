#pragma once
#include "CoreMinimal.h"
#include "UInt32.h"
#include "GeneralWorkshopItemResult.h"
#include "DownloadItemResult.generated.h"

USTRUCT(BlueprintType)
struct FDownloadItemResult : public FGeneralWorkshopItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUInt32 AppID;
    
    STEAMWORKSHOP_API FDownloadItemResult();
};

