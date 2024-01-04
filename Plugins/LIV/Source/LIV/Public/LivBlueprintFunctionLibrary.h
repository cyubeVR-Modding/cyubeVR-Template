#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/TextureRenderTarget2D.h"
#include "ELivEye.h"
#include "LivBlueprintFunctionLibrary.generated.h"

class UObject;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class LIV_API ULivBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULivBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void OffsetCameraPoseForEye(ELivEye Eye, const FVector& CameraLocation, const FRotator& CameraRotation, FVector& EyeLocation, FRotator& EyeRotation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTextureRenderTarget2D* CreateRenderTarget2D(UObject* WorldContextObject, int32 Width, int32 Height, bool bForceLinearGamma, FName Name, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, float TargetGamma);
    
};

