#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBlockTypeBP.h"
#include "DraftUnlockingPaper.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class CYUBEVR_API ADraftUnlockingPaper : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockTypeBP Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* ComponentForOverlap;
    
    ADraftUnlockingPaper(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartDissolve(bool bWithType);
    
};

