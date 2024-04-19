#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>

using namespace std;

struct Empleado {
    string nombre;
    string apellido;
    string puesto;
    double salario;
};

void ingresarDatos(vector<Empleado>& empleados, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
    	system("cls");
        Empleado emp;
        cout << "Ingrese el primer nombre del empleado " << i + 1 << ": ";
        cin >> emp.nombre;
        cout << "Ingrese el primer apellido del empleado: ";
        cin >> emp.apellido;
        cout << "Ingrese el puesto del empleado: ";
        cin >> emp.puesto;
        cout << "Ingrese el salario del empleado: Q";
        cin >> emp.salario;
        empleados.push_back(emp);
    }
}

void mostrarDatos(const vector<Empleado>& empleados) {
	system("cls");
    for (size_t i = 0; i < empleados.size(); i++) {
        cout << "Empleado No." << i + 1 << " Nombre: " << empleados[i].nombre << " " << empleados[i].apellido;
        cout << " Puesto: " << empleados[i].puesto;
        cout << " Salario: Q" << empleados[i].salario << endl;
    }
}

void mostrarTotalPlanilla(const vector<Empleado>& empleados) {
	system("cls");
    double total = 0.0;
    for (const auto& emp : empleados) {
        total += emp.salario;
    }
    cout << "Total de la planilla: Q" << total << endl;
}

void mostrarMenu() {
	
	 cout << "Menu Principal"<<endl;;
        cout << "1. Ingresar datos de empleados\n";
        cout << "2. Mostrar datos de empleados\n";
        cout << "3. Mostrar total de la planilla\n";
        cout << "4. Salir\n";
        cout << "Ingrese una opcion: ";
}

int main() {
    vector<Empleado> empleados;
    int opcion;
    int numEmpleados = 0;
	
	bool salir = false; 
	
	 while (!salir) {
        mostrarMenu();
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                cout << "Ingrese la cantidad de empleados a registrar (maximo 10): ";
                cin >> numEmpleados;
                if (numEmpleados > 10 || numEmpleados <= 0) {
                    cout << "Numero invalido, por favor ingrese un valor entre 1 y 10." << endl;
                } else {
                    ingresarDatos(empleados, numEmpleados);
                }
                break;
            case 2:
                if (empleados.empty()) {
                    cout << "No hay datos para mostrar. Por favor, ingrese datos primero." << endl;
                } else {
                    mostrarDatos(empleados);
                }
                break;
            case 3:
                if (empleados.empty()) {
                    cout << "No hay datos para calcular el total de la planilla. Por favor, ingrese datos primero." << endl;
                } else {
                    mostrarTotalPlanilla(empleados);
                }
                break;
            case 4:
                cout << "Saliendo del programa...\n";
                salir = true;
                break;
            default:
                cout << "Opcion no valida, intente nuevamente.\n";
                break;
        }
        
        cout << endl;
    }

    return 0;
}
