#include <iostream>
#include <cmath>
using namespace std;

//�������� ���������, ������� ��������� �� ������������ ���������� ����� � ����������,
//������ �� ����� � �������������� �������.
//var1_n3(a)

struct point
{
	float x, y;
};

int main(point)
{
	point z;
	float l, r;
	cout << "Enter x coordinate" << endl;
	cin >> z.x;
	cout << "Enter y coordinate" << endl;
	cin >> z.y;

	l = sqrt((z.x * z.x) + (z.y * z.y));

	r = 2;

	if ((z.y>=0)&&((z.x*z.x)+(z.y*z.y)<=4)&&((z.x*z.x)+(z.y*z.y)>= 1)) cout << "Belongs to" << endl;
	else cout << "Not belongs to" << endl;

	return 0;
}