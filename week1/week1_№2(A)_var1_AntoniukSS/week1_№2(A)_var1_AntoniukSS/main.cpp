#include <iostream>
using namespace std;

int main()
{
	float dlina = 0;
	float s = 0;
	float pi = 3.14;
	int rad = 0;

	cin >> rad; //����� ����� ������
	
	dlina = 2 * pi * rad; // ������ ����� 
	s = 2 * pi * (rad * rad); // ������ ������� 

	cout << "dlina=" << dlina << endl; // ����� �����
	cout << "Ploshad=" << s << endl; // ����� �������

	return 0;

}
