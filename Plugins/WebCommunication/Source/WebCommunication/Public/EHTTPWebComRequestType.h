#pragma once
#include "CoreMinimal.h"
#include "EHTTPWebComRequestType.generated.h"

UENUM(BlueprintType)
enum class EHTTPWebComRequestType : uint8 {
    GET,
    GETLowRamDownload,
    PUT,
    POST,
    POST_UPLOAD,
    INDIVIDUAL,
};

