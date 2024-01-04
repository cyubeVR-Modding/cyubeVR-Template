#pragma once
#include "CoreMinimal.h"
#include "EVoteType.h"
#include "GeneralWorkshopItemResult.h"
#include "GetUserVoteOnWorkshopItemResult.generated.h"

USTRUCT(BlueprintType)
struct FGetUserVoteOnWorkshopItemResult : public FGeneralWorkshopItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoteType userVoteType;
    
    STEAMWORKSHOP_API FGetUserVoteOnWorkshopItemResult();
};

