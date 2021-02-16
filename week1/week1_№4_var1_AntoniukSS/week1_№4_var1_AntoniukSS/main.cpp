#include <iostream>
using namespace std;

int main()
{

	int frsnum = 0;
	int scnnum = 0;
	int scladnum = 0;

	cin >> frsnum;
	cin >> scnnum;

	if ((frsnum != 0) | (scnnum != 0))
	{
		scladnum = frsnum;
		frsnum = scnnum;
		scnnum = scladnum;
	}

	cout << "1stnum=" << frsnum << endl;
	cout << "2ndnum=" << scnnum << endl;

	return 0;

}