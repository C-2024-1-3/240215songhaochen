#include <iostream>

void BubbleSort(int* p, int n)
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (*(p + j) > *(p + j + 1))
			{
				temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}
}

int main()
{
	int n;
	std::cout << "Enter the number of elements in the array: ";
	std::cin >> n;
	int* p = new int[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> *(p + i);
	}
	BubbleSort(p, n);
	for (int i = 0; i < n; i++)
	{
		std::cout << *(p + i) << "\t";
	}
	delete[] p;
}