#include <iostream>
#include <cmath>
using namespace std;

//Ќапишите программу, котора€ принимает от пользовател€ координаты точки 
//и определ€ет, попала ли точка в заштрихованную область.
//Variant(1)_num(A)

struct point
{
	float x, y;
};

int main(point)
{
	point z;

	cout << "Enter x coordinate: " << endl;
	cin >> z.x;
	cout << "Enter y coordinate: " << endl;
	cin >> z.y;

	float l = sqrt((z.x * z.x) + (z.y * z.y));

	int r = 2;

	if ((l > r) && (z.x < 2) && (z.y < z.x)) cout << " Belongs to\n ";
	else cout << " Not belongs to " << endl;

	return 0;
}