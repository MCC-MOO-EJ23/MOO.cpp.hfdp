#include "WeatherStation.hpp"

using namespace HeadFirstDesignPatterns::Observer;

int main(int argc, char* argv[]) {  argc; argv;	// warning C4100
	int value = 0;

	WeatherData weatherData;

	CurrentConditionsDisplay currentDisplay(&weatherData);
	StatisticsDisplay statisticsDisplay(&weatherData);
	ForecastDisplay forecastDisplay(&weatherData);

#ifdef _HEAT_INDEX_DISPLAY_
	HeatIndexDisplay heatIndexDisplay(&weatherData);
#endif

	weatherData.setMeasurements(80, 65, 30.4f);
	weatherData.setMeasurements(82, 70, 29.2f);
	weatherData.setMeasurements(78, 90, 29.2f);

	return value;
}

