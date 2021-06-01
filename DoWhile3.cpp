#include <iostream>
using namespace std;

int main()
{
	float Prom, CFinal;
	int P1,P2,P3,EF,Repro=0,Apro=0,Ctotal=0,alum=0;
	char R,Nom[41];
	
	do{
		cout<<"Cual es el nombre del alumno?"<<endl;
	cin>>Nom;
	cout<<"Introduce las calificaciones de los 3 parciales y el examen final:"<<endl;
	cin>>P1>>P2>>P3>>EF;
	
	Prom=(P1+P2+P3)/3.0;
	
	CFinal=(Prom*.7)+(EF*.3);
	
	if(CFinal>=70)
	{
		cout<<"El alumno "<<Nom<<" tiene una calificacion final de: "<<CFinal<<", esta aprobado"<<endl;
		Apro++;
	}
	else
	{
		cout<<"El alumno "<<Nom<<" tiene una calificacion final de: "<<CFinal<<", esta Reprobado"<<endl;
		Repro++;
	}
	    alum++;
		Ctotal+=CFinal;
		cout<<"Desea continuar?"<<endl;
		cin>>R;
		fflush(stdin);
		
	}while(R=='s' or R=='S');
	
	cout<<"El numero total de alumnos es:"<<alum<<endl;
	cout<<"El promedio grupal es:"<<Ctotal/alum<<endl;
	cout<<"El numero de alumnos aprobados es: "<<Apro;
	cout<<"El numero de alumnos reprobados es:"<<Repro;
	system("PAUSE");
	return 0;
	
	
	
}
