#pragma once
#include "CoreMinimal.h"
#include "GeneralWorkshopItemResult.h"
#include "UserFavoriteItemChangedResult.generated.h"

USTRUCT(BlueprintType)
struct FUserFavoriteItemChangedResult : public FGeneralWorkshopItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasAddRequest;
    
    STEAMWORKSHOP_API FUserFavoriteItemChangedResult();
};

