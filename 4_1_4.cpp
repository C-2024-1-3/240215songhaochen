#include <iostream>
#include <string>
#include <vector>

void merge(int* p1, int size1, int* p2, int size2, int* p3)
{
	int place1(0), place2(0);
	for (; place1 < size1 && place2 < size2;)
	{
		if (*(p1 + place1) < *(p2 + place2))
		{
			*(p3 + place1 + place2) = *(p1 + place1);
			place1 += 1;
		}
		else
		{
			*(p3 + place1 + place2) = *(p2 + place2);
			place2 += 1;
		}
	}
	if (place1 == size1)
	{
		for (; place2 < size2; place2++)
		{
			*(p3 + place1 + place2) = *(p2 + place2);
		}
	}
	else
	{
		for (; place1 < size1; place1++)
		{
			*(p3 + place1 + place2) = *(p1 + place1);
		}
	}
}

int main()
{
	std::vector<int> list1, list2;
	int temp;
	while (1)
	{
		std::cin >> temp;
		list1.push_back(temp);
		if (std::cin.get() == '\n')
		{
			break;
		}
	}
	while (1)
	{
		std::cin >> temp;
		list2.push_back(temp);
		if (std::cin.get() == '\n')
		{
			break;
		}
	}
	int* p = new int[list1.size() + list2.size()];
	merge(list1.data(), list1.size(), list2.data(), list2.size(), p);
	for (int i = 0; i < list1.size() + list2.size(); i++)
	{
		std::cout << *(p + i) << " ";
	}
}