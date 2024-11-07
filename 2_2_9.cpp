#include <iostream>

int main()
{
	int tot = 0, a = 2, day = 0;
	while (a <= 100)
	{
		tot += a;
		a *= 2;
		day += 1;
	}
	std::cout << "平均每天花费: " << tot * 0.8 / day << std::endl;
}