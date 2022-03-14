#include "RuntimeMeshProviderPassthrough.h"

class URuntimeMeshProvider;

void URuntimeMeshProviderPassthrough::SetChildProvider(URuntimeMeshProvider* InProvider) {
}

URuntimeMeshProvider* URuntimeMeshProviderPassthrough::GetChildProvider() const {
    return NULL;
}

URuntimeMeshProviderPassthrough::URuntimeMeshProviderPassthrough() {
    this->ChildProvider = NULL;
}

