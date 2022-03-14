#pragma once
#include "CoreMinimal.h"
#include "GeneralWorkshopItemResult.h"
#include "SteamUGCItemId.h"
#include "AddRemoveItemDependencyResult.generated.h"

USTRUCT(BlueprintType)
struct FAddRemoveItemDependencyResult : public FGeneralWorkshopItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FSteamUGCItemId dependendItemId;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddDependency;
    
    STEAMWORKSHOP_API FAddRemoveItemDependencyResult();
};

