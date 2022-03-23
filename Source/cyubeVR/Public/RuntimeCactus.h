#pragma once
#include "CoreMinimal.h"
#include "ETreeType.h"
#include "ReceiveLightActor.h"
#include "RuntimeCactus.generated.h"

class UStaticMeshComponent;

UCLASS()
class CYUBEVR_API ARuntimeCactus : public AReceiveLightActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SMC;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETreeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool damaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyed;
    
    ARuntimeCactus();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetType(ETreeType NewType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetToPoolBP();
    
};

