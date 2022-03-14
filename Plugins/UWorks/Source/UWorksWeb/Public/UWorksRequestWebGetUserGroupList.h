#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "GetUserGroupListDelegateDelegate.h"
#include "GetUserGroupListMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetUserGroupList.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetUserGroupList : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUserGroupListDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUserGroupListMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetUserGroupList();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

