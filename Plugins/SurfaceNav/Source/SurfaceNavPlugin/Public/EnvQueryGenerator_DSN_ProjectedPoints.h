#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "SurfaceNavEnvTraceData.h"
#include "EnvQueryGenerator_DSN_ProjectedPoints.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SURFACENAVPLUGIN_API UEnvQueryGenerator_DSN_ProjectedPoints : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSurfaceNavEnvTraceData ProjectionData;
    
    UEnvQueryGenerator_DSN_ProjectedPoints();

};

