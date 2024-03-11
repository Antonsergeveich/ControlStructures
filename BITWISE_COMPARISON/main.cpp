#include<iostream>
using namespace std;
//#define BITWISE_COMPARISON
//#define BITWISE_COMPARISON_2
//#define HARD_CHES
//#define BITWISE_COMPARISON_3
//#define AND_XOR
#define SHIFT

void main()
{
    setlocale(LC_ALL, "");

#ifdef BITWISE_COMPARISON
	int i = 0, j = 0;
	cout << "Введите первую переменную: "; cin >> i;
	cout << endl;
	cout << "Введите вторую переменную: "; cin >> j;
	cout << endl;
	cout << "\t" << i << "\t" << j;
	cout << endl;
	cout << "\t";
	cout << (i > j ^ j > i ? j : i);
	cout << "\t";
	cout << (i < j ^ j < i ? i : j);
	cout << endl;
#endif 
#ifdef HARD_CHES
	int n;
	cout << "Введите размер доски: "; cin >> n;
	for (int i = 0; i < n*n; i++)
	{
		for (int j = 0; j < n*n; j++)
		{
			cout << ((i / n & 1) == (j / n & 1) ? "* " : "  ");
			//cout << (i / n & 1 ^ j / n & 1 ? "* " : "  ");
			//cout << ((i / n+j/n) % 2  ? "* " : "  ");
			//cout << ((i / n) % 2 == (j / n) % 2 ? "* " : "  ");
			
		}
			cout << endl;
	}
#endif 
#ifdef AND_XOR
	int i, x = 0;
	cout << "Введите значение: ";  cin >> i;
	x = i & 1;
	cout << (x == 0 ? "Чётное" : "Не чётное");
	cout << endl;
	cout << (128 & 1); // AND на чётность, если побитово одно число умножить на один 1 и результат будет 1 то число не чётное, если ноль 0 то число чётное
	cout << endl;
	cout << (123 ^ 123); // XOR на равенство чисел, равны числа или нет, если XOR двух чисел равно нулю то числа равны, если  единицы 1 то не равны   
#endif 


#ifdef BITWISE_COMPARISON_2
	int a = 2;
	int b = 3;
	cout << a << "\t" << b << endl;
	a ^= b;
	b ^= a;
	a ^= b;
	cout << a << "\t" << b << endl;
#endif // BITWISE_COMPARISON_2
#ifdef BITWISE_COMPARISON_3
	int a = 2;
	int b = 3;
	cout << a << "\t" << b << endl;
	b ^= a ^= b ^= a;
	cout << a << "\t" << b << endl;
#endif // BITWISE_COMPARISON_3

#ifdef SHIFT
	int i, n, y, x = 0;
	cout << "Введите значение: ";  cin >> i; cout << endl;
	cout << "На сколько сдвинуть битов: "; cin >> n; cout << endl;
	y = i >> n; cout << "Вправо: " << y << endl; // побитовый сдвиг вправо на 1 бит это деление числа на 2
	x = i << n; cout << "Влево: " << x << endl; // побитовый сдвиг влево на 1 бит это умножение числа на 2
	// побитовые операции применимы только к целочисленным типам данных, к вещественным они НЕ применимы  
#endif // SHIFT

}
