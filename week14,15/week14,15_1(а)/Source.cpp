#include <iostream>

int main() {
	int masiv[101];

	for (int i = 0; i < 101; i++) {
		masiv[i] = rand() % 11;
	}

	for (int i = 0; i < 101 - 1; i++)
		std::cout << i << " - " << masiv[i] << ", " << std::endl;

	return 0;
}