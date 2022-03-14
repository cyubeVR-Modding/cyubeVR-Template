#include "CoreGetFileDetailsNode.h"

class UCoreGetFileDetailsNode;

void UCoreGetFileDetailsNode::OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32 fileSize, const FString& FileSHA, const TArray<int32>& FileFlags) {
}

UCoreGetFileDetailsNode* UCoreGetFileDetailsNode::GetFileDetailsNode(const FString& Filename) {
    return NULL;
}

UCoreGetFileDetailsNode::UCoreGetFileDetailsNode() {
}

