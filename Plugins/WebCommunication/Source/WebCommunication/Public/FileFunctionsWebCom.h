#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EFileFunctionsWebComDirectoryType.h"
#include "FileFunctionsWebCom.generated.h"

UCLASS(BlueprintType)
class UFileFunctionsWebCom : public UObject {
    GENERATED_BODY()
public:
    UFileFunctionsWebCom();
    UFUNCTION(BlueprintCallable)
    static void writeStringToFile(EFileFunctionsWebComDirectoryType DirectoryType, const FString& Data, const FString& FilePath, bool& success);
    
    UFUNCTION(BlueprintCallable)
    static void writeBytesToFile(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath, TArray<uint8> Bytes, bool& success);
    
    UFUNCTION(BlueprintCallable)
    static void setTimeStamp(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath, FDateTime DateTime);
    
    UFUNCTION(BlueprintCallable)
    static bool setReadOnly(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath, bool bNewReadOnlyValue);
    
    UFUNCTION(BlueprintCallable)
    static void readStringFromFile(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath, bool& success, FString& Data);
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> readBytesFromFile(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath, bool& success);
    
    UFUNCTION(BlueprintCallable)
    static bool moveFile(EFileFunctionsWebComDirectoryType directoryTypeTo, const FString& filePathTo, EFileFunctionsWebComDirectoryType directoryTypeFrom, const FString& filePathFrom);
    
    UFUNCTION(BlueprintCallable)
    static bool isReadOnly(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static FDateTime getTimeStamp(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static void getMD5FromFile(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath, bool& success, FString& MD5);
    
    UFUNCTION(BlueprintCallable)
    static FString getFilenameOnDisk(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static FDateTime getAccessTimeStamp(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static void fileToBase64String(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath, bool& success, FString& base64String, FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static int64 fileSize(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static bool FileExists(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static bool directoryExists(EFileFunctionsWebComDirectoryType DirectoryType, const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static bool deleteFile(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static bool deleteDirectory(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static bool createDirectory(EFileFunctionsWebComDirectoryType DirectoryType, const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static void bytesToBase64String(TArray<uint8> Bytes, FString& base64String);
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> base64StringToBytes(EFileFunctionsWebComDirectoryType DirectoryType, const FString& base64String, bool& success);
    
    UFUNCTION(BlueprintCallable)
    static void addBytesToFile(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath, TArray<uint8> Bytes, bool& success);
    
};

