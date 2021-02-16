#include <iostream>
using namespace std;

int main()
{
	float dlina = 0;
	float s = 0;
	float pi = 3.14;
	int rad = 0;

	cin >> rad; //здесь ввожу радиус
	
	dlina = 2 * pi * rad; // расчёт длины 
	s = 2 * pi * (rad * rad); // расчёт площади 

	cout << "dlina=" << dlina << endl; // вывод длины
	cout << "Ploshad=" << s << endl; // вывод площади

	return 0;

}
