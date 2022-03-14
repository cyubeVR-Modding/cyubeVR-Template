#pragma once
#include "CoreMinimal.h"
#include "IpConnection.h"
#include "IpConnectionUWorks.generated.h"

UCLASS(NonTransient)
class ONLINESUBSYSTEMUWORKS_API UIpConnectionUWorks : public UIpConnection {
    GENERATED_BODY()
public:
    UIpConnectionUWorks();
};

