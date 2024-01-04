#include "ModdingFunctionLibrary.h"

UModdingFunctionLibrary::UModdingFunctionLibrary() {
}

bool UModdingFunctionLibrary::WriteStringToFileInModFolder(const FString& ModName, const FString& Filename, const FString& StringToWrite) {
    return false;
}

FString UModdingFunctionLibrary::ReadStringFromFileInModFolder(const FString& ModName, const FString& Filename) {
    return TEXT("");
}

void UModdingFunctionLibrary::GetModTutorials(TArray<FModTutorialEntry>& ModTutorials) {
}

AInventory* UModdingFunctionLibrary::GetInventoryReference(const UObject* WorldContextObject) {
    return NULL;
}

void UModdingFunctionLibrary::GetAllMods(bool OnlyLocal, bool OnlyWorkshop, TArray<FString>& Paths, TArray<bool>& ValidProperties, TArray<FString>& DisplayNames, TArray<FString>& InternalNames, TArray<FString>& PreviewImages) {
}


