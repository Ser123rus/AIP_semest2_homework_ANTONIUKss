#include <iostream> 
using namespace std; 

int main() 
{
	setlocale(LC_ALL, "Russian"); // ��������� ������� ����

	int firstnum, secondnum, thirdnum, max;

	//���� �����
	cout << "������� 3 ����� " << endl;
	cin >> firstnum;
	cin >> secondnum;
	cin >> thirdnum;

	//��������� � ����� ��������
	if (firstnum > secondnum)
	{
		max = firstnum;
	}
	else
	{
		max = secondnum;
	}
	if (max < thirdnum)
	{
		max = thirdnum;
	}
	
	//����� ������������� �����
	cout << "������������ ����� : " << max << endl;

	return 0;

}