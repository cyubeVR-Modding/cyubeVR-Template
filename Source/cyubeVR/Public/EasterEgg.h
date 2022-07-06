#pragma once
#include "CoreMinimal.h"
#include "EBlockTypeBP.h"
#include "ReceiveLightActor.h"
#include "EasterEgg.generated.h"

UCLASS(Blueprintable)
class CYUBEVR_API AEasterEgg : public AReceiveLightActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockTypeBP ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChristmasGift;
    
    AEasterEgg();
};

