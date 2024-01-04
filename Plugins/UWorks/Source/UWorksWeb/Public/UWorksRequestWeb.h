#pragma once
#include "CoreMinimal.h"
#include "UWorksRequest.h"
#include "UWorksRequestWeb.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWeb : public UUWorksRequest {
    GENERATED_BODY()
public:
    UUWorksRequestWeb();

    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable)
    FString GetStatus();
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

