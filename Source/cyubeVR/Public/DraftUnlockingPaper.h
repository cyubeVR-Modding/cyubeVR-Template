#pragma once
#include "CoreMinimal.h"
#include "EBlockTypeBP.h"
#include "GameFramework/Actor.h"
#include "DraftUnlockingPaper.generated.h"

UCLASS()
class CYUBEVR_API ADraftUnlockingPaper : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockTypeBP Type;
    
    ADraftUnlockingPaper();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartDissolve(bool bWithType);
    
};

