#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "SetMemoDelegateDelegate.h"
#include "SetMemoMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebSetMemo.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebSetMemo : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetMemoDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetMemoMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSetMemo();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, const FString& Memo);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

