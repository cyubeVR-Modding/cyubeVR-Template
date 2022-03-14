#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshCollisionSourceSectionInfo.h"
#include "RuntimeMeshAsyncBodySetupData.generated.h"

class UBodySetup;

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshAsyncBodySetupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeMeshCollisionSourceSectionInfo> CollisionSources;
    
    FRuntimeMeshAsyncBodySetupData();
};

