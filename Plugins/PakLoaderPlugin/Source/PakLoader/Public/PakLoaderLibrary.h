#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PakLoaderLibrary.generated.h"

class UAnimSequence;
class UMaterial;
class UMaterialInstanceConstant;
class UObject;
class USkeletalMesh;
class USoundBase;
class UStaticMesh;
class UTexture2D;

UCLASS(Blueprintable)
class PAKLOADER_API UPakLoaderLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPakLoaderLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnRegisterMountPoint(const FString& RootPath, const FString& ContentPath);
    
    UFUNCTION(BlueprintCallable)
    static bool UnmountPakFile(const FString& PakFilename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TryConvertFilenameToLongPackageName(const FString& Filename, FString& PackageName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SHA1SUM(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static void RuntimeLog(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterMountPoint(const FString& RootPath, const FString& ContentPath);
    
    UFUNCTION(BlueprintCallable)
    static bool RegisterEncryptionKey(const FString& Guid, const FString& AesKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ProjectPersistentDownloadDir();
    
    UFUNCTION(BlueprintCallable)
    static bool MountPakFileEasy(const FString& PakFilename);
    
    UFUNCTION(BlueprintCallable)
    static bool MountPakFile(const FString& PakFilename, const FString& MountPath);
    
    UFUNCTION(BlueprintCallable)
    static void LoadPakAssetRegistryFile(const FString& AssetRegistryFile);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidPakFile(const FString& PakFilename, int64& PakSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPackagedBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetShortName(const FString& LongName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetPakFileTexture2D(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPakFileText(const FString& Filename, FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStaticMesh* GetPakFileStaticMesh(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USoundBase* GetPakFileSound(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMesh* GetPakFileSkeletalMesh(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetPakFileObject(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMaterialInstanceConstant* GetPakFileMaterialInstanceConstant(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMaterial* GetPakFileMaterial(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* GetPakFileClass(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAnimSequence* GetPakFileAnimSequence(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetMountedPakFilenames();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetFilesInPakDirectory(const FString& PakDirectory, bool bRecursively);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetFilesInPak(const FString& PakFilename, bool bUAssetOnly);
    
    UFUNCTION(BlueprintCallable)
    static void EnableRuntimeLog(bool bEnable, const FString& NewLogPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesPakDirectoryExist(const FString& PakDirectory);
    
};

