#include<iostream>

int main()
{
	char ch;
	std::cout << "请输入一个字符: " << std::endl;
	std::cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		std::cout << "其大写字母为: " << (char)(ch - 32) << std::endl; //对ch运算时，会将其转化为int类型
	}
	else
	{
		std::cout << "其后一个字符的ASCII码值为: " << ch + 1 << std::endl;
	}
}