#include <iostream>
#include <string>

using namespace std;

struct Empleado {
    string nombre;
    string puesto;
    double salario;
};

const int MAX_EMPLEADOS = 10;
Empleado empleados[MAX_EMPLEADOS];
int numEmpleados = 0;

int main() {
	
    int opcion;
    do {
        cout << "Menu Principal:" << endl;
        cout << "1. Ingresar datos de empleado" << endl;
        cout << "2. Mostrar datos de empleados" << endl;
        cout << "3. Mostrar total de la planilla" << endl;
        cout << "4. Salir del programa" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                if (numEmpleados >= MAX_EMPLEADOS) {
                    cout << "Ya has ingresado el máximo de empleados permitidos." << endl;
                    break;
                }
                cout << "Ingrese el nombre del empleado (primer nombre y primer apellido): ";
                getline(cin >> ws, empleados[numEmpleados].nombre);
                cout << "Ingrese el puesto del empleado: ";
                getline(cin >> ws, empleados[numEmpleados].puesto);
                cout << "Ingrese el salario del empleado: Q";
                cin >> empleados[numEmpleados].salario;
                numEmpleados++;
                break;
            }
            case 2: {
                cout << "Datos de los empleados:" << endl;
                for (int i = 0; i < numEmpleados; ++i) {
                    cout << "Empleado No. " << (i + 1) << endl;
                    cout << "Nombre: " << empleados[i].nombre << endl;
                    cout << "Puesto: " << empleados[i].puesto << endl;
                    cout << "Salario: Q" << empleados[i].salario << endl;
                    cout << endl;
                }
                break;
            }
            case 3: {
                double total = 0;
                for (int i = 0; i < numEmpleados; ++i) {
                    total += empleados[i].salario;
                }
                cout << "El total de la planilla es: Q" << total << endl;
                break;
            }
            case 4: {
                cout << "Saliendo del programa..." << endl;
                break;
            }
            default: {
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                break;
            }
        }
    } while (opcion != 4);

return 0;
}
