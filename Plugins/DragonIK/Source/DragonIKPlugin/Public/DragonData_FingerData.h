#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DragonData_FingerData.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_FingerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Finger_Bone_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Trace_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Trace_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Is_Finger_Backward;
    
    DRAGONIKPLUGIN_API FDragonData_FingerData();
};

