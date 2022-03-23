#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshCollisionVertexStream.h"
#include "RuntimeMeshCollisionTexCoordStream.h"
#include "RuntimeMeshCollisionTriangleStream.h"
#include "RuntimeMeshRenderableCollisionData.generated.h"

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshRenderableCollisionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshCollisionVertexStream Vertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshCollisionTriangleStream Triangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshCollisionTexCoordStream TexCoords;
    
    FRuntimeMeshRenderableCollisionData();
};

