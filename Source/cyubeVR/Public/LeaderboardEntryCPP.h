#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LeaderboardEntryCPP.generated.h"

class UTextBlock;
class UBorder;

UCLASS(EditInlineNew)
class CYUBEVR_API ULeaderboardEntryCPP : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_Rank;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_Score;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_GPU;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_Headset;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_CPU;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_User;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_Resolution;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UBorder* Border_BackgroundColor;
    
    ULeaderboardEntryCPP();
};

