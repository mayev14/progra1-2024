#include <iostream>
using namespace std;

//creamos las funciones
float encontrar_velocidad(float x,float y);
float encontrar_tiempo(float x,float y);
float encontrar_distancia(float x,float y);

//hacemos los procesos que van a realizar cada funcion
float encontrar_velocidad(float x,float y){
	float velocidad;
	velocidad=x/y;
	
	cout<<"la velocidad es: "<<velocidad<<" metros/segundos"<<endl;
}

float encontrar_tiempo(float x,float y){
	float tiempo;
	tiempo=x/y;
	
	cout<<"El tiempo es: "<<tiempo<<" segundos "<<endl;
}

float encontrar_distancia(float x, float y){
	float distancia;
	distancia=x*y;
	
	cout<<"la distancia es: "<<distancia<<" metros "<<endl;
}
 //parte principal del programa
 int main(){

 	//declaracion de variables
    string resp="s";
    int op;
    float distancia,velocidad, tiempo;
    
	//hacemos un ciclo para que nos pregunte si queremos hacer otra operacion 
	while (resp =="s"){
		
		//mostramos un menú para que el usuario decida que hacer
		cout<<"--movimiento rectilineo uniforme--"<<endl;
		cout<<"1. Calcular la velocidad"<<endl;
		cout<<"2. Calcular el tiempo "<<endl;
		cout<<"3. Calcular la distancia "<<endl;
		cout<<"elija una opcion "<<endl;
		cin>>op;
		
		
		//evaluamos que quiere hacer el usuario con if
		if (op==1){
			cout<<"------Calcular Velocidad-------"<<endl;
		cout<<"Ingrese el valor de distancia (en metros):  "<<endl;
		cin>>distancia;
		cout<<"Ingrese el valor de tiempo (en segundos): "<<endl;
		cin>>tiempo;
		//llamamos a la funcion y le asignamos los valores
		encontrar_velocidad(distancia,tiempo);
		
	
		}
		
		if(op==2){
			cout<<"------Calcular Tiempo-------"<<endl;
			cout<<"Ingrese el valor de distancia (en metros ): "<<endl;
		cin>>distancia;
		cout<<"Ingrese el valor de velocidad (en metros x segundo): "<<endl;
		cin>>velocidad;
		//llamamos a la funcion y le asignamos los valores
		encontrar_tiempo(distancia,velocidad);
		}
		
		if(op==3){
			cout<<"------Calcular Distancia-------"<<endl;
		cout<<"Ingrese el valor de tiempo (en segundos): "<<endl;
		cin>>tiempo;
		cout<<"Ingrese el valor de velocidad (en metros x segundo): "<<endl;
		cin>>velocidad;
		//llamamos a la funcion y le asignamos los valores
		encontrar_distancia(tiempo,velocidad);
		}
		
		cout<<"desea hacer otra operación: s/n"<<endl;
		//limpiamos el buffer
		cin.ignore();
		getline(cin,resp);
		
		//limpiamos la pantalla
		system("cls");

	}
     
     return 0;
}
