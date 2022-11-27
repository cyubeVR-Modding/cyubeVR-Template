#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceCore.h"
#include "EUWorksRemoteStoragePlatform.h"
#include "UWorksUGCFileWriteStreamHandle.h"
#include "FileWriteAsyncMinimalDelegateDelegate.h"
#include "FileReadAsyncMinimalDelegateDelegate.h"
#include "UWorksInterfaceCoreRemoteStorage.generated.h"

class UUWorksInterfaceCoreRemoteStorage;
class UUWorksRequestCoreFileWriteAsync;
class UUWorksRequestCoreFileReadAsync;

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksInterfaceCoreRemoteStorage : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UUWorksInterfaceCoreRemoteStorage();
    UFUNCTION(BlueprintCallable)
    bool SetSyncPlatforms(const FString& File, EUWorksRemoteStoragePlatform RemoteStoragePlatform);
    
    UFUNCTION(BlueprintCallable)
    void SetCloudEnabledForApp(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool IsCloudEnabledForApp();
    
    UFUNCTION(BlueprintCallable)
    bool IsCloudEnabledForAccount();
    
    UFUNCTION(BlueprintCallable)
    EUWorksRemoteStoragePlatform GetSyncPlatforms(const FString& File);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUWorksInterfaceCoreRemoteStorage* GetRemoteStorage();
    
    UFUNCTION(BlueprintCallable)
    bool GetQuota(FString& TotalBytes, FString& AvailableBytes);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFileTimestamp(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFileSize(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    FString GetFileNameAndSize(int32 File, int32& fileSizeInBytes);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFileCount();
    
    UFUNCTION(BlueprintCallable)
    bool FileWriteStreamWriteChunk(FUWorksUGCFileWriteStreamHandle Handle, TArray<uint8> Buffer);
    
    UFUNCTION(BlueprintCallable)
    FUWorksUGCFileWriteStreamHandle FileWriteStreamOpen(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    bool FileWriteStreamClose(FUWorksUGCFileWriteStreamHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    bool FileWriteStreamCancel(FUWorksUGCFileWriteStreamHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    void FileWriteAsyncMinimal(const FFileWriteAsyncMinimalDelegate& Completed, const FString& File, TArray<uint8> Buffer);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreFileWriteAsync* FileWriteAsync();
    
    UFUNCTION(BlueprintCallable)
    bool FileWrite(const FString& File, TArray<uint8> Buffer);
    
    UFUNCTION(BlueprintCallable)
    void FileReadAsyncMinimal(const FFileReadAsyncMinimalDelegate& Completed, const FString& File, int32 Offset, int32 BytesToRead);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreFileReadAsync* FileReadAsync();
    
    UFUNCTION(BlueprintCallable)
    int32 FileRead(const FString& File, TArray<uint8>& Buffer, int32 BufferSize);
    
    UFUNCTION(BlueprintCallable)
    bool FilePersisted(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    bool FileForget(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    bool FileExists(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    bool FileDelete(const FString& File);
    
};

