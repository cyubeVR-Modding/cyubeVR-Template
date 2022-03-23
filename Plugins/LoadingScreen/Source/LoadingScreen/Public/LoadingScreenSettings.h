#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "LoadingScreenDescription.h"
#include "Fonts/SlateFontInfo.h"
#include "LoadingScreenSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class LOADINGSCREEN_API ULoadingScreenSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenDescription StartupScreen;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenDescription DefaultScreen;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo TipFont;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TipWrapAt;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Tips;
    
    ULoadingScreenSettings();
};

