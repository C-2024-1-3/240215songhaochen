#include <iostream>

int main()
{
	double num1,num2;
	char ch;
	std::cout << "��������ʽ: ";
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
			std::cout << "��������Ϊ0" << std::endl;
		}
		break;
	case '%':
		if (num1 - (int)num1 == 0 && num2 - (int)num2 == 0 && num2 != 0)
		{
			std::cout << (int)num1 << " % " << (int)num2 << " = " << (int)num1 % (int)num2 << std::endl;
		}
		else
		{
			std::cout << "ȡģ����Ҫ���������������������ҳ�����Ϊ0" << std::endl;
		}
		break;
	}
}