#include <iostream>
using namespace std;

int main()
{
	int Tipo, Hectareas, Clientes=0,Tipo1=0,Tipo2=0,Tipo3=0;
	float Precio;
	char Nombre[41], R='s';
	
	while(R=='S' or R=='s')
	{
		cout<<"Cual es el nombre del agricultor?"<<endl;
		cin.getline(Nombre,40);
		cout<<"Cuantas hectareas hay que fumigar?"<<endl;
		cin>>Hectareas;
		cout<<"Que tipo de fumigacion requiere?"<<endl;
		cout<<"1. Moscas"<<endl;
		cout<<"2. Chapulines"<<endl;
		cout<<"3. Gusanos"<<endl;
		cin>>Tipo;
		
		switch(Tipo)
		{
			case 1:
				Precio=Hectareas*10;
				Tipo1++;
				break;
			case 2:
				Precio=Hectareas*20;
				Tipo2++;
				break;
			case 3:
				Precio=Hectareas*30;
				Tipo3++;
				break;
			default:
			cout<<"Tipo no valido"<<endl;		
		}
		if(Hectareas>500)
			Precio=Precio*.85;
			else
			if(Hectareas>300)
			Precio=Precio*.9;
			else
			if(Hectareas>100)
			Precio=Precio*.95;
			else
			Precio=Precio;
			Clientes++;
			
		cout<<"El costo del servicio para: "<<Nombre<<" es: $"<<Precio<<endl;
		cout<<"Desea continuar (S/N)?"<<endl;
		cin>>R;
		fflush(stdin);
	}
	cout<<"Se atendieron en total: "<<Clientes<<" agricultores."<<endl;
	cout<<"Total de fumigaciones tipo 1: "<<Tipo1<<endl;
	cout<<"Total de fumigaciones tipo 2: "<<Tipo2<<endl;
	cout<<"Total de fumigaciones tipo 3: "<<Tipo3<<endl;
	
	}
