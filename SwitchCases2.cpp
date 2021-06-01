#include<iostream>
using namespace std;
int main()
{
	char Marca[41];
	int Origen;
	float Costo, Impuesto, Precio;
	
	cout<<"Cual es la marca del automovil?"<<endl;
	cin.getline(Marca,40);
	cout<<"Inserta el Origen del automovil (1:Alemania, 2:Japon, 3:Italia, 4:USA"<<endl;
	cin>>Origen;
	cout<<"Cual es el costo del automovil?"<<endl;
	switch(Origen)
	{Case1:Impuesto=Costo*.02;
	       break;
	 Case2:Impuesto=Costo*.3;
	       break;
	 Case3:Impuesto=Costo*1.5;
	       break;
	 Case4:Impuesto=Costo*.25;
	 default:
	 	cout<<"Origen no valido";
	}
	
	     Precio=Costo+Impuesto;
       	 cout<<"El auto de marca: "<<Marca<<" tiene un impuesto de: "<<Impuesto<<" y su precio final es "<<Precio<<endl;
	     system("PAUSE");
	     return 0;
}
