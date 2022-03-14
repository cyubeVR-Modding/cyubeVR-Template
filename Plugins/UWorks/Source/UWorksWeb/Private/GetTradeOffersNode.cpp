#include "GetTradeOffersNode.h"

class UGetTradeOffersNode;

void UGetTradeOffersNode::OnRequestCompleted(bool bSuccessful, const FString& Content) {
}

UGetTradeOffersNode* UGetTradeOffersNode::GetTradeOffersNode(const FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, const FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff) {
    return NULL;
}

UGetTradeOffersNode::UGetTradeOffersNode() {
}

