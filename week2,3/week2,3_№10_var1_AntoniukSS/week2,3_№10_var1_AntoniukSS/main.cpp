#include <iostream> 
using namespace std; 

int main() 
{
	setlocale(LC_ALL, "Russian"); // подключил русский язык

	int firstnum, secondnum, thirdnum, max;

	//ввод чисел
	cout << "Введите 3 числа " << endl;
	cin >> firstnum;
	cin >> secondnum;
	cin >> thirdnum;

	//сравнение и выбор большего
	if (firstnum > secondnum)
	{
		max = firstnum;
	}
	else
	{
		max = secondnum;
	}
	if (max < thirdnum)
	{
		max = thirdnum;
	}
	
	//вывод максимального числа
	cout << "Максимальное число : " << max << endl;

	return 0;

}