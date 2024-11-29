#include <iostream>
#include <cmath>


bool Is_Prime(int num)
{
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}


int main()
{
	int count = 0, count_1 = 0, num = 2;
	while (count <= 200)
	{
		while (count_1 <= 10)
		{
			if (Is_Prime(num))
			{
				std::cout << num << "\t";
				count_1 += 1;
				count += 1;
			}
			num += 1;
		}
		count_1 = 0;
		std::cout << std::endl;
	}
}