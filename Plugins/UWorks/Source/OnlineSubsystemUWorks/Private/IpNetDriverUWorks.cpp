#include "IpNetDriverUWorks.h"

UIpNetDriverUWorks::UIpNetDriverUWorks() : UIpNetDriver(FObjectInitializer::Get()) {
    this->ChannelDefinitions.AddDefaulted(3);
}


