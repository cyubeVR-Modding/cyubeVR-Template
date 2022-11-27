#include "LivBlueprintFunctionLibrary.h"

class UTextureRenderTarget2D;
class UObject;

void ULivBlueprintFunctionLibrary::OffsetCameraPoseForEye(ELivEye Eye, const FVector& CameraLocation, const FRotator& CameraRotation, FVector& EyeLocation, FRotator& EyeRotation) {
}

UTextureRenderTarget2D* ULivBlueprintFunctionLibrary::CreateRenderTarget2D(UObject* WorldContextObject, int32 Width, int32 Height, bool bForceLinearGamma, FName Name, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, float TargetGamma) {
    return NULL;
}

ULivBlueprintFunctionLibrary::ULivBlueprintFunctionLibrary() {
}

