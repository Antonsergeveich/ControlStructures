#include<iostream>
#include <conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_31
//#define TRIANGLE_4
//#define TRIANGLE_41
//#define ROMBUS
//#define ROMBUS_1
//#define ROMBUS_2
//#define PLUS_MINUS
//#define PLUS_MINUS_2
//#define RAZMER_DOSKI
#define HARD_CHESS
//#define PASCAL_IS_TRIANGLE
void main()
{
	setlocale(LC_ALL, "");
	cout << endl;
	cout << "\t\t\t\t\t\t‘игуры" << endl;
	cout << endl;
	//int n;
	//cout << "¬ведите количество звЄздочек: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif 
#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif 
#ifdef TRIANGLE_2
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif 
#ifdef TRIANGLE_3
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
		for (int x = 0; x <= i; x++)
		{
			cout << "  ";
		}
	}
#endif 
#ifdef TRIANGLE_31
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << "  ";
		for (int j = i; j < n; j++) cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE

#ifdef TRIANGLE_4
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int x = i + 2; x <= n; x++)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif 
#ifdef TRIANGLE_41
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - 1; j++) cout << "  ";
		for (int j = 0; j <= i; j++) cout << "* ";
		cout << endl;
	}
#endif 

#ifdef ROMBUS
	for (int i = 0; i < n; i++)
	{
		for (int x = i + 2; x <= n; x++)
		{
			cout << " ";
		}
		cout << '/';
		for (int x = 1; x <= i; x++)
		{
			cout << "  ";
		}
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int x = 1; x <= i; x++)
		{
			cout << " ";
		}
		cout << "\\";
		for (int x = i + 2; x <= n; x++)
		{
			cout << "  ";
		}
		cout << '/';
		cout << endl;
	}
	cout << endl;
#endif
#ifdef ROMBUS_1
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++)cout << "  "; cout << "/";
		cout << endl;
	}


#endif 
#ifdef ROMBUS_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i * 2; j++) cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++)cout << " "; cout << "/";
		cout << endl;
	}
#endif 

#ifdef PLUS_MINUS
	char w = '-', s = '+';
	for (int i = 0; i < 3; i++)
	{
		for (int i = 0; i < 2; i++)
		{
			cout << s << " " << w << " ";
		}
		cout << s << endl;
		if (i == 2) break;
		for (int i = 0; i < 2; i++)
		{
			cout << w << " " << s << " ";
		}
		cout << w << endl;
	}
#endif  
#ifdef PLUS_MINUS_2
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i+j) % 2 == 0)cout << "+ ";else cout << "- ";
			//if (i%2==j % 2)cout << "+ ";else cout << "- ";
			//(i % 2 == j % 2) ? cout << "+ ": cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // PLUS_MINUS_2
#ifdef RAZMER_DOSKI
	int n = 0; int y = 223; int x = 220; int w = 218; int a = 191; int p = 179; int b = 196; int v = 192; int q = 217;
	cout << "¬ведите размер доски: "; cin >> n; cout << endl;
	setlocale(LC_ALL, "C");

	cout << (char)w;
	for (int i = 0; i < n * 2; i++)
	{
		cout << (char)b;
	}
	cout << (char)a;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << (char)p;
		for (int j = 0; j < n; j++)
		{
			cout << (char)y; cout << (char)x;
		}
		cout << (char)p;
		cout << endl;
	}
	cout << (char)v;
	for (int i = 0; i < n * 2; i++)
	{
		cout << (char)b;
	}
	cout << (char)q;
	cout << endl; cout << endl;
	///////////////////////////////////
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n * n; j++)
			{
				cout << (i < n ? "* " : "/ ");
			}
			cout << endl;
		}
	}
	setlocale(LC_ALL, "");
#endif 
	///////////////////////////////////
#ifdef HARD_CHESS
	int n;
	cout << "¬ведите размер доски: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					cout << (i % 2 == k % 2 ? "* " : "  ");
				}
			}
			cout << endl;
		}
	}
#endif 
	/////////////////////////////
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



}
