/*Разложение числа на простые множители*/
#include <iostream>

using namespace std;

int main()
{	
	setlocale(LC_ALL, "Russian");
	int number, factor = 2;
	cout << "Введите число: ";
	cin >> number;

	cout << number << " = ";

	while (factor <= number)
	{
		if (number % factor == 0)
		{
			cout << factor;
			number = number / factor;
			if (number > 1)
				cout << "*";
		}
		else
			factor = factor + 1;
	}
	
	return 0;
}