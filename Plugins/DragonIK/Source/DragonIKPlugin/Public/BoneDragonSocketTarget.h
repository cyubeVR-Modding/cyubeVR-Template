#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "SocketDragonReference.h"
#include "BoneDragonSocketTarget.generated.h"

USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FBoneDragonSocketTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSocket;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BoneReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocketDragonReference SocketReference;
    
    FBoneDragonSocketTarget();
};

