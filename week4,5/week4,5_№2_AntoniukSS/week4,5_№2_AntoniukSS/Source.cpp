#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //������� ������� ����

	std::ofstream f;
	float dlina = 0;
	float s = 0;
	float pi = 3.14;
	int rad1,rad2 = 0;

	cin >> rad1; 

	dlina = 2 * pi * rad1; // ������ ����� 

	cin >> rad2;

	s = 2 * pi * (rad2 * rad2); // ������ ������� 

	f.open("������_�����_�������_����������.txt");

	f << " ��� ������� " << rad1 << " �����= " << dlina << endl; // ����� �����
	f << " ��� ������� " << rad2 << " �������= " << s << endl; // ����� �������

	f.close();

	return 0;

}