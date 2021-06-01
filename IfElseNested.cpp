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
     	if(Origen==1)
		Impuesto=Costo*.02;
		     else
	         if(Origen==2)
	             Impuesto=Costo*.3;
	             else
	                 if(Origen==3)
	                 Impuesto=Costo*.15;
	                         else
	                         if(Origen==4)
	                         Impuesto=Costo*.25;
	                         else
	                         cout<<"No es un Origen valido"<<endl;
	     Precio=Costo+Impuesto;
       	 cout<<"El auto de marca: "<<Marca<<" tiene un impuesto de: "<<Impuesto<<" y su precio final es "<<Precio<<endl;
	     system("PAUSE");
	     return 0;
}
