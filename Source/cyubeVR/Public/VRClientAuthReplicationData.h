#pragma once
#include "CoreMinimal.h"
#include "VRClientAuthReplicationData.generated.h"

USTRUCT(BlueprintType)
struct FVRClientAuthReplicationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseClientAuthThrowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 UpdateRate;
    
    CYUBEVR_API FVRClientAuthReplicationData();
};

