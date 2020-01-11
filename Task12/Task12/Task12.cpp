#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int number, count = 0, sum = 0;

	cout << "Введите число: ";
	cin >> number;

	do {
		sum += number % 10;
		count++;
		number /= 10;
	} while (number > 0);
	cout << "Количество цифр равно: " << count << endl;
	cout << "Сумма цифр равна: " << sum << endl;



	return 0;
}