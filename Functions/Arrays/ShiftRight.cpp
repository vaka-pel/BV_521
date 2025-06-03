#include"ShiftRight.h"
template<typename T>void ShiftLeft(T arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];

		}
		arr[n - 1] = buffer;
	}
}


template<typename T>void ShiftRight(T arr[], const int n, const int number_of_shifts)
{
	ShiftLeft(arr, n, n - number_of_shifts);
}
template<typename T>void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftRight(arr[i], COLS, number_of_shifts);
	}*/
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 2; j >= 0; j--)
			{
				arr[i][j + 1] = arr[i][j];
			}
			arr[i][0] = arr[i - 1][COLS - 1];

		}
		arr[0][0] = buffer;
	}
}
