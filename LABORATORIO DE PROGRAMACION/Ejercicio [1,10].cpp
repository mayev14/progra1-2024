#include <iostream>
using namespace std;
/*EJERCICIO 1*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
int main() {
	
      cout<<"Bienvenido al curso de programacion";
	  return 0;
}
*/

/*EJERCICIO 2*/
/*
int main (){
	
int n1, n2, suma; 
cout <<"ingrese primer numero " <<endl; 
cin>> n1; 
cout <<"ingrese segundo numero" <<endl; 
cin>> n2; 
suma = n1 + n2;
cout <<"El resultado es " << suma <<endl; 

return 0;
}
*/

/*EJERCICIO 3*/
/*int main() {
	int num1, num2, num3, res ;
	
      cout<<"ingrese numero 1: ";
      cin>> num1;
      cout<<"ingrese numero 2: ";
      cin>> num2;
      cout<<"ingrese numero 3: ";
      cin>> num3;
      
      res=(num1+num2+num3)/3;
      
      cout<<"La media aritmerica es: "<<res;
      
	 
}*/

/*EJERCICIO 4*/
/*int main (){
int base1, base2, altura, area; 
	
cout<< "Bienvenido al programa para el calculo del area de un trapecio" <<endl; 	
cout<<"ingrese base 1 " <<endl;
cin>> base1; 
cout<<"ingrese base 2 " <<endl;
cin>> base2;
cout<<"ingrese altura " <<endl;
cin>> altura;
area = (base1 + base2) * altura / 2;
cout <<"El resultado es " << area <<endl; 

return 0;  
}*/

/*EJERCICIO 5*/
/*int main() {
	int capital, interes, tiempo, I ;
	
      cout<<"Ingrese su capital (Dinero ganado o prestado): ";
      cin>> capital;
      cout<<"Ingrese su interes (tasa de interes Anual): ";
      cin>> interes;
      cout<<"ingrese el tiempo(años a pagara el interes): ";
      cin>> tiempo;
      
      I=(capital*interes*tiempo);
      
       cout<<"Su capital Final es: "<<I;
  }*/
  
 /*EJERCICIO 6*/
  /*int main (){
int producto, precio;
	
cout<< "Bienvenido al programa para el calculo de precio de un producto sin el IVA " <<endl; 	
cout<< "Ingrese el precio de un producto" <<endl;
cin>> producto;
precio = producto/1.12;
cout<< "El precio del producto sin iva es " << precio <<endl;

return 0;  
}
*/

 /*EJERCICIO 7*/
  /*int main() {
	int num1, num2, num3, num4 ;
	
      cout<<"ingrese numero 1: ";
      cin>> num1;
      cout<<"ingrese numero 2: ";
      cin>> num2;
      cout<<"ingrese numero 3: ";
      cin>> num3;
      cout<<"ingrese numero 4: ";
      cin>> num4;
      
    if(num1>num2 and num1>num3 and num1>num4 ){ 
	 cout<<"El numero mayor es : " <<num1;
     
	}
	 else if(num2>num1 and num2>num3 and num2>num4 ){ 
	 cout<<"El numero mayor es : "<<num2;
      
	}
	else if(num3>num1 and num3>num2 and num3>num4){ 
	cout<<"El numero mayor es : "<<num3;
      
 }
 		 else if(num4>num1 and num2 and num3 ){ 
	 cout<<"El numero mayor es : "<<num4;
    
  }
    

	 return 0;
}*/

 /*EJERCICIO 8*/
  /* cout<< "Bienvenido al programa que indica la correspondencia con un mes del a�o" <<endl; 
cout<< "Ingrese su direccion de correspondecia" <<endl;
cin>> direccion; 

switch (direccion) {
	case 1: 
	cout<< "El mes del a�o es enero " <<endl; 
	break; 
	
	case 2: 
	cout<< "El mes del a�o es febrero " <<endl; 
	break; 
	
	case 3: 
	cout<< "El mes del a�o es marzo " <<endl; 
	break; 
	
	case 4: 
	cout<< "El mes del a�o es abril " <<endl; 
	break; 
	
	case 5: 
	cout<< "El mes del a�o es mayo " <<endl; 
	break; 
	
	case 6: 
	cout<< "El mes del a�o es junio " <<endl; 
	break; 
	
	case 7: 
	cout<< "El mes del a�o es julio " <<endl; 
	break; 
	
	case 8: 
	cout<< "El mes del a�o es agosto " <<endl; 
	break; 
	
	case 9: 
	cout<< "El mes del a�o es septiembre " <<endl; 
	break;
	
	case 10: 
	cout<< "El mes del a�o es octubre " <<endl; 
	break; 
	
	case 11: 
	cout<< "El mes del a�o es noviembre " <<endl; 
	break;
	
	case 12: 
	cout<< "El mes del a�o es diciembre " <<endl; 
	break;
	
	default:
	cout<< "Esa opcion no esta disponible" <<endl; 
    break; 
    
}



return 0;  
} 
 */

  /*EJERCICIO 9*/
    /*  int main(){
	int N, numero;
	N=0;
	cout<<"los numeros pares hasta el treinta son"<<endl;
for(int N=0; N<=31; N++){
	if(N%2==0)
	cout<<N<<endl;
}
}*/
/*EJERCICIO 10*/
 /*int main() {
int numero;

   do {
    cout << "Ingrese un numero: " << endl; 
    cin >> numero;
    
    if (numero != 0) {
    	
    	if (numero % 2 == 0){
		
        cout << "El numero ingresado es par." << endl;
    }
     else {
        cout << "El numero ingresado es impar." << endl;
    }
    
}
   } while (numero != 0);
   
   cout<< "Esa opcion no esta disponible" <<endl;

    return 0;
}
*/



