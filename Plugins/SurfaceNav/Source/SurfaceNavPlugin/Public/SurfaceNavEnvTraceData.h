#pragma once
#include "CoreMinimal.h"
#include "ESurfaceNavEnvQueryTrace.h"
#include "Templates/SubclassOf.h"
#include "SurfaceNavEnvTraceData.generated.h"

class UNavigationQueryFilter;

USTRUCT(BlueprintType)
struct SURFACENAVPLUGIN_API FSurfaceNavEnvTraceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavigationFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetAlongNavNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESurfaceNavEnvQueryTrace::Type> TraceMode;
    
    FSurfaceNavEnvTraceData();
};

