#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double price;

	cout << "Введите стоимость покупки: ";
	cin >> price;

	if (price > 1000)
		price *= 0.95;
	else if (price > 500)
		price *= 0.97;
	
	cout << "Стоимость с учетом скидки: " << price << endl;
	
	return 0;
}