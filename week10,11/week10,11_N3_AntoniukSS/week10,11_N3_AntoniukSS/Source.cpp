#include <iostream>
#include <cmath>
using namespace std;

//�������� ���������, ������� ��������� �� ������������ ���������� ����� 
//� ����������, ������ �� ����� � �������������� �������.
//Variant(1)_num(A)

void func();

int main()
{

	func();

	return 0;
}

void func()
{
	float x, y, l, r;
	cout << "Enter x coordinate: " << endl;
	cin >> x;
	cout << "Enter y coordinate: " << endl;
	cin >> y;

	l = sqrt((x * x) + (y * y));

	r = 2;

	if ((l > r) && (x < 2) && (y < x))
	{
		cout << "Belongs to\n";
	}
	else
	{
		cout << "Not belongs to\n" << endl;
	}
}