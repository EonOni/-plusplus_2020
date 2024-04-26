#include<iostream> // берем набор функций, методов, классов из стандр. библиотеки

using namespace std;


/*            ПЕРВЫЙ УРОК _СТРУКТУРА


// - одностроч комментарии

*  МНОГОСТРОЧнЫЙ *

int main()
{
	cout << "Сегодня" << endl;
	// В с++ код идет построчно, точнее по шагово
	setlocale(LC_ALL, "Russian");
	cout << "Сегодня" << endl;

	
}

*/


		// ВТОРОЙ _ESCAPE - послед. ,  ТРЕТИЙ-ЧЕТВЕРЫЙ _Типы ДАННЫХ - ПЕРЕМЕННЫЕ , КОНСТАНТЫЕ ЗНАЧ. 

int main()
{
	// \n , \t - escape послд.

	cout << "Hello world \n";
	/*
	int a = 5;
	double b = 3;
	char c = 'v';

	cout << c << a << b << endl;

	const char TAB = '\t';

	int Num_V;
	
	cout << "Choose number: " << endl;
	cin >> Num_V;
	cout << TAB << "Your number: " << Num_V << endl;
	*/


		// ИНКРИМЕНТ , СОКРАЩЕНИЕ КОДА
	/*
	int a = 5, b = 3, c;
	
	a++;

	c = a * b;

	cout << " number c is: " << c << endl;
	*/


	/*  ОПЕРАТОР РАВНО И ДРУГИЕ 
	int a = 4;
	int b = 3;

	cout << !(a == b) << endl;
	*/


	/*				IF ELSE
	int a;
	cout << "Choose a number: " << endl;
	cin >> a;

	if (a > 5)
	{
		cout << "Your number bigge than 5" << endl;

	}
	else if (a == 5)
	{
		cout << " Your number it's 5" << endl;
	}
	else
	{
		cout << "Your number smaller than 5" << endl;
	}
	*/

	/*

	int a, b;
	cout << "Choose your Two number: ";
	cin >> a >> b;

	
	int DOING_STUFF;
	cout << "Write what operation you wanna do: ";
	cin >> DOING_STUFF;

	switch (DOING_STUFF)
	{
	case 1:
		cout << "This operation PLUS: " << a + b << endl;
		break;
	case 2:
		cout << "This operation MINUS: " << a - b << endl;
	case 3:
		cout << "This operation MULTIPL: " << a * b << endl;
	case 4:
		cout << "This operation DISION: " << a / b << endl;
	default:
		break;
	}

	*/

	/*
	switch (DOING_STUFF):
	{
	case '+':
		a + b;
		break;
	}
	*/

	/*
	int a, REWRITE_CICLE, C_COUNT = 0;
	cout << "Write a position you want: ";
	cin >> a;
	cout << "Choose how match you want see object: ";
	cin >> REWRITE_CICLE;

	if (a == 1)
	{
		while (C_COUNT < REWRITE_CICLE)
		{
			cout << "*";
			C_COUNT++;
		}
	}
	else if(a == 2)
	{
		while (C_COUNT < REWRITE_CICLE)
		{
			cout << "*" << endl;
			C_COUNT++;
		}
	}
	else
	{
		cout << "Not correct choose!" << endl;
	}
	*/
	
	int BURGER_DAY = 0;
	int REPEAT_YANA_BURGER = 0;
	char CHOOSE_BURGER;
	cout << "Do you buy me burger?? Y/n ";
	cin >> CHOOSE_BURGER;
	if ('y' != CHOOSE_BURGER && 'n' != CHOOSE_BURGER)
	{
		cout << "Not correct answer!!!!";
		 
	}

	if ('y' == CHOOSE_BURGER)
	{
		cout << "Yana good friend she very very perfect human" << endl;
		BURGER_DAY++;
	}
	else if ('n' == CHOOSE_BURGER)
	{
		for (;REPEAT_YANA_BURGER < 20; REPEAT_YANA_BURGER++)
		{
			cout << "DO YOU WANNA I DIE FROM HUNGER" << endl;
			REPEAT_YANA_BURGER++;
		}
	}


	cout << "You did: " << BURGER_DAY << " , and you can do it again, after you will feel freedom!" << endl;

}
