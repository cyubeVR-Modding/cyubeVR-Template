#include "GetItemDefsNode.h"

UGetItemDefsNode::UGetItemDefsNode() {
}

void UGetItemDefsNode::OnRequestCompleted(bool bSuccessful, const FString& Content) {
}

UGetItemDefsNode* UGetItemDefsNode::GetItemDefsNode(const FString& Key, int32 AppID, const FString& ModifiedSince, TArray<FUWorksSteamItemDef> ItemDefIDs, TArray<FUWorksSteamItemDef> WorkshopIDs, int32 CacheMaxAgeSeconds) {
    return NULL;
}


