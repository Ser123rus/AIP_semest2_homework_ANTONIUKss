#include <iostream>
#include <cmath>
using namespace std;

//Имеется информация о роботах : габариты, вес, максимальная скорость.
//Вывести данные о самом маленьком роботе.

struct robo
{
	float vol, weigh, speed;
};

int main()
{

	setlocale(LC_ALL, "Russian");

	robo rob1, rob2;

	cout << "Введите параметры для первого робота" << " " << endl;
	cin >> rob1.vol >> rob1.weigh >> rob1.speed;
	cout << "Введите параметры для второго робота" << " " << endl;
	cin >> rob2.vol >> rob2.weigh >> rob2.speed;

	if ((rob1.vol<rob2.vol)&&(rob1.weigh<rob2.weigh)&&(rob1.speed<rob2.speed))
	{
		cout << "Первый робот самый маленький\n" << " Имеет следующие параметры: " << endl
		<< rob1.vol << endl << rob1.weigh << endl << rob1.speed << endl;
	}
	else cout << "Второй робот самый маленький\n" << " Имеет следующие параметры: " << endl
	<< rob2.vol << endl << rob2.weigh << endl << rob2.speed << endl;

	return 0;
}