#include <iostream>
#include <string>

void count(char* charARR, int size, int* countARR)
{
	for (int i = 0; i < size; i++)
	{
		if (*(charARR + i) >= 'a' && *(charARR + i) <= 'z')
		{
			*(countARR + *(charARR + i) - 97) += 1;
			continue;
		}
		if (*(charARR + i) >= 'A' && *(charARR + i) <= 'Z')
		{
			*(countARR + *(charARR + i) - 65) += 1;
		}
	}
}

int main()
{
	std::string str;
	std::cin >> str;
	int countARR[26] = { 0 };
	count(&str[0], str.length(), countARR);
	for (int i = 0; i < 26; i++)
	{
		if (countARR[i] != 0)
		{
			std::cout << char('a' + i) << ":" << countARR[i] << "times" << std::endl;
		}
	}
}