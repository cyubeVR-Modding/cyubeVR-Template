#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryGenerator_DSN_ProjectedPoints.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_DSN_Cone.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class SURFACENAVPLUGIN_API UEnvQueryGenerator_DSN_Cone : public UEnvQueryGenerator_DSN_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ConeDegrees;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue Range;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue DistanceMultiplier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue InvertCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> CenterActor;
    
    UEnvQueryGenerator_DSN_Cone();

};

