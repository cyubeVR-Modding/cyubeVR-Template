#pragma once
#include "CoreMinimal.h"
#include "MeshComponentInfo.generated.h"

class URuntimeMeshComponent;
class URuntimeMeshProviderChunks;

USTRUCT(BlueprintType)
struct FMeshComponentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URuntimeMeshComponent* RMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeMeshProviderChunks* RuntimeMeshProvider;
    
    CYUBEVR_API FMeshComponentInfo();
};

