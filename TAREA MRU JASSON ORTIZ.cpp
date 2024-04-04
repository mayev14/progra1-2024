#include <iostream>
using namespace std; 
int main (){
	int tiempo, velocidad, distancia, opcion, operacion;
	int medida;
	cout<<"MRU" <<endl; 
	cout<<"Que desea calcular" <<endl;
	cout<<"1. Calcular tiempo" <<endl;
	cout<<"2. Calcular velocidad" <<endl;
	cout<<"3. Calcular distancia" <<endl; 
	cin>> opcion; 
    if(opcion==1)
	{
		cout<<"Eligio tiempo, en que unidad desea calcular el tiempo: " <<endl;
		cout<<"1. horas" <<endl;
		cout<<"2. segundos" <<endl;
		cin>> medida; 
		if(medida==1)
		{
		cout<<"ingrese distancia" <<endl;
		cin>> distancia;
		cout<<"Ingrese velocidad" <<endl;
		cin>> velocidad;
		
		operacion= distancia/velocidad;
		cout<<"El tiempo es de " <<operacion << " horas" <<endl; 
     	}
     	else if(medida==2)
     	{
     	cout<<"ingrese distancia" <<endl;
		cin>> distancia;
		cout<<"Ingrese velocidad" <<endl;
		cin>> velocidad;
		
		operacion= distancia/velocidad;
		cout<<"El tiempo es de " <<operacion << " segundos" <<endl; 
		}

	}
	else if(opcion==2)
	{
		cout<<"Eligio velocidad, en que unidad desea calcular la velocidad: " <<endl;
		cout<<"1. m/s" <<endl;
		cout<<"2. k/h" <<endl;
		cin>> medida; 
		if(medida==1)
		{
		cout<<"ingrese distancia" <<endl;
		cin>> distancia;
		cout<<"Ingrese tiempo" <<endl;
		cin>> tiempo;
		
		operacion= distancia/tiempo;
		cout<<"La velocidad es de " <<operacion << " m/s" <<endl; 
     	}
     	else if(medida==2)
     	{
     	cout<<"Ingrese distancia" <<endl;
		cin>> distancia;
		cout<<"Ingrese tiempo" <<endl;
		cin>> tiempo;
		
		operacion= distancia/tiempo;
		cout<<"La velocidad es de " <<operacion << " k/h" <<endl; 
		}
	}
		else if(opcion==3)
	{
				cout<<"Eligio distancia, en que unidad desea calcular la distancia: " <<endl;
		cout<<"1. metros" <<endl;
		cout<<"2. kilometros" <<endl;
		cin>> medida; 
		if(medida==1)
		{
		cout<<"ingrese tiempo" <<endl;
		cin>> distancia;
		cout<<"Ingrese velocidad" <<endl;
		cin>> velocidad;
		
		operacion= tiempo * velocidad;
		cout<<"La distancia es de " <<operacion << " metros " <<endl; 
     	}
     	else if(medida==2)
     	{
     	cout<<"ingrese tiempo" <<endl;
		cin>> distancia;
		cout<<"Ingrese velocidad" <<endl;
		cin>> velocidad;
		
		operacion= tiempo * velocidad;
		cout<<"La distancia es de " <<operacion << " kilometros" <<endl; 
		}
	}
	else if(opcion==9)
	{
		cout<<" esa opcion no esta disponible" <<endl;
		cin>> tiempo;
		operacion=  tiempo;
		cout<<"" <<operacion<<endl; 
	}
	else 
	{
		cout<<"esa opcion no esta disponible" <<endl; 
		return 0;
	}
}
