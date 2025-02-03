#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define TASK_1
#define TASK_2
#define TASK_3
//#define TASK_4

void main()
{
	setlocale(LC_ALL, "Rus");

#if defined TASK_1
	double money;
	cout << "Введите сумму: "; cin >> money;
	//money += .0000000001;
	//int rub = money;	//Здесть происходит неявное преобразование типов из 'double' в 'int',
	//					//при этом дробная часть теряется, если она есть.
	//cout << rub << " реблей.\t";
	//int cop = (money - rub) * 100;
	//cout << cop << " копеек.\n";
	int cop = (money - (int)money) * 100;
	cout << (int)money << " грн.\t" << cop << " коп." << endl;
	//(int)money - явное преобразование переменной 'money' в тип 'int';
#endif

#if defined TASK_4
	double distance;	//расстояние
	double consumption;	//расход на 100 км.
	double price_of_fuel;	//стоимость одного литра топлива
	cout << "Введите расстояние: "; cin >> distance;
	cout << "Введите расход топлива на 100 км.:"; cin >> consumption;
	cout << "Введите стоимость одного литра топлива: "; cin >> price_of_fuel;
	//double consumption_per_kilometer = consumption / 100;	//1)Вычисляем расход на 1 км.
	//double price_of_kilometer = consumption_per_kilometer * price_of_fuel;//2)Вычисляем стоимость одного километра
	//double total_price = price_of_kilometer * distance * 2;
	double total_price = consumption / 100 * distance * 2 * price_of_fuel;
	cout.precision(4);	//Определяет 
	cout << "Стоимость поездки: " << total_price << endl;
	/*cout << "Стоимость поездки: " 
		<< (int)total_price  << " грн.\t" 
		<< int((total_price - (int)total_price)*100) << " коп." 
		<< endl;*/
#endif

}