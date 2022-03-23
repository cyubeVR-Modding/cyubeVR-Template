#include "ModdingFunctionLibrary.h"

class UObject;
class AInventory;

bool UModdingFunctionLibrary::WriteStringToFileInModFolder(const FString& ModName, const FString& Filename, const FString& StringToWrite) {
    return false;
}

FString UModdingFunctionLibrary::ReadStringFromFileInModFolder(const FString& ModName, const FString& Filename) {
    return TEXT("");
}

AInventory* UModdingFunctionLibrary::GetInventoryReference(const UObject* WorldContextObject) {
    return NULL;
}

UModdingFunctionLibrary::UModdingFunctionLibrary() {
}

