#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "LivClipPlane.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class LIV_API ULivClipPlane : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ClipPlaneMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ClipPlaneDebugMaterial;
    
    ULivClipPlane();
    UFUNCTION(BlueprintCallable)
    void SetDebugEnabled(bool bDebugEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugEnabled() const;
    
};

