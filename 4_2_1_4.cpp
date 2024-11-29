#include <iostream>

int* f()
{
	return new int[4] {1, 2, 3, 4}; //new出来的数组存储在堆中，堆中的数据由程序员控制释放
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
	std::cout << p[1] << std::endl; //不能，因为f中设定的数组在函数结束后会被回收
}
*/