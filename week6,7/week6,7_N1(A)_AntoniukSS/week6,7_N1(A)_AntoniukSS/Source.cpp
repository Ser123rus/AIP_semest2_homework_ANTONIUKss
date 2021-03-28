#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	ofstream f;
	float y = 0;
	float x = 0;
	x = abs(x); //получил модуль для x
	cin >> x;

	f.open("N1(A)results.txt");

	if ( x > 0 )
	{
		y = 2 * x - 10;
	}
	if (x == 0)
	{
		y = 0;
	}
	if (x < 0)
	{
		y = 2 * abs(x) - 5;
	}

	f << " При заданном значении Х = " << x << endl << "Y = " << y << endl;

	f.close();

	return 0;
}