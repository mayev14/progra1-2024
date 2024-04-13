
//Pograma 1
#include <iostream>

using namespace std;

int main(){
	cout << "\n Bienvenidos al curso de programacion l\n";

	return 0;
}

/*
//Programa 2
#include <iostream>

using namespace std;

int main (){
	int num1, num2, resultado;
	cout<< "Ingrese la primer cantidad.\n";
	cin>> num1;
	
	cout<< "Ingrese la segunda cantidad.\n";
	cin>> num2;
	
	resultado= num1+num2;
	cout<< "El resultado es: "<<resultado;
	
	return 0;
}

//Programa 3
#include <iostream>

using namespace std;

int main(){
	int num1, num2, num3;
	float suma, resta, multiplicacion, division;
	
	cout<< "Ingrese la primera cantidad: ";
	cin>> num1;
	
	cout<< "Ingrese la primera cantidad: ";
	cin>> num2;
	
	cout<< "Ingrese la primera cantidad: ";
	cin>> num3;
	
	suma= num1+num2+num3;
	resta= num1 - num2 -num3;
	multiplicacion= num1 * num2 * num3;
	division= num1 / num2 / num3;
	
	cout<< "La suma es: "<<suma;
	cout<< "\nLa resta es: "<<resta;
	cout<< "\nLa multiplicacion es: "<<multiplicacion;
	cout<< "\nLa division es: "<<division;
	
	return 0;
}

//Programa 4
#include <iostream>

using namespace std;

int main(){
	int lado1, lado2, altura, area;
	
	cout<<"Ingrese el lado 1: ";
	cin>> lado1;
	
	cout<<"Ingrese el lado 2: ";
	cin>> lado2;
	
	cout<<"Ingrese la altura: ";
	cin>> altura;
	
	area = lado1 + lado2 * altura / 2;
	cout<< "El area del trapecio es: "<<area;
	
	return 0;
}

//Programa 5
#include <iostream>

using namespace std;

int main(){
	float capital, tasa, tiempo, intereses, resultado;
	
	cout<< "Ingrese capital inicial: ";
	cin>> capital;
	
	cout<< "Ingrese la tasa de interes anual: ";
	cin>> tasa;
	
	cout<< "Ingrese tiempo en años: ";
	cin>> tiempo;
	
	intereses= capital + tasa * tiempo;
	resultado = capital + intereses;
	
	cout<< "El interes es: "<<intereses;
	cout<< "\nEl capital final es: "<<resultado;
	
	return 0;
}

//Programa 6
#include <iostream>

using namespace std;

int main(){
	float Piva, iva, Siniva;
	
	cout<< "Ingrese el precio con iva: ";
	cin>> Piva;
	
	cout<< "Ingrese el iva: ";
	cin>> iva;
	
	Siniva = Piva / (1+ iva);
	cout<< "El precio sin iva es: "<<Siniva;
	
	return 0;
}

//Programa 7
#include <iostream>

using namespace std;

int main(){
	int num1, num2, num3, num4, resultado;
	
	cout<<"Ingrese la primera cantidad: ";
	cin>> num1;
	
	cout<<"Ingrese la segunda cantidad: ";
	cin>> num2;
	
	cout<<"Ingrese la tercera cantidad: ";
	cin>> num3;
	
	cout<<"Ingrese la cuarta cantidad: ";
	cin>> num4;
	 
	if (num1 >= num2 && num1 >= num3 && num1 >= num4){
		cout<< num1 << "\nEs el mayor.";
	}else if (num2 >= num1 && num2>= num3 && num2>= num4){
		cout<< num2 << "\nEs el mayor.";
	}else if (num3 >= num1 && num3 >= num2 && num3 >= num4){
		cout<< num3 << "\nEs el mayor.";
	}else {
		cout<< num4 << "\nEs el mayor.";
	}
	 
	return 0;
}

//Programa 8
#include <iostream>

using namespace std;

int main(){
	int numero_mes;
	
	cout<< "Ingrese un numero del 1 al 12.";
	cin>> numero_mes;
	
	switch (numero_mes){
		case 1:
			cout<< "El numero "<< numero_mes<<" es Enero";
			break;
		case 2:
			cout<< "El numero "<< numero_mes<<" es Febrero";
			break;
		case 3:
			cout<< "El numero "<< numero_mes<<" es Marzo";
			break;
		case 4:
			cout<< "El numero "<< numero_mes<<" es Abril";
			break;
		case 5:
			cout<< "El numero "<< numero_mes<<" es Mayo";
			break;
		case 6:
			cout<< "El numero "<< numero_mes<<" es Junio";
			break;
		case 7:
			cout<< "El numero "<< numero_mes<<" es Julio";
			break;
		case 8:
			cout<< "El numero "<< numero_mes<<" es Agosto";
			break;
		case 9:
			cout<< "El numero "<< numero_mes<<" es Septiembre";
			break;
		case 10:
			cout<< "El numero "<< numero_mes<<" es Octubre";
			break;
		case 11:
			cout<< "El numero "<< numero_mes<<" es Noviembre";
			break;
		case 12:
			cout<< "El numero "<< numero_mes<<" es Diciembre";
			break;										
	}
	
	return 0;
}

//Programa 9
#include <iostream>

using namespace std;

int main(){
	cout<< "Estos son los numeros pares del 1 al 30\n";
	for(int i=2; i<=30; i+=2){
		cout<< i;
	}
	
	return 0;
}

//Programa 10
#include <iostream>

using namespace std;

int main(){
	int numero;
	do{
		cout<< "\nIngrese un numero (El 0 es para salir). ";
		cin>> numero;
		if(numero != 0){
			if(numero % 2==0){
				cout<< numero << "\nEs un numero par.";
			}else{
				cout<< numero<< "\nNo es un numero par";
			}
		}
	} while (numero!=0);
	cout<<"\nPrograma terminado.";
	
	return 0;
}

*/
