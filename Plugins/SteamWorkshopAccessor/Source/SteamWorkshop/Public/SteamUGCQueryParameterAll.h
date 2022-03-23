#pragma once
#include "CoreMinimal.h"
#include "SteamUGCQueryParameterAllUser.h"
#include "EUGCMatchingUGCTypeBP.h"
#include "EUGCQueryBP.h"
#include "SteamUGCQueryParameterAll.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCQueryParameterAll : public FSteamUGCQueryParameterAllUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString searchText;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 rankedByTrendDays;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchAnyTag;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    EUGCQueryBP queryType;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    EUGCMatchingUGCTypeBP fileType;
    
    STEAMWORKSHOP_API FSteamUGCQueryParameterAll();
};

