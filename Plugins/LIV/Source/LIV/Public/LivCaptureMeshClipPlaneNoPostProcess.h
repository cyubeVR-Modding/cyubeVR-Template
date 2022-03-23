#pragma once
#include "CoreMinimal.h"
#include "LivCaptureBase.h"
#include "LivCaptureMeshClipPlaneNoPostProcess.generated.h"

class ULivClipPlane;
class UTextureRenderTarget2D;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class LIV_API ULivCaptureMeshClipPlaneNoPostProcess : public ULivCaptureBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULivClipPlane* CameraClipPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULivClipPlane* FloorClipPlane;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* BackgroundRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ForegroundRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* BackgroundOutputRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ForegroundOutputRenderTarget;
    
    ULivCaptureMeshClipPlaneNoPostProcess();
};

