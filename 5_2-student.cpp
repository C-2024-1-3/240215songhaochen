#include <iostream>
#include "5_2-student.h"

void Student::display()
{
	std::cout << "num:" << num << std::endl
		<< "name:" << name << std::endl
		<< "sex:" << sex << std::endl;
}

Student::Student()
{
	Student::set_value();
}

Student::Student(int num, std::string name, char sex)
{
	this->num = num;
	this->name = name;
	this->sex = sex;
}

void Student::set_value()
{
	num = 0;
	name = "уехЩ";
	sex = 'm';
}