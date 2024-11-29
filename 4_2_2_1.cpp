#include <iostream>
#include <string>

int indexof(const char* s1, const char* s2)
{
	int size1, size2, flag = 0;
	for (int i = 0;; i++)
	{
		if (s1[i] == '\0')
		{
			size1 = i;
			break;
		}
	}
	for (int i = 0;; i++)
	{
		if (s2[i] == '\0')
		{
			size2 = i;
			break;
		}
	}
	std::string temp = "";
	for (int i = 0; i < size2 - size1 + 1; i++)
	{
		if (s1[0] == s2[i])
		{
			flag = 1;
			for (int j = 1; j < size1; j++)
			{
				if (s1[j] != s2[i + j])
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
			{
				return i;
			}
		}
	}
	if (flag == 0)
	{
		return -1;
	}
}

int main()
{
	std::string s1, s2;
	std::getline(std::cin, s1);
	std::getline(std::cin, s2);
	std::cout << indexof(s1.c_str(), s2.c_str());
}