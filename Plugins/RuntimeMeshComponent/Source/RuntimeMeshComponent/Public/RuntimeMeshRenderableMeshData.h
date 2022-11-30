#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshVertexPositionStream.h"
#include "RuntimeMeshVertexTangentStream.h"
#include "RuntimeMeshVertexColorStream.h"
#include "RuntimeMeshVertexTexCoordStream.h"
#include "RuntimeMeshTriangleStream.h"
#include "RuntimeMeshRenderableMeshData.generated.h"

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshRenderableMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshVertexPositionStream Positions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshVertexTangentStream Tangents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshVertexTexCoordStream TexCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshVertexColorStream Colors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshTriangleStream Triangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshTriangleStream AdjacencyTriangles;
    
    FRuntimeMeshRenderableMeshData();
};

