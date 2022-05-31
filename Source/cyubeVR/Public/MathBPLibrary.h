#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "MathBPLibrary.generated.h"

UCLASS(Blueprintable)
class CYUBEVR_API UMathBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMathBPLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GridVector(FVector InVector, float GridSize, FVector& ReturnVector);
    
};

