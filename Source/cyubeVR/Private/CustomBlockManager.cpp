#include "CustomBlockManager.h"

UCustomBlockManager::UCustomBlockManager() {
    this->EmptyNormalTexture = NULL;
    this->EmptyEmissiveTexture = NULL;
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

int32 UCustomBlockManager::GetCustomBlockUniqueIDToDrop(int32 UniqueId) {
    return 0;
}

bool UCustomBlockManager::GetCustomBlockAllowMove(int32 UniqueId) {
    return false;
}

bool UCustomBlockManager::GetCustomBlockAllowCrystalPlacement(int32 UniqueId) {
    return false;
}

void UCustomBlockManager::CopyTextureToArraySlice(UTexture2DArray* DestArray, int32 DestSlice, UTexture2D* SourceTexture) {
}


