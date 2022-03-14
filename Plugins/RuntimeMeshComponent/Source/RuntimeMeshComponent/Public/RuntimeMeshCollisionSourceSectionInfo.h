#pragma once
#include "CoreMinimal.h"
#include "ERuntimeMeshCollisionFaceSourceType.h"
#include "RuntimeMeshCollisionSourceSectionInfo.generated.h"

class URuntimeMeshProvider;

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshCollisionSourceSectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URuntimeMeshProvider> SourceProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERuntimeMeshCollisionFaceSourceType SourceType;
    
    FRuntimeMeshCollisionSourceSectionInfo();
};

