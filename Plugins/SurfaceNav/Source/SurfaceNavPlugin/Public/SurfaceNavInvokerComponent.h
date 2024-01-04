#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurfaceNavInvokerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SURFACENAVPLUGIN_API USurfaceNavInvokerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearBlockGenerationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FarBlockGenerationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceFromPlayerForGeneration;
    
    USurfaceNavInvokerComponent(const FObjectInitializer& ObjectInitializer);

};

