#include <iostream>
#include "mytemperature.h"
#include <iomanip>


int main()
{
	std::cout<< std::fixed << std::setprecision(2);
	std::cout << "Celcius" << "\t\t" << "Fahrenheit" << "\t" << '|' << "Fahrenheit" << "\t" << "Celcius" << std::endl;
	std::cout << "40.0" << "\t\t" << celsius_to_fahrenheit(40) << "\t" << "\t" << '|' << "120.0" << "\t\t" << fahrenheit_to_celsius(120) << std::endl;
	std::cout << "39.0" << "\t\t" << celsius_to_fahrenheit(39) << "\t" << "\t" << '|' << "119.0" << "\t\t" << fahrenheit_to_celsius(119) << std::endl;
	std::cout << "......" << "\t\t" << "......" << "\t" << "\t" << "|" << "......" << "\t\t" << "......" << std::endl;
	std::cout << "30.0" << "\t\t" << celsius_to_fahrenheit(30) << "\t" << "\t" << '|' << "30.0" << "\t\t" << fahrenheit_to_celsius(30) << std::endl;
}