#pragma once
#include "CoreMinimal.h"
#include "ELivSceneViewExtensionCaptureStage.generated.h"

UENUM(BlueprintType)
enum class ELivSceneViewExtensionCaptureStage : uint8 {
    PrePostProcess,
    AfterTonemap,
    AfterFXAA,
};

