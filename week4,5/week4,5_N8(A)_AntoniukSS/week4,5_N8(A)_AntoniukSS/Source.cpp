#include <iostream>
#include <fstream>
using namespace std;

//вычисляем значение выражения (a + 4 * b) * (a - 3 * b) + a * a при заданных значениях
// a и b

int main()
{
	ofstream f;

	f.open("iskomoe.txt");
	int a = 2;
	int b = 3;

	f << "iskomoe=" << (a + 4 * b) * (a - 3 * b) + a * a << endl;

	cout << " Check file w name iskomoe.txt in program catalog " << endl;
	f.close();

	return 0;
}