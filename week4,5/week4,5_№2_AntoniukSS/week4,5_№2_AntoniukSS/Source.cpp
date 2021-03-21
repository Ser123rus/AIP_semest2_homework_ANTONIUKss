#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //добавил русский язык

	std::ofstream f;
	float dlina = 0;
	float s = 0;
	float pi = 3.14;
	int rad1,rad2 = 0;

	cin >> rad1; 

	dlina = 2 * pi * rad1; // расчёт длины 

	cin >> rad2;

	s = 2 * pi * (rad2 * rad2); // расчёт площади 

	f.open("Расчёт_длины_площади_окружности.txt");

	f << " При радиусе " << rad1 << " Длина= " << dlina << endl; // вывод длины
	f << " При радиусе " << rad2 << " Площадь= " << s << endl; // вывод площади

	f.close();

	return 0;

}