#include <iostream>
#include <string>
#include <cmath>


int parseHex(std::string str)
{
	int sum = 0, length = str.length();
	for (int i = 0; i < length; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			sum += (str[i] - '0') * pow(16, length - i - 1);
		}
		else
		{
			sum += (str[i] - 'A' + 10) * pow(16, length - i - 1);
		}
	}
	return sum;
}

int main()
{
	std::cout<<parseHex("A5")<<std::endl;
}