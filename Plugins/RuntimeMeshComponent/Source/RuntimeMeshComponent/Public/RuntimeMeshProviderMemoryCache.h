#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshProviderPassthrough.h"
#include "RuntimeMeshProviderMemoryCache.generated.h"

UCLASS(Blueprintable)
class RUNTIMEMESHCOMPONENT_API URuntimeMeshProviderMemoryCache : public URuntimeMeshProviderPassthrough {
    GENERATED_BODY()
public:
    URuntimeMeshProviderMemoryCache();

    UFUNCTION(BlueprintCallable)
    void ClearCache();
    
};

