#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	string str;
	cout << "Вводите текст: ";
	cin >> str;
	cout << "Количество нажатых клавиш равно: " << str.length() << endl;

	return 0;
}