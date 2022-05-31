#pragma once
#include "CoreMinimal.h"
#include "UInt64.h"
#include "UObject/NoExportTypes.h"
#include "SteamWorkshopItemInstallInfo.generated.h"

USTRUCT(BlueprintType)
struct FSteamWorkshopItemInstallInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUInt64 sizeOnDiskBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sizeOnDiskMBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Directory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime timeStampLastUpdate;
    
    STEAMWORKSHOP_API FSteamWorkshopItemInstallInfo();
};

