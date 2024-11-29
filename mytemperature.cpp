#include "mytemperature.h"

double celsius_to_fahrenheit(double celsius)
{
	double fehrenheit = celsius * 9 / 5 + 32;
	return fehrenheit;
}

double fahrenheit_to_celsius(double fehrenheit)
{
	double celsius = (fehrenheit - 32) * 5 / 9;
    return celsius;
}