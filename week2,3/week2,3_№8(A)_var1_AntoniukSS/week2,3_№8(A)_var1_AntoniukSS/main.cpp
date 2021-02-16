#include <iostream>
using namespace std;

int main()
{

	int a = 2;
	int b = 3;
	float iskomoe = 0;

	iskomoe = (a + 4 * b) * (a - 3 * b) + a * a;

	cout << "iskomoe=" << iskomoe << endl;

	return 0;
}