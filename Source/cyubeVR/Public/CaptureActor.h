#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CaptureActor.generated.h"

class USceneCaptureComponent2D;

UCLASS(Blueprintable)
class CYUBEVR_API ACaptureActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeY;
    
    ACaptureActor();
    UFUNCTION(BlueprintCallable)
    void StartCapture();
    
    UFUNCTION(BlueprintCallable)
    void EndCapture();
    
};

