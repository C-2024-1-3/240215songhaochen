#include <iostream>

int main()
{
	double a;
	std::cout << "������a��ֵ: ";
	std::cin >> a;
	if (a < 0)
	{
		std::cout << "����û��ʵ��ƽ����" << std::endl;
		return 0;
	}
	double xn = 1, x2;
	x2 = (xn + a / xn) / 2;
	while (x2 - xn >= 1e-10 || x2 - xn <= -1e-10)
	//1e-10���ԣ����Ǹ�С�������У���Ϊdouble�ľ�������
	{
		xn = x2;
		x2 = (xn + a / xn) / 2;
	}
	std::cout << "a��ƽ����Ϊ: " << x2 << std::endl;
}