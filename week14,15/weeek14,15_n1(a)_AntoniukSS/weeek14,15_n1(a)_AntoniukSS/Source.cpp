#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//Сгенерировать массив со случайными числами в диапазоне:
// a) [0,10]


void carsOutput();

struct engine
{
	int cylinders;
	float horsepower, volume;
};

struct car
{
	float width, length, height;
	string color;
	engine dvs;
};

car cars[10];

int main()
{
	setlocale(LC_ALL, "Russian");

	for (int i = 0; i < 10; i++)
	{
		cars[i].width = rand() % (150 - 0 + 1) + 0;
		cars[i].length = rand() % (300 - 0 + 1) + 0;
		cars[i].height = rand() % (300 - 0 + 1) + 0;
		cars[i].dvs.cylinders = 8;
		cars[i].dvs.horsepower = rand() % (1000 - 0 + 1) + 1000;
		cars[i].dvs.volume = rand() % (500 - 50 + 1) + 50;
		cars[i].color = " чёрный ";
	}

	carsOutput();

	return 0;
}

void carsOutput()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "машина № " << i << endl;
		cout << "ширина: " << cars[i].width << endl;
		cout << "длина: " << cars[i].length << endl;
		cout << "Высота: " << cars[i].height << endl;
		cout << "Цилиндров: " << cars[i].dvs.cylinders << endl;
		cout << "Лошадинных сил: " << cars[i].dvs.horsepower << endl;
		cout << "Объём двигателя: " << cars[i].dvs.volume << endl;
		cout << "Цвет машины: " << cars[i].color << endl;
		cout << "    " << endl;
	}
}