#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

//���� ������� y = f(x).����� �������� ������� �� x :
//y = 3x - 7, ���� x > 1
//y = 3, ���� x = 1
//y = 3 * | x + 2 | -7, ���� x < 1

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

	f << "��� ������� � = " << x << endl << "y ����� ��������� �������� " << y << endl;

	f.close();

	return 0;
}