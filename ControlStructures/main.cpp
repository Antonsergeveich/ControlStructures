#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Controls" << endl;
#ifdef ONE
	int temperature;
	cout << "Введите температуру воздуха:";
	cin >> temperature;
	cout << "Температура воздуха:" << temperature << "градусов\n";
	if (temperature > 70)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 40)
	{
		cout << "Вы в пустыне" << endl;
	}*/

	bool b = double(1 / 2);
	cout << b;
	return 0;
#endif
#ifdef TEMPERATURE2
	int temperature;
	cout << "Введите температуру воздуха" << endl;
	cin >> temperature;
	cout << "Температура воздуха:" << temperature << endl;
	if (abs(temperature) % 100 > 10 && abs(temperature) % 100 < 20)
	{
		cout << "градусов";
	}
	else if (abs(temperature) % 10 == 1)
	{
		cout << "градус";
	}
	else if (abs(temperature) % 10 >= 5 || abs(temperature) % 10 == 0)
	{
		cout << "градусов";
	}
	else cout << "градуса\n";
	cout << endl;
#endif
#ifdef CALC_1

	double a, b;
	char s;
	cout << "введите выражение:";
	cin >> a >> s >> b;
	cout << a << s << b << endl;
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
#endif
	//#ifdef CALC_2
	double a, b;
	char s;
	cout << "введите выражение: ";
	cin >> a >> s >> b;
	switch (s)
	{
	case  '+':cout << a << " + " << b << " = " << a + b << endl; break;
	case  '-':cout << a << " - " << b << " = " << a - b << endl; break;
	case  '*':cout << a << " * " << b << " = " << a * b << endl; break;
	case  '/':cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error: no operation" << endl;
	}


	//#endif


}