#pragma once
#include "CoreMinimal.h"
#include "LivCaptureBase.h"
#include "LivCaptureGlobalClipPlanePostProcess.generated.h"

class UTextureRenderTarget2D;
class USceneCaptureComponent2D;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class LIV_API ULivCaptureGlobalClipPlanePostProcess : public ULivCaptureBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* PostProcessedBackgroundRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* PostProcessedForegroundRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ForegroundInverseOpacityRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ForegroundOutputRenderTarget;
    
    ULivCaptureGlobalClipPlanePostProcess();
};

