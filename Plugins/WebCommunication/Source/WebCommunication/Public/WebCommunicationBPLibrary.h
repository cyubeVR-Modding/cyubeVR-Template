#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHTTPWebComFileUpload.h"
#include "EHTTPWebComFileUploadType.h"
#include "httpRequest.h"
#include "EHTTPWebComFileDownloadResumeType.h"
#include "EHTTPWebComFileBytesToFileActionType.h"
#include "WebCommunicationBPLibrary.generated.h"

class UWebCommunicationBPLibrary;

UCLASS(BlueprintType)
class WEBCOMMUNICATION_API UWebCommunicationBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FhttpRequestCompleteGoogleInfoDelegate, const FString&, Filename, const int64, fileSizeInBytes, const int32, statusCode, const FString&, downloadID, const FString&, requestID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FhttpRequestCompleteDelegate, const TArray<FString>&, Data, const int32, statusCode, const TArray<uint8>&, byteData, const FString&, requestID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FhttpFileUploadDelegate, const float, Size, const int32, bytesSent, const float, percentUpload, const FString&, requestID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FhttpFileProgressDelegate, const float, Size, const int32, bytesSent, const float, percentUpload, const int32, bytesReceived, const float, percentDownload);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FhttpFileDownloadDelegate, const float, Size, const float, megaBytesReceived, const float, percentDownload, const float, megaBit, const FString&, requestID);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FhttpRequestCompleteDelegate onhttpRequestCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FhttpRequestCompleteGoogleInfoDelegate onhttpRequestCompleteGoogleInfoDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FhttpFileProgressDelegate onhttpFileProgressDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FhttpFileDownloadDelegate onhttpFileDownloadDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FhttpFileUploadDelegate onhttpFileUploadDelegate;
    
    UWebCommunicationBPLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString urlEncodePure(const FString& urlParameter);
    
    UFUNCTION(BlueprintCallable)
    static FString urlEncode(const FString& urlParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 megabyteToByte(int32 mb);
    
    UFUNCTION(BlueprintCallable)
    static UWebCommunicationBPLibrary* httpRequestPOST(const FString& URL, const TArray<FString> POSTData, const FString& optionalRequestID, FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    static UWebCommunicationBPLibrary* httpRequestIndividual(const FString& URL, TMap<FString, FString> Header, const FString& verb, const FString& Content, const FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    static UWebCommunicationBPLibrary* httpRequestGET(const FString& URL, const FString& optionalRequestID, FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    static void httpRequestFileUpload(const FString& URL, EHTTPWebComFileUpload DirectoryType, const FString& ID, const FString& FilePath, EHTTPWebComFileUploadType uploadType, const FString& optionalRequestID, FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    void httpRequestCompleteGoogleInfoDelegate(const FString& Filename, const int64 fileSizeInBytes, const int32 statusCode, const FString& downloadID, const FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    void httpRequestCompleteDelegate(const TArray<FString>& Data, const int32 statusCode, const TArray<uint8>& byteData, const FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    void httpFileUploadDelegate(const float Size, const int32 bytesSent, const float percentUpload, const FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    void httpFileProgressDelegate(const float Size, const int32 bytesSent, const float percentUpload, const int32 bytesReceived, const float percentDownload);
    
    UFUNCTION(BlueprintCallable)
    void httpFileDownloadDelegate(const float Size, const float megaBytesReceived, const float percentDownload, const float megaBit, const FString& requestID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWebCommunicationBPLibrary* getWebCommunicationTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWebCommunicationBPLibrary* getTarget();
    
    UFUNCTION(BlueprintCallable)
    static void executeHttpRequests(TArray<FhttpRequest> httpRequests, UWebCommunicationBPLibrary*& WebCommunicationTarget);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> createPOSTData(const FString& ID, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void CreateHttpRequestPOST(TArray<FhttpRequest> otherHttpRequests, const FString& URL, TMap<FString, FString> POSTData, const FString& optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    static void CreateHttpRequestIndividual(TArray<FhttpRequest> otherHttpRequests, const FString& URL, TMap<FString, FString> Header, const FString& verb, const FString& Content, const FString& optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID, bool addContentLengthHeader);
    
    UFUNCTION(BlueprintCallable)
    static void CreateHttpRequestGoogleDriveFileInfo(TArray<FhttpRequest> otherHttpRequests, const FString& downloadID, const FString& optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    static void CreateHttpRequestGoogleDrive(TArray<FhttpRequest> otherHttpRequests, const FString& downloadID, const FString& optionalRequestID, int64 optionalFileSizeInByte, TArray<FhttpRequest>& httpRequests, FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    static void CreateHttpRequestGETLowRamDownload(TArray<FhttpRequest>& httpRequests, FString& requestID, TArray<FhttpRequest> otherHttpRequests, const FString& URL, EHTTPWebComFileDownloadResumeType ActionIfFileExists, EHTTPWebComFileUpload DirectoryType, const FString& filePathWithFileName, int32 FileSizeStepsInBytes, const FString& optionalRequestID);
    
    UFUNCTION(BlueprintCallable)
    static void CreateHttpRequestGETDownload(TArray<FhttpRequest>& httpRequests, FString& requestID, TArray<FhttpRequest> otherHttpRequests, const FString& URL, EHTTPWebComFileDownloadResumeType ActionIfFileExists, EHTTPWebComFileUpload DirectoryType, const FString& filePathWithFileName, const FString& optionalRequestID);
    
    UFUNCTION(BlueprintCallable)
    static void CreateHttpRequestGET(TArray<FhttpRequest> otherHttpRequests, const FString& URL, const FString& optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    static void CreateHttpRequestFileUploadPUT(TArray<FhttpRequest> otherHttpRequests, const FString& URL, EHTTPWebComFileUpload DirectoryType, const FString& FilePath, const FString& fileID, const FString& optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    static void CreateHttpRequestFileUploadPOST(TArray<FhttpRequest> otherHttpRequests, const FString& URL, EHTTPWebComFileUpload DirectoryType, const FString& FilePath, const FString& fileID, TMap<FString, FString> POSTData, const FString& optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    static void CreateHttpRequestAnonfiles(TArray<FhttpRequest> otherHttpRequests, const FString& URL, const FString& optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> createAndAppendPOSTData(const FString& ID, const FString& Value, TArray<FString> POSTData);
    
    UFUNCTION(BlueprintCallable)
    void cancelRequest(const FString& requestID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float byteToMegabyte(int32 byte);
    
    UFUNCTION(BlueprintCallable)
    static void byteDataToFile(EHTTPWebComFileBytesToFileActionType fileAction, TArray<uint8> byteData, EHTTPWebComFileUpload DirectoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static void addHTTPRequestHeader(const FString& ID, const FString& Value, bool removeAfterHTTPRequest);
    
};

