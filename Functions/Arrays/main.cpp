#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Print.cpp"
#include"Sort.cpp"
#include"Sum.cpp"
#include"Avg.cpp"
#include"MinValueIn.cpp"
#include"MaxValueIn.cpp"
#include"ShiftLeft.cpp"
#include"ShiftRight.cpp"




















void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� ��������� �������: " << MinValueIn(arr, n) << endl;
	cout << "������������ �������� ��������� �������: " << MaxValueIn(arr, n) << endl;
	

	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	
	ShiftRight(arr, n, number_of_shifts);
	Print(arr, n);

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "����� ��������� �������: " << Sum(brr, SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(brr, SIZE) << endl;
	cout << "����������� �������� ��������� �������: " << MinValueIn(brr, SIZE) << endl;
	cout << "������������ �������� ��������� �������: " << MaxValueIn(brr, SIZE) << endl;
	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
    Print(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� ��������� �������: " << MinValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� ��������� �������: " << MaxValueIn(i_arr_2, ROWS, COLS) << endl;
    cout << "������� ���������� �������: "; cin >> number_of_shifts;
	ShiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
}











