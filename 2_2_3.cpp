#include <iostream>

bool isTriangle(double a, double b, double c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isIso(double a, double b, double c)
{
    if (a == b || a == c || b == c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
	double a, b, c;
    std::cout << "�����������ε������߳�(�Կո������ֱ�����): ";
    std::cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0)
    {
        std::cout << "�߳��������0" << std::endl;
        return 0;
    }
    if (isTriangle(a, b, c))
    {
        std::cout << "���ܳ�Ϊ: "<< a + b + c << std::endl;
        if (isIso(a, b, c))
        {
            std::cout << "����һ������������" << std::endl;
        }
        else
        {
            std::cout << "�ⲻ��һ������������" << std::endl;
        }
    }
    else
    {
        std::cout << "���ܹ���������" << std::endl;
    }
}