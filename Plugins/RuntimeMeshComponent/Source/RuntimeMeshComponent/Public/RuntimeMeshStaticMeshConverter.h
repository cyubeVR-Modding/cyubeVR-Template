#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshCollisionSettings.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RuntimeMeshCollisionData.h"
#include "RuntimeMeshRenderableMeshData.h"
#include "RuntimeMeshStaticMeshConverter.generated.h"

class UStaticMesh;
class URuntimeMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class RUNTIMEMESHCOMPONENT_API URuntimeMeshStaticMeshConverter : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URuntimeMeshStaticMeshConverter();
    UFUNCTION(BlueprintCallable)
    static bool CopyStaticMeshToRuntimeMesh(UStaticMesh* StaticMesh, URuntimeMeshComponent* RuntimeMeshComponent, int32 CollisionLODIndex, int32 MaxLODToCopy);
    
    UFUNCTION(BlueprintCallable)
    static bool CopyStaticMeshSectionToRenderableMeshData(UStaticMesh* StaticMesh, int32 LODIndex, int32 SectionId, FRuntimeMeshRenderableMeshData& OutMeshData);
    
    UFUNCTION(BlueprintCallable)
    static bool CopyStaticMeshLODToCollisionData(UStaticMesh* StaticMesh, int32 LODIndex, FRuntimeMeshCollisionData& OutCollisionData);
    
    UFUNCTION(BlueprintCallable)
    static bool CopyStaticMeshComponentToRuntimeMesh(UStaticMeshComponent* StaticMeshComponent, URuntimeMeshComponent* RuntimeMeshComponent, int32 CollisionLODIndex, int32 MaxLODToCopy);
    
    UFUNCTION(BlueprintCallable)
    static bool CopyStaticMeshCollisionToCollisionSettings(UStaticMesh* StaticMesh, FRuntimeMeshCollisionSettings& OutCollisionSettings);
    
};

