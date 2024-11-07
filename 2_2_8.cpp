#include <iostream>

int main()
{
	double a;
	std::cout << "请输入a的值: ";
	std::cin >> a;
	if (a < 0)
	{
		std::cout << "负数没有实数平方根" << std::endl;
		return 0;
	}
	double xn = 1, x2;
	x2 = (xn + a / xn) / 2;
	while (x2 - xn >= 1e-10 || x2 - xn <= -1e-10)
	//1e-10可以，但是更小的数不行，因为double的精度问题
	{
		xn = x2;
		x2 = (xn + a / xn) / 2;
	}
	std::cout << "a的平方根为: " << x2 << std::endl;
}