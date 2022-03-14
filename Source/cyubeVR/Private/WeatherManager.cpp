#include "WeatherManager.h"



AWeatherManager::AWeatherManager() {
    this->CurrentWeather = EWeather::Regular;
    this->PreviousWeather = EWeather::Regular;
    this->WeatherInterp = 0.00f;
}

