#include "EasterEgg.h"

AEasterEgg::AEasterEgg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemType = EBlockTypeBP::Stone;
    this->bChristmasGift = false;
}


