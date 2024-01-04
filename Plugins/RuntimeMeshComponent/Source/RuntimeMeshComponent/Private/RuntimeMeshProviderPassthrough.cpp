#include "RuntimeMeshProviderPassthrough.h"

URuntimeMeshProviderPassthrough::URuntimeMeshProviderPassthrough() {
    this->ChildProvider = NULL;
}

void URuntimeMeshProviderPassthrough::SetChildProvider(URuntimeMeshProvider* InProvider) {
}

URuntimeMeshProvider* URuntimeMeshProviderPassthrough::GetChildProvider() const {
    return NULL;
}


