#include <iostream>
#include <cstdlib>

int main() {
	setlocale(0, "");
	int n;
	
	//Задача 1.
	
	const int size = 10;
	int sum = 0;
	int counter = 0;
	
	std::cout << "Задача 1.\nМассив:\n";
	srand(time(NULL));
	int arr1[size]{};
	for (int i = 0; i < size; i++) {
		arr1[i] = rand() % 20 + 1;
		std::cout << arr1[i] << ' ';
		sum += arr1[i];
	}
	std::cout << std::endl;
	std::cout << "Среднее арифметическое -> " << sum / size << '\n';
	sum = sum / size;
	for (int i = 0; i < size; i++) {
		if (arr1[i] < sum)
			counter++;
	}
	std::cout << "Кол-во элементов меньше средне арифметического -> " << counter << "\n\n";
	

	//Задача 2.
	
	std::cout << "Задача 2.\n\n";
	int arr2[3][3]{{ 2, 5, 7 },
				   { 3, 9, 2 },
				   { 5, 6, 0 }};
	
	int arr3[3][3]{ { 0, 2, 8 },
				    { 6, 1, 4 },
				    { 4, 3, 7 } };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			std::cout << arr2[i][j] << '\t';
		std::cout << '\n';
	}
	std::cout << "\n\t+\n\n";

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			std::cout << arr3[i][j] << '\t';
		std::cout << '\n';
	}
	std::cout << "\n\t=\n\n";

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr2[i][j] += arr3[i][j];
			std::cout << arr2[i][j] << '\t';
		}
		std::cout << '\n';
	}
	std:: cout << std::endl;
	

	//Задача 3.
	const int size2 = 6;
	int arr4[size2]{};
	std::cout << "Задача 3.\n\n";
	std::cout << "Введите 6-ти значное число -> ";
	std::cin >> n;
	if (n > 999999 || n <= 99999) 
		std::cout << "Ошибка ввода!\n";
	else {
		for (int i = size2 - 1; i >= 0; i--) {
			arr4[i] = n % 10;
			n /= 10;
		}
		std::cout << "Массив:\n";
		for (int i = 0; i < size2; i++)
			std::cout << arr4[i] << ' ';
		std::cout << std::endl;
	}

	return 0;
}