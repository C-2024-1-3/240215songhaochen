#include <iostream>

int main()
{
	double x, y;
	std::cout << "请输入x的值:" << std::endl;
	std::cin >> x;
	if (x <= 0 || x >= 10)
	{
		std::cout << "输入的x不在0到10之间" << std::endl;
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
	std::cout << "y的值为:" << y << std::endl;
}