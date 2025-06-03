#include"ShiftLeft.h"
template<typename T>void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, number_of_shifts);
	}*/
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 1; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}