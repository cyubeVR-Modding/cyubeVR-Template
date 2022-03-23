#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshProviderTargetInterface.h"
#include "RuntimeMeshAsyncBodySetupData.h"
#include "Interfaces/Interface_CollisionDataProvider.h"
#include "RuntimeMeshMaterialSlot.h"
#include "RuntimeMeshCollisionUpdatedDelegateDelegate.h"
#include "RuntimeMeshCollisionSourceSectionInfo.h"
#include "UObject/NoExportTypes.h"
#include "RuntimeMeshCollisionHitInfo.h"
#include "RuntimeMesh.generated.h"

class URuntimeMeshProvider;
class UBodySetup;

UCLASS()
class RUNTIMEMESHCOMPONENT_API URuntimeMesh : public URuntimeMeshProviderTargetInterface, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    URuntimeMeshProvider* MeshProviderPtr;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeMeshCollisionSourceSectionInfo> CollisionSource;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeMeshAsyncBodySetupData> AsyncBodySetupQueue;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeMeshMaterialSlot> MaterialSlots;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> SlotNameLookup;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRuntimeMeshCollisionUpdatedDelegate CollisionUpdated;
    
    URuntimeMesh();
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(URuntimeMeshProvider* Provider);
    
    UFUNCTION(BlueprintCallable)
    URuntimeMeshProvider* GetProviderPtr();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBoxSphereBounds GetLocalBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRuntimeMeshCollisionHitInfo GetHitSource(int32 FaceIndex) const;
    
    UFUNCTION(BlueprintCallable)
    UBodySetup* GetBodySetup();
    
    
    // Fix for true pure virtual functions not being implemented
};

