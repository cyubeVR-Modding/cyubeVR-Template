#pragma once
#include "CoreMinimal.h"
#include "UWorksPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 score;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float TimePlayed;
    
    FUWorksPlayerInfo();
};

