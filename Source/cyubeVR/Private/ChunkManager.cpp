#include "ChunkManager.h"
#include "Components/SceneComponent.h"

AChunkManager::AChunkManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ForceKnucklesControls = false;
    this->WalkingSpeedOverdrive = false;
    this->SucceededAllObjectives = false;
    this->SucceededAllEasyObjectives = false;
    this->InitialLoadFinished = false;
    this->ViewDistanceByINI = 20;
    this->DoAnything = true;
    this->DevMode = false;
    this->DevModeLoadWorld = false;
    this->DevModePregenerate = false;
    this->BenchmarkDevMode = false;
    this->N_Type = 5;
    this->N_Octaves = 6;
    this->N_Frequency = 0.02f;
    this->N_Lacunarity = 2.00f;
    this->N_Gain = 0.50f;
    this->N_Scale = 1.00f;
    this->N_Interp = 2;
    this->N_FracType = 0;
    this->N_Seed = 1337;
    this->DeerClass = NULL;
    this->RabbitClass = NULL;
    this->MonitorLizardClass = NULL;
    this->GeckoClass = NULL;
    this->TorchClass = NULL;
    this->TorchStandingClass = NULL;
    this->TorchRespawnClass = NULL;
    this->DeathBeaconClass = NULL;
    this->BlockItemBPClass = NULL;
    this->TreeBPClass = NULL;
    this->CactusBPClass = NULL;
    this->DesertGrassBPClass = NULL;
    this->LogBPClass = NULL;
    this->ModifiedBlockActorBPClass = NULL;
    this->FogParameters = NULL;
    this->TreeEmitter = NULL;
    this->CustomAudioComponentClass = NULL;
    this->EasterEggClass = NULL;
    this->SphereActor = NULL;
    this->TreeManager = NULL;
    this->WorldTrackingActor = NULL;
    this->NavMeshBoundsVolume = NULL;
    this->SkyTime = 0.00f;
    this->SkyIsDay = true;
    this->DayCounter = 0;
    this->RecordingDevMode = false;
    this->FogParameter = NULL;
    this->PlayerNeedsPositionUpdateAfterLoad = true;
    this->Inventory = NULL;
    this->Sun = NULL;
    this->AudioManager = NULL;
    this->WeatherManager = NULL;
    this->ViewDistanceLUT = NULL;
    this->TableMiningDamage = NULL;
    this->TableMiningAmount = NULL;
    this->TableMiningParticle = NULL;
    this->TableMiningParticleHold = NULL;
    this->TableMiningSound = NULL;
    this->TableHitSoundHard = NULL;
    this->TableHitSoundLight = NULL;
    this->FoliageGrassMesh = NULL;
    this->FoliageLeavesMesh = NULL;
    this->BirdMesh = NULL;
    this->ChunkMatRegular = NULL;
    this->ChunkMatRegularPS5 = NULL;
    this->ChunkMatGlass = NULL;
    this->ChunkMatWaterRegular = NULL;
    this->GrassMaterial = NULL;
    this->MeshObjectPreviewMaterial = NULL;
    this->ChunkMatLODRegular = NULL;
    this->ChunkMatLODFade = NULL;
    this->ChunkMatLODWRegular = NULL;
    this->ChunkMatLODWRegularFar = NULL;
    this->ChunkMatLODWFade = NULL;
}

void AChunkManager::UpdateSkyEvent_Implementation(float NewTimeOfDay) {
}

void AChunkManager::UpdateLightValueForActorImmediateGT(AActor* Actor) {
}

void AChunkManager::UpdateHandLocationVariables(FVector HandLocationLeft_, FVector HandLocationRight_, FVector IndexFingerTipLocationLeft_, FVector IndexFingerTipLocationRight_) {
}

void AChunkManager::UnlockedDraftNew(ADraftUnlockingPaper* UnlockedActor) {
}

void AChunkManager::TestFunction() {
}

void AChunkManager::TeleportedPlayer() {
}

void AChunkManager::SpawnNewBlockItem_Implementation(EBlockTypeBP Type, int32 UniqueId, FTransform Transform, int32 Amount, bool bDoFadeScale, FColor CrystalColor, float CrystalChargeState, bool bActivatePhysics) {
}

TArray<AModifiedBlockActor*> AChunkManager::SpawnModifiedBlockActorsAndInit(const TArray<FModifiedBlockActorToSpawn>& SpawnInfos, EBlockTypeBP ToolType) {
    return TArray<AModifiedBlockActor*>();
}

void AChunkManager::SpawnHintText_Implementation(const FVector& LocalLocation, const FString& Text, const float& Duration, const FVector& SizeMultiplier, const float& SizeMultiplierVertical, const float& FontSizeMultiplier, const FUID& UID) {
}

void AChunkManager::SpawnedHintText(AActor* NewHintText, const FUID& UID) {
}

ADraftUnlockingPaper* AChunkManager::SpawnDraftUnlocker_Implementation(FVector Location, EBlockTypeBP Type) {
    return NULL;
}

ADeathBeacon* AChunkManager::SpawnDeathBeacon(FVector WorldLocation, bool FirstSpawn) {
    return NULL;
}

void AChunkManager::SpawnBPModActor_Implementation(const FTransform& Transform, const FString& ModName, const FString& ActorName) {
}

void AChunkManager::SpawnBlockItem(EBlockTypeBP Type, int32 UniqueId, FVector WorldLocation, FRotator WorldRotation) {
}

bool AChunkManager::ShouldCharacterFall(FVector FloorLocation) {
    return false;
}

void AChunkManager::SetDevRecordingMode_Implementation() {
}

void AChunkManager::SetBlockItemsNeedToOverlapHand(bool bNeedToOverlap, bool bBucketActive) {
}

void AChunkManager::RemoveTreeAtLocation(const FVector WorldLocation, ETreeType Type, AActor* Tree, bool& Valid) {
}

void AChunkManager::RemoveLoadingScreenSoon() {
}

void AChunkManager::RemoveDeathBeaconAtLocation(FVector WorldLocation) {
}

void AChunkManager::RemoveBlockFinal(FBlockInfoBP BlockInfo, bool& AboveRemoved, FVector& AboveLocation, EBlockTypeBP& Type) {
}

void AChunkManager::RemoveBlockAtLocation(const FVector Location, EBlockTypeBP& Type, int32& UniqueId, bool& Valid, FBlockInfoBP& BlockInfo, AModifiedBlockActor*& ExistingModifiedBlockActor) {
}

void AChunkManager::RemoveAllBirds() {
}

void AChunkManager::RegisterMeshObject(EBlockTypeBP Type, AMeshObject* MeshObject, bool& success) {
}

FIntVector AChunkManager::RealWorldToAbsoluteWorldInt(FVector RealWorld) {
    return FIntVector{};
}

void AChunkManager::PrintToLogBP(const FString& Text) {
}

bool AChunkManager::ObjectiveSucceededEvent_Implementation(const FString& ObjectiveUniqueName) {
    return false;
}

void AChunkManager::ObjectiveSucceeded(const FString& ObjectiveUniqueName) {
}

bool AChunkManager::MovePlayerToStartLocation_Implementation(FVector Location) {
    return false;
}

void AChunkManager::MovePlayerToRespawnLocation(FVector CameraOffset, bool& FoundRespawnTorch) {
}

bool AChunkManager::IsWaitingForNewOrigin() {
    return false;
}

bool AChunkManager::IsTorchType(EBlockTypeBP Type) {
    return false;
}

void AChunkManager::IsToolCausingAreaDamage(EBlockTypeBP Type, bool& AreaDamage) {
}

bool AChunkManager::IsRespawnTorchActive(FVector WorldLocation) {
    return false;
}

bool AChunkManager::IsRecipeUnlocked(EBlockTypeBP Type) {
    return false;
}

bool AChunkManager::IsObjectiveSucceeded(const FString& ObjectiveUniqueName) {
    return false;
}

bool AChunkManager::IsFoliageType(EBlockTypeBP Type) {
    return false;
}

void AChunkManager::IsFirstWorldLoad(bool& _DevMode, bool& _DevModeLoadWorld) {
}

bool AChunkManager::IsDyeType(EBlockTypeBP Type) {
    return false;
}

bool AChunkManager::IsCloakedTorchType(EBlockTypeBP Type) {
    return false;
}

bool AChunkManager::IsAreaFullyLoaded(FVector Location) {
    return false;
}

void AChunkManager::InitializeVoxelAPI() {
}

void AChunkManager::IncrementDay() {
}

void AChunkManager::HitBlockWithArrow(const FVector Location, EBlockTypeBP& HitType, bool& Valid) {
}

void AChunkManager::HintTextDespawning(const FUID& HintText) {
}

void AChunkManager::HaveUnlockedAllRecipes_Implementation() {
}

void AChunkManager::GetWorldSomething() {
}

void AChunkManager::GetTreeClass(ETreeType Type, ETreeClass& ItemClass) {
}

EBlockTypeBP AChunkManager::GetTorchForDye(EBlockTypeBP OldTorchType, EBlockTypeBP DyeType) {
    return EBlockTypeBP::Stone;
}

FColor AChunkManager::GetTorchColor(EBlockTypeBP Type) {
    return FColor{};
}

void AChunkManager::GetTextureIndexStatic(const EBlockTypeBP Type, int32 UniqueId, SideBP Side, float& Index) {
}

void AChunkManager::GetTextureIndex(const EBlockTypeBP Type, int32 UniqueId, SideBP Side, float& Index) {
}

FVector AChunkManager::GetPlayerCameraDirection() {
    return FVector{};
}

int32 AChunkManager::GetNumTotalLoadedChunks(int32& Regular, int32& LOD) {
    return 0;
}

void AChunkManager::GetNewBlockItem(FTransform NewTransform, ABlockItem*& NewBlockItem, bool ActivatePhysics) {
}

USoundBase* AChunkManager::GetMiningSoundForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result) {
    return NULL;
}

UParticleSystem* AChunkManager::GetMiningParticleHoldForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result) {
    return NULL;
}

UParticleSystem* AChunkManager::GetMiningParticleForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result) {
    return NULL;
}

void AChunkManager::GetMiningDamageForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result, float& Damage) {
}

void AChunkManager::GetMiningAmountForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result, float& AmountFloat, int32& AmountRound) {
}

void AChunkManager::GetMeshObjectType(EBlockTypeBP Type, EMeshObjectType& MeshObjectType) {
}

void AChunkManager::GetItemClass(EBlockTypeBP Type, EItemClass& ItemClass, bool& CanExistAsItem) {
}

bool AChunkManager::GetIsPlayerInCave() {
    return false;
}

USoundBase* AChunkManager::GetHitSoundForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool HardHit, bool& Result) {
    return NULL;
}

EFootstepType AChunkManager::GetFootstepSoundType(EBlockTypeBP BlockType, int32 UniqueId) {
    return EFootstepType::Stone;
}

EBlockTypeBP AChunkManager::GetDyeForFlower(EBlockTypeBP Type) {
    return EBlockTypeBP::Stone;
}

void AChunkManager::GetDevModeBP(bool& _DevMode, bool& _DevModeLoadWorld) {
}

void AChunkManager::GetChunkWorldFormatAtLocation(const FVector& Location, int32& ChunkWorldFormat, int32& ChunkID) {
}

void AChunkManager::GetBlockBelowPlayer(FVector CameraLocation, EBlockTypeBP& BlockType, int32& UniqueId) {
}

void AChunkManager::GetBlockAtLocation(FVector Location, EBlockTypeBP& Type, int32& UniqueId, FChunkAboutBP& Chunk) {
}

void AChunkManager::GetBiomeAtLocation(FVector Location, EBiome& BiomeType, FChunkAboutBP& Chunk) {
}

FIntVector AChunkManager::GetAbsolutePlayerCameraLocation() {
    return FIntVector{};
}

void AChunkManager::FindExistingWorldData(TArray<FString>& Names, TArray<int32>& Seeds, TArray<int32>& PregeneratedOut, bool& success) {
}

float AChunkManager::FindDistanceToClosestBlock(FVector Location, bool& IsValid) {
    return 0.0f;
}

void AChunkManager::EndWorld() {
}

bool AChunkManager::DoesRespawnTorchExist(int32& Amount) {
    return false;
}

bool AChunkManager::DidAlreadyCollectEasterEggAtLocation(FVector Location) {
    return false;
}

void AChunkManager::DestroyBlockItem(ABlockItem* BlockItem, const FString& FunctionName) {
}

bool AChunkManager::DeleteWorld(const FString& WorldName, int32 PregeneratedID) {
    return false;
}

void AChunkManager::DeleteAllFreeCrystals() {
}

void AChunkManager::DamageBlockAtLocation(const FVector Location, const float Damage, const EBlockTypeBP ToolType, EBlockTypeBP& Type, int32& UniqueId, bool& Valid, bool& NeedSpawnBlockActor, AModifiedBlockActor*& ExistingModifiedBlockActor, FBlockInfoBP& BlockInfo) {
}

void AChunkManager::CollectEasterEggAtLocation(FVector Location) {
}

float AChunkManager::CheckLoadingPercentage() {
    return 0.0f;
}

void AChunkManager::CheckItemNotPartOfBlockItemPool(const ABlockItem* BlockItem) {
}

void AChunkManager::ChangeTorchColorAtLocation(FVector Location, EBlockTypeBP NewTorchType) {
}

void AChunkManager::CanStandAtLocation(FVector Location, bool& CanStand) {
}

void AChunkManager::CanSmoothLocoToLocation(FVector Location, bool& CanStand) {
}

void AChunkManager::CanMoveBlockAtLocation(FVector Location, bool& CanMove) {
}

void AChunkManager::CanBuildAtLocation(FVector Location, bool NoSolidIsFine, bool& CanBuild) {
}

void AChunkManager::BlockMoveStarted(FVector Location, EBlockTypeBP Type, int32 UniqueId) {
}

void AChunkManager::BlockHealthyAgain(FBlockInfoBP BlockInfo) {
}

void AChunkManager::BlockAtLocationHitByTool(const FVector Location, const EBlockTypeBP ToolType, const EBlockTypeBP BlockType, const int32 UniqueId, const FVector ExactHitLocation, bool LeftHand) {
}

void AChunkManager::AreaDamageAtLocation(const FVector Location, const float Damage, EBlockTypeBP ToolType, TArray<FModifiedBlockActorToSpawn>& ModifiedBlockActorsToSpawn) {
}

void AChunkManager::AddWorldOrigin(FIntVector Location) {
}

void AChunkManager::AddWaitForTransferBackMBA(AModifiedBlockActor* MBA, FBlockInfoBP BlockInfo) {
}

AMeshObject* AChunkManager::AddMeshObjectAtLocation(EBlockTypeBP Type, UClass* Class, FTransform WorldTransform, bool& success) {
    return NULL;
}

void AChunkManager::AddBlockAtLocation(EBlockTypeBP Type, int32 UniqueId, FVector Location, ERotation Rotation, float DuplicationAmount, bool& success, EBlockTypeBP& PlacedOn, bool AfterMove) {
}

void AChunkManager::ActivateRespawnTorch(FVector WorldLocation) {
}

FVector AChunkManager::AbsoluteWorldToRealWorld(FIntVector AbsoluteWorld) {
    return FVector{};
}


