#include <iostream>
#include <cmath>

int main() {

	float x, a, b, y, shag;

	std::cout << "Vvedite shag"; std::cin >> shag;
	std::cout << "Vvedite diapozon"; std::cin >> a >> b;
	x = a;
	while (x <= b) {
		y = (-0.23 * (x * x)) + x;
		x = x + shag;
		std::cout << y << "\n";
	}

	return 0;
}