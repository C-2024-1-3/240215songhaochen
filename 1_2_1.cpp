#include<iostream>

using namespace std;

int main()
{
	int i = 1;	//"int"中的i为大写，k未声明
	cout << i++ << endl;   //i先执行后加一，意义不明
	i = 1;  //i已经声明过了，无需再声明
	cout << i++ << endl;  //i先执行后加一，意义不明
	cout << "Welcome to C++" << endl;
	return 0;
}