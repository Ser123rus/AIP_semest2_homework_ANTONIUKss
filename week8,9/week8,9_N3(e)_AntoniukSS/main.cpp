#include <iostream>

int main()
{

	float x, y, z, num1, num2;

	num1 = 0;
	num2 = 0;

	std::cout << "Vvedite Z - "; std::cin >> z;
	std::cout << "Vvedite X - "; std::cin >> x;

	for (int i = 1; i <= z; i++)
	{
		if ((i % 2) == 0)
		{
			num1 += i / ((i + 6) * x);
		}
	}
	for (int j = 1; j <= z; j++)
	{
		if ((j % 2) != 0)
		{
			num2 -= j / ((j + 6) * x);
		}
	}

	y = num1 + num2;

	std::cout << "Y =" << y;

	return 0;
}