#include <iostream>
using namespace std;

int main ()
{
	float Largo,Ancho, Area, PrecioMt, PrecioFin;
	
	cout<<"Proporcione ancho y largo del terreno:";
	cin>>Ancho>>Largo;
	cout<<"Proporcione el precio por metro cuadrado:";
	cin>>PrecioMt;
	Area=Ancho*Largo;
	if (Area>400)
	   PrecioFin=PrecioFin*0.9;
	cout<<"El precio del terreno es $"<<PrecioFin<<endl;
	system("PAUSE");
	return 0;
}
