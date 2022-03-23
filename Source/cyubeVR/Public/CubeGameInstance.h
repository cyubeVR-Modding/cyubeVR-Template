#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BenchmarkResults.h"
#include "CubeGameInstance.generated.h"

class UTextureRenderTarget2D;
class USoundBase;
class UTexture2D;
class UAudioComponent;
class UCustomBlockManager;
class UMaterialParameterCollection;
class UTexture2DArray;

UCLASS(NonTransient)
class CYUBEVR_API UCubeGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool LoadExistingWorld;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LoadingScreenMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* LoadingScreenMusicComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomBlockManager* CBM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoLaterCBMInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AccurateSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2DArray* TextureArrayMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2DArray* TextureArrayNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2DArray* TextureArraySnowMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2DArray* TextureArrayEmissive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EmptyNormalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EmptyEmissiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TestTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* LUT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MPC;
    
    UCubeGameInstance();
    UFUNCTION(BlueprintCallable)
    void UpdateTextureArrays();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMPC(float Value);
    
    UFUNCTION(BlueprintCallable)
    void UpdateArraySize(UTexture2DArray* ArrayToResize, int32 NumSlices);
    
    UFUNCTION(BlueprintCallable)
    void TestCopyTextureArray(UTexture2DArray* TextureArray);
    
    UFUNCTION(BlueprintCallable)
    void TestCopyTexture2(UTexture2D* Texture, UTexture2D* TextureNew);
    
    UFUNCTION(BlueprintCallable)
    void TestCopyTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    void StopLoadingVideo();
    
    UFUNCTION(BlueprintCallable)
    void StopLoadingScreenMusic();
    
    UFUNCTION(BlueprintCallable)
    void StartLoadingScreenMusic();
    
    UFUNCTION(BlueprintCallable)
    void SetupWorldLoad(bool LoadExistingWorld_, const FString& WorldName_, const FString& NewSeed_, TArray<FString> WorldNames, TArray<int32> WorldSeeds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RenderCustomBlockLUT();
    
    UFUNCTION(BlueprintCallable)
    void LaterCBMInit();
    
    UFUNCTION(BlueprintCallable)
    void GetBenchmarkResults(FBenchmarkResults& Results, bool& Valid);
    
    UFUNCTION(BlueprintCallable)
    void CopyTextureToArraySlice(UTexture2DArray* DestArray, int32 DestSlice, UTexture2D* SourceTexture);
    
    UFUNCTION(BlueprintCallable)
    void AddTextureToTextureArray(UTexture2DArray* TargetArray, UTexture2DArray* SourceArray);
    
};

