#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "Engine/Scene.h"
#include "LivPluginSettings.generated.h"

class ULivCaptureBase;

UCLASS(config = Engine, DefaultConfig)
class LIV_API ULivPluginSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULivCaptureBase> CaptureMethod;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PostProcessSettings;
    
    ULivPluginSettings();
};

