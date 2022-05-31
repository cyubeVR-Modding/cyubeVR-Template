#pragma once
#include "CoreMinimal.h"
#include "EUWorksChatEntryType.generated.h"

UENUM(BlueprintType)
enum class EUWorksChatEntryType : uint8 {
    Invalid,
    ChatMessage,
    Typing,
    InviteGame,
    Emote,
    LeftConversation = 0x6,
    Entered,
    WasKicked,
    WasBanned,
    Disconnected,
    HistoricalChat,
    LinkBlocked = 0xE,
};

