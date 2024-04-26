
#include <iostream>


using namespace std;



						// œ≈–¬¿ﬂ —¿ÃŒ—“Œﬂ“≈À‹Õ¿ﬂ –¿¡Œ“¿
/*
int main()
{
	int a, b, c;
	cout << "Write three number: " << endl;
	cin >> a >> b >> c;
	int SUMM_NUMBERS, COMPS_NUMBERS, MIDDLE_NUMBERS;
	SUMM_NUMBERS = a + b + c;
	COMPS_NUMBERS = a * b * c;
	MIDDLE_NUMBERS = (a + b + c) / 3;

	cout << " Summ numbers: " << SUMM_NUMBERS << endl;
	cout << " Comps numbers: " << COMPS_NUMBERS << endl;
	cout << " Middle mean numbers: " << MIDDLE_NUMBERS << endl;



}
*/

						// ¬“Œ–¿ﬂ —¿ÃŒ—“Œﬂ“≈À‹Õ¿ﬂ –¿¡Œ“¿

int main() {

	int a;
	cout << "Write a number: ";
	cin >> a;

	if (a % 2)
	{
		cout << "Your number not EVEN";
	}
	else
	{
		cout << "Your number EVEN";
	}
}



						// “–≈“‹ﬂ —¿ÃŒ—“Œﬂ“≈À‹Õ¿ﬂ –¿¡Œ“¿
int main() {
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
		break;

	case 3:
		cout << "This operation MULTIPL: " << a * b << endl;
		break;

	case 4:
		cout << "This operation DISION: " << a / b << endl;
		break;

	default:
		break;
	}
	
}


							// ◊≈“¬≈–¿ﬂ —¿ÃŒ—“Œﬂ“≈À‹Õ¿ﬂ –¿¡Œ“¿

int main() {

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
	else if (a == 2)
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

}