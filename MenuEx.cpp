#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	void Sumatoria(),Factorial(),Cubos();
	int Opcion;
	do{
		system("cls");
	    cout<<"Elija una de las siguientes opciones:"<<endl<<endl;
	    cout<<"1. Sumatoria"<<endl;
	    cout<<"2. Factorial"<<endl;
	    cout<<"3. Cubos"<<endl;
	    cout<<"4. Salir"<<endl;
	    cin>>Opcion;
	    system("cls");
	    switch(Opcion)
	    {
	    	case 1:
	    		Sumatoria();
	    		break;
	    	case 2:
	    		Factorial();
	    		break;
	    	case 3:
	    		Cubos();
	    		break;
		}
		system("cls");
	}while(Opcion!=4);
	system("pause");
	return 0;
}

Sumatoria()
{
	int N,Cont,Numero,SUMA=0;
	cout<<"Cual es la cantidad de numeros a sumar?"<<endl;
	cin>>N;
	for(Cont=1;Cont<=N;Cont++)
	{
		cout<<"Digite el numero:"<<endl;
		cin>>Numero;
		SUMA+=Numero;
	}
	cout<<"La sumatoria es igual a: "<<SUMA<<endl;
	system("pause");
}

Factorial()
{
	int Num,Contador,Multiplicatoria=1;
	cout<<"Escribe el numero del cual quieras saber el factorial: "<<endl;
	cin>>Num;
	if(Num<0)
		cout<<"ERROR"<<endl;
	else
	if(Num==0)
	cout<<"El factorial es 1"<<endl;
	else
	{
		for(Contador=1;Contador<=Num;Contador++)
		{
			Multiplicatoria*=Contador;
		}
		cout<<"El factorial de: "<<Num<<" es: "<<Multiplicatoria<<endl;
	}
	system("pause");
}

Cubos()
{
	int No,Total=0,CON;
	cout<<"Escribe un numero entero para saber la suma de cubos: "<<endl;
	cin>>No;
	for(CON=1;CON<=No;CON++)
	{
		Total+=pow(CON,3);
	}
	cout<<"La suma de cubos es: "<<Total<<endl;
	system("pause");
}
