#include <iostream>
#include <cmath>
using namespace std;

//������� ���������� � ������� : ��������, ���, ������������ ��������.
//������� ������ � ����� ��������� ������.

struct robo
{
	float vol, weigh, speed;
};

int main()
{

	setlocale(LC_ALL, "Russian");

	robo rob1, rob2;

	cout << "������� ��������� ��� ������� ������" << " " << endl;
	cin >> rob1.vol >> rob1.weigh >> rob1.speed;
	cout << "������� ��������� ��� ������� ������" << " " << endl;
	cin >> rob2.vol >> rob2.weigh >> rob2.speed;

	if ((rob1.vol<rob2.vol)&&(rob1.weigh<rob2.weigh)&&(rob1.speed<rob2.speed))
	{
		cout << "������ ����� ����� ���������\n" << " ����� ��������� ���������: " << endl
		<< rob1.vol << endl << rob1.weigh << endl << rob1.speed << endl;
	}
	else cout << "������ ����� ����� ���������\n" << " ����� ��������� ���������: " << endl
	<< rob2.vol << endl << rob2.weigh << endl << rob2.speed << endl;

	return 0;
}