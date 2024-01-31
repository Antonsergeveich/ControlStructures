#include<iostream>
using namespace std;
//#define BITWISE_COMPARISON
//#define BITWISE_COMPARISON_2
//#define HARD_CHES
//#define PASCAL_IS_TRIANGLE
void main()
{
    setlocale(LC_ALL, "");

#ifdef BITWISE_COMPARISON
	int i = 0, j = 0;
	cout << "¬ведите первую переменную: "; cin >> i;
	cout << endl;
	cout << "¬ведите вторую переменную: "; cin >> j;
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
	cout << "¬ведите размер доски: "; cin >> n;
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
#ifdef PASCAL_IS_TRIANGLE
	int i, j, k;
	int numbers, lines;
	cout << "¬ведите сколько будет р€дов: ";
	cin >> lines; cout << endl;
	for (i = 0; i < lines; i++)
	{
		numbers = 1;
		for (j = 0; j < lines - 1 - i; j++)
		{
			cout << "  ";
		}
		for (k = 0; k <= i; k++)
		{
			cout << numbers << "   ";
			numbers = numbers * (i - k) / (k + 1);
		}
		cout << endl << endl;
	}
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
	int a = 2;
	int b = 3;
	cout << a << "\t" << b << endl;
	b ^= a ^= b ^= a;
	cout << a << "\t" << b << endl;
}