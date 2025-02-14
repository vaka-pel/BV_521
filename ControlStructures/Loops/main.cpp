#include<iostream>
using namespace std;

//#define WHILE_1
#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");

#if defined WHILE_1
	int i = 0;		//Счетчик цикла
	int n = 5;		//Количество итераций
	while (i < n)
	{
		cout << i << ". Loops " << endl;
		i++;
	}
#endif // WHILE_1

	double n;
	cout << "Введите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
}

/*
----------------------------
1. while - цикл с предусловием;
2. do...while - цикл с постусловием;
3. for - цикл на заданное число итераций;

Итерация - это однократное выполнение тела цикла.
Тело цикла - это код (фрагмент кода),
который нужно зациклить (многократно выполнить).
----------------------------
*/