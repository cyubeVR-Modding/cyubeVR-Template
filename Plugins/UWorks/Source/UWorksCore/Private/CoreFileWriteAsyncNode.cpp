#include "CoreFileWriteAsyncNode.h"

class UCoreFileWriteAsyncNode;

void UCoreFileWriteAsyncNode::OnRequestCompleted(bool bSuccessful, EUWorksResult Result) {
}

UCoreFileWriteAsyncNode* UCoreFileWriteAsyncNode::FileWriteAsyncNode(const FString& File, TArray<uint8> Buffer) {
    return NULL;
}

UCoreFileWriteAsyncNode::UCoreFileWriteAsyncNode() {
}

