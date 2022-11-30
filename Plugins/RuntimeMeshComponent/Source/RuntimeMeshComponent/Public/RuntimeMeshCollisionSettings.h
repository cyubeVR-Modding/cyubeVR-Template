#pragma once
#include "CoreMinimal.h"
#include "ERuntimeMeshCollisionCookingMode.h"
#include "RuntimeMeshCollisionConvexMesh.h"
#include "RuntimeMeshCollisionSphere.h"
#include "RuntimeMeshCollisionCapsule.h"
#include "RuntimeMeshCollisionBox.h"
#include "RuntimeMeshCollisionSettings.generated.h"

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshCollisionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseComplexAsSimple;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAsyncCooking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERuntimeMeshCollisionCookingMode CookingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeMeshCollisionConvexMesh> ConvexElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeMeshCollisionSphere> Spheres;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeMeshCollisionBox> Boxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeMeshCollisionCapsule> Capsules;
    
    FRuntimeMeshCollisionSettings();
};

