#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int result;

	cout << "В каком году был создан первый компьютер?\n"
		<< "1. В 1899\n"
		<< "2. В 1928\n"
		<< "3. В 1938\n"
		<< "Введите номер выбранного варианта ответа: ";
	cin >> result;

	if (result == 3) 
		cout << "Вы ответили верно!" << endl;
	else
		cout << "Вы ответили неверно!" << endl;

	return 0;

}