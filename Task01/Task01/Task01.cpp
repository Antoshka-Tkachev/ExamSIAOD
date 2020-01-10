#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double x, y;

	cout << "Введите первое число: ";
	cin >> x;
	cout << "Введите второе число: ";
	cin >> y;

	if (x > y)
		cout << "Первое число: " << x << " больше второго числа: " << y << endl;
	else if (x < y)
		cout << "Первое число: " << x << " меньше второго числа: " << y << endl;
	else 
		cout << "Первое число: " << x << " равно второму числу: " << y << endl;

	return 0;
}
