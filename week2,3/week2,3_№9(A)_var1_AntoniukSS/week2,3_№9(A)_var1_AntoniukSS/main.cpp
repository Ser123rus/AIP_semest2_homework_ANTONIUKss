#include <iostream>
using namespace std;

float mnozhitel;
float result; // ��������� �������
int choice; // �������� �� ����� ������� ������� ��������

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

	cout << " ������� ����� ��������� ��������: " << endl <<
			"1.����-��������" << endl << "2.��������-���� " << endl << "3.����-�����" << endl <<
			"4.������-���� " << endl << "5.��������-������" << endl << "6.������-���������" << endl;

	cin >> choice;
	cout << " ����������� = ";
	cin >> mnozhitel;

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
	

	return 0;
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

	result = mnozhitel / 1.067 ;

}