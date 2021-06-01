#include <iostream>
using namespace std;

int main()

{
	float C,F;
	char Respuesta;
	cout<<"Desea convertir grados (C)entrigrados o (F)arenheit?";
	cin>>Respuesta;
	if (Respuesta=='C'or Respuesta=='c')
	{
		cout<<"Escribe los grados Centigrados:";
		cin>>C;
		F=(9/5.0)*C+32;
		cout<<C<<" grados centigrados son "<<F<<" grados Farenheit"<<endl;	
	}
	else
	{
		cout<<"Escribe los grados Farenheit";
		cin>>F;
		C=(F-32)*(5/9.0);
		cout<<F<<" grados Farenheit son "<<C<<" grados Centigados";
		
	}
	
}
