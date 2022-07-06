#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshCollisionTriangleStream.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RuntimeMeshTriangleStream.h"
#include "RuntimeMeshVertexTexCoordStream.h"
#include "RuntimeMeshVertexTangentStream.h"
#include "RuntimeMeshRenderableMeshData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RuntimeMeshVertexPositionStream.h"
#include "RuntimeMeshVertexColorStream.h"
#include "RuntimeMeshCollisionVertexStream.h"
#include "RuntimeMeshCollisionTexCoordStream.h"
#include "RuntimeMeshCollisionMaterialIndexStream.h"
#include "UObject/NoExportTypes.h"
#include "RuntimeMeshCollisionData.h"
#include "UObject/NoExportTypes.h"
#include "RuntimeMeshCollisionSettings.h"
#include "RuntimeMeshCollisionBox.h"
#include "RuntimeMeshCollisionSphere.h"
#include "RuntimeMeshCollisionConvexMesh.h"
#include "RuntimeMeshCollisionCapsule.h"
#include "RuntimeMeshBlueprintFunctions.generated.h"

UCLASS(Blueprintable)
class RUNTIMEMESHCOMPONENT_API URuntimeMeshBlueprintFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URuntimeMeshBlueprintFunctions();
    UFUNCTION(BlueprintCallable)
    static void SetVertexIndex(UPARAM(Ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 Index, int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetTexCoord(UPARAM(Ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D NewTexCoord, int32 ChannelId);
    
    UFUNCTION(BlueprintCallable)
    static void SetTangents(UPARAM(Ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector InTangentX, FVector InTangentY, FVector InTangentZ);
    
    UFUNCTION(BlueprintCallable)
    static void SetTangent(UPARAM(Ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector NewTangent);
    
    UFUNCTION(BlueprintCallable)
    static void SetPosition(UPARAM(Ref) FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 Index, FVector NewPosition);
    
    UFUNCTION(BlueprintCallable)
    static void SetNumTriangles(UPARAM(Ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 NewNum, bool bAllowShrinking);
    
    UFUNCTION(BlueprintCallable)
    static void SetNumTexCoords(UPARAM(Ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 NewNum, bool bAllowShrinking);
    
    UFUNCTION(BlueprintCallable)
    static void SetNumTangents(UPARAM(Ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 NewNum, bool bAllowShrinking);
    
    UFUNCTION(BlueprintCallable)
    static void SetNumPositions(UPARAM(Ref) FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 NewNum, bool bAllowShrinking);
    
    UFUNCTION(BlueprintCallable)
    static void SetNumColors(UPARAM(Ref) FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 NewNum, bool bAllowShrinking);
    
    UFUNCTION(BlueprintCallable)
    static void SetNumCollisionVertices(UPARAM(Ref) FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 NewNum, bool bAllowShrinking);
    
    UFUNCTION(BlueprintCallable)
    static void SetNumCollisionTriangles(UPARAM(Ref) FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 NewNum, bool bAllowShrinking);
    
    UFUNCTION(BlueprintCallable)
    static void SetNumCollisionTexCoords(UPARAM(Ref) FRuntimeMeshCollisionTexCoordStream& Stream, FRuntimeMeshCollisionTexCoordStream& OutStream, int32 NewNumChannels, int32 NewNumTexCoords, bool bAllowShrinking);
    
    UFUNCTION(BlueprintCallable)
    static void SetNumCollisionMaterialIndices(UPARAM(Ref) FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 NewNum, bool bAllowShrinking);
    
    UFUNCTION(BlueprintCallable)
    static void SetNormal(UPARAM(Ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector NewNormal);
    
    UFUNCTION(BlueprintCallable)
    static void SetColor(UPARAM(Ref) FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 Index, FLinearColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    static void SetCollisionVertex(UPARAM(Ref) FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 Index, FVector NewVertex);
    
    UFUNCTION(BlueprintCallable)
    static void SetCollisionTexCoord(UPARAM(Ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D NewTexCoord, int32 ChannelId);
    
    UFUNCTION(BlueprintCallable)
    static void SeCollisionMaterialIndex(UPARAM(Ref) FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 Index, int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    static void NumTriangles(UPARAM(Ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32& OutNumTriangles);
    
    UFUNCTION(BlueprintCallable)
    static void NumTexCoords(UPARAM(Ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutNumTexCoords);
    
    UFUNCTION(BlueprintCallable)
    static void NumTexCoordChannels(UPARAM(Ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutNumTexCoordChannels);
    
    UFUNCTION(BlueprintCallable)
    static void NumTangents(UPARAM(Ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32& OutNumTangents);
    
    UFUNCTION(BlueprintCallable)
    static void NumPositions(UPARAM(Ref) FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32& OutNumPositions);
    
    UFUNCTION(BlueprintCallable)
    static void NumIndices(UPARAM(Ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32& OutNumIndices);
    
    UFUNCTION(BlueprintCallable)
    static void NumColors(UPARAM(Ref) FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32& OutNumColors);
    
    UFUNCTION(BlueprintCallable)
    static void NumCollisionVertices(UPARAM(Ref) FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32& OutNumVertices);
    
    UFUNCTION(BlueprintCallable)
    static void NumCollisionTriangles(UPARAM(Ref) FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32& OutNumTriangles);
    
    UFUNCTION(BlueprintCallable)
    static void NumCollisionTexCoords(UPARAM(Ref) FRuntimeMeshCollisionTexCoordStream& Stream, FRuntimeMeshCollisionTexCoordStream& OutStream, int32 ChannelId, int32& OutNumTexCoords);
    
    UFUNCTION(BlueprintCallable)
    static void NumCollisionTexCoordChannels(UPARAM(Ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutNumTexCoordChannels);
    
    UFUNCTION(BlueprintCallable)
    static void NumCollisionMaterialIndices(UPARAM(Ref) FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32& OutNumIndices);
    
    UFUNCTION(BlueprintCallable)
    static void GetVertexIndex(UPARAM(Ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 Index, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable)
    static FRuntimeMeshTriangleStream GetTriangleStream(UPARAM(Ref) FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    
    UFUNCTION(BlueprintCallable)
    static FRuntimeMeshVertexTexCoordStream GetTexCoordStream(UPARAM(Ref) FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    
    UFUNCTION(BlueprintCallable)
    static void GetTexCoord(UPARAM(Ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D& OutTexCoord);
    
    UFUNCTION(BlueprintCallable)
    static FRuntimeMeshVertexTangentStream GetTangentStream(UPARAM(Ref) FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    
    UFUNCTION(BlueprintCallable)
    static void GetTangents(UPARAM(Ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector& OutTangentX, FVector& OutTangentY, FVector& OutTangentZ);
    
    UFUNCTION(BlueprintCallable)
    static void GetTangent(UPARAM(Ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector& OutTangent);
    
    UFUNCTION(BlueprintCallable)
    static FRuntimeMeshVertexPositionStream GetPositionStream(UPARAM(Ref) FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    
    UFUNCTION(BlueprintCallable)
    static void GetPosition(UPARAM(Ref) FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 Index, FVector& OutPosition);
    
    UFUNCTION(BlueprintCallable)
    static void GetNormal(UPARAM(Ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector& OutNormal);
    
    UFUNCTION(BlueprintCallable)
    static FRuntimeMeshVertexColorStream GetColorStream(UPARAM(Ref) FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    
    UFUNCTION(BlueprintCallable)
    static void GetColor(UPARAM(Ref) FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 Index, FLinearColor& OutColor);
    
    UFUNCTION(BlueprintCallable)
    static FRuntimeMeshCollisionVertexStream GetCollisionVertexStream(UPARAM(Ref) FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData);
    
    UFUNCTION(BlueprintCallable)
    static void GetCollisionVertex(UPARAM(Ref) FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 Index, FVector& OutVertex);
    
    UFUNCTION(BlueprintCallable)
    static FRuntimeMeshCollisionTriangleStream GetCollisionTriangleStream(UPARAM(Ref) FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData);
    
    UFUNCTION(BlueprintCallable)
    static void GetCollisionTriangle(UPARAM(Ref) FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 Index, int32& OutIndexA, int32& OutIndexB, int32& OutIndexC);
    
    UFUNCTION(BlueprintCallable)
    static FRuntimeMeshCollisionTexCoordStream GetCollisionTexCoordStream(UPARAM(Ref) FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData);
    
    UFUNCTION(BlueprintCallable)
    static void GetCollisionTexCoord(UPARAM(Ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D& OutTexCoord, int32 ChannelId);
    
    UFUNCTION(BlueprintCallable)
    static FRuntimeMeshCollisionMaterialIndexStream GetCollisionMaterialIndexStream(UPARAM(Ref) FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData);
    
    UFUNCTION(BlueprintCallable)
    static void GetCollisionMaterialIndex(UPARAM(Ref) FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 Index, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable)
    static void GetBounds(UPARAM(Ref) FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, FBox& OutBounds);
    
    UFUNCTION(BlueprintCallable)
    static FRuntimeMeshTriangleStream GetAdjacencyTriangleStream(UPARAM(Ref) FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    
    UFUNCTION(BlueprintCallable)
    static void EmptyTriangles(UPARAM(Ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 Slack);
    
    UFUNCTION(BlueprintCallable)
    static void EmptyTexCoords(UPARAM(Ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Slack);
    
    UFUNCTION(BlueprintCallable)
    static void EmptyTangents(UPARAM(Ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Slack);
    
    UFUNCTION(BlueprintCallable)
    static void EmptyPositions(UPARAM(Ref) FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 Slack);
    
    UFUNCTION(BlueprintCallable)
    static void EmptyColors(UPARAM(Ref) FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 Slack);
    
    UFUNCTION(BlueprintCallable)
    static void EmptyCollisionVertices(UPARAM(Ref) FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 Slack);
    
    UFUNCTION(BlueprintCallable)
    static void EmptyCollisionTriangles(UPARAM(Ref) FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 Slack);
    
    UFUNCTION(BlueprintCallable)
    static void EmptyCollisionTexCoords(UPARAM(Ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Slack);
    
    UFUNCTION(BlueprintCallable)
    static void EmptyCollisionMaterialIndices(UPARAM(Ref) FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 Slack);
    
    UFUNCTION(BlueprintCallable)
    static FRuntimeMeshRenderableMeshData CreateRenderableMeshData(bool bWantsHighPrecisionTangents, bool bWantsHighPrecisionTexCoords, uint8 NewNumTexCoords, bool bWants32BitIndices);
    
    UFUNCTION(BlueprintCallable)
    static void AppendTriangles(UPARAM(Ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, const FRuntimeMeshTriangleStream& InOther);
    
    UFUNCTION(BlueprintCallable)
    static void AppendTexCoords(UPARAM(Ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, const FRuntimeMeshVertexTexCoordStream& InOther);
    
    UFUNCTION(BlueprintCallable)
    static void AppendTangents(UPARAM(Ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, const FRuntimeMeshVertexTangentStream& InOther);
    
    UFUNCTION(BlueprintCallable)
    static void AppendPositions(UPARAM(Ref) FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, const FRuntimeMeshVertexPositionStream& InOther);
    
    UFUNCTION(BlueprintCallable)
    static void AppendColors(UPARAM(Ref) FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, const FRuntimeMeshVertexColorStream& InOther);
    
    UFUNCTION(BlueprintCallable)
    static void AddTriangle(UPARAM(Ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 NewIndexA, int32 NewIndexB, int32 NewIndexC);
    
    UFUNCTION(BlueprintCallable)
    static void AddTexCoord(UPARAM(Ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutIndex, FVector2D InTexCoord, int32 ChannelId);
    
    UFUNCTION(BlueprintCallable)
    static void AddTangents(UPARAM(Ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, FVector InTangentX, FVector InTangentY, FVector InTangentZ, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable)
    static void AddPosition(UPARAM(Ref) FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, FVector InPosition, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable)
    static void AddNormalAndTangent(UPARAM(Ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, FVector InNormal, FVector InTangent, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable)
    static void AddIndex(UPARAM(Ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 NewIndex, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable)
    static void AddColor(UPARAM(Ref) FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, FLinearColor InColor, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable)
    static void AddCollisionVertex(UPARAM(Ref) FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, FVector InVertex, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable)
    static void AddCollisionTriangle(UPARAM(Ref) FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 NewIndexA, int32 NewIndexB, int32 NewIndexC, int32& OutTriangleIndex);
    
    UFUNCTION(BlueprintCallable)
    static void AddCollisionTexCoord(UPARAM(Ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, FVector2D InTexCoord, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable)
    static void AddCollisionSphere(UPARAM(Ref) FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionSphere NewSphere);
    
    UFUNCTION(BlueprintCallable)
    static void AddCollisionMaterialIndex(UPARAM(Ref) FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 NewIndex, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable)
    static void AddCollisionConvex(UPARAM(Ref) FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionConvexMesh NewConvex);
    
    UFUNCTION(BlueprintCallable)
    static void AddCollisionCapsule(UPARAM(Ref) FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionCapsule NewCapsule);
    
    UFUNCTION(BlueprintCallable)
    static void AddCollisionBox(UPARAM(Ref) FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionBox NewBox);
    
};

