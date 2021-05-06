#include <iostream>
#include <cmath>
using namespace std;

// ������� ���������� � ��������:
// �������� ���������� �������� (min, max), �����������, ������������ ��������.
// ������� ������ � ������� � ���������� ���������� ��������.

struct parametres
{
	float min, max, pogr, mspeed;
};

int main()
{
	setlocale(LC_ALL, "Russian");

	parametres dat1, dat2;

	//���� ���������� ��� ������� �������
	cout << " ��������� ������� ������� " << " " << endl;
	cin >> dat1.max >> dat1.min >> dat1.pogr >> dat1.mspeed;
	cout << " ��������� ������� ������� " << " " << endl;
	cin >> dat2.max >> dat2.min >> dat2.pogr >> dat2.mspeed;

	//������ ��������� �������� ��� �������(����� � ����� �������� ������ �����)
	float di1 = dat1.max - dat1.min;
	float di2 = dat2.max - dat2.min;

	//��������� ������������� ������� ������� � ����������� �����
	if ( ( (di1) > (di2) ) && (dat1.pogr < dat2.pogr) && (dat1.mspeed > dat2.mspeed) )
	{
		cout << ")))������ ������ ������))!!!" << endl 
		<< "��� ���������: " << endl 
		<< ">>��������: " << " " << di1 << endl
		<< ">>�����������:" << " " << dat1.pogr << endl 
		<< ">>�������� " << dat1.mspeed;
	}
	else
	{
		cout << "������ ������ ����� ������" << endl
		<< "��� ���������: " << endl
		<< ">>��������: " << " " << di2 << endl
		<< ">>�����������:" << " " << dat2.pogr << endl
		<< ">>�������� " << dat2.mspeed;
	}

	return 0;
}