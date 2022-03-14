#pragma once
#include "CoreMinimal.h"
#include "EHTTPWebComRequestType.generated.h"

UENUM()
enum class EHTTPWebComRequestType {
    GET,
    GETLowRamDownload,
    PUT,
    POST,
    POST_UPLOAD,
    INDIVIDUAL,
};

