#include <iostream>
#include <iomanip>

int main()
{
	double Fah, Cel;
    std::cout << "Enter the temperature in Fahrenheit: ";
	std::cin >> Fah;
	Cel = (Fah - 32) + 1.8;
	std::cout << "The temperature in Celsius is: " << std::fixed << std::setprecision(2) << Cel << std::endl;
}