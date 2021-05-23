#include <iostream>

int main() {
	int masiv[12];
	int rez1, rez2;

	rez1 = 0;
	rez2 = 0;

	for (int i = 0; i < 11; i++) {
		masiv[i] = rand() % 40 - 19;
	}

	for (int i = 0; i < 11 - 1; i++) {
		if (masiv[i] % 2 == 0) {
			rez1 += 1;
		}
		if (masiv[i] % 2 != 0) {
			rez2 += 1;
		}

		std::cout << masiv[i] << "\n";
	}

	std::cout << "\n";

	std::cout << "Chet " << rez1 << "\n";
	std::cout << "Nechet " << rez2 << "\n";

	return 0;
}