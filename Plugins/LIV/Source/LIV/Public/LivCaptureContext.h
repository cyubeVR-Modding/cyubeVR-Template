#pragma once
#include "CoreMinimal.h"
#include "LivCaptureContext.generated.h"

class UPrimitiveComponent;
class AActor;

USTRUCT(BlueprintType)
struct FLivCaptureContext {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, Transient)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<AActor>> HiddenActors;
    
    LIV_API FLivCaptureContext();
};

