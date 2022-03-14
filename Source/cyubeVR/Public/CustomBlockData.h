#pragma once
#include "CoreMinimal.h"
#include "CustomBlockData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCustomBlockData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureAll;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureSides;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureUpDown;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureUp;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureDown;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureLeft;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureRight;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureFront;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureBack;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Snow_TextureAll;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Snow_TextureSides;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Snow_TextureUpDown;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Snow_TextureUp;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Snow_TextureDown;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Snow_TextureLeft;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Snow_TextureRight;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Snow_TextureFront;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Snow_TextureBack;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Normal_TextureAll;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Normal_TextureSides;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Normal_TextureUpDown;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Normal_TextureUp;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Normal_TextureDown;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Normal_TextureLeft;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Normal_TextureRight;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Normal_TextureFront;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Normal_TextureBack;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Emissive_TextureAll;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Emissive_TextureSides;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Emissive_TextureUpDown;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Emissive_TextureUp;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Emissive_TextureDown;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Emissive_TextureLeft;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Emissive_TextureRight;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Emissive_TextureFront;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Emissive_TextureBack;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* RecipePreviewTexture;
    
    CYUBEVR_API FCustomBlockData();
};

