// Números Primos 2.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	bool pri = true;

	do {

		int num = 3;
		int j;
		int total;
		
		cout << "Escribe cuantos números primos quieres saber: ";
		cin >> total;


		if (total > 2) {

			cout << "Los primeros " << total << " números primos son: 1, 2, ";

			for (j = 0; j < total - 2; num++) {

				for (int i = 2; i <= num / 2; i++) {

					int div = num % i;

					pri = true;

					if (num % i == 0) {
						pri = false;
						i = num - 1;
					}

				}

				if (pri) {
					cout << num << ", ";
					j++;
					
				}
			}

			cout << num;
			cout << "\n¿Quieres volver a ejecutar el programa? (0/1) ";
			cin >> pri;

		}

		if (total == 1) {

			cout << "El primer número primo es 1 (duh)";

			cout << "\n¿Quieres volver a ejecutar el programa? (0/1) ";
			cin >> pri;

			if (!pri) {

				return 0;
			}
		}

		else if (total < 1) {

			cout << "¿De verdad me pides que calcule los primeros " << total << " números primos? ¡Eso no es ni siquiera positivo!";

			cout << "\n¿Quieres volver a ejecutar el programa? (0/1) ";
			cin >> pri;

			if (!pri) {

				return 0;
			}
		}

		system("cls");
	} while (pri);

	cout << "\n";


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
