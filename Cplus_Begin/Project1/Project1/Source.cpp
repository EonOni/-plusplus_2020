#include <iostream>


using namespace std;


int First_Iter(int w11, int w22, int k) 
{
	k += 1;
	int x2 = -1;
	int y = -1;
	w11 = w11 + x2 * y;
	w22 = w22 + x2 * y;
	cout << "W11 равно: " << w11 << endl;
	cout << "W22 равно: " << w22 << endl;
	return 0;
};

int main() {
	cout << "Метод Хебба" << endl;
	int w11 = 0;
	int w22 = 0;
	int T = 0;
	int k = 0;


	First_Iter(w11, w22, k);

};