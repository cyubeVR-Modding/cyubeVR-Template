#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERuntimeMeshSliceCapOption.h"
#include "RuntimeMeshRenderableMeshData.h"
#include "RuntimeMeshSlicer.generated.h"

class UMaterialInterface;
class URuntimeMeshComponent;

UCLASS(Blueprintable)
class RUNTIMEMESHCOMPONENT_API URuntimeMeshSlicer : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URuntimeMeshSlicer();

    UFUNCTION(BlueprintCallable)
    static bool SliceRuntimeMeshData(FRuntimeMeshRenderableMeshData& SourceSection, const FPlane& SlicePlane, ERuntimeMeshSliceCapOption CapOption, FRuntimeMeshRenderableMeshData& NewSourceSection, FRuntimeMeshRenderableMeshData& NewSourceSectionCap, bool bCreateDestination, FRuntimeMeshRenderableMeshData& DestinationSection, FRuntimeMeshRenderableMeshData& NewDestinationSectionCap);
    
    UFUNCTION(BlueprintCallable)
    static void SliceRuntimeMesh(URuntimeMeshComponent* InRuntimeMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, URuntimeMeshComponent*& OutOtherHalfRuntimeMesh, ERuntimeMeshSliceCapOption CapOption, UMaterialInterface* CapMaterial);
    
};

