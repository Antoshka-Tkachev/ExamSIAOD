#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int x = rand() % 10;
	int y = rand() % 10;
	int result;

	cout << x << " * " << y << " = ";
	cin >> result;

	if (result == x * y)
		cout << "Вы ответили верно!" << endl;
	else
		cout << "Вы ответили неверно! Правильный ответ: " << x * y << endl;

	return 0;
}