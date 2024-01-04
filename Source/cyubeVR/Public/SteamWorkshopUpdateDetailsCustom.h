#pragma once
#include "CoreMinimal.h"
#include "SteamWorkshopUpdateDetailsCustom.generated.h"

USTRUCT(BlueprintType)
struct FSteamWorkshopUpdateDetailsCustom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contentDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString previewImage;
    
    CYUBEVR_API FSteamWorkshopUpdateDetailsCustom();
};

