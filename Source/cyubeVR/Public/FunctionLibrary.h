#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FunctionLibrary.generated.h"

UCLASS(Blueprintable)
class CYUBEVR_API UFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static FVector RandVectorRange(float Size);
    
};

