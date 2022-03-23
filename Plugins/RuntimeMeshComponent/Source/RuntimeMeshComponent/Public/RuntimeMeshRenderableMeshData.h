#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshVertexPositionStream.h"
#include "RuntimeMeshVertexTangentStream.h"
#include "RuntimeMeshVertexTexCoordStream.h"
#include "RuntimeMeshTriangleStream.h"
#include "RuntimeMeshVertexColorStream.h"
#include "RuntimeMeshRenderableMeshData.generated.h"

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshRenderableMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshVertexPositionStream Positions;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshVertexTangentStream Tangents;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshVertexTexCoordStream TexCoords;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshVertexColorStream Colors;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshTriangleStream Triangles;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshTriangleStream AdjacencyTriangles;
    
    FRuntimeMeshRenderableMeshData();
};

