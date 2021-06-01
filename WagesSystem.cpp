#include <iostream>
#include <iomanip>
using namespace std;
int con,CONT, EMP[4][3];
int main()
{
	void Lectura();
	float ACSUELDO=0;
	
	Lectura();
	cout<<"Departamento  Empleado 1  Empleado 2  Empleado 3"<<endl;
	cout<<"------------------------------------------------"<<endl;
		for(con=0;con<=3;con++)
	{
		cout<<setw(6)<<con+1;
		for(CONT=0;CONT<=2;CONT++)
		{
			ACSUELDO+=EMP[con][CONT];
		cout<<setw(14)<<EMP[con][CONT];
		}
		cout<<endl;
	}
	cout<<"-------------------------------------------------"<<endl;
	cout<<"LA SUMA TOTAL DE LOS SUELDOS ES DE: $"<<ACSUELDO<<endl;
	cout<<"EL PROMEDIO DE SUELDOS ES DE: $"<<ACSUELDO/12.0<<endl;
	system("pause");
	return 0;
}
void Lectura()
{
	for(con=0;con<=3;con++)
	{
		for(CONT=0;CONT<=2;CONT++)
		{
			cout<<"Ingresa el sueldo del departamento "<<con+1<<" del empleado "<<CONT+1<<endl;
			cin>>EMP[con][CONT];
		}
	}
	system("cls");
}
