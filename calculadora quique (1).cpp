#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main ()
{
	enum quechinguesumadreelamerica
	{

	};
	char salir ='n';
	int pos, num1, num2, resultado;
	while(salir=='n')
	{

		cout << "INGRESA LA OPERACION QUE QUIERES HACER" << endl;
		cout << "1-. Suma" << endl;
		cout << "2-. Resta" << endl;
		cout << "3.- Multiplicacin" << endl;
		cout << "4.- Division" << endl;
		cout << "5.- Raiz" << endl;
		cout << "6.- Potencia" << endl;

		cin >> pos;
		system("cls");
		switch (pos) 
		{

		case 1:
			cout << "\n		Suma.	" << endl;
			cout << "Ingrese los numeros a sumar " << endl;
			cout << "numero uno:";
			cin >> num1;
			cout << "numero dos:";
			cin >> num2;

			//SUMA

			resultado = num1 + num2;
			cout << "\n Resultado:" << resultado << endl;
			break;


		case 2:
			cout << "\n		Resta.	" << endl;
			cout << "Ingrese los numeros a restar " << endl;
			cout << "numero uno:";
			cin >> num1;
			cout << "numero dos:";
			cin >> num2;

			// resta

			resultado = num1 - num2;
			cout << "\n Resultado:" << resultado << endl;
			break;


		case 3:
			cout << "\n		Multiplicacion