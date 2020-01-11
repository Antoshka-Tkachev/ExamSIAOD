#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int height;
	cout << "Введите выосту: ";
	cin >> height;

	for (int i = 1; i <= height; i++) {
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}

	return 0;
}