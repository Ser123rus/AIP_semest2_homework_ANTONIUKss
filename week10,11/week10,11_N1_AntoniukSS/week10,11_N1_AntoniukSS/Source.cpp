#include <iostream>
#include <fstream>
using namespace std;

//��������� �������� ��������� (a + 4 * b) * (a - 3 * b) + a * a ��� �������� ���������
// a � b

void func();

int main()
{

	func();

	return 0;
}

void func()
{
	ofstream f;

	f.open("iskomoe.txt");

	int a = 2; 
	int b = 3;

	float z = (a + 4 * b) * (a - 3 * b) + a * a;

	f << "iskomoe=" << z << endl;

	cout << " Check file w name iskomoe.txt in program catalog " << endl;

	f.close();
}