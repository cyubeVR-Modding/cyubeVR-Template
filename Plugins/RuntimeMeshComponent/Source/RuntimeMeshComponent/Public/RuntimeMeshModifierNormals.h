#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshModifier.h"
#include "RuntimeMeshRenderableMeshData.h"
#include "RuntimeMeshModifierNormals.generated.h"

UCLASS()
class RUNTIMEMESHCOMPONENT_API URuntimeMeshModifierNormals : public URuntimeMeshModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool bComputeSmoothNormals;
    
    URuntimeMeshModifierNormals();
    UFUNCTION(BlueprintCallable)
    static void CalculateNormalsTangents(FRuntimeMeshRenderableMeshData& MeshData, bool bInComputeSmoothNormals);
    
};

