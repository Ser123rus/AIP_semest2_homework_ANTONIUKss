#include <iostream>
#include <cmath>
using namespace std;

// �����-������ ����������� ��� ��������� � ������:
// �������� �������� �����, ������ �����, ����������� ����.
// �������� ������� ��� ������� ����, ����������� ������ 
// (������������ ���� �������������).

struct fling
{
	float svv, rv, kt;
};

float tyga(fling);

int main()
{
	setlocale(LC_ALL, "Russian");

	fling robo;

	cout << "������� �������������� �������" << endl;
	cin >> robo.svv >> robo.rv >> robo.kt;

	cout << "������ � ������� ���������������� ����� ��������� ����:" << " " << tyga(robo);

	return 0;
}

float tyga(fling robo)
{
	return (robo.svv * robo.rv * robo.kt);
}