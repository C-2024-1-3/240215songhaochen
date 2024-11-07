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
				std::cout << "空格" << "\t" << "输出了" << arr[i] << "次" << std::endl;
			}
			else
			{
				std::cout << "字符" << (char)i << "\t" << "输出了" << arr[i] << "次" << std::endl;
			}
		}
	}
}