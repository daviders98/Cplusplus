#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	void Triangulo(),Cuadrado(),Rectangulo(),Circulo();
	int Opcion;
	char R='s';
	do{
	system("cls");
	cout<<"Calculadora de areas:"<<endl<<endl;
	cout<<"Elige una opcion:"<<endl<<endl;
	cout<<"1. Triangulo:"<<endl;
	cout<<"2. Cuadrado:"<<endl;
	cout<<"3. Rectangulo:"<<endl;
	cout<<"4. Circulo:"<<endl;
	cin>>Opcion;
	system("cls");
	switch(Opcion)
	{
		case 1:
			Triangulo();
			break;
		case 2:
			Cuadrado();
			break;
		case 3:
			Rectangulo();
			break;
		case 4:
		    Circulo();
		    break;
		default:
			cout<<"Error"<<endl;
	}
	cout<<"Desea calcular otra area?"<<endl;
	cin>>R;
	}while(R=='s' or R=='S');
}
Triangulo()
{
	
	float Base, Altura, Resultado;
	cout<<"                                              AREA DE TRIANGULO:"<<endl<<endl;
	cout<<"Cual es la base del triangulo?"<<endl;
	cin>>Base;
	cout<<"Cual es la altura del triangulo?"<<endl;
	cin>>Altura;
	Resultado=Base*Altura/2.0;
	cout<<"El area del triangulo es: "<<Resultado<<endl;
	system("pause");
}
Cuadrado()
{
	float Lado,Resultado;
	cout<<"                                              AREA DE CUADRADO:"<<endl<<endl;
	cout<<"Cuanto mide el lado del cuadrado?"<<endl;
	cin>>Lado;
	Resultado=pow(Lado,2);
	cout<<"El area del cuadrado es: "<<Resultado<<endl;
	system("pause");
}
Rectangulo()
{
	float Base, Altura, Resultado;
	cout<<"                                              AREA DE RECTANGULO:"<<endl<<endl;
	cout<<"Cual es la base del rectangulo?"<<endl;
	cin>>Base;
	cout<<"Cual es la altura del rectangulo?"<<endl;
	cin>>Altura;
	Resultado=Base*Altura;
	cout<<"El area del rectangulo es: "<<Resultado<<endl;
	system("pause");
}
Circulo()
{
	float const Pi=3.1416;
	cout<<"                                              AREA DE CIRCULO:"<<endl<<endl;
	float Radio,Resultado;
	cout<<"Cual es el radio del circulo?"<<endl;
	cin>>Radio;
	Resultado=Pi*pow(Radio,2);
	cout<<"El resultado es : "<<Resultado<<endl;;
	system("pause");
}
