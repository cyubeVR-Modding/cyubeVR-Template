#include "CustomBlockManager.h"

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

UCustomBlockManager::UCustomBlockManager() {
    this->EmptyNormalTexture = NULL;
    this->EmptyEmissiveTexture = NULL;
}

