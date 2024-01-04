#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SteamWorkshopInterface.generated.h"

UCLASS(Blueprintable)
class CYUBEVR_API USteamWorkshopInterface : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USteamWorkshopInterface();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void SteamWorkshop_GetSubscribedItemsCustom(const int32 maxNumItemsToReturn, TArray<FString>& outItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> SteamWorkshop_GetItemStateCustom(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable)
    static void SteamWorkshop_ActivateGameOverlayToWorkshopItemCustom(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable)
    static void SteamGeneral_ActivateGameOverlayToWebPageCustom(const FString& webpage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSteamInitializedCustom();
    
};

