#include "UWorksP2PSessionState.h"

FUWorksP2PSessionState::FUWorksP2PSessionState() {
    this->bConnectionActive = false;
    this->bConnecting = false;
    this->P2PSessionError = EUWorksP2PSessionError::None;
    this->bUsingRelay = false;
    this->BytesQueuedForSend = 0;
    this->PacketsQueuedForSend = 0;
}

