// Números Primos 2.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>

using namespace std;

int main()
{
	bool isPrime = true;

	do {

		int num = 3, total;
		//vector <int> primeNums = {2};
		
		cout << "Escribe cuantos números primos quieres saber: ";
		cin >> total;

		const auto start{chrono::steady_clock::now()};

		if (total > 2) {

			cout << "Los primeros " << total << " números primos son: 1, 2, ";

			for (int primeCounter = 0; primeCounter < total - 2; num++) {

				isPrime = true;

				for (int div = 2; div <= sqrt(num); div++) {
					
					if (num % div == 0) {
						isPrime = false;
						break;
					}
				}

				if (isPrime) {
					cout << num << ", ";
					primeCounter++;
				}
			}

			const auto end{std::chrono::steady_clock::now()};
			const chrono::duration<double> elapsed_seconds{end - start};

			cout << "\n\nTiempo de ejecución: " << elapsed_seconds.count() << "s";
			cout << "\n\n\t¿Quieres volver a ejecutar el programa? (0/1) ";
			cin >> isPrime;

		}

		if (total == 1) {

			cout << "El primer número primo es 1 (duh)";

			cout << "\n¿Quieres volver a ejecutar el programa? (0/1) ";
			cin >> isPrime;

			if (!isPrime) {

				return 0;
			}
		}

		else if (total < 1) {

			cout << "¿De verdad me pides que calcule los primeros " << total << " números primos? ¡Eso no es ni siquiera positivo!";

			cout << "\n¿Quieres volver a ejecutar el programa? (0/1) ";
			cin >> isPrime;

			if (!isPrime) {

				return 0;
			}
		}

		system("cls");
	} while (isPrime);

	cout << "\n";


	return 0;
}

