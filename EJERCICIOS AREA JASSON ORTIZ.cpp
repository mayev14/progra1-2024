#include <iostream>
using namespace std;
int main(){
	int x,y,area,op;
	cout<<"AREA DE FIGURAS"<<endl;
	cout<<"Que area desea sacar"<<endl;
	cout<<"1. Triangulo"<<endl;
	cout<<"2. Rectangulo"<<endl;
	cout<<"3. Circunferencia"<<endl;
	cin>>op;
if(op==1)
	{
	
		cout<<"ingrese valor de base"<<endl;
		cin>>x;
		cout<<"ingrese valor de altura"<<endl;
		cin>>y;
		
		area = x*y/2;
		cout<<"el area del triangulo es "<<area<<endl;
}
else if(op==2)
{
		cout<<"ingrese valor de base"<<endl;
		cin>>x;
		cout<<"ingrese valor de altura"<<endl;
		cin>>y;
		
		area = x*y;
		cout<<"el area del rectangulo es "<<area<<endl;
}
else if(op==3)
{
		cout<<"ingrese valor de radio"<<endl;
		cin>>x;
		
		area = x*x*3.1416;
		cout<<"el area de la circunferencia es "<<area<<endl;
}
else
{
	cout<<"esa opcion no esta disponible"<<endl;
}
}
