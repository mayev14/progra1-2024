//CODIGO 1
#include <iostream>
using namespace std;
int main (){
	cout <<"Bienvenidos al curso de programacion I";
}
//CODIGO 2
#include <iostream>

using namespace std;


int main() {
	
	float numero1, numero2, suma;
	cout<<"Ingrese el primer digito: ";
	cin>>numero1;
	cout<<"Ingrese el segundo digito: ";
	cin>>numero2;
	
	suma = numero1 + numero2;
	
	cout<<"El resultado de la suma de los digitos es: " <<suma<<endl;
	
	return 0;
}
//CODIGO 3
#include <iostream>
using namespace std; 
int main (){
	cout << "Media aritmetica de tres numeros"<<endl<<endl;
	int num1, num2, num3, media;
	cout<< "Ingrese el primer numero" <<endl;
	cin>> num1;
	cout<< "ingrese el segundo numero" <<endl;
	cin>> num2;
	cout<< "ingrese el tercer numero" <<endl;
	cin>> num3;
	media = (num1+num2+num3)/3; 
	cout << "la media aritmetica de los tres numeros es "<<media;
}
//CODIGO 4
#include <iostream>
 
 using namespace std;

int main() {
	float BaseMayor, BaseMenor,	Altura, Area;
	
    cout << "Ingrese la base mayor del trapecio: ";
    cin >> BaseMayor;
    cout << "Ingrese la base menor del trapecio: ";
    cin >> BaseMenor;
    cout << "Ingrese la altura del trapecio: ";
    cin >> Altura;

    Area = (BaseMayor + BaseMenor) * Altura / 2;

    cout << "El área del trapecio es: " << Area << endl;	

	return 0;
}
//CODIGO 5
#include <iostream>
using namespace std;
int main () {
	cout << "CAPITAL FINAL DE UN INTERES SIMPLE"<< endl<<endl;
	int p, r, t, i; 
	
	cout<< "ingrese el capital"<<endl;
	cin>> p;
	cout<< "ingrese la tasa"<<endl;
	cin>> r;
	cout << "ingrese el timepo"<< endl;
	cin>> t;
	i = (p*r*t)/100;
	cout << "Habra ganado " << i << " Quetzales";
	
}
//CODIGO 6
#include <iostream>

using namespace std;


int main() {
	
    float precioConIVA, porcentajeIVA, precioSinIVA;

   cout << "Ingrese el precio del producto con IVA: ";
    cin >> precioConIVA;
    

	precioConIVA / 1.12;
    
	cout << "El precio del producto sin impuestos es: " << precioConIVA / 1.12 <<endl;
	
	
	return 0;
}
//CODIGO 7
#include <iostream>
using namespace std;

int main (){
	cout<< "Que numero es mayor"<<endl<<endl;
	
	int num1, num2, num3, num4;
	cout<< "ingrese el primer numero"<<endl;
	cin>> num1;
	cout<<"ingrese el segundo numero"<<endl;
	cin>> num2;
	cout<< "ingrese el tercer numero"<<endl;
	cin>> num3;
	cout<< "ingrese el cuarto numero"<<endl;
	cin>> num4;
	
	int mayor = num1;
    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }
    if (num4 > mayor) {
        mayor = num4;
    } 
    
    cout<<"El numero mayor es "<<mayor;
}
//CODIGO 8
#include <iostream>

using namespace std;

int main() {
	
	int Numes;

    cout << "Ingrese un numero del 1 al 12 segun el mes: ";
    cin >> Numes;

    
    switch(Numes) {
        case 1:
            cout << "Enero" << endl;
            break;
        case 2:
            cout << "Febrero" << endl;
            break;
        case 3:
            cout << "Marzo" << endl;
            break;
        case 4:
            cout << "Abril" << endl;
            break;
        case 5:
            cout << "Mayo" << endl;
            break;
        case 6:
            cout << "Junio" << endl;
            break;
        case 7:
            cout << "Julio" << endl;
            break;
        case 8:
            cout << "Agosto" << endl;
            break;
        case 9:
            cout << "Septiembre" << endl;
            break;
        case 10:
            cout << "Octubre" << endl;
            break;
        case 11:
            cout << "Noviembre" << endl;
            break;
        case 12:
            cout << "Diciembre" << endl;
            break;
        default:
            cout << "Numero de mes no valido" << endl;
            break;
    }
	
	
	return 0;
}
//CODIGO 9
#include <iostream>
using namespace std;

int main (){
	cout<< "Numeros pares hasta 30"<<endl;
	for (int i = 2; i <= 30; i += 2) {
        cout << i << " "<<endl;
    }

    cout << endl;

    return 0;
}
//CODIGO 10
#include <iostream>
using namespace std;

int main() {
    int numero;
    while (true) {
    
	cout << "Ingrese un numero"<<endl;
	cout << "O ingrese 0 para salir"<<endl;
    cin >> numero;
        if (numero == 0) {
            cout << "Programa terminado." << endl;
            break;
        }
        if (numero % 2 == 0) {
            cout << "El numero " << numero << " es par." << endl;
        } else {
            cout << "El numero " << numero << " es impar." << endl;
        }

    }

    return 0;
}
