#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomBlockData.h"
#include "EBlockTypeBP.h"
#include "CustomBlockManager.generated.h"

class UTexture2D;
class UTexture2DArray;

UCLASS(Blueprintable)
class CYUBEVR_API UCustomBlockManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture2D*> CustomTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture2D*> CustomTexturesSnowMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture2D*> CustomTexturesNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture2D*> CustomTexturesEmissive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomBlockData> AllCustomBlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EmptyNormalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EmptyEmissiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCustomBlockUniqueIDToDrop(int32 UniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomBlockAllowMove(int32 UniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomBlockAllowCrystalPlacement(int32 UniqueId);
    
    UFUNCTION(BlueprintCallable)
    static void CopyTextureToArraySlice(UTexture2DArray* DestArray, int32 DestSlice, UTexture2D* SourceTexture);
    
};

