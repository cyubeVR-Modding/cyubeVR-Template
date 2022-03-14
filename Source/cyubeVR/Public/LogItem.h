#pragma once
#include "CoreMinimal.h"
#include "ReceiveLightActor.h"
#include "ETreeType.h"
#include "UObject/NoExportTypes.h"
#include "LogItem.generated.h"

class UMeshComponent;

UCLASS()
class CYUBEVR_API ALogItem : public AReceiveLightActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETreeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeCenterLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMeshComponent* Mesh;
    
    ALogItem();
    UFUNCTION(BlueprintCallable)
    bool UseActorCustomLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActive(ETreeType _Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetToPoolBP();
    
    UFUNCTION(BlueprintCallable)
    FVector GetActorCustomLocation();
    
};

