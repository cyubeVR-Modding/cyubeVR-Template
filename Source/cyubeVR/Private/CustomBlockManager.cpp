#include "CustomBlockManager.h"

class UTexture2D;
class UTexture2DArray;

UTexture2D* UCustomBlockManager::LoadDDS(const FString& Filename, TEnumAsByte<EPixelFormat> PixelFormat, bool ConvertDXT5toDXT1) {
    return NULL;
}

int32 UCustomBlockManager::GetTextureIndexForCustomBlock(int32 UniqueId, uint8 Side) {
    return 0;
}

void UCustomBlockManager::GetSpecialBlockInfo(TMap<int32, float>& AnimationSpeed, int32& NumTextures) {
}

EBlockTypeBP UCustomBlockManager::GetPropertyBlockForCustomBlock(int32 UniqueId) {
    return EBlockTypeBP::Stone;
}

FString UCustomBlockManager::GetNameOfCustomBlock(int32 UniqueId) {
    return TEXT("");
}

void UCustomBlockManager::CopyTextureToArraySlice(UTexture2DArray* DestArray, int32 DestSlice, UTexture2D* SourceTexture) {
}

UCustomBlockManager::UCustomBlockManager() {
    this->EmptyNormalTexture = NULL;
    this->EmptyEmissiveTexture = NULL;
}

