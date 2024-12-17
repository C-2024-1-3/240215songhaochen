#include <iostream>
using namespace std;

class Time
{
public:
	void SetTime(int hour, int minute, int second)
	{
		this->hour = hour;
		this->minute = minute;
		this->sec = second;
	}
	void ShowTime()
	{
		cout << hour << ":" << minute << ":" << sec;
	}

private:
	int hour;
	int minute;
	int sec;
};

int main()
{
	Time tl;
	int hour, minute, second;
	cin >> hour >> minute >> second;
	tl.SetTime(hour, minute, second);
	tl.ShowTime();
	return 0;
}

/*
应为公有（public）的成员：
如果需要直接访问或修改类的对象的属性，它们可以被声明为公有。
那些需要被直接调用的方法，如接口方法或那些提供类功能的方法，应声明为公有。

应为私有（private）的成员：
如果一个属性不需要被类的外部直接访问或修改，那么它应该被声明为私有。
那些仅供类内部使用的辅助方法，不应该被外部直接调用的方法，应声明为私有。

放在类中定义的函数：
那些与类的属性和行为紧密相关的函数，通常应该放在类中定义，因为它们是类的一部分。
如果一个函数需要访问类的私有属性或私有方法，那么它应该被定义在类内部。

在类外定义的函数：
那些与类的功能不直接相关，或者可以被多个类共享的工具函数，可以定义在类外。
如果一个函数不需要访问类的任何属性或方法，那么它可能更适合定义在类外。
*/