https://github.com/okovtun/BV_521.git
https://www.youtube.com/playlist?list=PLeqyOOqxeiIP4IcNHD37jcaLVmXEbFd1k

IEEE-754:
http://www.softelectro.ru/ieee754.html

TODO:
0. Выучить теорию;
	Следующие задачи необходимо решить без компилятора;
1. 
	int i = 3;
	i = ++i + ++i;
	cout << i << endl;	//???

2. 
	int i = 3;
	i = i++ + ++i;
	cout << i << endl;	//???

3. 
	int i = 3;
	i = i++ + 1 + ++i * 2;
	cout << i << endl;	//???

4. 
	int i = 3;
	i = i++ + 1 + ++i *= 2;
	cout << i << endl;	//???

5. 
	int i = 3;
	i += i++ + 1 + ++i *= 2;
	cout << i << endl;	//???



DONE:
1. В отдельном проекте решить все задачи из файла:
	https://github.com/okovtun/BV_521/blob/master/VariablesTask.pdf

DONE:
1. Используя оператор sizeof() и макроопределения Visual Studio вывети на экран
   информацию о следующих типах: short, long, long long, float, double;

DONE:
2. Создать проект Elochka, и в нем вывести в консоль стишок "В лесу родилась Ёлочка".
   Стишок должен быть выровнен по середине окна консоли, и его куплеты должны быть 
   раздерены пустыми строками.
   В журнал прислать файл 'main.cpp';