#pragma once
#include "CoreMinimal.h"
#include "UInt64.h"
#include "WorkshopItemDownloadInfo.generated.h"

USTRUCT(BlueprintType)
struct FWorkshopItemDownloadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUInt64 bytesCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUInt64 bytesTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 megaBytesCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 megaBytesTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float percentageFinished;
    
    STEAMWORKSHOP_API FWorkshopItemDownloadInfo();
};

