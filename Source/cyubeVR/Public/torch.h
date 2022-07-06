#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBlockTypeBP.h"
#include "UObject/NoExportTypes.h"
#include "ERotation.h"
#include "torch.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class CYUBEVR_API Atorch : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* P_LOD0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* P_2_LOD0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* P_LOD1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERotation Rotation;
    
    Atorch();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetColor(FColor Color_, EBlockTypeBP Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActive(bool Active);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DetachFromChunk();
    
};

