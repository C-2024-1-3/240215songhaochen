#include <iostream>

int main()
{
	int j = 1;
	for (int i = 1; i <= 9; i++)
	{
		j += 1;
		j *= 2;
	}
	std::cout << j;
}