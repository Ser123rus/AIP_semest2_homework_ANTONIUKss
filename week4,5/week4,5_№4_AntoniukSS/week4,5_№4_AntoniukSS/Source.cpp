#include <iostream>
#include <fstream>
using namespace std;

//USLOVIE:
//������������ ������ ��� �����. ���������� �������� �������� ���������� ���, ����� �������� ������ ��������� �� ������, � ������ - � ������.


int main()
{
	fstream f;
	int frsnum = 0;
	int scnnum = 0;
	int scladnum = 0;

	cin >> frsnum;
	cin >> scnnum;

	if ((frsnum != 0) | (scnnum != 0))
	{
		scladnum = frsnum;
		frsnum = scnnum;
		scnnum = scladnum;
	}

	f.open("����������.txt");
	f << " NACHALNIE DANNIE: " << endl;
	f << scnnum << endl;
	f << frsnum << endl;
	f << "RESULT after OBRABOTKA:" << endl;
	f << "1stnum=" << frsnum << endl;
	f << "2ndnum=" << scnnum << endl;
	f.close();

	return 0;
}