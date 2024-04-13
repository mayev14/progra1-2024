#include<iostream>
using namespace std;
//Paredes	Orozco	Jefferson	Daniel
int main() {

	switch (ejercicio) {
	case 1:
		//ejecicio 1 
	{
		cout << "BIENVENIDOS AL CURSO DE PROGRAMACIÓN 1 " << endl;
		return 0;
	}
	break;

	case 2:
		//ejercicio 2
	{
		int num1, num2, suma;
		cout << "ingrese un número  " << endl;
		cin >> num1;

		cout << "ingrese un número " << endl;
		cin >> num2;

		suma = num1 + num2;
		cout << "el resultado de la suma es " << suma << endl;

		return 0;
		break;

	case 3:
		//ejercicio 3 



		break;
	case 4:
		//ejercicio 4 
	{
		int base1, base2, área, altura;
		cout << "ingrese un número  " << endl;
		cin >> base1;

		cout << "ingrese un número " << endl;
		cin >> base2;

		cout << "ingrese el valor de altura" << endl;
		cin >> altura;

		área = base1 + base2 * altura / 2;
		cout << "el resultado del area es " << área << endl;

		return 0;
	}
	break;
	case 5:
		//ejercicio 5 

		int FT, SD, TT, RS, RTF;

		int main(); {
			cout << "elija su primer numero:\n";
			cin >> FT;
			cout << "elija su segundo numero\n";
			cin >> SD;
			cout << "elija su tercer numero\n";
			cin >> TT;
			RS = FT + SD + TT;
			RTF = RS / 3;
			cout << "El resultado de la distancia es: " << RTF << ".\n";

			return 0;
			break;

	case 6:
		//ejercicio 6 
	{
		int precio, resta;
		cout << "ingrese el precio del producto  " << endl;
		cin >> precio;

		resta = precio / 1.12;

		//el precio sin el impuesto del valor de IVA 
		cout << "el precio del producto es sin el IVA es=" << resta << endl;

		return 0;
	}
	break;

	case 7:
		//ejercicio 7 

		double A, B, C, D;

		int main(); {
			cout << "Ingrese su primer numero:\n";
			cin >> A;
			cout << "Ingrese su segundo numero:\n";
			cin >> B;
			cout << "Ingrese su tercer numero:\n";
			cin >> C;
			cout << "Ingrese su cuarto numero:\n";
			cin >> D;

			if (A > B && A > C && A > D)
				cout << "el numero mayor es: " << A;
			if (B > A && B > C && B > D)
				cout << "el numero mayor es: " << B;
			if (C > A && C > B && C > D)
				cout << "el numero mayor es: " << C;
			if (D > A && D > B && D > C)
				cout << "el numero mayor es: " << D;
			//&& equivale a un "and"
			return 0;
		}
		break;

	case 8:
		// ejercicio 8 
	{
		int numero;

		// Solicitar al usuario que ingrese un número
		cout << "Ingrese un número del 1 al 12: ";
		cin >> numero;

		// Verificar si el número ingresado está dentro del rango válido
		if (numero >= 1 && numero <= 12) {
			// Array de nombres de meses
			string meses[12] = { "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
				"Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre" };

			// Mostrar el mes correspondiente
			cout << "El mes correspondiente al número " << numero << " es: " << meses[numero - 1] << endl;
		}
		else {
			// Si el número está fuera de rango, mostrar un mensaje de error
			cout << "El número ingresado no está dentro del rango válido." << endl;
		}

		return 0;
	}
	break;


	case 9:
		//ejercicio 9
	{
		cout << "Números pares hasta el 30:" << endl;

		// mostrar desde 0 hasta 30 en incrementos de 2
		for (int i = 0; i <= 30; i += 2) {
			cout << i << "solo hasta el numero 30";
		}

		cout << endl;

		return 0;
	}
	break;

	case 10:

		int numero;

		do {
			// Solicitar al usuario que ingrese un número
			cout << "Ingrese un número (0 para salir): ";
			cin >> numero;

			// Verificar si el número ingresado es 0
			if (numero == 0) {
				cout << "El programa ha terminado." << endl;
				break; // Salir del bucle si el número ingresado es 0
			}

			// Verificar si el número es par o impar
			if (numero % 2 == 0) {
				cout << numero << " es un número par." << endl;
			}
			else {
				cout << numero << " es un número impar." << endl;
			}

		} while (true); // Repetir indefinidamente hasta que el usuario ingrese 0

		return 0;
		}
		break;

	}

