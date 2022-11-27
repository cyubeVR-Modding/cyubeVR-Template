#pragma once
#include "CoreMinimal.h"
#include "RankedByPublicationOrderDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "RankedByPublicationOrderMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebRankedByPublicationOrder.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebRankedByPublicationOrder : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankedByPublicationOrderDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankedByPublicationOrderMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRankedByPublicationOrder();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

