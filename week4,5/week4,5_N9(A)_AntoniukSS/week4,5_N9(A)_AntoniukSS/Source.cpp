#include <iostream>
#include <fstream>
using namespace std;

float mnozhitel;
float result; // ��������� �������
int choice; // �������� �� ����� ������� ������� ��������

void outputfile();
void outputconsole();
void valueschoise();
void metrVkilometr(float mnozhitel);
void kilometrVMetr(float mnozhitel);
void metrVversta(float mnozhitel);
void verstaVmetr(float mnozhitel);
void kilometrVversta(float mnozhitel);
void verstaVkilometr(float mnozhitel);

//�������� ��������� ������� � ������� ������� ������

int main()
{
	setlocale(LC_ALL, "Russian"); // ������� ������� ����(�����������)

	int outchoise = 0;

	cout << " ������� ����� ��������� ��������: " << endl <<
		"1.����-��������" << endl << "2.��������-���� " << endl << "3.����-�����" << endl <<
		"4.������-���� " << endl << "5.��������-������" << endl << "6.������-���������" << endl;

	cin >> choice;
	cout << " ����������� = ";
	cin >> mnozhitel;
	
	valueschoise();
	cout << "�������� ������ ������: " << endl;
	cout << "1.����� � �������" << endl;
	cout << "2.����� � ����" << endl;
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
	
		f << "��������� �������" << choice << endl;
	f << " ������� ����� ��������� ��������: " << endl <<
		"1.����-��������" << endl << "2.��������-���� " << endl << "3.����-�����" << endl <<
		"4.������-���� " << endl << "5.��������-������" << endl << "6.������-���������" << endl;
	f << " ����������� = " << mnozhitel << endl;
	f << "Otvet" << result << endl;
	

	f.close();
}

void valueschoise()
{
	if (choice == 1) // ����� ������� � ��������
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

void metrVkilometr(float mnozhitel) //���������� ��������
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