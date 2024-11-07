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
    std::cout << "请输入三角形的三条边长(以空格隔开或分别输入): ";
    std::cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0)
    {
        std::cout << "边长必须大于0" << std::endl;
        return 0;
    }
    if (isTriangle(a, b, c))
    {
        std::cout << "其周长为: "<< a + b + c << std::endl;
        if (isIso(a, b, c))
        {
            std::cout << "这是一个等腰三角形" << std::endl;
        }
        else
        {
            std::cout << "这不是一个等腰三角形" << std::endl;
        }
    }
    else
    {
        std::cout << "不能构成三角形" << std::endl;
    }
}