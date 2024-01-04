#include "UWorksInterfaceCoreNetworking.h"

UUWorksInterfaceCoreNetworking::UUWorksInterfaceCoreNetworking() {
}

bool UUWorksInterfaceCoreNetworking::SendP2PPacket(FUWorksSteamID SteamIDRemote, TArray<uint8> Data, EUWorksP2PSend P2PSendType, int32 Channel) {
    return false;
}

bool UUWorksInterfaceCoreNetworking::SendP2PMessage(FUWorksSteamID SteamIDRemote, const FString& Data, EUWorksP2PSend P2PSendType, int32 Channel) {
    return false;
}

bool UUWorksInterfaceCoreNetworking::ReadP2PPacket(TArray<uint8>& Data, int32 DataMax, FUWorksSteamID& SteamIDRemote, int32 Channel) {
    return false;
}

bool UUWorksInterfaceCoreNetworking::ReadP2PMessage(FString& Data, int32 DataMax, FUWorksSteamID& SteamIDRemote, int32 Channel) {
    return false;
}

bool UUWorksInterfaceCoreNetworking::IsP2PPacketAvailable(int32& DataSize, int32 Channel) {
    return false;
}

bool UUWorksInterfaceCoreNetworking::GetP2PSessionState(FUWorksSteamID SteamIDRemote, FUWorksP2PSessionState& ConnectionState) {
    return false;
}

UUWorksInterfaceCoreNetworking* UUWorksInterfaceCoreNetworking::GetNetworking() {
    return NULL;
}

bool UUWorksInterfaceCoreNetworking::CloseP2PSessionWithUser(FUWorksSteamID SteamIDRemote) {
    return false;
}

bool UUWorksInterfaceCoreNetworking::CloseP2PChannelWithUser(FUWorksSteamID SteamIDRemote, int32 Channel) {
    return false;
}

bool UUWorksInterfaceCoreNetworking::AllowP2PPacketRelay(bool bAllow) {
    return false;
}

bool UUWorksInterfaceCoreNetworking::AcceptP2PSessionWithUser(FUWorksSteamID SteamIDRemote) {
    return false;
}


