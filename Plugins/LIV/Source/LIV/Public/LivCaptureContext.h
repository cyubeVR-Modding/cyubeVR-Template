#pragma once
#include "CoreMinimal.h"
#include "LivCaptureContext.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FLivCaptureContext {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> HiddenActors;
    
    LIV_API FLivCaptureContext();
};

