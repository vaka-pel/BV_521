#include<iostream>
using namespace std;



void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello DataTypes" << endl;
	cout << true << endl;
	cout << false << endl;
	cout << (bool)-0.00000000000000001 << endl;





	cout << "short:" << endl;
	cout << "SIZE: " << sizeof(short) << endl;
	cout << "unsigned short: " << 0 << " ... " << USHRT_MAX << endl;
	cout << "  signed short:" << SHRT_MIN << " ... " << SHRT_MAX << endl;
	cout << endl;

	cout << "int:" << endl;
	cout << "SIZE: " << sizeof(int) << endl;
	cout << "unsigned int: " << 0 << " ... " << UINT_MAX << endl;
	cout << "  signed int:" << INT_MIN << " ... " << INT_MAX << endl;
	cout << endl;

	//Ctrl + D  -  Duplicate selection (Продублировать выделенный код).






	//Макроопределений Visual Studio
	SHRT_MIN, SHRT_MAX, USHRT_MAX;
	LONG_MIN, LONG_MAX, ULONG_MAX;
	INT_MIN, INT_MAX, UINT_MAX;
	LLONG_MIN, LLONG_MAX, ULLONG_MAX;
	FLT_MIN, FLT_MAX;
	DBL_MIN, DBL_MAX;
}

/*
	Variable - это именованная область памяти, содержимое которой
			   может изменяться в процессе выполнения программы.

					
					type name;
	type - тип переменной, он определяет 3 вещи:
	1. Сколько памяти переменная будет занимать;
	2. Какие значения она сможет принимать;
	3. Какие операции над ней можно выполнять;

					Типы данных
	I.  Логические типы: bool (Boolean). 1 Byte
		 true	- хранится в памяти как 1;
		 false	- хранится в памяти как 0;
		 На самом деле 0 - это false, a true - это все что НЕ 0.
		 1 Byte = 8 bit.
		 bit - Binary Digit (двоичная цифра 0 или 1)
	II. Символьные типы: char (Character - Символ) 1 Byte.
		 ASCII - American Stadard Code for Information Interchange
		 256.
	III.Числовые типы. Делятся на целочисленные и вещественные.
		беззнаковые (unsigned) - могут хранить только положительные целые числа;
		   знаковые (signed) - могут хранить как положительные, так и отрицательные целые числа;
	
			
			float  - вещественное число одинарной точности, занимает 4 Байта памяти.
			double - вещественное число двойной точности, занимает 8 Байт памяти.
*/