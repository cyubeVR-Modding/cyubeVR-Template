#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ModdingFunctionLibrary.generated.h"

class AInventory;
class UObject;

UCLASS(BlueprintType)
class CYUBEVR_API UModdingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModdingFunctionLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static bool WriteStringToFileInModFolder(const FString& ModName, const FString& Filename, const FString& StringToWrite);
    
    UFUNCTION(BlueprintCallable)
    static FString ReadStringFromFileInModFolder(const FString& ModName, const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AInventory* GetInventoryReference(const UObject* WorldContextObject);
    
};

