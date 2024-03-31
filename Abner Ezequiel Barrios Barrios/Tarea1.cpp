#include <iostream>
#include <string>

using namespace std;

//Calcular la distancia
double calcularDistancia(double velocidad, double tiempo) 
{
    return velocidad * tiempo;
}

//Calcular la velocidad
double calcularVelocidad(double distancia, double tiempo)
{
    return distancia / tiempo;
}

//Calcular el tiempo
double calcularTiempo(double distancia, double velocidad)
{
    return distancia / velocidad;
}

//Función principal
int main() 
{
    int opcion;
    double velocidad, distancia, tiempo;
    string unidadDistancia, unidadTiempo;

    do 
    {
        cout << "Seleccione la operación que desea realizar:\n";
        cout << "1. Calcular distancia\n";
        cout << "2. Calcular velocidad\n";
        cout << "3. Calcular tiempo\n";
        cout << "4. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) 
        {
            case 1:
                cout << "Ingrese la velocidad (puede ser en m/s o km/h): ";
                cin >> velocidad;
                cout << "Ingrese el tiempo (en segundos o horas): ";
                cin >> tiempo;
                cout << "Ingrese la unidad de medida para la distancia (m o km): ";
                cin >> unidadDistancia;
                distancia = calcularDistancia(velocidad, tiempo);
                cout << "La distancia es: " << distancia << " " << unidadDistancia << "\n";
                break;
            case 2:
                cout << "Ingrese la distancia (en metros o kilómetros): ";
                cin >> distancia;
                cout << "Ingrese el tiempo (en segundos o horas): ";
                cin >> tiempo;
                cout << "Ingrese la unidad de medida para la velocidad (m/s o km/h): ";
                cin >> unidadDistancia; // Reutilizamos unidadDistancia para simplificar
                velocidad = calcularVelocidad(distancia, tiempo);
                cout << "La velocidad es: " << velocidad << " " << unidadDistancia << "\n";
                break;
            case 3:
                cout << "Ingrese la distancia (en metros o kilómetros): ";
                cin >> distancia;
                cout << "Ingrese la velocidad (puede ser en m/s o km/h): ";
                cin >> velocidad;
                cout << "Ingrese la unidad de medida para el tiempo (s o h): ";
                cin >> unidadTiempo;
                tiempo = calcularTiempo(distancia, velocidad);
                cout << "El tiempo es: " << tiempo << " " << unidadTiempo << "\n";
                break;
            case 4:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción no válida. Intente nuevamente.\n";
        }
    } 
    while (opcion != 4);

    return 0;
}
