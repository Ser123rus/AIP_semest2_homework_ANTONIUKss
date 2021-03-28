#include <iostream>
#include <cmath>
using namespace std;

//Ќапишите программу, котора€ принимает от пользовател€ координаты точки и определ€ет,
//попала ли точка в заштрихованную область.
//var1_n3(a)

int main()
{
	float x, y, r, l;
	cout << "Enter x coordinate" << endl;
	cin >> x;
	cout << "Enter y coordinate" << endl;
	cin >> y;

	l = sqrt((x * x) + (y * y));

	r = 2;

	if ((y >= 0) && ((x * x) + (y * y) <= 4) && ((x * x) + (y * y) >= 1))
	{
		cout << "Belongs to" << endl;
	}
	else cout << "Not belongs to" << endl;

	return 0;
}