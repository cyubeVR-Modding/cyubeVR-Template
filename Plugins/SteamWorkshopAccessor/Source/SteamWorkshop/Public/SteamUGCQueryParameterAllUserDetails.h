#pragma once
#include "CoreMinimal.h"
#include "ESteamSupportedLanguages.h"
#include "SteamUGCQueryParameterAllUserDetails.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCQueryParameterAllUserDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 pageId;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ESteamSupportedLanguages Language;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 allowedCacheResponseTime;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 numDaysPlaytime;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReturnPreviewUrl: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReturnKeyValueTags: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReturnFullDescription: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReturnMetaData: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReturnChildIds: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReturnAdditionalPreviews: 1;
    
    STEAMWORKSHOP_API FSteamUGCQueryParameterAllUserDetails();
};

