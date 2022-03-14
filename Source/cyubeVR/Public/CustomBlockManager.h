#pragma once
#include "CoreMinimal.h"
#include "EBlockTypeBP.h"
#include "UObject/Object.h"
#include "CustomBlockData.h"
#include "CustomBlockManager.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class CYUBEVR_API UCustomBlockManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FCustomBlockData> AllCustomBlocks;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* EmptyNormalTexture;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* EmptyEmissiveTexture;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSet<int32> ExistingIDs;
    
    UCustomBlockManager();
    UFUNCTION(BlueprintCallable)
    int32 GetTextureIndexForCustomBlock(int32 UniqueId, uint8 Side);
    
    UFUNCTION(BlueprintCallable)
    void GetSpecialBlockInfo(TMap<int32, float>& AnimationSpeed, int32& NumTextures);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlockTypeBP GetPropertyBlockForCustomBlock(int32 UniqueId);
    
    UFUNCTION(BlueprintCallable)
    FString GetNameOfCustomBlock(int32 UniqueId);
    
};

