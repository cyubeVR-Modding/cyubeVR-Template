#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EVRRotationQuantization.h"
#include "EVRVectorQuantization.h"
#include "UObject/NoExportTypes.h"
#include "BPVRComponentPosRep.generated.h"

USTRUCT(BlueprintType)
struct FBPVRComponentPosRep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EVRVectorQuantization QuantizationLevel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EVRRotationQuantization RotationQuantizationLevel;
    
    CYUBEVR_API FBPVRComponentPosRep();
};

