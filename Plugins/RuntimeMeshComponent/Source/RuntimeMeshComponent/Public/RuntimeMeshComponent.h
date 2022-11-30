#pragma once
#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "Interfaces/Interface_CollisionDataProvider.h"
#include "RuntimeMeshCollisionHitInfo.h"
#include "ERuntimeMeshMobility.h"
#include "RuntimeMeshMaterialSlot.h"
#include "RuntimeMeshComponent.generated.h"

class URuntimeMesh;
class UMaterialInterface;
class URuntimeMeshProvider;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RUNTIMEMESHCOMPONENT_API URuntimeMeshComponent : public UMeshComponent, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeMesh* RuntimeMeshReference;
    
public:
    URuntimeMeshComponent();
    UFUNCTION(BlueprintCallable)
    void SetupMaterialSlot(int32 MaterialSlot, FName SlotName, UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetRuntimeMeshMobility(ERuntimeMeshMobility NewMobility);
    
    UFUNCTION(BlueprintCallable)
    void SetRuntimeMesh(URuntimeMesh* NewMesh);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(URuntimeMeshProvider* Provider);
    
    UFUNCTION(BlueprintCallable)
    ERuntimeMeshMobility GetRuntimeMeshMobility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URuntimeMesh* GetRuntimeMesh() const;
    
    UFUNCTION(BlueprintCallable)
    URuntimeMeshProvider* GetProvider();
    
    UFUNCTION(BlueprintCallable)
    URuntimeMesh* GetOrCreateRuntimeMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRuntimeMeshMaterialSlot> GetMaterialSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRuntimeMeshCollisionHitInfo GetHitSource(int32 FaceIndex) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

