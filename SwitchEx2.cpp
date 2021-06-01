#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int Opcion;
    float Radio;
    int Salir,Base,Altura;
    float const Pi=3.1416;
	do{
	Salir=0;
	cout<<"1.Triangulo"<<endl;
	cout<<"2.Cuadrado"<<endl;
	cout<<"3.Rectangulo"<<endl;
	cout<<"4.Circulo"<<endl;
	cout<<"5.Salir"<<endl;
	cout<<"Su opcion?"<<endl;
	cin>>Opcion;
	
	switch(Opcion)
	{
		case 5:
			Salir++;
		    break;
		case 1:
			cout<<"Introduzca la base y la altura: "<<endl;
			cin>>Base>>Altura;
			cout<<"El area es: "<<Base*Altura/2.0<<endl;
			break;
		case 2:
	    case 3:
			cout<<"Introduzca la base y la altura: "<<endl;
			cin>>Base>>Altura;
			cout<<"El area es: "<<Base*Altura<<endl;
			break;
		case 4:
			cout<<"Introduzca el radio del circulo:"<<endl;
			cin>>Radio;
			cout<<"El area es:"<<Pi*pow(Radio,2)<<endl;
			break;
		default:
			Salir++;
	}
	fflush(stdin);
	}while(Salir==0);
	system("PAUSE");
	return 0;
}
