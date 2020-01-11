#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double x, y;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	cout << "Значение выражения равно: " << atan(((x - y * y)/log(x * x + y * y)) + pow(x * y, 1/3)) << endl;

	return 0;
}