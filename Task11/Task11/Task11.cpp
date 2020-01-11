#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b;
	cout << "Введите левую границу интервала: ";
	cin >> a;
	cout << "Введите правую границу интервала: ";
	cin >> b;

	for (int i = a; i < b; i++)
	{
		int sum = 0;

		for (int delitel = 1; delitel < i; delitel++)
			if (i % delitel == 0)
				sum += delitel;

		if (sum == i)
			cout << i << endl;
	}

	return 0;
}