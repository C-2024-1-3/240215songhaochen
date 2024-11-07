#include <iostream>

#define PI 3.14159265358979323846

int main()
{
    double r, h;
    std::cout << "请依次输入圆锥的底面半径和锥高 ; ";
    std::cin >> r >> h;
    std::cout << "圆锥的体积为 : " << (PI * r * r * h) / 3 << std::endl;
}