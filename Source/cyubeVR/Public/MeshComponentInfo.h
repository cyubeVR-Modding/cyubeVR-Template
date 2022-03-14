#pragma once
#include "CoreMinimal.h"
#include "MeshComponentInfo.generated.h"

class URuntimeMeshComponent;
class URuntimeMeshProviderChunks;

USTRUCT()
struct FMeshComponentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Export, meta=(AllowPrivateAccess=true))
    URuntimeMeshComponent* RMC;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    URuntimeMeshProviderChunks* RuntimeMeshProvider;
    
    CYUBEVR_API FMeshComponentInfo();
};

