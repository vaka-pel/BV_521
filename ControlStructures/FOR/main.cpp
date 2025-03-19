#pragma warning(disable:4326)
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	/*for (;false;)
	{
		cout << "Hello FOR";
	}*/

	/*int n = 5;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	}*/

	int n;
	cout << "Введите количество итераций: "; cin >> n;
	unsigned long long int f = 1;	//factorial
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		//f *= i;
		f = f * i;
		cout << f << endl;
	}
	cout << endl;
}