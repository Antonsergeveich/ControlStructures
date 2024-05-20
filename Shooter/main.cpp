#include<iostream>
#include<conio.h>
using namespace std;

#define UP_ARROW    72
#define DOWN_ARROW  80
#define LEFT_ARROW  75
#define RIGHT_ARROW 77
#define Enter       13
#define Escape      27

//#define ONE
//#define TWO
//#define THREE

void main()
{
	setlocale(LC_ALL, "");
	char  symbol;
	cout << "Нажмите на клавиатуре одну из клавиш указанных в списке: " << endl;
	cout << "w, s, a, d, Space, Enter, Escape" << endl;
#ifdef ONE
	symbol = _getch();

	if (symbol == 32)
	{
		cout << "Прыжок";
	}
	else if (symbol == 13)
	{
		cout << "Огонь";
	}
	else if (symbol == 27)
	{
		cout << "Выход";
	}
	else
	{
		switch (symbol)
		{
		case 'w':cout << "Вперёд" << endl; break;
		case 's':cout << "Назад" << endl; break;
		case 'a':cout << "Влево" << endl; break;
		case 'd':cout << "Вправо" << endl; break;
		default:cout << "Что то пошло не так" << endl;
		}
	}
#endif // ONE
#ifdef TWO
	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;

		if (key == 'w' || key == 'W' || key == UP_ARROW)cout << "Вперёд" << endl;
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW) cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)cout << "Вправо" << endl;
		else if (key == ' ')cout << "Прыжок" << endl;
		else if (key == 13) cout << "Огонь" << endl;
		else if (key != 27 && key != -32) cout << "Error" << endl;
	} while (key != 27);
#endif // TWO
#ifdef THREE
		char key;
		do
		{
			key = _getch();
			switch (key)
			{
			case 'w': case 'W': case UP_ARROW:   cout << "Вперед" << endl; break;
			case 's': case 'S': case DOWN_ARROW:   cout << "Назад" << endl; break;
			case 'a': case 'A': case LEFT_ARROW:   cout << "Влево" << endl; break;
			case 'd': case 'D': case RIGHT_ARROW:   cout << "Вправо" << endl; break;
			case ' ': cout << "Прыжок" << endl; break;
			case 13: cout << "Огонь" << endl; break;
			case Escape:cout << "Выход" << endl;
			case -32: break;
			default: cout << "Error" << endl;
			}
		} while (key != 27);
#endif // THREE
}
