#include<iostream>
using namespace std;
//#define HARD_CHESS_1
//#define HARD_CHESS_2
#define BITWISE_COMPARISON
void main()
{
	setlocale(LC_ALL, "");
		int n;
	cout << "Введите размер доски: "; cin >> n;
#ifdef HARD_CESS_1
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
#ifdef HARD_CHESS_2
	for (int i = 0; i < n*n; i++)
	{
		for (int j = 0; j < n*n; j++)
		{
			cout << (i / n & 1 ^ j / n & 1 ? "* " : "  ");
			//cout << ((i / n & 1) == (j / n & 1) ? "* " : "  ");
			//cout << ((i / n+j/n) % 2  ? "* " : "  ");
			//cout << ((i / n) % 2 == (j / n) % 2 ? "* " : "  ");
			
		}
			cout << endl;
	}
#endif 
#ifdef BITWISE_COMPARISON

#endif // BITWISE_COMPARISON

}