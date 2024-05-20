#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//#define FOR_BASICS
//#define FOR
//#define FACTORIAL
//#define FACTORIAL_1
//#define POWER
//#define POWER_1
//#define ASCII
//#define FIBONACHI
//#define FIBONACHI_1
//#define FIBONACHI_2
//#define FIBONACHI_3_HARD
//#define SIMPLE_NUMBERS
//#define SIMPLE_NUMBERS_1
#define MULTIPLICATION_TABLE
//#define PYTHAGOREAN_TABLE
void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_BASICS
	//int i = 0;	//Счетчик цикла
	//int n;
	//cout << "Введите количество итераций: "; cin >> n;
	//while (i < n)
	//{
	//	cout << i << " Hello" << endl;;
	//	i++;
	//}

	;	//Счетчик цикла
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "Hello" << endl;;
		;
	}
#endif // FOR_BASICS
#ifdef FOR
	int n = 5;
	for (int i = 0;i < n;i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif
#ifdef FACTORIAL
	cout << endl;
	cout << "\t\t\t\t\t1.Вычисляем факториал числа." << endl;
	cout << endl;
	int n;//число введённое с клавиатуры
	int i = 1;//Счётчик
	double x = 1;//Факториал числа введённого с клавиатуры
	double y = 1;//Произведение числа введённого с клавиатуры и предыдущего произведения чисел
	cout << "Введите любое число: "; cin >> n;
	cout << endl;
	for (int i = 1; i < n + 1; ++i * x)
	{
		y = x;
		x = i * y;
	}
	cout << '1';
	for (int i = 1; i < n + 1; ++i)
	{
		cout << '*' << i;
	}
	cout << endl;
	cout << endl;
	if (i = n)
	{
		cout << "Факториал числа:  " << "!" << n << " = " << x << endl;
	}
#endif
#ifdef FACTORIAL_1
	int n;
	cout << "Введите число для вычисления факториала: "; cin >> n;
	int f = 1; //Факториал
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif 
#ifdef POWER
	double a; //Основание степени
	int n; //показатель степени
	double N = 1; //степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif 
#ifdef POWER_1
	cout << endl;
	cout << "\t\t\t\t\tВозводим число в степень." << endl;
	cout << endl;
	double n;//число
	int b;//степень
	int i;//счетчик
	double a = 1; //ответ
	cout << " Введите число: "; cin >> n;
	cout << " Введите степень: "; cin >> b;
	if (b < 0)
	{
		n = 1 / n;
		b = -b;
	}
	for (i = 0; i < b; ++i)
	{
		a = a * n;
	}
	cout << endl;
	cout << " Ответ: " << a << endl;
#endif
#ifdef ASCII
	cout << endl;
	cout << "\t\t\t\t\tТаблица ASCII-символов." << endl;
	int i;
	int n = 256;
	for (i = 0; i < n; i++)
	{
		cout << (char)i << " ";
		if (i % 16 == 0)
		{
			cout << endl;
		}
	}
#endif
#ifdef FIBONACHI
	cout << endl;
	cout << "\t\t\t\t\t\tРяд Фибоначчи.";
	cout << endl;
	int n; //число введённое с клавиатуры
	int i, x = 1;
	cout << "Введите предел ряда Фибоначчи: "; cin >> n;
	cout << endl;
	for (i = 0; x < n; i)
	{
		cout << i << " " << x << " ";
		i = i + x;
		x = x + i;
	}
	cout << endl;
#endif
#ifdef FIBONACHI_1
	cout << endl;
	cout << "\t\t\t\tВыводим на экран заданное количество членов ряда Фибоначчи."; cout << endl;
	cout << endl;
	int n = 1;//число показывающее количество членов ряда Фибоначчи
	int x = 0, y = 1, i;
	cout << "Введите количество членов ряда Фибоначчи которое нужно вывести на экран: "; cin >> n;
	cout << endl;
	if (n == 1)
	{
		cout << "0" << endl;
	}
	else if (n == 2)
	{
		cout << "0 1" << endl;
	}
	else if (n > 1)
		cout << "0" << " " << "1" << " " << "1" << " ";
	for (i = 0; i < n - 3; i++)
	{
		x = y - x;
		y = x + y;
		cout << y << " ";
	}
	cout << endl;
#endif
#ifdef FIBONACHI_2
	int n;
	cout << "Введите предельное число:"; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		//Оператор "запятая" (coma operator) - позволяет в том месте где ожидается одно выражение написать несколько выражений.
		//Эти выражения будут выполняться последовательно слева направо, и оператор "запятая" вернет значение последнего выражения.
	{
		cout << a << "\t";
	}
	cout << endl;
#endif 
#ifdef FIBONACHI_3_HARD
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int i = 0, b = 1; i <= n; i = i + b, b = i + b)
	{
		cout << i << "\t" << b << "\t";
	}
#endif 
	//c = ( a = b ) + ( b = c )
#ifdef SIMPLE_NUMBERS
	cout << endl;
	cout << "\t\t\t\tРяд простых чисел до указанного предела.";
	cout << endl;
	int n, i = 0, x = 0;
	cout << "Введите простое число: "; cin >> n;
	cout << endl;
	for (i = 0; i < n; i++)
	{
		x = x + 1;
		cout << x << " ";
	}
	cout << endl;
#endif
#ifdef SIMPLE_NUMBERS_1
	int n;
	cout << "Введите предел: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		bool simple = true; //Предполагаем что число простое,
		//но это нужно проверить:
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break; //ключевое слово 'break' прерывает текущую итерацию,
			}
		}
		if (simple)cout << i << "\t";
}
	cout << endl;
#endif  
#ifdef MULTIPLICATION_TABLE
			cout << endl;
			cout << "\t\t\t\t\t\tТаблица умножения.";
			cout << endl;
			for (int i = 1; i <= 10; i++)
			{
				for (int j = 1; j <= 10; j++)
				{
					cout << " "<< i << " * " << j << " = " << i * j << " ";
					cout << endl;
				}
				cout << endl;
			}
#endif
#ifdef PYTHAGOREAN_TABLE
			cout << endl;
			cout << "\t\t\t\t\t\tТаблица Пифагора." << endl;
			cout << endl;
			cout << "\t";
			int i, x;
			for (i = 1; i <= 10; i++)
			{
				cout << i << " \t";
			}
			cout  << endl;
			cout << endl;
			for (i = 1; i <= 10; i++)
			{
				cout << i << "\t";
				
				for (x = 1; x <= 10; x++)
				{
					cout << i * x << "\t";
				}
				cout << endl;
				cout << endl;
			}
#endif
}
