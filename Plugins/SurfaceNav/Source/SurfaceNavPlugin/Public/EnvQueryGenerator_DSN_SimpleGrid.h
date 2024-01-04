#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "AIDataProviderFVectorValue.h"
#include "EnvQueryGenerator_DSN_ProjectedPoints.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_DSN_SimpleGrid.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class SURFACENAVPLUGIN_API UEnvQueryGenerator_DSN_SimpleGrid : public UEnvQueryGenerator_DSN_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue GridHalfSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue DistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFVectorValue WorldAxisOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue AxisOffsetClosestToNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> GenerateAround;
    
    UEnvQueryGenerator_DSN_SimpleGrid();

};

