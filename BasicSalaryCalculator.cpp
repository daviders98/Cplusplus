#include <iostream>
using namespace std;

int main()
{
	char Nombre[51];
	int Horas;
	float Pago;
	float Dinero;
	cout<<"Cual es el nombre del empleado?"<<endl;
	cin.getline(Nombre,50);
	cout<<"Cuantas horas trabajo?"<<endl;
	cin>>Horas;
	cout<<"A cuanto la hora joven?"<<endl;
	cin>>Pago;
	Dinero=Horas*Pago*.8;
	cout<<"Al trabajador "<<Nombre<<" se le debe de pagar "<<Dinero<<endl;
	system("PAUSE");
	return 0;
}
