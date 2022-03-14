#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LivBlueprintFunctionLibrary.generated.h"

class UObject;
class UTextureRenderTarget2D;
class UTexture2D;

UCLASS(BlueprintType)
class LIV_API ULivBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULivBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRenderTargetMaxPixelAlphaValue(UObject* WorldContext, UTextureRenderTarget2D* TextureRenderTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRenderTargetMaxDepthValue(UObject* WorldContext, UTextureRenderTarget2D* TextureRenderTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxPixelAlphaValue(const UObject* WorldContext, UTexture2D* Texture);
    
};

