#include <iostream>

int main()
{
	int a, b;
	std::cout << "����������������: " << std::endl;
	std::cin >> a >> b;
	for (int i = (a > b) ? b : a; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			std::cout << "���Լ����: " << i << std::endl;
			break;
		}
	}
	for (int i = (a > b) ? a : b; i <= a * b; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
            std::cout << "��С��������: " << i << std::endl;
            break;
		}
	}
}