#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "DragonData_PhysicsBoneStrip.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_PhysicsBoneStrip {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference Bone_Chain_Start;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference Bone_Chain_End;
    
    DRAGONIKPLUGIN_API FDragonData_PhysicsBoneStrip();
};

