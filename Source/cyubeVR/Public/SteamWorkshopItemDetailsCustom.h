#pragma once
#include "CoreMinimal.h"
#include "SteamWorkshopItemDetailsCustom.generated.h"

USTRUCT(BlueprintType)
struct FSteamWorkshopItemDetailsCustom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString workshopItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MetaData;
    
    CYUBEVR_API FSteamWorkshopItemDetailsCustom();
};

