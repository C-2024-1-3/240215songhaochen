#include<iostream>

int main()
{
	char ch;
	std::cout << "������һ���ַ�: " << std::endl;
	std::cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		std::cout << "���д��ĸΪ: " << (char)(ch - 32) << std::endl; //��ch����ʱ���Ὣ��ת��Ϊint����
	}
	else
	{
		std::cout << "���һ���ַ���ASCII��ֵΪ: " << ch + 1 << std::endl;
	}
}