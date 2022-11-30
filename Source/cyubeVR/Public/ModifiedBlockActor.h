#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBlockTypeBP.h"
#include "BlockInfoBP.h"
#include "ModifiedBlockActor.generated.h"

class UMaterialInstance;
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class AChunkManager;

UCLASS(Blueprintable)
class CYUBEVR_API AModifiedBlockActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasUsedForMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* GlassMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstanceForDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BlockMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AChunkManager* ChunkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockTypeBP BlockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlockInfoBP OriginalBlockInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsForMove;
    
    AModifiedBlockActor();
    UFUNCTION(BlueprintCallable)
    void UpdateMaterialInstanceValuesDefaultLighting();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMaterialInstanceValues();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDestructionAmount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetToPoolBP();
    
    UFUNCTION(BlueprintCallable)
    void ResetToPool();
    
    UFUNCTION(BlueprintCallable)
    void MarkDestroyed(bool WasFullyMined);
    
    UFUNCTION(BlueprintCallable)
    void MarkActiveAgain();
    
    UFUNCTION(BlueprintCallable)
    void InitializeMaterialInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DamageCPP(float Amount, EBlockTypeBP ToolType);
    
    UFUNCTION(BlueprintCallable)
    void ConvertToForMove();
    
    UFUNCTION(BlueprintCallable)
    bool CheckAllowSpawnItemsForBlock();
    
};

