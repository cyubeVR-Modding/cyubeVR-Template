#pragma once
#include "CoreMinimal.h"
#include "UWorksPublishedFileID.h"
#include "UWorksRequestWeb.h"
#include "UpdateTagsDelegateDelegate.h"
#include "UpdateTagsMinimalDelegateDelegate.h"
#include "UWorksRequestWebUpdateTags.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebUpdateTags : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateTagsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateTagsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebUpdateTags();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, TArray<FString> AddTags, TArray<FString> RemoveTags);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

