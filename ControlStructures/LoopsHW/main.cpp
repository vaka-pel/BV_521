#include <iostream>
#include <windows.h>

#pragma execution_character_set( "utf-8" )

using namespace std;

int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == j) cout << "\\";
			else cout << " ";

		}
		cout << endl;

		for (int i = 5; i > 0; i--)
		{
			for (int j = 0; j < 5; j++)
				if (i == j)cout << "* ";
		}




	}
	//SetConsoleOutputCP(CP_UTF8);
	//setlocale(LC_ALL, "");
	SetConsoleOutputCP(65001);
	//srand(time(NULL));

	int n;
	cout << "Введите размер шахматной доски: "; cin >> n;

	//Делаем шахматную доску с полями:
	cout << "Шахматная доска с полями: " << endl;
	cout << "┌";
	for (int i = 0; i < n; i++)
	{
		cout << "──";
	}
	cout << "┐";
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "│";
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0) cout << "██";
			else cout << "  ";
		}
		cout << "│";
		cout << endl;
	}

	cout << "└";
	for (int i = 0; i < n; i++)
	{
		cout << "──";
	}
	cout << "┘";
	cout << endl;

	//Делаем большую шахматную доску:
	//Здесь я взял идею из предыдушего упражнения, и просто подставил вложенный 
	//цикл в if else, т.е. вместо "██" у меня получился "двумерный массив" точек заданного значения n

	cout << "Большая шахматная доска: " << endl;

	for (int i = 0; i < n; i++)  //цикл для отрисовки больших клеток (строк и столбцов)
	{
		for (int l = 0; l < n; l++)  //цикл для отрисовки строк внутри одной клетки
		{
			for (int j = 0; j < n; j++)  //цикл для отрисовки столбцов клеток
			{
				if ((i + j) % 2 == 0)
				{
					for (int k = 0; k < n; k++) cout << "* ";
				}
				else
				{
					for (int k = 0; k < n; k++) cout << "  ";
				}
			}
			cout << endl;
		}
	}


	return 0;
}

