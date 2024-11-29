#include <iostream>

bool exist(int* p, int n, int k)
{
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) == k)
		{
            return true;
		}
	}
	return false;
}

int main()
{
	int* p = new int[10];
	int count = 1, temp;
	std::cin >> *p;
	for (int i = 1; i < 10; i++)
	{
        std::cin >> temp;
		if (!exist(p, count, temp))
		{
			*(p + count) = temp;
			count += 1;
		}
	}
	for (int i = 0; i < count; i++)
	{
		std::cout << *(p + i) << "\t";
	}
}