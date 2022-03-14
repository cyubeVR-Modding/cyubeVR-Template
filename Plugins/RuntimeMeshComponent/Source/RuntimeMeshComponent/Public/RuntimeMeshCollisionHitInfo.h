#pragma once
#include "CoreMinimal.h"
#include "ERuntimeMeshCollisionFaceSourceType.h"
#include "RuntimeMeshCollisionHitInfo.generated.h"

class UMaterialInterface;
class URuntimeMeshProvider;

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshCollisionHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URuntimeMeshProvider> SourceProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERuntimeMeshCollisionFaceSourceType SourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FaceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    FRuntimeMeshCollisionHitInfo();
};

