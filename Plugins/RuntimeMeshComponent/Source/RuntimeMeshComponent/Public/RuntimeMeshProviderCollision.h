#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshProviderPassthrough.h"
#include "RuntimeMeshRenderableCollisionData.h"
#include "RuntimeMeshCollisionSettings.h"
#include "RuntimeMeshCollisionData.h"
#include "RuntimeMeshProviderCollision.generated.h"

UCLASS()
class RUNTIMEMESHCOMPONENT_API URuntimeMeshProviderCollision : public URuntimeMeshProviderPassthrough {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 LODForMeshCollision;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<int32, FRuntimeMeshRenderableCollisionData> RenderableCollisionData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSet<int32> SectionsAffectingCollision;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRuntimeMeshCollisionSettings CollisionSettings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRuntimeMeshCollisionData CollisionMesh;
    
public:
    URuntimeMeshProviderCollision();
    UFUNCTION(BlueprintCallable)
    void SetRenderableSectionAffectsCollision(int32 SectionId, bool bCollisionEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderableLODForCollision(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionSettings(const FRuntimeMeshCollisionSettings& NewCollisionSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionMesh(const FRuntimeMeshCollisionData& NewCollisionMesh);
    
};

