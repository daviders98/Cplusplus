#include <iostream>
using namespace std;

int main()
{
	float Precio;
	float Area;
	float Distancia;
	float Total;
	cout<<"Cual es el area del terreno?"<<endl;
	cin>>Area;
	cout<<"Que tanta distancia hay entre el terreno y la ciudad?"<<endl;
	cin>>Distancia;
	
	if(Area>=1000 or Distancia>=50)
	Precio=300;
	else
	Precio=500;
	
	Total=Precio*Area;
	cout<<"El precio total del terreno es de:"<<Total<<endl;
	system("PAUSE");
	return 0;
}
