#include <iostream>
#include <cmath>
using namespace std;

// Имеется информация о датчиках:
// диапазон измеряемых значений (min, max), погрешность, максимальная скорость.
// Вывести данные о датчике с наибольшим диапазоном значений.

struct parametres
{
	float min, max, pogr, mspeed;
};

int main()
{
	setlocale(LC_ALL, "Russian");

	parametres dat1, dat2;

	//ввод параметров для каждого датчика
	cout << " Параметры первого датчика " << " " << endl;
	cin >> dat1.max >> dat1.min >> dat1.pogr >> dat1.mspeed;
	cout << " Параметры второго датчика " << " " << endl;
	cin >> dat2.max >> dat2.min >> dat2.pogr >> dat2.mspeed;

	//расчёт диапазона значений для каждого(чтобы в цыкле занимало меньше места)
	float di1 = dat1.max - dat1.min;
	float di2 = dat2.max - dat2.min;

	//сравнения характеристик каждого датчика и последующий вывод
	if ( ( (di1) > (di2) ) && (dat1.pogr < dat2.pogr) && (dat1.mspeed > dat2.mspeed) )
	{
		cout << ")))Первый датчик лучший))!!!" << endl 
		<< "Его параметры: " << endl 
		<< ">>Диапазон: " << " " << di1 << endl
		<< ">>Погрешность:" << " " << dat1.pogr << endl 
		<< ">>Скорость " << dat1.mspeed;
	}
	else
	{
		cout << "Второй датчик самый лучший" << endl
		<< "Его параметры: " << endl
		<< ">>Диапазон: " << " " << di2 << endl
		<< ">>Погрешность:" << " " << dat2.pogr << endl
		<< ">>Скорость " << dat2.mspeed;
	}

	return 0;
}