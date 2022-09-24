//Hacer un programa en C++ que lea n n�meros y determine cu�l es el mayor,
//el menor y la media de los n�meros le�dos.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numeros;
	setlocale(LC_ALL, "spanish");
	int tam;
	cout << "�Cu�ntos n�meros?: ";
	cin >> tam;

	double media = 0;
	for (int i = 0; i < tam; i++)
	{
		int num;
		cout << "Introduce un n�mero: ";
		cin >> num;
		numeros.push_back(num);
		media += num;
	}

	// Bubble sort
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam - 1; j++)
		{
			if (numeros[j] > numeros[j + 1])
			{
				int aux = numeros[j];
				numeros[j] = numeros[j + 1];
				numeros[j + 1] = aux;
			}
		}
	}
	media /= tam;

	for (int i = 0; i < tam; i++)
	{
		cout << numeros[i] << " ";
	}

	cout << "\nEl mayor n�mero es: " << numeros[tam - 1] << endl;
	cout << "El menor n�mero es: " << numeros[0] << endl;
	cout << "La media es: " << media << endl;
	return 0;
}
