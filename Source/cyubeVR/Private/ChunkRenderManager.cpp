#include "ChunkRenderManager.h"
#include "Components/SceneComponent.h"

AChunkRenderManager::AChunkRenderManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ChunkRenderManagerRootComponent"));
}


