#include <iostream>

void raschet();

int main()
{

	raschet();

	return 0;
}

void raschet()
{
	float x, y, z;

	std::cout << "Vvedite Z - "; std::cin >> z;
	std::cout << "Vvedite X - "; std::cin >> x;

	y = 0;

	for (int i = 1; i <= z; i++)
	{
		y += i * x;
	}

	std::cout << "Y = " << y;
}