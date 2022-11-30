#pragma once
#include "CoreMinimal.h"
#include "ERuntimeMeshUpdateFrequency.h"
#include "RuntimeMeshSectionProperties.generated.h"

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshSectionProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERuntimeMeshUpdateFrequency UpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMainPassRenderable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCastsShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceOpaque;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHighPrecisionTangents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHighPrecisionTexCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumTexCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWants32BitIndices;
    
    FRuntimeMeshSectionProperties();
};

