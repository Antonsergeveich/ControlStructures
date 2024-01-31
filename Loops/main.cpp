#include<iostream>
#include<conio.h>
using namespace std;

//#define WHILE_1
//#define WHILE_2
//#define WHILE_3
//#define WHILE_4
#define ASCII
//#define STEPEN
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int i = 0; //счётчик цикла
	int n; // количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << "Hello world!";
		cout << "Сам привет";
		cout << i++ << endl;
		//i++;
	}
#endif 
#ifdef WHILE_2
	char key;
	do
	{
		key = _getch(); //функция _getch() ожидает нажатие клавиши и возвращает ASCI код нажатой клавиши
		// Функция  _gatch() объявлена в библиотеке <conio.h>
		cout << (int)key << "\t" << key << endl;
		//(int)key - это явное преобразование переменной key в тип данных int
		//для того чтобы увидеть ASCII-код символа ESC=27(ASCII)
	} while (key != 27);
#endif
#ifdef WHILE_3
	int i = 0;
	int n; //число введённое с клавиатуры
	int b; //факториал
	int c;
	cout << "\t\t\t\t\tФакториал числа" << endl;
	cout << "Введите число: "; cin >> n;
	if (n < 4)
	{
		while (i < n - 1)
		{
			i = i + 1;
			b = i * (i + 1);
		}
	}
	else if (n >= 4)
	{
		i = 1; b = 1;
		while (i < n)
		{
			i = i + 1;
			c = i * b;
			b = c;
		}
	}
	if (n <= 3)
	{
		cout << b << endl;
	}
	else if (n >= 4)
	{
		cout << c << endl;
	}
#endif
#ifdef WHILE_4		
	int a;//число
	int n;//степень
	int c, d, e;
	cout << "\t\t\t\t\tВозведение числа в степень" << endl;
	cout << "Введите число: ";  cin >> a;
	cout << "Введите степень: "; cin >> n;

	d = a * a;
	c = 0;
	e = 0;
	if (n == 2) { cout << d << endl; }
	else if (n > 2)
	{
		while (n != 2)
		{
			c = n - 1;
			n = c;
			e = d * a;
			d = e;
		}
		cout << e << endl;
	}
#endif

#ifdef ASCII
	cout << "Таблица ASCII - символов" << endl;
	setlocale(LC_ALL, "C");//Включаем кодировку по умолчанию
	int i = 0;
	int n = 256;
	while (i < n)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i++ << " ";
	}
	cout << endl;
#endif	
#ifdef STEPEN
	double a; // основание степени
	int n; // показатель степени
	double N = 1; //степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	int i = 0;
	while (i++ < n)
		N *= a;
	cout << N << endl;
#endif
	
		
}