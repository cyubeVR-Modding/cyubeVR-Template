#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBlockTypeBP.h"
#include "ReceiveLightActor.h"
#include "BlockItem.generated.h"

class ABlockItem;
class AChunkManager;
class UBoxComponent;
class UMaterialInstanceDynamic;
class UNiagaraComponent;
class UParticleSystemComponent;
class UStaticMeshComponent;
class UTextRenderComponent;

UCLASS(Blueprintable)
class CYUBEVR_API ABlockItem : public AReceiveLightActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockTypeBP BlockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor CrystalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastRechargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeltAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockTypeBP CurrentResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABlockItem*> AttachedItemsC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextRenderComponent*> TextAmounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsChestItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpecialCosmeticItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CrystalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ChargingParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Debug_LastPhysicsEnableFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Debug_LastPhysicsEnableFromTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SphereOverlapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SphereNiagaraSystem;
    
    ABlockItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void WriteLastRecipeToDisk();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateItemType(EBlockTypeBP NewType, int32 NewUniqueID, AChunkManager* ChunkManager);
    
    UFUNCTION(BlueprintCallable)
    void SetSpheresEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugLastPhysicsEnable(const FString& Reason);
    
    UFUNCTION(BlueprintCallable)
    void SetCrystalProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetToPoolBP();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveFromOverlap();
    
    UFUNCTION(BlueprintCallable)
    float GetHealthReduceOnFire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FullyChargedNow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FullUpdate(int32 Amount, EBlockTypeBP NewType, int32 NewUniqueID, bool DirectFromLoad);
    
    UFUNCTION(BlueprintCallable)
    void DestroyToPool(const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable)
    void CheckRemove(ABlockItem* RemovedItem, TArray<ABlockItem*>& NeedRemoveToo, bool& AllowRemove);
    
    UFUNCTION(BlueprintCallable)
    void CheckItems(bool& success, EBlockTypeBP& Result, int32& Amount, int32& OutUniqueID);
    
    UFUNCTION(BlueprintCallable)
    bool CanBeLitOnFire();
    
    UFUNCTION(BlueprintCallable)
    void AllowRelease(bool& Allow);
    
};

