#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshProviderPassthrough.h"
#include "RuntimeMeshProviderModifiers.generated.h"

class URuntimeMeshModifier;

UCLASS(Blueprintable)
class RUNTIMEMESHCOMPONENT_API URuntimeMeshProviderModifiers : public URuntimeMeshProviderPassthrough {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URuntimeMeshModifier*> Modifiers;
    
public:
    URuntimeMeshProviderModifiers();
    UFUNCTION(BlueprintCallable)
    void RemoveModifier(URuntimeMeshModifier* ModifierToRemove);
    
    UFUNCTION(BlueprintCallable)
    void AddModifier(URuntimeMeshModifier* NewModifier);
    
};

