#pragma once
#include "CoreMinimal.h"
#include "IpNetDriver.h"
#include "IpNetDriverUWorks.generated.h"

UCLASS(Blueprintable, NonTransient)
class ONLINESUBSYSTEMUWORKS_API UIpNetDriverUWorks : public UIpNetDriver {
    GENERATED_BODY()
public:
    UIpNetDriverUWorks();

};

