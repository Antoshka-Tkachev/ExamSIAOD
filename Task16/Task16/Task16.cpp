#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double x;
	cout << "Введите x: ";
	cin >> x;
	cout << "Значение выражения равно: " 
		<< exp(tan(x * 2)) - (1 / pow(cos(pow((1 + 2 * x * x) ,2)) ,2)) 
		<< endl;

	return 0;
}