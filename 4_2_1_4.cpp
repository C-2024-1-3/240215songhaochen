#include <iostream>

int* f()
{
	return new int[4] {1, 2, 3, 4}; //new����������洢�ڶ��У����е������ɳ���Ա�����ͷ�
}

int main()
{
	int* p = f();
	std::cout << p[0] << std::endl;
	std::cout << p[1] << std::endl;
	delete p;
}


/*
#include <iostream>

int* f()
{
	int list[] = { 1,2,3,4 };
	return list;
}

int main()
{
	int* p = f();
	std::cout << p[0] << std::endl;
	std::cout << p[1] << std::endl; //���ܣ���Ϊf���趨�������ں���������ᱻ����
}
*/