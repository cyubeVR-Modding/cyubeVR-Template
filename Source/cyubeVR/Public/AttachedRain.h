#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AttachedRain.generated.h"

class USceneCaptureComponent;
class UAudioComponent;

UCLASS(Blueprintable)
class CYUBEVR_API AAttachedRain : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTemporary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent* SceneCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAudioComponent*> RainAudioComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowsX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowsY;
    
    AAttachedRain();
    UFUNCTION(BlueprintCallable)
    void UpdateAudioLocations();
    
};

