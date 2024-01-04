#include "UWorksInterfaceCoreMusic.h"

UUWorksInterfaceCoreMusic::UUWorksInterfaceCoreMusic() {
}

void UUWorksInterfaceCoreMusic::SetVolume(float Volume) {
}

void UUWorksInterfaceCoreMusic::PlayPrevious() {
}

void UUWorksInterfaceCoreMusic::PlayNext() {
}

void UUWorksInterfaceCoreMusic::Play() {
}

void UUWorksInterfaceCoreMusic::Pause() {
}

float UUWorksInterfaceCoreMusic::GetVolume() {
    return 0.0f;
}

EUWorksAudioPlaybackStatus UUWorksInterfaceCoreMusic::GetPlaybackStatus() {
    return EUWorksAudioPlaybackStatus::Undefined;
}

UUWorksInterfaceCoreMusic* UUWorksInterfaceCoreMusic::GetMusic() {
    return NULL;
}

bool UUWorksInterfaceCoreMusic::BIsPlaying() {
    return false;
}

bool UUWorksInterfaceCoreMusic::BIsEnabled() {
    return false;
}


