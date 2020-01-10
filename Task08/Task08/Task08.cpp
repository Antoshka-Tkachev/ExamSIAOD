#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int number, count = 1;

	cout << "Введите число: ";
	cin >> number;

	while ((number /= 10) > 0)
		count++;
	cout << "Количество цифр равно: " << count << endl;

	return 0;
}