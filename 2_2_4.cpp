#include <iostream>

int main()
{
	double num1,num2;
	char ch;
	std::cout << "请输入算式: ";
	std::cin >> num1 >> ch >> num2;
	switch (ch)
	{
	case '+':
		std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
		break;
	case '-':
		std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
		break;
	case '*':
		std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
		break;
	case '/':
		if (num2 != 0)
		{
			std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
		}
		else
		{
			std::cout << "除数不能为0" << std::endl;
		}
		break;
	case '%':
		if (num1 - (int)num1 == 0 && num2 - (int)num2 == 0 && num2 != 0)
		{
			std::cout << (int)num1 << " % " << (int)num2 << " = " << (int)num1 % (int)num2 << std::endl;
		}
		else
		{
			std::cout << "取模运算要求两个操作数都是整数且除数不为0" << std::endl;
		}
		break;
	}
}