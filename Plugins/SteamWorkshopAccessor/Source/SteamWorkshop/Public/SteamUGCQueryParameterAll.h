#pragma once
#include "CoreMinimal.h"
#include "EUGCMatchingUGCTypeBP.h"
#include "EUGCQueryBP.h"
#include "SteamUGCQueryParameterAllUser.h"
#include "SteamUGCQueryParameterAll.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCQueryParameterAll : public FSteamUGCQueryParameterAllUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString searchText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rankedByTrendDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchAnyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUGCQueryBP queryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUGCMatchingUGCTypeBP fileType;
    
    STEAMWORKSHOP_API FSteamUGCQueryParameterAll();
};

