#pragma once
#include "CoreMinimal.h"
#include "GeneralWorkshopItemResult.h"
#include "SteamAppId.h"
#include "GetAppdependencyResult.generated.h"

USTRUCT(BlueprintType)
struct FGetAppdependencyResult : public FGeneralWorkshopItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSteamAppId> dependencyApps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllAppDependenciesReturned;
    
    STEAMWORKSHOP_API FGetAppdependencyResult();
};

