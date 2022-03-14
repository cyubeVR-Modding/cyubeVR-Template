#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "FunctionLibrary.generated.h"

UCLASS(BlueprintType)
class CYUBEVR_API UFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static FVector RandVectorRange(float Size);
    
};

