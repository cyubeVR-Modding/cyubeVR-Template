#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Storage.h"
#include "EBlockTypeBP.h"
#include "Inventory.generated.h"

class AChestInternals;
class AInventory;

UCLASS()
class CYUBEVR_API AInventory : public AStorage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> QuickBarItemIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> QuickBarItemsReal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBlockTypeBP> QuickBarTools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor BucketCrystalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BucketCrystalChargeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor BuildToolCrystalColorRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildToolCrystalChargeStateRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor BuildToolCrystalColorLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildToolCrystalChargeStateLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLootableInventory;
    
    AInventory();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateUIEvent();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBuildToolCrystalProperties(FColor BuildToolCrystalColor_, float BuildToolCrystalChargeState_, bool bIsRightHand);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBucketCrystalProperties(FColor BucketCrystalColor_, float BucketCrystalChargeState_);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(EBlockTypeBP ToRemove, int32 ToRemoveUniqueID, int32 RemoveAmount, bool& success, bool& NoMoreLeft);
    
    UFUNCTION(BlueprintCallable)
    void MoveOverPlayerInventoryToLootInventory(AInventory* LootInventory);
    
    UFUNCTION(BlueprintCallable)
    void MoveOverAllItemsFromOtherInventory(AInventory* FromInventory, bool& AnythingCollected);
    
    UFUNCTION(BlueprintCallable)
    void MoveOutside(int32 From, bool FromToolHolder);
    
    UFUNCTION(BlueprintCallable)
    void MoveInside(int32 From, EBlockTypeBP Type, int32 UniqueId, bool FromToolSlot);
    
    UFUNCTION(BlueprintCallable)
    void DropOnToolsQuickBar(bool FromToolBar, int32 From, int32 To, AInventory* FromInventory, EBlockTypeBP Type, bool& UpdateNeeded);
    
    UFUNCTION(BlueprintCallable)
    void DropOnDelete(int32 From, bool FromToolHolder, bool& success);
    
    UFUNCTION(BlueprintCallable)
    void Drop(bool FromToolBar, int32 From, int32 To, AInventory* FromInventory, EBlockTypeBP Type, bool& UpdateNeeded);
    
    UFUNCTION(BlueprintCallable)
    void AddItemFromChest(int32 FromChestIndex, AChestInternals* Chest, EBlockTypeBP Type, bool& success);
    
};

