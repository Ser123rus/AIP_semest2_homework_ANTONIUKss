#include <iostream>
using namespace std;

//ѕользователь вводит день мес€ца. ¬ывести на экран день недели
//—читаем, что 1-е число мес€ца Ц это вторник.

void chetdays(int day);
void unchetdays(int day);

int main()
{
	int day;
	cout << "Print day's num: " << endl;
	cin >> day;

	if (day % 2 == 0) chetdays(day);
	else if (day % 2 == 1) unchetdays(day);

	return 0;
}

void chetdays(int day)
{
	cin >> day;
	if(day == 2) cout << "Sreda" << endl;
	if(day == 4) cout << "Pyatnitsa" << endl;
	if(day == 6) cout << "Voskresenie" << endl;
	if(day == 8) cout << "Vtornik" << endl;
	if(day == 10) cout << "Chetverg" << endl;
	if(day == 12) cout << "Subbota" << endl;
	if(day == 14) cout << "Ponedelnik" << endl;
	if(day == 16) cout << "Sreda" << endl;
	if(day == 18) cout << "Pyatnitsa" << endl;
	if(day == 20) cout << "Voskresenie" << endl;
	if(day == 22) cout << "Vtornik" << endl;
	if(day == 24) cout << "Chetverg" << endl;
	if(day == 26) cout << "Subbota" << endl;
	if(day == 28) cout << "Ponedelnik" << endl;
	if(day == 30) cout << "Sreda" << endl;
}

void unchetdays(int day)
{
	cin >> day;
	if (day == 1) cout << "Vtornik" << endl;
	if (day == 3) cout << "Chetverg" << endl;
	if (day == 5) cout << "Subbota" << endl;
	if (day == 7) cout << "Ponedelnik" << endl;
	if (day == 9) cout << "Sreda" << endl;
	if (day == 11) cout << "Pyatnitsa" << endl;
	if (day == 13) cout << "Voskresenie" << endl;
	if (day == 15) cout << "Vtornik" << endl;
	if (day == 17) cout << "Chetverg" << endl;
	if (day == 19) cout << "Subbota" << endl;
	if (day == 21) cout << "Ponedelnik" << endl;
	if (day == 23) cout << "Sreda" << endl;
	if (day == 25) cout << "Pyatnitsa" << endl;
	if (day == 27) cout << "Voskresenie" << endl;
	if (day == 29) cout << "Vtornik" << endl;
	if (day == 31) cout << "Chetverg" << endl;
}