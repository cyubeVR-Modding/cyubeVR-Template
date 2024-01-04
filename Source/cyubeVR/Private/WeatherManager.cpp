#include "WeatherManager.h"

AWeatherManager::AWeatherManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentWeather = EWeather::Regular;
    this->PreviousWeather = EWeather::Regular;
    this->WeatherInterp = 0.00f;
}




