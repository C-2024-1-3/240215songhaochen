#include <iostream>

void BubbleSort(double* p, int n)
{
	double temp;
	for (int j = 0; j < n - 1; j++)
	{
		for (int i = 0; i < n - 1 - j; i++)
		{
			if (*(p + i) > *(p + i + 1))
			{
				temp = *(p + i);
				*(p + i) = *(p + i + 1);
				*(p + i + 1) = temp;
			}
		}
	}
}

int main()
{
	double* p = new double[10];
	for (int i = 0; i < 10; i++)
	{
		std::cin >> *(p + i);
	}
	BubbleSort(p, 10);
	for (int i = 0; i < 10; i++)
	{
		std::cout << *(p + i) << "\t";
	}
}