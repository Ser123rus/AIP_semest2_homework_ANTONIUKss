#include <iostream>
using namespace std;

int main()
{

	float metres = 0;
	float verst = 0;
	float kilometrs = 0;
	float metres1 = 0;
	float verst1 = 0;
	float kilometrs1 = 0;

	cin >> metres >> verst >> kilometrs; //ввод значений

	//расчёты отношений
	kilometrs = 1000 * metres;
	verst = 1066.8 * metres;
	metres = kilometrs/1000;
	kilometrs1 = 0.94 * verst;
	verst1 = 1.067 * kilometrs;
	metres1 = 0.00094 * verst;

	//вывод соотнесённых величин
	cout << "kilometr-metr=" << kilometrs << endl << "versta-metr=" << verst << endl;
	cout << "metr-kilometr=" << metres << endl << "kilometr-versta=" << kilometrs1 << endl;
	cout << "versta-kilometr=" << verst1 << endl << "metr-versta=" << metres1 << endl;

	return 0;

}