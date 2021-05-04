#include <iostream>
using namespace std;

void fuun();

int main()
{

	fuun();

	return 0;
}

void fuun()
{

	float x, y, z, num1, num2;

	num1 = 0;
	num2 = 0;

	cout << "Vvedite Z - "; cin >> z;
	cout << "Vvedite X - "; cin >> x;

	for (int i = 1; i <= z; i++)
	{
		if ((i % 2) == 0) num1 += i / ((i + 6) * x);
	}
	for (int j = 1; j <= z; j++)
	{
		if ((j % 2) != 0) num2 -= j / ((j + 6) * x);
	}

	y = num1 + num2;

	cout << " y = " << " " << y;

}