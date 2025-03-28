#include<iostream>
using std::cin;
using std::cout;
using std::endl;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
#define TRIANGLE_4
#define RHOMBUS
#define CHESS

void main()
{
	setlocale(LC_ALL, "");
	int n;		//Размер фигуры
	cout << "Введите размер фигуры: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)//2) Этот цикл повторяет вывод строки
	{
		for (int j = i; j < n; j++)	//1) этот цикл повторяет вывод "* " на экран (формирует строку из "* ")
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_3

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "* ";
			//if ((i + j) % 2 == 0)cout << "+ "; else cout << "- ";
			if (i % 2 == j % 2)cout << "+ "; else cout << "- ";
		}
		cout << endl;
	}

}