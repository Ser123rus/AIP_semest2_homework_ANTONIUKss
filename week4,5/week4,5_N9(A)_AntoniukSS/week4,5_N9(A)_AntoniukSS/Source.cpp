#include <iostream>
#include <fstream>
using namespace std;

float mnozhitel;
float result; // результат расчёта
int choice; // отвечает за выбор позиции формата перевода

void outputfile();
void outputconsole();
void valueschoise();
void metrVkilometr(float mnozhitel);
void kilometrVMetr(float mnozhitel);
void metrVversta(float mnozhitel);
void verstaVmetr(float mnozhitel);
void kilometrVversta(float mnozhitel);
void verstaVkilometr(float mnozhitel);

//написать конвертер величин с выбором формата вывода

int main()
{
	setlocale(LC_ALL, "Russian"); // включил русский язык(локализация)

	int outchoise = 0;

	cout << " Введите номер желаемого перевода: " << endl <<
		"1.Метр-километр" << endl << "2.Километр-метр " << endl << "3.Метр-вёрсты" << endl <<
		"4.Версты-метр " << endl << "5.Километр-версты" << endl << "6.Версты-километры" << endl;

	cin >> choice;
	cout << " Колличество = ";
	cin >> mnozhitel;
	
	valueschoise();
	cout << "Выберите способ вывода: " << endl;
	cout << "1.Вывод в консоль" << endl;
	cout << "2.Вывод в файл" << endl;
	cin >> outchoise;
	 
	if(outchoise = 1)
	{
		outputconsole();
	}
	if (outchoise = 2)
	{
		outputfile();
	}

	return 0;
}

void outputconsole()
{
	cout << "Otvet" << result << endl;
}

void outputfile()
{
	ofstream f;

	f.open("result.txt");
	
		f << "Выбранный перевод" << choice << endl;
	f << " Введите номер желаемого перевода: " << endl <<
		"1.Метр-километр" << endl << "2.Километр-метр " << endl << "3.Метр-вёрсты" << endl <<
		"4.Версты-метр " << endl << "5.Километр-версты" << endl << "6.Версты-километры" << endl;
	f << " Колличество = " << mnozhitel << endl;
	f << "Otvet" << result << endl;
	

	f.close();
}

void valueschoise()
{
	if (choice == 1) // вызов функций с расчётом
	{
		metrVkilometr(mnozhitel);
		cout << result;
	}
	if (choice == 2)
	{
		kilometrVMetr(mnozhitel);
		cout << result;
	}
	if (choice == 3)
	{
		metrVversta(mnozhitel);
		cout << result;
	}
	if (choice == 4)
	{
		verstaVmetr(mnozhitel);
		cout << result;
	}
	if (choice == 5)
	{
		kilometrVversta(mnozhitel);
		cout << result;
	}
	if (choice == 6)
	{
		verstaVkilometr(mnozhitel);
		cout << result;
	}
}

void metrVkilometr(float mnozhitel) //реализация расчётов
{
	result = mnozhitel / 1000;
}

void kilometrVMetr(float mnozhitel)
{
	result = mnozhitel * 1000;
}

void metrVversta(float mnozhitel)
{
	result = mnozhitel / 1067;
}

void verstaVmetr(float mnozhitel)
{
	result = mnozhitel * 1067;
}

void kilometrVversta(float mnozhitel)
{
	result = mnozhitel * 1.067;
}

void verstaVkilometr(float mnozhitel)
{
	result = mnozhitel / 1.067;
}