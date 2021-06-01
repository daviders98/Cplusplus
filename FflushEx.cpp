#include <iostream>
using namespace std;

int main()
{
	char Nom[41];
	float ACSueldoN=0, ACSueldoV=0, Sueldo1, Sueldo2;
	int Anti, Cont;
	
	for(Cont=1;Cont<=10;Cont++)
	{
		cout<<"Cual es tu nombre?"<<endl;
		cin.getline(Nom,40);
		cout<<"Cual es tu sueldo actual?"<<endl;
		cin>>Sueldo1;
		cout<<"Cual es tu antiguedad?"<<endl;
		cin>>Anti;
			
		if(Anti>=10)
		Sueldo2=Sueldo1*1.1;
		else
		Sueldo2=Sueldo1*1.05;
		ACSueldoV+=Sueldo1;
		ACSueldoN+=Sueldo2;
		cout<<"El empleado: "<<Nom<<" tiene un sueldo de:$"<<Sueldo2<<endl;
		fflush(stdin);
	}
	cout<<"El total de sueldos viejos es : "<<ACSueldoV<<endl;
	cout<<"El total de sueldos nuevos es : "<<ACSueldoN<<endl;
	system("PAUSE");
	return 0;
}
