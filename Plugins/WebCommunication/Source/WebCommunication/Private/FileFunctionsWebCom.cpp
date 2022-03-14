#include "FileFunctionsWebCom.h"

void UFileFunctionsWebCom::writeStringToFile(EFileFunctionsWebComDirectoryType DirectoryType, const FString& Data, const FString& FilePath, bool& success) {
}

void UFileFunctionsWebCom::writeBytesToFile(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath, TArray<uint8> Bytes, bool& success) {
}

void UFileFunctionsWebCom::setTimeStamp(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath, FDateTime DateTime) {
}

bool UFileFunctionsWebCom::setReadOnly(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath, bool bNewReadOnlyValue) {
    return false;
}

void UFileFunctionsWebCom::readStringFromFile(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath, bool& success, FString& Data) {
}

TArray<uint8> UFileFunctionsWebCom::readBytesFromFile(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath, bool& success) {
    return TArray<uint8>();
}

bool UFileFunctionsWebCom::moveFile(EFileFunctionsWebComDirectoryType directoryTypeTo, const FString& filePathTo, EFileFunctionsWebComDirectoryType directoryTypeFrom, const FString& filePathFrom) {
    return false;
}

bool UFileFunctionsWebCom::isReadOnly(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath) {
    return false;
}

FDateTime UFileFunctionsWebCom::getTimeStamp(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath) {
    return FDateTime{};
}

void UFileFunctionsWebCom::getMD5FromFile(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath, bool& success, FString& MD5) {
}

FString UFileFunctionsWebCom::getFilenameOnDisk(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath) {
    return TEXT("");
}

FDateTime UFileFunctionsWebCom::getAccessTimeStamp(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath) {
    return FDateTime{};
}

void UFileFunctionsWebCom::fileToBase64String(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath, bool& success, FString& base64String, FString& Filename) {
}

int64 UFileFunctionsWebCom::fileSize(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath) {
    return 0;
}

bool UFileFunctionsWebCom::FileExists(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath) {
    return false;
}

bool UFileFunctionsWebCom::directoryExists(EFileFunctionsWebComDirectoryType DirectoryType, const FString& Path) {
    return false;
}

bool UFileFunctionsWebCom::deleteFile(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath) {
    return false;
}

bool UFileFunctionsWebCom::deleteDirectory(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath) {
    return false;
}

bool UFileFunctionsWebCom::createDirectory(EFileFunctionsWebComDirectoryType DirectoryType, const FString& Path) {
    return false;
}

void UFileFunctionsWebCom::bytesToBase64String(TArray<uint8> Bytes, FString& base64String) {
}

TArray<uint8> UFileFunctionsWebCom::base64StringToBytes(EFileFunctionsWebComDirectoryType DirectoryType, const FString& base64String, bool& success) {
    return TArray<uint8>();
}

void UFileFunctionsWebCom::addBytesToFile(EFileFunctionsWebComDirectoryType DirectoryType, const FString& FilePath, TArray<uint8> Bytes, bool& success) {
}

UFileFunctionsWebCom::UFileFunctionsWebCom() {
}

