//Operators
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

//#define ARITHMETICAL_OPERATORS	//1) Арифметические операторы
//#define ASSIGNMENT_OPERATOR		//2) Оператор присваивания
//#define INCREMENT_DECREMENT		//3) Increment/Decrement (++/--)
//#define COMPOUND_ASSIGNMENTS		//4) Составные присваиваня
#define COMPARISON_OPERATORS		//5) Операторы сравнения
#define LOGICAL_OPERATORS		//6) Логические операторы

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello operators!" << endl;

#ifdef ARITHMETICAL_OPERATORS
	//Unary:	+, -;
	//Binary:	+, -, *, /, %;
	//			% - остаток от деления.
	80 - 20;
	+20;
	8 * 3;
	cout << 17 / 3 << endl;
	cout << 17 % 3 << endl;
	//cout << 3. % 17 << endl;
	cout << 3 % 5 << endl;
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR

	//				l-value = r-value;
	//	l-value - переменная слева, в которую сохраняется значение.
	//	r-value - выражение справа, может быть как простым, так и сложным.
	-20;	//Простейшее выражение
	3;		//Простейшее выражение
	8 * 3;	//Это простое выражение, поскольку состоит из одной операции
	int a = (2 + 3) * 4;	//Сложное выражение, поскольку включает в себя больше одной операции
	;		//Пустое выражение, оно не содержит нчего, даже ошибок.

	1 * 2 * 3 * 4 * 5;

	int a, b, c;
	
	a = b = c = 0;

	cout << a << "\t" << b << "\t" << c << endl;

#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	//Increment (++) - это унарный оператор, который увеличивает значение переменной на 1.
	//Decrement (--) - это унарный оператор, который уменьшает значение переменной на 1.
	//Префиксная, Постфиксная

	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix (Suffix) increment
	--i;	//Prefix decrement
	i--;	//Postfix (Suffix) decrement

	
	int j = ++i;

	cout << j << "\t" << i << endl;
	//cout << i << endl;	//1
	//cout << j << endl;	//0

#endif // INCREMENT_DECREMENT

#ifdef COMPOUND_ASSIGNMENTS
	int i = 3;

	i = i + 2;		i += 2;//Прибавить	(Сложить и присвоить - Add assign)
	i = i - 2;		i -= 2;//Отнять		(Вычесть и присвоить - Subtract assign)
	i = i * 2;		i *= 2;//Умножить и присвоить (Multiply assign);
	i = i / 2;		i /= 2;
	i = i % 2;		i %= 2;

#endif // COMPOUND_ASSIGNMENTS

#ifdef COMPARISON_OPERATORS
	/*
		==
		!=
		>
		<
		>=
		<=
	*/
#endif // COMPARISON_OPERATORS

	cout << (!true == false) << endl;
}