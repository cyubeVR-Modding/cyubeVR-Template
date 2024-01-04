#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Interfaces/Interface_CollisionDataProvider.h"
#include "RuntimeMeshAsyncBodySetupData.h"
#include "RuntimeMeshCollisionHitInfo.h"
#include "RuntimeMeshCollisionSourceSectionInfo.h"
#include "RuntimeMeshCollisionUpdatedDelegateDelegate.h"
#include "RuntimeMeshMaterialSlot.h"
#include "RuntimeMeshProviderTargetInterface.h"
#include "RuntimeMesh.generated.h"

class UBodySetup;
class URuntimeMeshProvider;

UCLASS(Blueprintable)
class RUNTIMEMESHCOMPONENT_API URuntimeMesh : public URuntimeMeshProviderTargetInterface, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeMeshProvider* MeshProviderPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeMeshCollisionSourceSectionInfo> CollisionSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeMeshAsyncBodySetupData> AsyncBodySetupQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeMeshMaterialSlot> MaterialSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> SlotNameLookup;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

