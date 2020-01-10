#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double x = 10, sum = 10, count = 1;
	//решил задачу для уменьшения скорости
	while (sum < 20) {
		sum += x / 2;
		x /= 2;
		count++;
	}
	cout << "Количество дней равно: " << count << endl;

	return 0;
}