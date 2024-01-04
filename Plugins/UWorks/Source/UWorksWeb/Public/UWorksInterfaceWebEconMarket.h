#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "CancelAppListingsForUserMinimalDelegateDelegate.h"
#include "GetAssetIDMinimalDelegateDelegate.h"
#include "GetMarketEligibilityMinimalDelegateDelegate.h"
#include "GetPopularMinimalDelegateDelegate.h"
#include "UWorksInterfaceWeb.h"
#include "UWorksInterfaceWebEconMarket.generated.h"

class UUWorksRequestWebCancelAppListingsForUser;
class UUWorksRequestWebGetAssetID;
class UUWorksRequestWebGetMarketEligibility;
class UUWorksRequestWebGetPopular;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebEconMarket : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebEconMarket();

    UFUNCTION(BlueprintCallable)
    static void GetPopularMinimal(const FString& Key, const FString& Language, int32 Rows, int32 Start, int32 FilterAppID, int32 ECurrency, const FGetPopularMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetPopular* GetPopular();
    
    UFUNCTION(BlueprintCallable)
    static void GetMarketEligibilityMinimal(const FString& Key, FUWorksSteamID SteamID, const FGetMarketEligibilityMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetMarketEligibility* GetMarketEligibility();
    
    UFUNCTION(BlueprintCallable)
    static void GetAssetIDMinimal(const FString& Key, int32 AppID, const FString& ListingID, const FGetAssetIDMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetAssetID* GetAssetID();
    
    UFUNCTION(BlueprintCallable)
    static void CancelAppListingsForUserMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, bool bSynchronous, const FCancelAppListingsForUserMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebCancelAppListingsForUser* CancelAppListingsForUser();
    
};

