#include <iostream>

int main() {
	int masiv[12];


	for (int i = 0; i < 11; i++) {
		masiv[i] = rand() % 40 - 19;
	}

	for (int i = 0; i < 11 - 1; i++) {
		if (masiv[i] % 2 == 0) {
			masiv[i] = masiv[i] * 2;
		}
		if (masiv[i] % 2 != 0) {
			masiv[i] = masiv[i] + 3;
		}

		std::cout << masiv[i] << "\n";
	}

	return 0;
}