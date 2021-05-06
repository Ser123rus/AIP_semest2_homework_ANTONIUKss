#include <iostream>
#include <cmath>
using namespace std;

// –обот-самолЄт описываетс€ как структура с пол€ми:
// скорость вращени€ винта, радиус винта, коэффициент т€ги.
// Ќапишите функцию дл€ расчЄта т€ги, создаваемую винтом 
// (произведение всех характеристик).

struct fling
{
	float svv, rv, kt;
};

float tyga(fling);

int main()
{
	setlocale(LC_ALL, "Russian");

	fling robo;

	cout << "¬ведите характреистики самолЄта" << endl;
	cin >> robo.svv >> robo.rv >> robo.kt;

	cout << "—амолЄт с данными характеристиками имеет следующую т€гу:" << " " << tyga(robo);

	return 0;
}

float tyga(fling robo)
{
	return (robo.svv * robo.rv * robo.kt);
}