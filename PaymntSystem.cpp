#include <iostream>
using namespace std;

int main()

{
	char Nombre[41],Resp;
	int ConCliente=0,AcMonto=0,ClienteNO=0,ClienteSI=0;
	float Monto,Total;
	
	do{
		cout<<"Cual es el nombre del cliente"<<endl;
		cin.getline(Nombre,40);
		cout<<"Cual fue el monto de la compra?"<<endl;
		cin>>Monto;
		
		if(Monto>=1000)
        	{
	         Total=Monto*.9;
	         ClienteSI++;
			 }
	    else
		{
		Total=Monto;
	    ClienteNO++;
		}
		AcMonto+=Total;
		ConCliente++;
		cout<<"El cliente: "<<Nombre<<" debe pagar un monto de: $"<<Total<<endl;
		cout<<"Desea continuar?"<<endl;
		cin>>Resp;
		fflush(stdin);
	}while(Resp=='S'or Resp=='s');
	
	cout<<"El numero de clientes fue de: "<<ConCliente<<endl;
	cout<<"El promedio de los montos es de:"<<AcMonto/ConCliente<<endl;
	cout<<"El numero de clientes con descuento son: "<<ClienteSI<<endl;
	cout<<"El numero de clientes sin descuento son: "<<ClienteNO<<endl;
	system("PAUSE");
	return 0;
}
