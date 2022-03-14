#include "RuntimeMeshBlueprintFunctions.h"

void URuntimeMeshBlueprintFunctions::SetVertexIndex(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 Index, int32 NewIndex) {
}

void URuntimeMeshBlueprintFunctions::SetTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D NewTexCoord, int32 ChannelId) {
}

void URuntimeMeshBlueprintFunctions::SetTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector InTangentX, FVector InTangentY, FVector InTangentZ) {
}

void URuntimeMeshBlueprintFunctions::SetTangent(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector NewTangent) {
}

void URuntimeMeshBlueprintFunctions::SetPosition(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 Index, FVector NewPosition) {
}

void URuntimeMeshBlueprintFunctions::SetNumTriangles(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 NewNum, bool bAllowShrinking) {
}

void URuntimeMeshBlueprintFunctions::SetNumTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 NewNum, bool bAllowShrinking) {
}

void URuntimeMeshBlueprintFunctions::SetNumTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 NewNum, bool bAllowShrinking) {
}

void URuntimeMeshBlueprintFunctions::SetNumPositions(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 NewNum, bool bAllowShrinking) {
}

void URuntimeMeshBlueprintFunctions::SetNumColors(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 NewNum, bool bAllowShrinking) {
}

void URuntimeMeshBlueprintFunctions::SetNumCollisionVertices(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 NewNum, bool bAllowShrinking) {
}

void URuntimeMeshBlueprintFunctions::SetNumCollisionTriangles(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 NewNum, bool bAllowShrinking) {
}

void URuntimeMeshBlueprintFunctions::SetNumCollisionTexCoords(FRuntimeMeshCollisionTexCoordStream& Stream, FRuntimeMeshCollisionTexCoordStream& OutStream, int32 NewNumChannels, int32 NewNumTexCoords, bool bAllowShrinking) {
}

void URuntimeMeshBlueprintFunctions::SetNumCollisionMaterialIndices(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 NewNum, bool bAllowShrinking) {
}

void URuntimeMeshBlueprintFunctions::SetNormal(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector NewNormal) {
}

void URuntimeMeshBlueprintFunctions::SetColor(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 Index, FLinearColor NewColor) {
}

void URuntimeMeshBlueprintFunctions::SetCollisionVertex(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 Index, FVector NewVertex) {
}

void URuntimeMeshBlueprintFunctions::SetCollisionTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D NewTexCoord, int32 ChannelId) {
}

void URuntimeMeshBlueprintFunctions::SeCollisionMaterialIndex(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 Index, int32 NewIndex) {
}

void URuntimeMeshBlueprintFunctions::NumTriangles(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32& OutNumTriangles) {
}

void URuntimeMeshBlueprintFunctions::NumTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutNumTexCoords) {
}

void URuntimeMeshBlueprintFunctions::NumTexCoordChannels(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutNumTexCoordChannels) {
}

void URuntimeMeshBlueprintFunctions::NumTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32& OutNumTangents) {
}

void URuntimeMeshBlueprintFunctions::NumPositions(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32& OutNumPositions) {
}

void URuntimeMeshBlueprintFunctions::NumIndices(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32& OutNumIndices) {
}

void URuntimeMeshBlueprintFunctions::NumColors(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32& OutNumColors) {
}

void URuntimeMeshBlueprintFunctions::NumCollisionVertices(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32& OutNumVertices) {
}

void URuntimeMeshBlueprintFunctions::NumCollisionTriangles(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32& OutNumTriangles) {
}

void URuntimeMeshBlueprintFunctions::NumCollisionTexCoords(FRuntimeMeshCollisionTexCoordStream& Stream, FRuntimeMeshCollisionTexCoordStream& OutStream, int32 ChannelId, int32& OutNumTexCoords) {
}

void URuntimeMeshBlueprintFunctions::NumCollisionTexCoordChannels(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutNumTexCoordChannels) {
}

void URuntimeMeshBlueprintFunctions::NumCollisionMaterialIndices(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32& OutNumIndices) {
}

void URuntimeMeshBlueprintFunctions::GetVertexIndex(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 Index, int32& OutIndex) {
}

FRuntimeMeshTriangleStream URuntimeMeshBlueprintFunctions::GetTriangleStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData) {
    return FRuntimeMeshTriangleStream{};
}

FRuntimeMeshVertexTexCoordStream URuntimeMeshBlueprintFunctions::GetTexCoordStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData) {
    return FRuntimeMeshVertexTexCoordStream{};
}

void URuntimeMeshBlueprintFunctions::GetTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D& OutTexCoord) {
}

FRuntimeMeshVertexTangentStream URuntimeMeshBlueprintFunctions::GetTangentStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData) {
    return FRuntimeMeshVertexTangentStream{};
}

void URuntimeMeshBlueprintFunctions::GetTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector& OutTangentX, FVector& OutTangentY, FVector& OutTangentZ) {
}

void URuntimeMeshBlueprintFunctions::GetTangent(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector& OutTangent) {
}

FRuntimeMeshVertexPositionStream URuntimeMeshBlueprintFunctions::GetPositionStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData) {
    return FRuntimeMeshVertexPositionStream{};
}

void URuntimeMeshBlueprintFunctions::GetPosition(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 Index, FVector& OutPosition) {
}

void URuntimeMeshBlueprintFunctions::GetNormal(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector& OutNormal) {
}

FRuntimeMeshVertexColorStream URuntimeMeshBlueprintFunctions::GetColorStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData) {
    return FRuntimeMeshVertexColorStream{};
}

void URuntimeMeshBlueprintFunctions::GetColor(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 Index, FLinearColor& OutColor) {
}

FRuntimeMeshCollisionVertexStream URuntimeMeshBlueprintFunctions::GetCollisionVertexStream(FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData) {
    return FRuntimeMeshCollisionVertexStream{};
}

void URuntimeMeshBlueprintFunctions::GetCollisionVertex(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 Index, FVector& OutVertex) {
}

FRuntimeMeshCollisionTriangleStream URuntimeMeshBlueprintFunctions::GetCollisionTriangleStream(FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData) {
    return FRuntimeMeshCollisionTriangleStream{};
}

void URuntimeMeshBlueprintFunctions::GetCollisionTriangle(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 Index, int32& OutIndexA, int32& OutIndexB, int32& OutIndexC) {
}

FRuntimeMeshCollisionTexCoordStream URuntimeMeshBlueprintFunctions::GetCollisionTexCoordStream(FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData) {
    return FRuntimeMeshCollisionTexCoordStream{};
}

void URuntimeMeshBlueprintFunctions::GetCollisionTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D& OutTexCoord, int32 ChannelId) {
}

FRuntimeMeshCollisionMaterialIndexStream URuntimeMeshBlueprintFunctions::GetCollisionMaterialIndexStream(FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData) {
    return FRuntimeMeshCollisionMaterialIndexStream{};
}

void URuntimeMeshBlueprintFunctions::GetCollisionMaterialIndex(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 Index, int32& OutIndex) {
}

void URuntimeMeshBlueprintFunctions::GetBounds(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, FBox& OutBounds) {
}

FRuntimeMeshTriangleStream URuntimeMeshBlueprintFunctions::GetAdjacencyTriangleStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData) {
    return FRuntimeMeshTriangleStream{};
}

void URuntimeMeshBlueprintFunctions::EmptyTriangles(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 Slack) {
}

void URuntimeMeshBlueprintFunctions::EmptyTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Slack) {
}

void URuntimeMeshBlueprintFunctions::EmptyTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Slack) {
}

void URuntimeMeshBlueprintFunctions::EmptyPositions(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 Slack) {
}

void URuntimeMeshBlueprintFunctions::EmptyColors(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 Slack) {
}

void URuntimeMeshBlueprintFunctions::EmptyCollisionVertices(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 Slack) {
}

void URuntimeMeshBlueprintFunctions::EmptyCollisionTriangles(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 Slack) {
}

void URuntimeMeshBlueprintFunctions::EmptyCollisionTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Slack) {
}

void URuntimeMeshBlueprintFunctions::EmptyCollisionMaterialIndices(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 Slack) {
}

FRuntimeMeshRenderableMeshData URuntimeMeshBlueprintFunctions::CreateRenderableMeshData(bool bWantsHighPrecisionTangents, bool bWantsHighPrecisionTexCoords, uint8 NewNumTexCoords, bool bWants32BitIndices) {
    return FRuntimeMeshRenderableMeshData{};
}

void URuntimeMeshBlueprintFunctions::AppendTriangles(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, const FRuntimeMeshTriangleStream& InOther) {
}

void URuntimeMeshBlueprintFunctions::AppendTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, const FRuntimeMeshVertexTexCoordStream& InOther) {
}

void URuntimeMeshBlueprintFunctions::AppendTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, const FRuntimeMeshVertexTangentStream& InOther) {
}

void URuntimeMeshBlueprintFunctions::AppendPositions(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, const FRuntimeMeshVertexPositionStream& InOther) {
}

void URuntimeMeshBlueprintFunctions::AppendColors(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, const FRuntimeMeshVertexColorStream& InOther) {
}

void URuntimeMeshBlueprintFunctions::AddTriangle(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 NewIndexA, int32 NewIndexB, int32 NewIndexC) {
}

void URuntimeMeshBlueprintFunctions::AddTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutIndex, FVector2D InTexCoord, int32 ChannelId) {
}

void URuntimeMeshBlueprintFunctions::AddTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, FVector InTangentX, FVector InTangentY, FVector InTangentZ, int32& OutIndex) {
}

void URuntimeMeshBlueprintFunctions::AddPosition(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, FVector InPosition, int32& OutIndex) {
}

void URuntimeMeshBlueprintFunctions::AddNormalAndTangent(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, FVector InNormal, FVector InTangent, int32& OutIndex) {
}

void URuntimeMeshBlueprintFunctions::AddIndex(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 NewIndex, int32& OutIndex) {
}

void URuntimeMeshBlueprintFunctions::AddColor(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, FLinearColor InColor, int32& OutIndex) {
}

void URuntimeMeshBlueprintFunctions::AddCollisionVertex(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, FVector InVertex, int32& OutIndex) {
}

void URuntimeMeshBlueprintFunctions::AddCollisionTriangle(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 NewIndexA, int32 NewIndexB, int32 NewIndexC, int32& OutTriangleIndex) {
}

void URuntimeMeshBlueprintFunctions::AddCollisionTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, FVector2D InTexCoord, int32& OutIndex) {
}

void URuntimeMeshBlueprintFunctions::AddCollisionSphere(FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionSphere NewSphere) {
}

void URuntimeMeshBlueprintFunctions::AddCollisionMaterialIndex(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 NewIndex, int32& OutIndex) {
}

void URuntimeMeshBlueprintFunctions::AddCollisionConvex(FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionConvexMesh NewConvex) {
}

void URuntimeMeshBlueprintFunctions::AddCollisionCapsule(FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionCapsule NewCapsule) {
}

void URuntimeMeshBlueprintFunctions::AddCollisionBox(FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionBox NewBox) {
}

URuntimeMeshBlueprintFunctions::URuntimeMeshBlueprintFunctions() {
}

