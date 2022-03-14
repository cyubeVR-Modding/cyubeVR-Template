#include "GetTradeHistoryNode.h"

class UGetTradeHistoryNode;

void UGetTradeHistoryNode::OnRequestCompleted(bool bSuccessful, const FString& Content) {
}

UGetTradeHistoryNode* UGetTradeHistoryNode::GetTradeHistoryNode(const FString& Key, int32 MaxTrades, int32 StartAfterTime, const FString& StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, const FString& Language, bool bIncludeFailed, bool bIncludeTotal) {
    return NULL;
}

UGetTradeHistoryNode::UGetTradeHistoryNode() {
}

