#include <iostream>
using namespace std;


int main() {
	int num = 0;
	string parell = "parell";
	string senar = "senar";
	bool* elMeuVector = new bool[10];

	for (int i = 0; i < 10; i++) {
		elMeuVector[i] = (i % 2 == 0);
	}

	while (true)
	{
		cout << "Introdueix un numero del 0 al 9 per veure si es parell o senar: " << endl;
		cin >> num;

		if (num < 0 || num > 9)
		{
			cout << "\nAquest numero no es un numero del 0 al 9\n" << endl;
		}
		else
		{
			if (elMeuVector[num] == true)
			{
				cout << "El numero es " << parell << endl;
			}
			else
			{
				cout << "El numero es " << senar << endl;
			}
		}
	}
}