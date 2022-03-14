#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RuntimeMeshCollisionSphere.generated.h"

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshCollisionSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FRuntimeMeshCollisionSphere();
};

