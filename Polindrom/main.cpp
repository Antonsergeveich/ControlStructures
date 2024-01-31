#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number; //число, введённое с клавиатуры
	int reverse = 0; //исходное число записанное в обратном порядке
	cout << "Введите число: "; cin >> number;
	int buffer = number; //копируем введённое число, чтобы данные введённые пользователем остались не изменными.
	while (buffer)
	{
		reverse *= 10; //прежде чем сохранить следующий младший разряд, нужно освободить под него место
		reverse += buffer % 10; //сохраняем младший разряд числа
		buffer /= 10; // убираем младший разряд из буфера
    }
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "May be the next time" << endl;
	}
}