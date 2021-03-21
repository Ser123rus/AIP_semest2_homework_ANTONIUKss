#include <iostream> 
#include <fstream>
using namespace std;

//Вводятся три целых числа. Определить какое из них наибольшее.

int main()
{
	setlocale(LC_ALL, "Russian"); // подключил русский язык

	ofstream f;

	int firstnum, secondnum, thirdnum, max;

	//ввод чисел
	cout << "Введите 3 числа " << endl;
	cin >> firstnum;
	cin >> secondnum;
	cin >> thirdnum;

	f.open("findmax.txt");
	f << "Внесённые данные:" << endl;
	f << firstnum << endl << secondnum << endl << thirdnum << endl;

	//сравнение и выбор большего
	if(firstnum > secondnum)
	{
		max = firstnum;
	}
	else
	{
		max = secondnum;
	}
	if(max < thirdnum)
	{
		max = thirdnum;
	}

	//вывод максимального числа
	f << "Максимальное число : " << max << endl;

	f.close();

	return 0;

}