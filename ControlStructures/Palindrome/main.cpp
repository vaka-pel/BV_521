#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number;
	cout << "Введите число: "; cin >> number;
	int buffer = number;	//Создаем копию введенного числа, поскольку данные введенные пользователем
							//должны гарантированно остаться неизменными.
	int reverse = 0;		//Эта переменная будет хранить исходное число, записанное наоборот
	while (buffer > 0)
	{
		reverse *= 10;			//Освобождаем место для следующей цифры;
		reverse += buffer % 10;	//Получаем младший разряд (цифру) и сохраняем ее 'reverse';
		buffer /= 10;			//Убираем младшую цифру из исходного числа;
	}
	cout << number << endl;
	cout << reverse << endl;

	if (reverse == number)cout << "Это палиндром" << endl;
	else cout << "Это простое число" << endl;
}