#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	/*int number, left, right;
	int a, b, c, d, f, g;
	cout << "Введите номер билета: " <<endl;
	cin >> number;
	cout << "Номер Вашего билета: " << number << endl;
	left = number / 1000;
	right = number % 1000;
	a = left / 100; b = (left/10)%10; c = left % 10; d = right / 100; f = (right / 10)%10; g = right % 10;
	left = a + b + c;
	right = d + f + g;
	if (left == right)
	{
		cout << "У Вас счастливый билет" << endl;
	}
	else
	{
		cout << "У Вас обычный билет" << endl;
	}
	*/
	
	
	int number;
	int sum1, sum2;
	sum1 = sum2 = 0;
	cout << "Введите номер автобусного билета: "; cin >> number;
	while (number > 1000)
	{
		sum1 += number % 10;
		number /= 10;
	}
	while (number > 0)
	{
		sum2 += number % 10;
		number /= 10;
	}
	if (sum1 == sum2)
	{
		cout << "We are happy" << endl;
    }
	else
	{
		cout << "May be the next time" << endl;
	}
}