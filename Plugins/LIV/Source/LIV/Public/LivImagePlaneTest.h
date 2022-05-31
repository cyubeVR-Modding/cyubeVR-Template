#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELivEye.h"
#include "UObject/NoExportTypes.h"
#include "LivImagePlaneTest.generated.h"

UCLASS(Blueprintable)
class ALivImagePlaneTest : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELivEye Eye;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RayStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RayEnd;
    
    ALivImagePlaneTest();
};

