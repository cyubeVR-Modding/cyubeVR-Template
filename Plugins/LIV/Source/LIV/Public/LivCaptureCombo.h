#pragma once
#include "CoreMinimal.h"
#include "LivCaptureBase.h"
#include "LivCaptureCombo.generated.h"

class UTextureRenderTarget2D;
class USceneCaptureComponent2D;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIV_API ULivCaptureCombo : public ULivCaptureBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* BackgroundRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ForegroundRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ForegroundOutputRenderTarget;
    
    ULivCaptureCombo();
};

