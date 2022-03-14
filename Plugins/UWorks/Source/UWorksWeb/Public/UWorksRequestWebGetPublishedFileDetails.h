#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetPublishedFileDetailsDelegateDelegate.h"
#include "GetPublishedFileDetailsMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetPublishedFileDetails.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetPublishedFileDetails : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPublishedFileDetailsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPublishedFileDetailsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPublishedFileDetails();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 ItemCount, TArray<int32> PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

