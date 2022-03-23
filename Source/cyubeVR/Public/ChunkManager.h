#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMeshObjectType.h"
#include "EBlockTypeBP.h"
#include "ModifiedBlockActorToSpawn.h"
#include "SideBP.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ERotation.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETreeType.h"
#include "BlockInfoBP.h"
#include "ETreeClass.h"
#include "UObject/NoExportTypes.h"
#include "EItemClass.h"
#include "ChunkAboutBP.h"
#include "EBiome.h"
#include "ChunkManager.generated.h"

class ATreeManager;
class UParticleSystem;
class AModifiedBlockActor;
class UMaterialParameterCollection;
class ABlockItem;
class USoundBase;
class AInventory;
class ADeathBeacon;
class ADirectionalLight;
class AMeshObject;
class AAudioManager;
class AWeatherManager;
class UDataTable;
class UStaticMesh;
class UMaterialInterface;
class ADraftUnlockingPaper;

UCLASS()
class CYUBEVR_API AChunkManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceKnucklesControls;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<ABlockItem*> BlockItemPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InitialLoadFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ViewDistanceByINI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoAnything;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DevMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DevModeLoadWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BenchmarkDevMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 N_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 N_Octaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float N_Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float N_Lacunarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float N_Gain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float N_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 N_Interp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 N_FracType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 N_Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DeerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* RabbitClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* MonitorLizardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* GeckoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* TorchClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* TorchStandingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* TorchRespawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DeathBeaconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* BlockItemBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* TreeBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CactusBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DesertGrassBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* LogBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ModifiedBlockActorBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* FogParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TreeEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CustomAudioComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* EasterEggClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SphereActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATreeManager* TreeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* WorldTrackingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* NavMeshBoundsVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBlockTypeBP, EBlockTypeBP> ItemToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBlockTypeBP, int32> AmountToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBlockTypeBP, USoundBase*> MiningHitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBlockTypeBP, USoundBase*> MiningEndSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBlockTypeBP, USoundBase*> BlockSpawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBlockTypeBP, UClass*> MeshObjectsTypeToClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkyIsDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RecordingDevMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* FogParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerNeedsPositionUpdateAfterLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventory* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADirectionalLight* Sun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAudioManager* AudioManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWeatherManager* WeatherManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TableMiningDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TableMiningAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TableMiningParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TableMiningParticleHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TableMiningSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TableHitSoundHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TableHitSoundLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBlockTypeBP> RecipeUnlockOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* FoliageGrassMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* FoliageLeavesMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BirdMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ChunkMatRegular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ChunkMatGlass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ChunkMatWaterRegular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* GrassMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MeshObjectPreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ChunkMatLODRegular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ChunkMatLODFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ChunkMatLODWRegular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ChunkMatLODWRegularFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ChunkMatLODWFade;
    
    AChunkManager();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSkyEvent(float NewTimeOfDay);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLightValueForActorImmediateGT(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void UnlockedDraftNew(ADraftUnlockingPaper* UnlockedActor);
    
    UFUNCTION(BlueprintCallable)
    void TestFunction();
    
    UFUNCTION(BlueprintCallable)
    TArray<AModifiedBlockActor*> SpawnModifiedBlockActorsAndInit(const TArray<FModifiedBlockActorToSpawn>& SpawnInfos, EBlockTypeBP ToolType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ADraftUnlockingPaper* SpawnDraftUnlocker(FVector Location, EBlockTypeBP Type);
    
    UFUNCTION(BlueprintCallable)
    ADeathBeacon* SpawnDeathBeacon(FVector WorldLocation, bool FirstSpawn);
    
    UFUNCTION(BlueprintCallable)
    void SpawnBlockItem(EBlockTypeBP Type, int32 UniqueId, FVector WorldLocation, FRotator WorldRotation);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldCharacterFall(FVector FloorLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDevRecordingMode();
    
    UFUNCTION(BlueprintCallable)
    void SetBlockItemsNeedToOverlapHand(bool bNeedToOverlap);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTreeAtLocation(const FVector WorldLocation, ETreeType Type, AActor* Tree, bool& Valid);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDeathBeaconAtLocation(FVector WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBlockFinal(FBlockInfoBP BlockInfo, bool& AboveRemoved, FVector& AboveLocation, EBlockTypeBP& Type);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBlockAtLocation(const FVector Location, EBlockTypeBP& Type, int32& UniqueId, bool& Valid, FBlockInfoBP& BlockInfo, AModifiedBlockActor*& ExistingModifiedBlockActor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllBirds();
    
    UFUNCTION(BlueprintCallable)
    void RegisterMeshObject(EBlockTypeBP Type, AMeshObject* MeshObject, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector RealWorldToAbsoluteWorldInt(FVector RealWorld);
    
    UFUNCTION(BlueprintCallable)
    void PrintToLogBP(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MovePlayerToStartLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void MovePlayerToRespawnLocation(FVector CameraOffset, bool& FoundRespawnTorch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingForNewOrigin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTorchType(EBlockTypeBP Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsToolCausingAreaDamage(EBlockTypeBP Type, bool& AreaDamage);
    
    UFUNCTION(BlueprintCallable)
    bool IsRespawnTorchActive(FVector WorldLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecipeUnlocked(EBlockTypeBP Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFoliageType(EBlockTypeBP Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsFirstWorldLoad(bool& _DevMode, bool& _DevModeLoadWorld);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDyeType(EBlockTypeBP Type);
    
    UFUNCTION(BlueprintCallable)
    void HitBlockWithArrow(const FVector Location, EBlockTypeBP& HitType, bool& Valid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HaveUnlockedAllRecipes();
    
    UFUNCTION(BlueprintCallable)
    void GetWorldSomething();
    
    UFUNCTION(BlueprintCallable)
    static void GetTreeClass(ETreeType Type, ETreeClass& ItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBlockTypeBP GetTorchForDye(EBlockTypeBP Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FColor GetTorchColor(EBlockTypeBP Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTextureIndexStatic(const EBlockTypeBP Type, int32 UniqueId, SideBP Side, float& Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTextureIndex(const EBlockTypeBP Type, int32 UniqueId, SideBP Side, float& Index);
    
    UFUNCTION(BlueprintCallable)
    void GetNewBlockItem(FTransform NewTransform, ABlockItem*& NewBlockItem, bool ActivatePhysics);
    
    UFUNCTION(BlueprintCallable)
    USoundBase* GetMiningSoundForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    UParticleSystem* GetMiningParticleHoldForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    UParticleSystem* GetMiningParticleForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    void GetMiningDamageForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result, float& Damage);
    
    UFUNCTION(BlueprintCallable)
    void GetMiningAmountForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result, float& AmountFloat, int32& AmountRound);
    
    UFUNCTION(BlueprintCallable)
    static void GetMeshObjectType(EBlockTypeBP Type, EMeshObjectType& MeshObjectType);
    
    UFUNCTION(BlueprintCallable)
    static void GetItemClass(EBlockTypeBP Type, EItemClass& ItemClass, bool& CanExistAsItem);
    
    UFUNCTION(BlueprintCallable)
    USoundBase* GetHitSoundForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool HardHit, bool& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBlockTypeBP GetDyeForFlower(EBlockTypeBP Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDevModeBP(bool& _DevMode, bool& _DevModeLoadWorld);
    
    UFUNCTION(BlueprintCallable)
    void GetChunkWorldFormatAtLocation(const FVector& Location, int32& ChunkWorldFormat, int32& ChunkID);
    
    UFUNCTION(BlueprintCallable)
    void GetBlockBelowPlayer(FVector CameraLocation, EBlockTypeBP& BlockType);
    
    UFUNCTION(BlueprintCallable)
    void GetBlockAtLocation(FVector Location, EBlockTypeBP& Type, int32& UniqueId, FChunkAboutBP& Chunk);
    
    UFUNCTION(BlueprintCallable)
    void GetBiomeAtLocation(FVector Location, EBiome& BiomeType, FChunkAboutBP& Chunk);
    
    UFUNCTION(BlueprintCallable)
    FIntVector GetAbsolutePlayerCameraLocation();
    
    UFUNCTION(BlueprintCallable)
    static void FindExistingWorldData(TArray<FString>& Names, TArray<int32>& Seeds, bool& success);
    
    UFUNCTION(BlueprintCallable)
    float FindDistanceToClosestBlock(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void EndWorld();
    
    UFUNCTION(BlueprintCallable)
    bool DoesRespawnTorchExist(int32& Amount);
    
    UFUNCTION(BlueprintCallable)
    bool DidAlreadyCollectEasterEggAtLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void DestroyBlockItem(ABlockItem* BlockItem, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteWorld(const FString& WorldName);
    
    UFUNCTION(BlueprintCallable)
    void DeleteAllFreeCrystals();
    
    UFUNCTION(BlueprintCallable)
    void DamageBlockAtLocation(const FVector Location, const float Damage, EBlockTypeBP& Type, int32& UniqueId, bool& Valid, bool& NeedSpawnBlockActor, AModifiedBlockActor*& ExistingModifiedBlockActor, FBlockInfoBP& BlockInfo);
    
    UFUNCTION(BlueprintCallable)
    void CollectEasterEggAtLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    float CheckLoadingPercentage();
    
    UFUNCTION(BlueprintCallable)
    void CheckItemNotPartOfBlockItemPool(const ABlockItem* BlockItem);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTorchColorAtLocation(FVector Location, EBlockTypeBP NewTorchType);
    
    UFUNCTION(BlueprintCallable)
    void CanStandAtLocation(FVector Location, bool& CanStand);
    
    UFUNCTION(BlueprintCallable)
    void CanSmoothLocoToLocation(FVector Location, bool& CanStand);
    
    UFUNCTION(BlueprintCallable)
    void CanMoveBlockAtLocation(FVector Location, bool& CanMove);
    
    UFUNCTION(BlueprintCallable)
    bool CanModifyChunkAt(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void CanBuildAtLocation(FVector Location, bool NoSolidIsFine, bool& CanBuild);
    
    UFUNCTION(BlueprintCallable)
    void BlockHealthyAgain(FBlockInfoBP BlockInfo);
    
    UFUNCTION(BlueprintCallable)
    void AreaDamageAtLocation(const FVector Location, const float Damage, EBlockTypeBP ToolType, TArray<FModifiedBlockActorToSpawn>& ModifiedBlockActorsToSpawn);
    
    UFUNCTION(BlueprintCallable)
    void AddWorldOrigin(FIntVector Location);
    
    UFUNCTION(BlueprintCallable)
    AMeshObject* AddMeshObjectAtLocation(EBlockTypeBP Type, UClass* Class, FTransform WorldTransform, bool& success);
    
    UFUNCTION(BlueprintCallable)
    void AddBlockAtLocation(EBlockTypeBP Type, int32 UniqueId, FVector Location, ERotation Rotation, float DuplicationAmount, bool& success, EBlockTypeBP& PlacedOn);
    
    UFUNCTION(BlueprintCallable)
    void ActivateRespawnTorch(FVector WorldLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector AbsoluteWorldToRealWorld(FIntVector AbsoluteWorld);
    
};

