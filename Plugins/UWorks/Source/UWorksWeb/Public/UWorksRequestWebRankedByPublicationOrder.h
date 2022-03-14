#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "RankedByPublicationOrderDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "RankedByPublicationOrderMinimalDelegateDelegate.h"
#include "UWorksRequestWebRankedByPublicationOrder.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebRankedByPublicationOrder : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRankedByPublicationOrderDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRankedByPublicationOrderMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRankedByPublicationOrder();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

