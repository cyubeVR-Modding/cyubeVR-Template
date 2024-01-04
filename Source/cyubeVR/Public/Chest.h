#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MeshObject.h"
#include "Chest.generated.h"

class AChestInternals;

UCLASS(Blueprintable)
class CYUBEVR_API AChest : public AMeshObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AChestInternals* ChestInternals;
    
    AChest(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UseActorCustomLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetChestRotation(FRotator Rot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetChestRotation();
    
    UFUNCTION(BlueprintCallable)
    FVector GetActorCustomLocation();
    
};

