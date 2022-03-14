#pragma once
#include "CoreMinimal.h"
#include "LivCaptureBase.h"
#include "LivCaptureGlobalClipPlaneNoPostProcess.generated.h"

class UTextureRenderTarget2D;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class LIV_API ULivCaptureGlobalClipPlaneNoPostProcess : public ULivCaptureBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* BackgroundRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ForegroundRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ForegroundMaskedRenderTarget;
    
    ULivCaptureGlobalClipPlaneNoPostProcess();
};

