#pragma once
#include "CoreMinimal.h"
#include "GetPlayersBannedMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetPlayersBannedDelegateDelegate.h"
#include "UWorksRequestWebGetPlayersBanned.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetPlayersBanned : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPlayersBannedDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPlayersBannedMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPlayersBanned();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

