#include <iostream>
#include <string>

int main()
{
	std::string str;
	int arr[128];
	for (int i = 0; i < 128; i++)
	{
		arr[i] = 0;
	}
	std::getline(std::cin, str);
	for (int i = 0; i < str.length(); i++)
	{
		arr[str[i]] += 1;
	}
	for (int i = 0; i < 128; i++)
	{
		if (arr[i] != 0)
		{
			if (i == 32)
			{
				std::cout << "�ո�" << "\t" << "�����" << arr[i] << "��" << std::endl;
			}
			else
			{
				std::cout << "�ַ�" << (char)i << "\t" << "�����" << arr[i] << "��" << std::endl;
			}
		}
	}
}