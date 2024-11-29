#include <iostream>

int main()
{
	bool* p = new bool[100] {false};
	for (int i = 1; i < 101; i++)
	{
		for (int j = 1; i * j <= 100; j++)
		{
			*(p - 1 + i * j) = !*(p - 1 + i * j);
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (*(p + i) == true)
		{
			std::cout << i + 1 << " ";
		}
	}
}