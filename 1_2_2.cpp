#include <iostream>

#define PI 3.14159265358979323846

int main()
{
    double r, h;
    std::cout << "����������Բ׶�ĵ���뾶��׶�� ; ";
    std::cin >> r >> h;
    std::cout << "Բ׶�����Ϊ : " << (PI * r * r * h) / 3 << std::endl;
}