#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshCollisionVertexStream.h"
#include "RuntimeMeshCollisionTexCoordStream.h"
#include "RuntimeMeshCollisionTriangleStream.h"
#include "RuntimeMeshCollisionMaterialIndexStream.h"
#include "RuntimeMeshCollisionSourceSectionInfo.h"
#include "RuntimeMeshCollisionData.generated.h"

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshCollisionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshCollisionVertexStream Vertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshCollisionTriangleStream Triangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshCollisionTexCoordStream TexCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeMeshCollisionMaterialIndexStream MaterialIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeMeshCollisionSourceSectionInfo> CollisionSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipNormals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeformableMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFastCook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableActiveEdgePrecompute;
    
    FRuntimeMeshCollisionData();
};

