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
	int i = 0; //������� �����
	int n; // ���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (i < n)
	{
		cout << "Hello world!";
		cout << "��� ������";
		cout << i++ << endl;
		//i++;
	}
#endif 
#ifdef WHILE_2
	char key;
	do
	{
		key = _getch(); //������� _getch() ������� ������� ������� � ���������� ASCI ��� ������� �������
		// �������  _gatch() ��������� � ���������� <conio.h>
		cout << (int)key << "\t" << key << endl;
		//(int)key - ��� ����� �������������� ���������� key � ��� ������ int
		//��� ���� ����� ������� ASCII-��� ������� ESC=27(ASCII)
	} while (key != 27);
#endif
#ifdef WHILE_3
	int i = 0;
	int n; //����� �������� � ����������
	int b; //���������
	int c;
	cout << "\t\t\t\t\t��������� �����" << endl;
	cout << "������� �����: "; cin >> n;
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
	int a;//�����
	int n;//�������
	int c, d, e;
	cout << "\t\t\t\t\t���������� ����� � �������" << endl;
	cout << "������� �����: ";  cin >> a;
	cout << "������� �������: "; cin >> n;

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
	cout << "������� ASCII - ��������" << endl;
	setlocale(LC_ALL, "C");//�������� ��������� �� ���������
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
	double a; // ��������� �������
	int n; // ���������� �������
	double N = 1; //�������
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
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