#include <iostream>
using namespace std;
using std::cout;
using std::cin;

#define TASK_1
#define TASK_2
#define TASK_3
#define TASK_4
#define TASK_5
#define TASK_6
#define TASK_7

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведите число: "; cin >> n;
#ifdef TASK_1
	cout << endl << "TASK_1" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << (j == n - 1 ? "*" : "* ");
		cout << endl;
	}
#endif // TASK_1
#ifdef TASK_2
	cout << endl << "TASK_2" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{

			cout << (j == i ? "*" : "* ");
		}
		cout << endl;
	}
#endif // TASK_2
#ifdef TASK_3
	cout << endl << "TASK_3" << endl;
	for (int i = n; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
			cout << (j == 1 ? "*" : "* ");
		cout << endl;
	}
#endif // TASK_3
#ifdef TASK_4
	cout << endl << "TASK_4" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (j == i || j >= i)
				cout << (j == n - 1 ? "*" : "* ");
			else cout << "  ";
		cout << endl;
	}
#endif // TASK_4
#ifdef TASK_5
	cout << endl << "TASK_5" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (j >= n - i - 1) cout << (j == n - 1 ? "*" : "* ");
			else cout << "  ";
		cout << endl;
	}
#endif // TASK_5
#ifdef TASK_6
	cout << endl << "TASK_6" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2 * n; j++)
		{
			if (j == n - i - 1) cout << "/";
			else if (j == n + i) { cout << "\\"; break; }
			else cout << " ";
		}
		cout << endl;
	}
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < 2 * n; j++)
		{
			if (j == n - i) cout << "\\";
			else if (j == i + n - 1) { cout << "/"; break; }
			else cout << " ";
		}
		cout << endl;
	}
#endif // TASK_6
#ifdef TASK_7
	cout << endl << "TASK_7" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0) cout << "+ ";
				else cout << "- ";
			}
			else
			{
				if (j % 2 == 0) cout << "- ";
				else cout << "+ ";
			}
		}
		cout << endl;
	}
#endif // TASK_7

}