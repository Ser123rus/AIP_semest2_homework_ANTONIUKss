#include <iostream>
#include <cmath>
using namespace std;

struct complex
{
	// x �������������� �����, y ������

	float x, y;
};

// �������� ��������� ��� �������� ����������� �����. ��������� ������ ����� 2 ��������: ������������ ����� � ������. 
// �������� ��� ����� � �������� �� �������� �� ������������. 
// �������� �������, ������� ����� ������� ������ ������������ �����.

void rashet(complex);

int main()
{

	setlocale(LC_ALL, "Russian");

	complex m;

	cout << "����� ���������� ����� �" << endl;
	cin >> m.x >> m.y;

	rashet(m);

	return 0;
}

void rashet(complex m)
{
	float z = sqrt(m.x * m.x + m.y * m.y);

	cout << abs(z);
}