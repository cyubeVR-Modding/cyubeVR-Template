#pragma once
#include "CoreMinimal.h"
#include "GetCollectionDetailsDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetCollectionDetailsMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetCollectionDetails.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetCollectionDetails : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetCollectionDetailsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetCollectionDetailsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetCollectionDetails();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 CollectionCount, TArray<int32> PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

