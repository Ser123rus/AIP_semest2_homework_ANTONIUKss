#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	std::ofstream f;

	f.open("FirstAlph");

	f << "   *****" << endl;
	f << "  **   **" << endl;
	f << " **      *" << endl;
	f << " *      " << endl;
	f << " **      " << endl;
	f << " **      **" << endl;
	f << "  **    **" << endl;
	f << "   *****" << endl;

	f.close();

	return 0;

}