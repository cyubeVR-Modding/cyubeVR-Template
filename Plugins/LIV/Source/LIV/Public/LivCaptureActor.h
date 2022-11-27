#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LivCaptureActor.generated.h"

class USceneCaptureComponent2D;

UCLASS(Abstract, Blueprintable)
class LIV_API ALivCaptureActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* PrimaryCaptureComponent;
    
    ALivCaptureActor();
};

