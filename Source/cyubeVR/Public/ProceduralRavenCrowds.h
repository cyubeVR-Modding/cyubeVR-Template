#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralRavenCrowds.generated.h"

class URuntimeMeshComponent;
class URuntimeMeshProviderStatic;

UCLASS(Blueprintable)
class CYUBEVR_API AProceduralRavenCrowds : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URuntimeMeshComponent* RMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeMeshProviderStatic* RuntimeMeshProvider;
    
    AProceduralRavenCrowds(const FObjectInitializer& ObjectInitializer);

};

