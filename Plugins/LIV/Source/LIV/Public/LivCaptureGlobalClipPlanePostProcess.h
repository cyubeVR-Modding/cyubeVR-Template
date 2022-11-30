#pragma once
#include "CoreMinimal.h"
#include "LivCaptureBase.h"
#include "LivCaptureGlobalClipPlanePostProcess.generated.h"

class UTextureRenderTarget2D;
class USceneCaptureComponent2D;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIV_API ULivCaptureGlobalClipPlanePostProcess : public ULivCaptureBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* PostProcessedBackgroundRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* PostProcessedForegroundRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ForegroundInverseOpacityRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ForegroundOutputRenderTarget;
    
    ULivCaptureGlobalClipPlanePostProcess();
};

