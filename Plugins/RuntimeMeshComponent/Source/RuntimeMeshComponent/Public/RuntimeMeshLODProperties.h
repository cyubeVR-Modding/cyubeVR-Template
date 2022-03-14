#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshLODProperties.generated.h"

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshLODProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanGetSectionsIndependently;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanGetAllSectionsAtOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldMergeStaticSectionBuffers;
    
    FRuntimeMeshLODProperties();
};

