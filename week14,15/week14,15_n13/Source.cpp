#include <iostream>

int main() {
	int masiv[12];

	for (int i = 0; i < 11; i++) {
		masiv[i] = rand() % 40 - 19;
	}

	for (int i = 0; i < 11; i++) {
		if (masiv[i] < 0) {
			masiv[i] = masiv[i] + 5;
		}
		if (masiv[i] > 0) {
			masiv[i] = masiv[i] - 1;
		}

		std::cout << masiv[i] << "\n";
	}

	return 0;
}