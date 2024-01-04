#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "DragonData_StickySocketStruct.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_StickySocketStruct {
    GENERATED_BODY()
public:
	//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneSocketTarget> sticky_socket_array;
    
    DRAGONIKPLUGIN_API FDragonData_StickySocketStruct();
};

