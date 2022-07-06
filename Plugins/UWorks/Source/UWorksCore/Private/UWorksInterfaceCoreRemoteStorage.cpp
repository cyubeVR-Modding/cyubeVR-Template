#include "UWorksInterfaceCoreRemoteStorage.h"

class UUWorksInterfaceCoreRemoteStorage;
class UUWorksRequestCoreFileWriteAsync;
class UUWorksRequestCoreFileReadAsync;

bool UUWorksInterfaceCoreRemoteStorage::SetSyncPlatforms(const FString& File, EUWorksRemoteStoragePlatform RemoteStoragePlatform) {
    return false;
}

void UUWorksInterfaceCoreRemoteStorage::SetCloudEnabledForApp(bool bEnabled) {
}

bool UUWorksInterfaceCoreRemoteStorage::IsCloudEnabledForApp() {
    return false;
}

bool UUWorksInterfaceCoreRemoteStorage::IsCloudEnabledForAccount() {
    return false;
}

EUWorksRemoteStoragePlatform UUWorksInterfaceCoreRemoteStorage::GetSyncPlatforms(const FString& File) {
    return EUWorksRemoteStoragePlatform::Windows;
}

UUWorksInterfaceCoreRemoteStorage* UUWorksInterfaceCoreRemoteStorage::GetRemoteStorage() {
    return NULL;
}

bool UUWorksInterfaceCoreRemoteStorage::GetQuota(FString& TotalBytes, FString& AvailableBytes) {
    return false;
}

int32 UUWorksInterfaceCoreRemoteStorage::GetFileTimestamp(const FString& File) {
    return 0;
}

int32 UUWorksInterfaceCoreRemoteStorage::GetFileSize(const FString& File) {
    return 0;
}

FString UUWorksInterfaceCoreRemoteStorage::GetFileNameAndSize(int32 File, int32& fileSizeInBytes) {
    return TEXT("");
}

int32 UUWorksInterfaceCoreRemoteStorage::GetFileCount() {
    return 0;
}

bool UUWorksInterfaceCoreRemoteStorage::FileWriteStreamWriteChunk(FUWorksUGCFileWriteStreamHandle Handle, TArray<uint8> Buffer) {
    return false;
}

FUWorksUGCFileWriteStreamHandle UUWorksInterfaceCoreRemoteStorage::FileWriteStreamOpen(const FString& File) {
    return FUWorksUGCFileWriteStreamHandle{};
}

bool UUWorksInterfaceCoreRemoteStorage::FileWriteStreamClose(FUWorksUGCFileWriteStreamHandle Handle) {
    return false;
}

bool UUWorksInterfaceCoreRemoteStorage::FileWriteStreamCancel(FUWorksUGCFileWriteStreamHandle Handle) {
    return false;
}

void UUWorksInterfaceCoreRemoteStorage::FileWriteAsyncMinimal(const FFileWriteAsyncMinimalDelegate& Completed, const FString& File, TArray<uint8> Buffer) {
}

UUWorksRequestCoreFileWriteAsync* UUWorksInterfaceCoreRemoteStorage::FileWriteAsync() {
    return NULL;
}

bool UUWorksInterfaceCoreRemoteStorage::FileWrite(const FString& File, TArray<uint8> Buffer) {
    return false;
}

void UUWorksInterfaceCoreRemoteStorage::FileReadAsyncMinimal(const FFileReadAsyncMinimalDelegate& Completed, const FString& File, int32 Offset, int32 BytesToRead) {
}

UUWorksRequestCoreFileReadAsync* UUWorksInterfaceCoreRemoteStorage::FileReadAsync() {
    return NULL;
}

int32 UUWorksInterfaceCoreRemoteStorage::FileRead(const FString& File, TArray<uint8>& Buffer, int32 BufferSize) {
    return 0;
}

bool UUWorksInterfaceCoreRemoteStorage::FilePersisted(const FString& File) {
    return false;
}

bool UUWorksInterfaceCoreRemoteStorage::FileForget(const FString& File) {
    return false;
}

bool UUWorksInterfaceCoreRemoteStorage::FileExists(const FString& File) {
    return false;
}

bool UUWorksInterfaceCoreRemoteStorage::FileDelete(const FString& File) {
    return false;
}

UUWorksInterfaceCoreRemoteStorage::UUWorksInterfaceCoreRemoteStorage() {
}

