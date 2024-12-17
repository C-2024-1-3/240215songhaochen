#pragma once
#include <string>

class Student
{
public:
	void display();
	Student();
	Student(int num, std::string name, char sex);
	void set_value();

private:
	int num;
	std::string name;
	char sex;
};