#include <iostream>
using namespace std;

const double PI= 3.14159;

int main (){
	double radio;
	
	cout << "Ingrese el radio del circulo: ";
	cin >> radio;
	
	double circunferencia= 2*PI*radio;
	
	cout << "La circunferencia del circulo es: "<< circunferencia << endl;
	return 0;
}
