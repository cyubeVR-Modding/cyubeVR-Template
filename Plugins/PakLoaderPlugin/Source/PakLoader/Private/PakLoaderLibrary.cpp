#include "PakLoaderLibrary.h"

class USoundBase;
class UTexture2D;
class UStaticMesh;
class UMaterialInstanceConstant;
class USkeletalMesh;
class UObject;
class UAnimSequence;
class UMaterial;

void UPakLoaderLibrary::UnRegisterMountPoint(const FString& RootPath, const FString& ContentPath) {
}

bool UPakLoaderLibrary::UnmountPakFile(const FString& PakFilename) {
    return false;
}

bool UPakLoaderLibrary::TryConvertFilenameToLongPackageName(const FString& Filename, FString& PackageName) {
    return false;
}

FString UPakLoaderLibrary::SHA1SUM(const FString& Filename) {
    return TEXT("");
}

void UPakLoaderLibrary::RuntimeLog(const FString& Text) {
}

void UPakLoaderLibrary::RegisterMountPoint(const FString& RootPath, const FString& ContentPath) {
}

bool UPakLoaderLibrary::RegisterEncryptionKey(const FString& Guid, const FString& AesKey) {
    return false;
}

FString UPakLoaderLibrary::ProjectPersistentDownloadDir() {
    return TEXT("");
}

bool UPakLoaderLibrary::MountPakFileEasy(const FString& PakFilename) {
    return false;
}

bool UPakLoaderLibrary::MountPakFile(const FString& PakFilename, const FString& MountPath) {
    return false;
}

void UPakLoaderLibrary::LoadPakAssetRegistryFile(const FString& AssetRegistryFile) {
}

bool UPakLoaderLibrary::IsValidPakFile(const FString& PakFilename, int64& PakSize) {
    return false;
}

bool UPakLoaderLibrary::IsPackagedBuild() {
    return false;
}

FString UPakLoaderLibrary::GetShortName(const FString& LongName) {
    return TEXT("");
}

FString UPakLoaderLibrary::GetProjectName() {
    return TEXT("");
}

UTexture2D* UPakLoaderLibrary::GetPakFileTexture2D(const FString& Filename) {
    return NULL;
}

bool UPakLoaderLibrary::GetPakFileText(const FString& Filename, FString& String) {
    return false;
}

UStaticMesh* UPakLoaderLibrary::GetPakFileStaticMesh(const FString& Filename) {
    return NULL;
}

USoundBase* UPakLoaderLibrary::GetPakFileSound(const FString& Filename) {
    return NULL;
}

USkeletalMesh* UPakLoaderLibrary::GetPakFileSkeletalMesh(const FString& Filename) {
    return NULL;
}

UObject* UPakLoaderLibrary::GetPakFileObject(const FString& Filename) {
    return NULL;
}

UMaterialInstanceConstant* UPakLoaderLibrary::GetPakFileMaterialInstanceConstant(const FString& Filename) {
    return NULL;
}

UMaterial* UPakLoaderLibrary::GetPakFileMaterial(const FString& Filename) {
    return NULL;
}

UClass* UPakLoaderLibrary::GetPakFileClass(const FString& Filename) {
    return NULL;
}

UAnimSequence* UPakLoaderLibrary::GetPakFileAnimSequence(const FString& Filename) {
    return NULL;
}

TArray<FString> UPakLoaderLibrary::GetMountedPakFilenames() {
    return TArray<FString>();
}

TArray<FString> UPakLoaderLibrary::GetFilesInPakDirectory(const FString& PakDirectory, bool bRecursively) {
    return TArray<FString>();
}

TArray<FString> UPakLoaderLibrary::GetFilesInPak(const FString& PakFilename, bool bUAssetOnly) {
    return TArray<FString>();
}

void UPakLoaderLibrary::EnableRuntimeLog(bool bEnable, const FString& NewLogPath) {
}

bool UPakLoaderLibrary::DoesPakDirectoryExist(const FString& PakDirectory) {
    return false;
}

UPakLoaderLibrary::UPakLoaderLibrary() {
}

