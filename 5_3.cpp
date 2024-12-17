#include <iostream>

class Cuboid
{
public:
	void SetAttributes()
	{
		double length, width, height;
		std::cout << "Enter length, width and height of the cuboid: ";
		std::cin >> length >> width >> height;
		this->length = length;
		this->width = width;
		this->height = height;
	}
	void CalculateVolumn()
	{
		std::cout << "The volume of the cuboid is: " << length * width * height << std::endl;
	}

private:
	double length;
	double width;
	double height;

};

int main()
{
	Cuboid cuboid1, cuboid2, cuboid3;
	cuboid1.SetAttributes();
	cuboid2.SetAttributes();
	cuboid3.SetAttributes();
	cuboid1.CalculateVolumn();
	cuboid2.CalculateVolumn();
	cuboid3.CalculateVolumn();
}