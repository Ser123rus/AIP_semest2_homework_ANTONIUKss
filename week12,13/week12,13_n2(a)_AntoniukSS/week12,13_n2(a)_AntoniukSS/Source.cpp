#include <iostream>
#include <cmath>
using namespace std;

struct complex
{
	// x действительная часть, y мнимая

	float x, y;
};

// Создайте структуру для хранения комплексных чисел. Структура должна иметь 2 атрибута: вещественную часть и мнимую. 
// Объявите два числа и получите их значения от пользователя. 
// Напишите функцию, которая будет считать модуль комплексного числа.

void rashet(complex);

int main()
{

	setlocale(LC_ALL, "Russian");

	complex m;

	cout << "Введи координаты точки А" << endl;
	cin >> m.x >> m.y;

	rashet(m);

	return 0;
}

void rashet(complex m)
{
	float z = sqrt(m.x * m.x + m.y * m.y);

	cout << abs(z);
}