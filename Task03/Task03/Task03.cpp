#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int min, sec;

	cout << "Введите минуты: ";
	cin >> min;
	cout << "Введите секунды: ";
	cin >> sec;

	//Впринципе min и sec может быть больше 60
	//Никто не запрещает сказать 5 минут и 230 секунд
	//Но проверка на < 0 нужна
	if (min > 60 || sec > 60 || min < 0 || sec < 0)
		cout << "Вы введи некорректные данные" << endl;
	else
		cout << "Количество секунд в " << min << " минуте(ах) и " << sec
		<< " ceкунде(ах) равно " << min * 60 + sec << endl;

	return 0;

}
