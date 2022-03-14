#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshModifier.h"
#include "RuntimeMeshRenderableMeshData.h"
#include "RuntimeMeshModifierAdjacency.generated.h"

UCLASS()
class RUNTIMEMESHCOMPONENT_API URuntimeMeshModifierAdjacency : public URuntimeMeshModifier {
    GENERATED_BODY()
public:
    URuntimeMeshModifierAdjacency();
    UFUNCTION(BlueprintCallable)
    static void CalculateTessellationIndices(FRuntimeMeshRenderableMeshData& MeshData);
    
};

