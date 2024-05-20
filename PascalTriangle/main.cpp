#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define WIDTH   8
#define PASCAL_IS_TRIANGLE
//#define PASCAL_IS_TRIANGLE_1

void main()
{
	setlocale(LC_ALL, "");
#ifdef PASCAL_IS_TRIANGLE
	int h;
	cout << "Введите высоту треугольника: "; cin >> h;
	int nf = 1;
	cout << left; // задаём выравнивание по левому краю
	for (int i = 0; i < h; i++)
	{
		cout.width(WIDTH / 2);
		cout << "";
	}
	cout << 1 << endl;
	for (int n = 1; n <= h; n++)
	{
		nf *= n;
		for (int i = 0; i < h - n; i++)
		{
			cout.width(WIDTH / 2);
			cout << "";
		}
		int mf = 1;
		cout.width(WIDTH);
		cout << 1;
		for (int m = 1; m <= n; m++)
		{
			mf *= m;
			int mnf = 1;
			for (int mn = 1; mn <= n - m; mn++)
			{
				mnf *= mn;
			}
			cout.width(WIDTH); //задаем ширину вывода, а именно, сколько знакопозиций будет занимать выводимое значение.
			//cout.width() воздействует только на одно выводимое значение, для следующего выводимого значения, опять нужно задавать ширину.
			cout << nf / mf / mnf;
		}
		cout << endl;
	}
#endif // PASCAL_IS_TRIANGLE

#ifdef PASCAL_IS_TRIANGLE_1
		int i, j, k;
		int numbers, lines;
		cout << "Введите сколько будет рядов: ";
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
}

