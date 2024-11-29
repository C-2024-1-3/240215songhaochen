#include <iostream>

void main()
{
	int i, j, * pi, * pj;
	pi=&i;
	pj = &j;
	i = 5;
	j = 7;
	std::cout << i << "\t" << j << "\t" << pi << "\t" << pj << std::endl;
	std::cout << &i << "\t" << *&i << "\t" << &j << "\t" << *&j << std::endl;
}