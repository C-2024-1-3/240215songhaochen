#include <iostream>

int main()
{
	double x, y;
	std::cout << "������x��ֵ:" << std::endl;
	std::cin >> x;
	if (x <= 0 || x >= 10)
	{
		std::cout << "�����x����0��10֮��" << std::endl;
		return 0;
	}
	else if (x < 1)
	{
		y = 3 - 2 * x;
	}
	else if (x >= 5)
	{
		y = x * x;
	}
	else
	{
		y = 1 / x + 1;
	}
	std::cout << "y��ֵΪ:" << y << std::endl;
}