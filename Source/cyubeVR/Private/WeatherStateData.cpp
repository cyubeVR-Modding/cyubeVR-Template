#include "WeatherStateData.h"

FWeatherStateData::FWeatherStateData() {
    this->CloudDensityTarget = 0.00f;
    this->OverallIntensityTarget = 0.00f;
    this->SaturationTarget = 0.00f;
    this->LightTemperatureTarget = 0.00f;
    this->SunLightWeatherMultiplierTarget = 0.00f;
    this->WindStrengthTarget = 0.00f;
    this->RainStrengthTarget = 0.00f;
    this->CloudDensity = 0.00f;
    this->OverallIntensity = 0.00f;
    this->LightTemperatur = 0.00f;
    this->RainStrength = 0.00f;
    this->SunLightWeatherMultiplier = 0.00f;
    this->WindStrength = 0.00f;
    this->DelayTillParticles = 0.00f;
    this->SnowAmount = 0.00f;
    this->SnowAmountTarget = 0.00f;
    this->RainAmount = 0.00f;
    this->RainAmountTarget = 0.00f;
    this->Weather = EWeather::Regular;
    this->WindSpeed = 0.00f;
    this->WindSpeedTarget = 0.00f;
    this->TimeTillNewWeather = 0.00f;
}

