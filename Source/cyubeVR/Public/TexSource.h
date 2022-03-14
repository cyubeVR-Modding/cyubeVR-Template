#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture.h"
#include "TexSource.generated.h"

USTRUCT()
struct FTexSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeX;
    
    UPROPERTY(VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeY;
    
    UPROPERTY(VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSlices;
    
    UPROPERTY(VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMips;
    
    UPROPERTY(VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool bGuidIsHash;
    
    UPROPERTY(VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextureSourceFormat> Format;
    
public:
    CYUBEVR_API FTexSource();
};

