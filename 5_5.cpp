#include <iostream>

class Point
{
public:
	Point()
	{
		x = 60;
		y = 80;
	}

	void setPoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}

	void display()
	{
		std::cout << "x=" << x << " y=" << y << std::endl;
	}

private:
	int x;
	int y;
};

int main()
{
	Point p1, p2;
	p1.setPoint(10, 20);
	p1.display();
	p2.display();
}