#include <iostream>


void GCD(int a, int b, int* p) //最大公约数，辗转相除法
{
	int temp;
	while (a % b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	*p = b;
}


void LCM(int a, int b, int* p,int *gcd) //最小公倍数
{
	*p = a * b / *gcd;
}


int main()
{
	int n, m;
	int* gcd = new int;
	int* lcm = new int;
	std::cin >> n >> m;
	GCD(m, n, gcd);
	LCM(m, n, lcm, gcd);
	std::cout << "最大公约数为：" << *gcd << std::endl;
	std::cout << "最小公倍数为：" << *lcm << std::endl;
}