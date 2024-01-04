#include "CoreFileReadAsyncNode.h"

UCoreFileReadAsyncNode::UCoreFileReadAsyncNode() {
}

void UCoreFileReadAsyncNode::OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32 Offset, const TArray<uint8>& Buffer) {
}

UCoreFileReadAsyncNode* UCoreFileReadAsyncNode::FileReadAsyncNode(const FString& File, int32 Offset, int32 BytesToRead) {
    return NULL;
}


