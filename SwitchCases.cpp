#include <iostream>
using namespace std;

int main()
{
	char Nombre[51];
	float Precio;
	float Total;
	char Impuesto;
	cout<<"Cual es el nombre del producto?"<<endl;
	cin.getline(Nombre,50);
	cout<<"Cual es el precio del producto?"<<endl;
	cin>>Precio;
	cout<<"Que tipo de producto es (A o a, B o b, C o c, D o d)?"<<endl;
	cin>>Impuesto;
	switch(Impuesto)
	{
	case'A':
	case'a':Total=Precio*1.16;
	        break;
	case'B':
	case'b':Total=Precio*1.12;
	        break;
	case'C':
	case'c':Total=Precio*1.08;
	        break;
	case'D':
	case'd':Total=Precio*1.02;
}
    cout<<"El producto "<<Nombre<<" tiene un precio final de: $"<<Total<<endl;
    system("PAUSE");
    return 0;
}
