#pragma once
#include "CoreMinimal.h"
#include "EItemUpdateStatusBP.h"
#include "WorkshopItemDownloadInfo.h"
#include "WorkshopItemUpdateInfo.generated.h"

USTRUCT(BlueprintType)
struct FWorkshopItemUpdateInfo : public FWorkshopItemDownloadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemUpdateStatusBP status;
    
    STEAMWORKSHOP_API FWorkshopItemUpdateInfo();
};

