#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define DATA_TYPES

#if defined DATA_TYPES
	//Если выше определено DATA_TYPES,
	//то нижеследующий код до директивы #endif
	//будет виден комипилятору.
#endif

//#define INITIALIZATION

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined DATA_TYPES
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

	//					Declaration of Variables:
	int a;
	int t;
	double price;
	double priceOfCoffee;	//camelCaseStyle (pascalCaseStyle)
	//double price_of_coffee;	//snake_case_style
	//BigCamal
	//smallCamel

#endif

#if defined INITIALIZATION
	int a;// = 0;	//Инициализация переменной 'a' при объявлении
	cout << a << endl;

	int b;
	b = 1;		//Инициализация после объявления оператором присваивания.

	int c;		//Объявление переменной
	cout << "Введите целое число: "; //Приглашение пользователя на ввод
	cin >> c;	//Инициализация переменной вводом с клавиатуры

	//Init - Начало

	double price;
	//double price;
	cout << price << endl;
#endif // INITIALIZATION

	double price_of_coffee;
	int number_of_cups;
	cout << "Введите стоимость чашки кофе: ";	cin >> price_of_coffee;
	cout << "Введите количество чашек: ";		cin >> number_of_cups;

	double total_price = price_of_coffee * number_of_cups;
	cout << "Общая стоимость: " << total_price << endl;
	//ConsoleIn
	//		>> - оператор изъятия из потока (Stream Extraction operator)
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

	Identifier - это имя.
				
				Правила именования переменных:
	1. Имя переменной может состоять из символов латинского алфавита,
	   как строчных, так и заглавных, символов цифр и символа _
		ABC...Z
		abc...z
		012...9
		_

	2. Имя переменной никогда не может начинаться символом цифры;

	3. Имена переменных регистрозависимы, то есть, 
		строчные и заглавные символы отличаются, например
		'Price' и 'price' - это разные переменные;

	4. Для именования переменных нельзя использовать ключевые слова языка C++;

	------------------------------------------

	Проинициализировать

	Инициализация - это присвоение начального значения.

*/