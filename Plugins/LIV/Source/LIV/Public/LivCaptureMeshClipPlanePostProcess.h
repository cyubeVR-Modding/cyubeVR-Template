#pragma once
#include "CoreMinimal.h"
#include "LivCaptureBase.h"
#include "LivCaptureMeshClipPlanePostProcess.generated.h"

class UTextureRenderTarget2D;
class USceneCaptureComponent2D;
class ULivClipPlane;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class LIV_API ULivCaptureMeshClipPlanePostProcess : public ULivCaptureBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULivClipPlane* CameraClipPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULivClipPlane* FloorClipPlane;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* PostProcessedSceneRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* BackgroundDepthRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ForegroundDepthRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* BackgroundOutputRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ForegroundOutputRenderTarget;
    
    ULivCaptureMeshClipPlanePostProcess();
};

