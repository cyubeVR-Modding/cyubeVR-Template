#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ModTutorialEntry.h"
#include "ModdingFunctionLibrary.generated.h"

class AInventory;
class UObject;

UCLASS(Blueprintable)
class CYUBEVR_API UModdingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModdingFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static bool WriteStringToFileInModFolder(const FString& ModName, const FString& Filename, const FString& StringToWrite);
    
    UFUNCTION(BlueprintCallable)
    static FString ReadStringFromFileInModFolder(const FString& ModName, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static void GetModTutorials(TArray<FModTutorialEntry>& ModTutorials);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AInventory* GetInventoryReference(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllMods(bool OnlyLocal, bool OnlyWorkshop, TArray<FString>& Paths, TArray<bool>& ValidProperties, TArray<FString>& DisplayNames, TArray<FString>& InternalNames, TArray<FString>& PreviewImages);
    
};

