#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetServerIPsBySteamIDDelegateDelegate.h"
#include "GetServerIPsBySteamIDMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebGetServerIPsBySteamID.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetServerIPsBySteamID : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetServerIPsBySteamIDDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetServerIPsBySteamIDMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetServerIPsBySteamID();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID ServerSteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

