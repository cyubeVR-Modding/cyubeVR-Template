#pragma once
#include "CoreMinimal.h"
#include "WorkshopItemDownloadInfo.h"
#include "EItemUpdateStatusBP.h"
#include "WorkshopItemUpdateInfo.generated.h"

USTRUCT(BlueprintType)
struct FWorkshopItemUpdateInfo : public FWorkshopItemDownloadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    EItemUpdateStatusBP status;
    
    STEAMWORKSHOP_API FWorkshopItemUpdateInfo();
};

