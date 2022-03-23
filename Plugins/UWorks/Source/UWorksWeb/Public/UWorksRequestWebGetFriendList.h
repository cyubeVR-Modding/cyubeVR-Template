#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetFriendListDelegateDelegate.h"
#include "GetFriendListMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebGetFriendList.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetFriendList : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetFriendListDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetFriendListMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetFriendList();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, const FString& Relationship);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

