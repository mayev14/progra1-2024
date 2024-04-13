#include <iostream>
using namespace std;

int main() {
    char opcion;
    float velocidad, tiempo, distancia; 
 cout << "Elija una opcion para calcular el MRU" << endl; 
 cout << "1. Calcular la distancia" <<endl; 
 cout << "2. Calcular la velocidad" <<endl; 
 cout << "3. Calcular el tiempo" <<endl; 
 cout << "4. Salir" <<endl; 
 cin >> opcion; 
 
 switch (opcion){
 	case '1':
 		cout << "Ha elegido calcular la distancia, ¿En que unidad de medida estan sus datos?" << endl;
 		cout << "a. km"<<endl;
 		cout << "b. m"<<endl;
 		cout << "c. cm"<<endl;
 		cout << "d. mm"<<endl;
 		cin>> opcion;
 		switch (opcion){
 		    case 'a':
 		    	cout << "Ingrese la velociadad (km/h): "; 
 		    	cin >> velocidad; 
 		    	cout << "Ingrese el tiempo (h): "; 
 		    	cin >> tiempo;
 		    	distancia = velocidad * tiempo; 
 		    	cout << "La distancia es:  " << distancia << "  km" <<endl;
 		    	break;
 		    	
 		    case 'b':
 		    	cout << "Ingrese la velociadad (m/s): "; 
 		    	cin >> velocidad; 
 		    	cout << "Ingrese el tiempo (s): "; 
 		    	cin >> tiempo;
 		    	distancia = velocidad * tiempo; 
 		    	cout << "La distancia es:  " << distancia << "  m"<<endl;
 		    	break;
 		    	
 		    case 'c':
 		    	cout << "Ingrese la velociadad (cm/s): "; 
 		    	cin >> velocidad; 
 		    	cout << "Ingrese el tiempo (s): "; 
 		    	cin >> tiempo;
 		    	distancia = velocidad * tiempo; 
 		    	cout << "La distancia es:  " << distancia << "  cm"<<endl;
 		    	break;
 		    	
 		    case 'd':
 		    	cout << "Ingrese la velociadad (mm/s): "; 
 		    	cin >> velocidad; 
 		    	cout << "Ingrese el tiempo (s): "; 
 		    	cin >> tiempo;
 		    	distancia = velocidad * tiempo; 
 		    	cout << "La distancia es:  " << distancia << "  mm"<<endl;
 		    	break;
 		    
 		    default:
                 cout << "Opcion invalida" << endl;
                 break;
 		    }
 		    	break;
 	case '2':
	 	cout << "Ha elegido calcular la velocidad, ¿En que unidad de medida estan sus datos?" << endl;
 		cout << "a. km/h"<<endl;
 		cout << "b. m/s"<<endl;
 		cout << "c. cm/s"<<endl;
 		cout << "d. mm/s"<<endl;
 		cin>> opcion;   
 		switch (opcion){
		     case 'a':
 		    	cout << "Ingrese la distancia (km): "; 
 		    	cin >> distancia; 
 		    	cout << "Ingrese el tiempo (h): "; 
 		    	cin >> tiempo;
 		    	velocidad = distancia / tiempo; 
 		    	cout << "La velociadad es:  " << velocidad << "  km/h" <<endl;
 		    	break;
			 case 'b':
 		    	cout << "Ingrese la distancia (m): "; 
 		    	cin >> distancia; 
 		    	cout << "Ingrese el tiempo (s): "; 
 		    	cin >> tiempo;
 		    	velocidad = distancia / tiempo; 
 		    	cout << "La velociadad es:  " << velocidad << "  m/s" <<endl;
 		    	break;	
 		    case 'c':
 		    	cout << "Ingrese la distancia (cm): "; 
 		    	cin >> distancia; 
 		    	cout << "Ingrese el tiempo (s): "; 
 		    	cin >> tiempo;
 		    	velocidad = distancia / tiempo; 
 		    	cout << "La velociadad es:  " << velocidad << "  cm/s" <<endl;
 		    	break;
 		    case 'd':
 		    	cout << "Ingrese la distancia (mm): "; 
 		    	cin >> distancia; 
 		    	cout << "Ingrese el tiempo (s): "; 
 		    	cin >> tiempo;
 		    	velocidad = distancia / tiempo; 
 		    	cout << "La velociadad es:  " << velocidad << "  mm/s" <<endl;
 		    	break;
 		    default:
                 cout << "Opcion invalida" << endl;
                 break;
 	         }
 		         break; 
 		case '3':
	 	cout << "Ha elegido calcular el tiempo, ¿En que unidad de medida estan sus datos?" << endl;
 		cout << "a. km/h"<<endl;
 		cout << "b. m/s"<<endl;
 		cout << "c. cm/s"<<endl;
 		cout << "d. mm/s"<<endl;
 		cin>> opcion;   
 		
 		switch (opcion){   
		 case 'a':
		  	cout << "Ingrese la distancia (km): ";
		  	cin >> distancia; 
		  	cout << "Ingrese la velocidad (km/h): ";
		  	cin >> velocidad;
		  	tiempo = distancia / velocidad; 
		  	cout << "El tiempo es: " << tiempo << "  horas" <<endl;
			  break;  
		 case 'b':
		  	cout << "Ingrese la distancia (m): ";
		  	cin >> distancia; 
		  	cout << "Ingrese la velocidad (m/s): ";
		  	cin >> velocidad;
		  	tiempo = distancia / velocidad; 
		  	cout << "El tiempo es: " << tiempo << "  segundos" <<endl;
			  break;
		 case 'c':
		  	cout << "Ingrese la distancia (cm): ";
		  	cin >> distancia; 
		  	cout << "Ingrese la velocidad (cm/s): ";
		  	cin >> velocidad;
		  	tiempo = distancia / velocidad; 
		  	cout << "El tiempo es: " << tiempo << "  segundos" <<endl;
			  break;  
		 case 'd':
		  	cout << "Ingrese la distancia (mm): ";
		  	cin >> distancia; 
		  	cout << "Ingrese la velocidad (mm/s): ";
		  	cin >> velocidad;
		  	tiempo = distancia / velocidad; 
		  	cout << "El tiempo es: " << tiempo << "  segundos" <<endl;
			  break; 
	}	
	 break;
	     case '4':
	     	cout << "Saliendo del programa..." <<endl;
	     		break; 

        default:
            cout << "Opcion invalida" << endl;
            cout << "Eliga una opcion del 1 al 4"<<endl; 
            break;
 }
 return 0;
}
