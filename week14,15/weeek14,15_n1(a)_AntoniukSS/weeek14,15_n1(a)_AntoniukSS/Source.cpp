#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//������������� ������ �� ���������� ������� � ���������:
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
		cars[i].color = " ������ ";
	}

	carsOutput();

	return 0;
}

void carsOutput()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "������ � " << i << endl;
		cout << "������: " << cars[i].width << endl;
		cout << "�����: " << cars[i].length << endl;
		cout << "������: " << cars[i].height << endl;
		cout << "���������: " << cars[i].dvs.cylinders << endl;
		cout << "���������� ���: " << cars[i].dvs.horsepower << endl;
		cout << "����� ���������: " << cars[i].dvs.volume << endl;
		cout << "���� ������: " << cars[i].color << endl;
		cout << "    " << endl;
	}
}