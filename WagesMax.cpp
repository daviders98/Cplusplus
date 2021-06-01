#include <iostream>
#include <iomanip>
using namespace std;

char Nombre[5][41];
int Edad[5];
float Sueldo[5];

int main()
{
	void Lectura();
	void Salida();
	
	Lectura();
	Salida();
	system("pause");
	return 0;	
}
void Lectura()
{
	int Con;
	for(Con=1;Con<=5;Con++)
	{
		cout<<"                                Empleado numero: "<<Con<<endl;
		cout<<"Cual es el nombre del empleado?"<<endl;
		cin.getline(Nombre[Con-1],41);
		cout<<"Cual es la edad?"<<endl;
		cin>>Edad[Con-1];
		cout<<"Cual es su sueldo?"<<endl;
		cin>>Sueldo[Con-1];
		fflush(stdin);
	}
}

void Salida()
{
	int CONT, POSMAYOR;
	float ACSUELDO=0,MAYOR;
	
	for(CONT=1;CONT<=5;CONT++)
	{
		cout<<Nombre[CONT-1]<<" "<<Edad[CONT-1]<<" "<<Sueldo[CONT-1]<<endl;
		ACSUELDO+=Sueldo[CONT-1];
		
		if(CONT==1)
		{
			MAYOR=Sueldo[CONT-1];
			POSMAYOR=0;
		}
		  else
		  {   if(Sueldo[CONT-1]>MAYOR)
	    	{
			MAYOR=Sueldo[CONT-1];
			POSMAYOR=CONT-1;
		    }
		  }
	}
	cout<<"La suma de sueldos es: $"<<ACSUELDO<<endl;
	cout<<"El mayor es: "<<Nombre[POSMAYOR]<<" "<<Edad[POSMAYOR]<<" "<<Sueldo[POSMAYOR]<<endl;
}
	
