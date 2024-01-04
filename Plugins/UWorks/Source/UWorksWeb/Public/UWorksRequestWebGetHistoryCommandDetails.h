#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "GetHistoryCommandDetailsDelegateDelegate.h"
#include "GetHistoryCommandDetailsMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebGetHistoryCommandDetails.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetHistoryCommandDetails : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetHistoryCommandDetailsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetHistoryCommandDetailsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetHistoryCommandDetails();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& Command, const FString& ContextID, const FString& Arguments);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

