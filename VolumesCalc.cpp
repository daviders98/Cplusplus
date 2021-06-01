#include <iostream>
using namespace std;
float Resultado=1, POTENCIA(float BASE, int EXPONENTE);
float const PI=3.1416;

int main()
{
	int OPCION;
	float CUBO(), CILINDRO(), ESFERA();
	do{
		Resultado=1;
			system("cls");
			cout<<"Cual volumen desea calcular?"<<endl<<endl;
			cout<<"1. CUBO"<<endl;
			cout<<"2. CILINDRO"<<endl;
			cout<<"3. ESFERA"<<endl;
			cout<<"4. SALIR"<<endl;
			cin>>OPCION;
			system("cls");
			switch(OPCION)
			{
				case 1:
					CUBO();
					cout<<"El volumen es :"<<Resultado<<endl;
					break;
				case 2:
					CILINDRO();
					cout<<"El volumen es :"<<Resultado<<endl;
					break;
				case 3:
					ESFERA();
					cout<<"El volumen es :"<<Resultado<<endl;
			}
			system("pause");
			}
			while(OPCION!=4);
			return 0;
}
float CUBO()
{
	int Lado;
	cout<<" VOLUMEN DE CUBO"<<endl<<endl;
	cout<<"Cuanto mide el lado del cubo?"<<endl;
	cin>>Lado;
	Resultado=POTENCIA(Lado,3);
	return Resultado;
}
float CILINDRO()
{
	float RADIO,Altura;
	cout<<" VOLUMEN DE CILINDRO"<<endl<<endl;
	cout<<"Cual es el radio del cilindro?"<<endl;
	cin>>RADIO;
	cout<<"Cual es la altura del cilindro?"<<endl;
	cin>>Altura;
	Resultado=PI*Altura*POTENCIA(RADIO,2);
	return Resultado;
}
float ESFERA()
{
	float Radio;
	cout<<" VOLUMEN DE ESFERA"<<endl<<endl;
	cout<<"Cual es el radio de la esfera?"<<endl;
	cin>>Radio;
	Resultado=4/3.0*PI*POTENCIA(Radio,3);
	return Resultado;
}
float POTENCIA(float BASE, int EXPONENTE)
{
	int CON;
	for(CON=1;CON<=EXPONENTE;CON++)
	{
		Resultado*=BASE;
	}
	return Resultado;
}
