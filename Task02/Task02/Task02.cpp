#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	const double pi = 3.141592653589793238462643;
	double r1, r2;

	cout << "Введите радиус меньшей окружности: ";
	cin >> r1;
	cout << "Введите радиус большей окружности: ";
	cin >> r2;

	if (r1 > r2)
		cout << "Вы введи некорректные данные" << endl;
	else 
		cout << "Площадь кольца = " << pi * (r2 * r2 - r1 * r1) << endl;

	return 0;

}
