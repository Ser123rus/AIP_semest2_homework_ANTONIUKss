#include <iostream> 
#include <fstream>
using namespace std;

//�������� ��� ����� �����. ���������� ����� �� ��� ����������.

int main()
{
	setlocale(LC_ALL, "Russian"); // ��������� ������� ����

	ofstream f;

	int firstnum, secondnum, thirdnum, max;

	//���� �����
	cout << "������� 3 ����� " << endl;
	cin >> firstnum;
	cin >> secondnum;
	cin >> thirdnum;

	f.open("findmax.txt");
	f << "�������� ������:" << endl;
	f << firstnum << endl << secondnum << endl << thirdnum << endl;

	//��������� � ����� ��������
	if(firstnum > secondnum)
	{
		max = firstnum;
	}
	else
	{
		max = secondnum;
	}
	if(max < thirdnum)
	{
		max = thirdnum;
	}

	//����� ������������� �����
	f << "������������ ����� : " << max << endl;

	f.close();

	return 0;

}