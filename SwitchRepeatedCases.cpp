#include <iostream>
using namespace std;

int main()
{
	char Nombre[41];
	int Acum,Tipo;
	float Precio, Total, Desc,Subtotal;
	
	cout<<"Cual es el nombre del cliente?"<<endl;
	cin.getline(Nombre,40);
	cout<<"Introduzca el tipo de cliente (1,2,3 o 4): "<<endl;
	cin>>Tipo;
	cout<<"Cuantos acumuladores adquirio?"<<endl;
	cin>>Acum;
	cout<<"Cual es el precio por acumulador?"<<endl;
	cin>>Precio;
	
	switch(Tipo)
	{
		case 1:
		case 4: 
		     Desc=Acum*Precio*.05;
		     break;
		case 2:
			 Desc=Acum*Precio*.08;
			 break;
		case 3:
			 Desc=Acum*Precio*.12;
			 break;
		default:
		     cout<<"No es un tipo cliente valido"<<endl;	
	}
	Subtotal=Precio*Acum;
	Total=Acum*Precio-Desc;
	
cout<<"El cliente "<<Nombre<<" tiene un subtotal de "<<Subtotal<<" con un descuento de "<<Desc<<" y en total pagara "<<Total<<endl;
}
