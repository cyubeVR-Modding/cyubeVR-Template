#pragma once
#include "CoreMinimal.h"
#include "DragonData_PhysicsParentRelationship.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_PhysicsParentRelationship {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName child_bone_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName parent_bone_name;
    
    DRAGONIKPLUGIN_API FDragonData_PhysicsParentRelationship();
};

