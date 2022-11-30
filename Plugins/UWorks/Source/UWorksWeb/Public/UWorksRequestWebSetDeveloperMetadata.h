#pragma once
#include "CoreMinimal.h"
#include "SetDeveloperMetadataDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "SetDeveloperMetadataMinimalDelegateDelegate.h"
#include "UWorksPublishedFileID.h"
#include "UWorksRequestWebSetDeveloperMetadata.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebSetDeveloperMetadata : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetDeveloperMetadataDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetDeveloperMetadataMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSetDeveloperMetadata();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, const FString& MetaData);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

