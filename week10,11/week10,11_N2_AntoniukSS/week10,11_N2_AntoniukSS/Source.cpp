#include <iostream>
#include <cmath>
using namespace std;

//�������� ���������, ������� ��������� �� ������������ ���������� ����� � ����������,
//������ �� ����� � �������������� �������.
//var1_n3(a)

void proverka();

int main()
{

	proverka();

	return 0;
}

void proverka()
{
	float x, y, r, l;
	cout << "Enter x coordinate" << endl;
	cin >> x;
	cout << "Enter y coordinate" << endl;
	cin >> y;

	l = sqrt((x * x) + (y * y));

	r = 2;

	if ((y >= 0) && ((x * x) + (y * y) <= 4) && ((x * x) + (y * y) >= 1))
	{
		cout << "Belongs to" << endl;
	}
	else cout << "Not belongs to" << endl;
}