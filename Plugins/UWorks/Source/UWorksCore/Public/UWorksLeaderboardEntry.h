#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksUGCHandle.h"
#include "UWorksLeaderboardEntry.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksLeaderboardEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUWorksSteamID SteamID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 GlobalRank;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 score;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Details;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUWorksUGCHandle UGCHandle;
    
    FUWorksLeaderboardEntry();
};

