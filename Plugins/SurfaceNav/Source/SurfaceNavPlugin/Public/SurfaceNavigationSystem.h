#pragma once
#include "CoreMinimal.h"
#include "NavigationSystem.h"
#include "InvokerQueDataItem.h"
#include "SurfaceNavigationSystem.generated.h"

UCLASS(Blueprintable, NonTransient)
class SURFACENAVPLUGIN_API USurfaceNavigationSystem : public UNavigationSystemV1 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInvokerQueDataItem> InvokerData;
    
public:
    USurfaceNavigationSystem();

    UFUNCTION(BlueprintCallable)
    void DrawDebugNavData(const float DrawRadius, const bool ShowBlocks, const bool ShowGridPoints, const bool ShowNavPoints, const bool ShowNavPointNormals, const bool ShowNeighborDirLines, const bool ShowNavLinkPoints, const float Duration);
    
};

