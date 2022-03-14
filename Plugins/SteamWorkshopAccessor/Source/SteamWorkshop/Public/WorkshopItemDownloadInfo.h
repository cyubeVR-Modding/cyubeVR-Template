#pragma once
#include "CoreMinimal.h"
#include "UInt64.h"
#include "WorkshopItemDownloadInfo.generated.h"

USTRUCT(BlueprintType)
struct FWorkshopItemDownloadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FUInt64 bytesCurrent;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FUInt64 bytesTotal;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 megaBytesCurrent;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 megaBytesTotal;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float percentageFinished;
    
    STEAMWORKSHOP_API FWorkshopItemDownloadInfo();
};

