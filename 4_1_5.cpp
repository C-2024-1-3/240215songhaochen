#include <iostream>
#include <string>
#include <vector>

int main()
{
	int key = 0;
	std::string str1, str2;
	std::vector<int> positions;
	std::getline(std::cin, str1);
	std::getline(std::cin, str2);
	for (int i = 0; i < str2.length(); i++)
	{
		if (str1[0] == str2[i])
		{
			positions.push_back(i);
		}
	}
	for (int i = 0; i < positions.size(); i++)
	{
		if (str1 == str2.substr(positions[i], str1.length()))
		{
			key = 1;
			std::cout << positions[i] << " ";
		}
	}
	if (key == 0)
	{
		std::cout << -1;
	}
}