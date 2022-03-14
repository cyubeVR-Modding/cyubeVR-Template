#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralRavenCrowds.generated.h"

class URuntimeMeshComponent;
class URuntimeMeshProviderStatic;

UCLASS()
class CYUBEVR_API AProceduralRavenCrowds : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    URuntimeMeshComponent* RMC;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    URuntimeMeshProviderStatic* RuntimeMeshProvider;
    
    AProceduralRavenCrowds();
};

