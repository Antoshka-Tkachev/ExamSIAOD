#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double x;
	cout << "Введите x: ";
	cin >> x;
	cout << "Значение выражения равно: " << log(x) * cos(x) + (1 / (pow(sin(pow(cos(x), 2)), 2))) << endl;

	return 0;
}