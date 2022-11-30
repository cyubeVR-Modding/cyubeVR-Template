#pragma once
#include "CoreMinimal.h"
#include "LivCaptureBase.h"
#include "LivCaptureSingle.generated.h"

class UTextureRenderTarget2D;
class ULivCustomClipPlane;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIV_API ULivCaptureSingle : public ULivCaptureBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULivCustomClipPlane* CameraClipPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULivCustomClipPlane* FloorClipPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* BackgroundOutputRenderTarget;
    
    ULivCaptureSingle();
};

