#pragma once
#include "CoreMinimal.h"
#include "UWorksPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimePlayed;
    
    FUWorksPlayerInfo();
};

