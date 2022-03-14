#include "LivBlueprintFunctionLibrary.h"

class UObject;
class UTextureRenderTarget2D;
class UTexture2D;

float ULivBlueprintFunctionLibrary::GetRenderTargetMaxPixelAlphaValue(UObject* WorldContext, UTextureRenderTarget2D* TextureRenderTarget) {
    return 0.0f;
}

float ULivBlueprintFunctionLibrary::GetRenderTargetMaxDepthValue(UObject* WorldContext, UTextureRenderTarget2D* TextureRenderTarget) {
    return 0.0f;
}

float ULivBlueprintFunctionLibrary::GetMaxPixelAlphaValue(const UObject* WorldContext, UTexture2D* Texture) {
    return 0.0f;
}

ULivBlueprintFunctionLibrary::ULivBlueprintFunctionLibrary() {
}

