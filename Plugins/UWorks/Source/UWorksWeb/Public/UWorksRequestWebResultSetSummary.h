#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "ResultSetSummaryDelegateDelegate.h"
#include "ResultSetSummaryMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebResultSetSummary.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebResultSetSummary : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FResultSetSummaryDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FResultSetSummaryMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebResultSetSummary();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

