#pragma once
#include "CoreMinimal.h"
#include "MeshObject.h"
#include "UObject/NoExportTypes.h"
#include "LootableInventory.generated.h"

class AInventory;

UCLASS(Blueprintable)
class CYUBEVR_API ALootableInventory : public AMeshObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventory* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SphereColor;
    
    ALootableInventory();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateVisuals();
    
};

