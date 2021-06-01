#include <iostream>
using namespace std;

int main()
{
	char Cliente[31];
	int Total,Productos, Tipo, Precio;
	char Resp;
	int Pedidos=0, Monto=0;

	do{
		
	cout<<"Cual es el nombre del cliente?"<<endl;
	cin.getline(Cliente,30);
	cout<<"Que tipo de cliente es (1 o 2)?"<<endl;
	cin>>Tipo;
	cout<<"Cuantos productos solicita?"<<endl;
	cin>>Productos;
		
	   if(Tipo==1)
	   Precio=50;
	   else
	   Precio=60;
	   
	   Total=Productos*Precio;
	   Pedidos++;
	   Monto+=Total;
	   
	   cout<<"El cliente: "<<Cliente<<" debe de pagar: $"<<Total<<endl;
	   cout<<"Desea continuar (S/N)?"<<endl;
	   cin>>Resp;
	   fflush(stdin);
	}while(Resp=='S' or Resp=='s');
	
	cout<<"El numero de pedidos procesados es:"<<Pedidos<<endl;
	cout<<"El monto total de los pedidos es:$"<<Monto<<endl;
	system ("PAUSE");
	return 0;
}
