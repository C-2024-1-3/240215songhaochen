#include <iostream>

class Student
{
public:
	std::string Student_ID;
	int score;
};

std::string Max(Student* p, int size)
{
	int max = p[0].score;
	std::string maxID = p[0].Student_ID;
	for (int i = 1; i < size; i++)
	{
		if (p[i].score > max)
		{
			max = p[i].score;
			maxID = p[i].Student_ID;
		}
	}
	return maxID;
}

int main()
{
	Student StudentArray[5]{ {"1", 90}, {"2", 85}, {"3", 95}, {"4", 88}, {"5", 92} };
	std::string maxID = Max(StudentArray, 5);
	std::cout << "The student with the highest score is: " << maxID << std::endl;
}