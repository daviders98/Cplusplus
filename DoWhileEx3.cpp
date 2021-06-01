#include <iostream>
using namespace std;

int main()
{
	char NombEmp[41];
	int HrsTrab;
	float CuotaHr,Sueldo;
	char Sigue;
	
	do{
		cout<<"Teclee nombre del empleado:";
		cin.getline(NomEmp,41);
		cout<<"Horas trabajadas?";
		cin>>HrsTrab;
		cout<<"Cuota por hora?";
		cin>>CuotaHr;
		Sueldo=HrsTrab*CuotaHr;
		cout<<NomEmp<<"Gana $"<<Sueldo<<endl;
		cout<<"Desea procesar otro empleado(S/N)?";
		cin>>Sigue;
		fflush(stdin);
	} while (Sigue=='S' or Sigue=='s');
	system ("pause");
	return 0;
}
