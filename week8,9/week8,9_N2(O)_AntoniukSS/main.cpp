#include <iostream>
#include <cmath>

int main() {

	float x, a, b, y, shag;

	std::cout << "Vvedite shag"; std::cin >> shag;
	std::cout << "Vvedite diapozon"; std::cin >> a >> b;
	x = a;
	while (x <= b) {
		y = (sqrt(15 + (4 / x))) + (13 * x) + (sin((3 * x) + 13));
		x = x + shag;
		std::cout << y << "\n";
	}

	return 0;
}