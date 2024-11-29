#include <iostream>
#include "mytriangle.h"

int main()
{
	double side1, side2, side3;
    std::cin >> side1 >> side2 >> side3;
    if (Is_triangle(side1, side2, side3))
    {
        std::cout << Area(side1, side2, side3) << std::endl;
    }
    else
    {
        std::cout << "Not a triangle" << std::endl;
    }
}