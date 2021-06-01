#include <iostream>
using namespace std;
float Num1,Num2,Resultado;
char Operacion;

int main()
{
	void Sumar();
	void Restar();
	void Multiplicar();
	void Dividir();
	
	do{
		system("cls");
		cout<<"Seleccione la operacion a realizar:\n";
		cout<<"+ Suma\n";
		cout<<"- Resta\n";
		cout<<"* Multiplicacion\n";
		cout<<"/ Division\n";
		cout<<"S Salir\n";
		cout<<"Opcion?";
		cin>>Operacion;
		switch(Operacion)
		{
			case'+': Sumar();
			         break;
			case'-': Restar();
			         break;
			case'*': Multiplicar();
			         break;
			case'/': Dividir();
			         break;
		}
	}while(Operacion!='S' and Operacion!='s');
		system("pause");
		return 0;
}
void Sumar()
{
	system("cls");
	cout<<"SUMA\n";
	cout<<"Numero 1:";
	cin>>Num1;
	cout<<"Numero 2:";
	cin>>Num2;
	Resultado=Num1+Num2;
	cout<<"La suma es= "<<Resultado<<endl;
	system("pause");
}
void Restar()
{
	system("cls");
	cout<<"RESTA\n";
	cout<<"Numero 1:";
	cin>>Num1;
	cout<<"Numero 2:";
	cin>>Num2;
	Resultado=Num1-Num2;
	cout<<"La resta es = "<<Resultado<<endl;
	system("pause");
}
void Multiplicar()
{
	system("cls");
	cout<<"MULTIPLICACION\n";
	cout<<"Numero 1:";
	cin>>Num1;
	cout<<"Numero 2:";
	cin>>Num2;
	Resultado=Num1*Num2;
	cout<<"La multiplicacion es = "<<Resultado<<endl;
	system("pause");
}
void Dividir()
{
	system("cls");
	cout<<"DIVISION\n";
	cout<<"Numero 1:";
	cin>>Num1;
	cout<<"Numero 2:";
	cin>>Num2;
	if(Num2==0)
	      cout<<"El denominador no puede ser 0!\n";
	else
	{
		Resultado=Num1/Num2;
		cout<<"La division es = "<<Resultado<<endl;
	}
	system("pause");
}
