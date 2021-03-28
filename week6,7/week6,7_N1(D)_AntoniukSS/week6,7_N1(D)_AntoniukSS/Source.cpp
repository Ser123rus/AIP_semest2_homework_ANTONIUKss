#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

//Дана функция y = f(x).Найти значение функции по x :
//y = 3x - 7, если x > 1
//y = 3, если x = 1
//y = 3 * | x + 2 | -7, если x < 1

int main()
{
	setlocale(LC_ALL, "Russian");

	ofstream f;
	float y = 0;
	float x = 0;
	x = abs(x);
	cin >> x;

	f.open("N1(D)result.txt");

	if ( x > 1) y = 3 * x - 7;
	if (x == 1) y = 3;
	if (x < 1) y = 3 * abs(x + 2) - 7;

	f << "При заданом х = " << x << endl << "y имеет следующее значение " << y << endl;

	f.close();

	return 0;
}