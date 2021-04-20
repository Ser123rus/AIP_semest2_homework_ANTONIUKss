#include <iostream>

//Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
//равно номеру строки. Количество строк n вводит пользователь 

int main()
{
	float n;

	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++)
			std::cout << 0;
		std::cout << std::endl;
	}


	return 0;
}