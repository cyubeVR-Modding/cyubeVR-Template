#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SurfaceNavPath.generated.h"

UCLASS(Blueprintable)
class SURFACENAVPLUGIN_API USurfaceNavPath : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Points;
    
    USurfaceNavPath();

};

