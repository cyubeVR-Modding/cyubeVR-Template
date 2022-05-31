#pragma once
#include "CoreMinimal.h"
#include "GetPublishedFileDetailsMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetPublishedFileDetailsDelegateDelegate.h"
#include "UWorksRequestWebGetPublishedFileDetails.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetPublishedFileDetails : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPublishedFileDetailsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPublishedFileDetailsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPublishedFileDetails();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 ItemCount, TArray<int32> PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

