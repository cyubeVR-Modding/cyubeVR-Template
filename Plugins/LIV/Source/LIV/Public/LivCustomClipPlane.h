#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "LivCustomClipPlane.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIV_API ULivCustomClipPlane : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ClipPlaneMaterial;
    
    ULivCustomClipPlane();
};

