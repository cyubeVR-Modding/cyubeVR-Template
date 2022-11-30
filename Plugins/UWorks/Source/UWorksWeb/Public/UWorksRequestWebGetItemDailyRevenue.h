#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetItemDailyRevenueDelegateDelegate.h"
#include "GetItemDailyRevenueMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetItemDailyRevenue.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetItemDailyRevenue : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetItemDailyRevenueDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetItemDailyRevenueMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetItemDailyRevenue();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& ItemId, int32 DateStart, int32 DateEnd);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

