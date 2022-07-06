#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "EItemClass.h"
#include "EBlockTypeBP.h"
#include "StorageItem.h"
#include "Storage.generated.h"

class AChestInternals;

UCLASS(Blueprintable)
class CYUBEVR_API AStorage : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStorageItem> items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> UniqueIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowShrinkOnLoad;
    
    AStorage();
    UFUNCTION(BlueprintCallable)
    bool TryToShrink();
    
    UFUNCTION(BlueprintCallable)
    static bool IsItemStackable(EBlockTypeBP Item);
    
    UFUNCTION(BlueprintCallable)
    static bool IsItemPlacable(EBlockTypeBP Item);
    
    UFUNCTION(BlueprintCallable)
    bool IsFullyEmpty();
    
    UFUNCTION(BlueprintCallable)
    static EItemClass GetItemClass(EBlockTypeBP Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountAtIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAmount(EBlockTypeBP Item, int32 UniqueId);
    
    UFUNCTION(BlueprintCallable)
    int32 FindFittingIndex(EBlockTypeBP ToAdd, int32 Amount, int32 UniqueId);
    
    UFUNCTION(BlueprintCallable)
    int32 FindAmountFree(EBlockTypeBP ToAdd, int32 UniqueId);
    
    UFUNCTION(BlueprintCallable)
    void AddItemToSlotFromOtherChest(int32 ToIndex, int32 FromChestIndex, EBlockTypeBP Type, AChestInternals* OtherChest, bool& success);
    
    UFUNCTION(BlueprintCallable)
    bool AddItem(int32& Index, EBlockTypeBP ToAdd, int32 UniqueId, FColor CrystalColor, float ChargeState);
    
};

