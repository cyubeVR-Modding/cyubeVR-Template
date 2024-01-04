#pragma once
#include "CoreMinimal.h"
#include "SocketDragonReference.generated.h"

USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FSocketDragonReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    FSocketDragonReference();
};

