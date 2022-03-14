#pragma once
#include "CoreMinimal.h"
#include "GeneralWorkshopItemResult.h"
#include "SetUserVoteOnWorkshopItemResult.generated.h"

USTRUCT(BlueprintType)
struct FSetUserVoteOnWorkshopItemResult : public FGeneralWorkshopItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool bVoteUp;
    
    STEAMWORKSHOP_API FSetUserVoteOnWorkshopItemResult();
};

