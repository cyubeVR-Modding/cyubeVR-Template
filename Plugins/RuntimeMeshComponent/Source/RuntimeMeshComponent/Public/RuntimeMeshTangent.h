#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RuntimeMeshTangent.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeMeshTangent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TangentX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipTangentY;
    
    RUNTIMEMESHCOMPONENT_API FRuntimeMeshTangent();
};

