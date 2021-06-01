
#include <iostream>
using namespace std;
int Resultado;

int main()
{
	int cont, Exp, Base;
	void POTENCIA(int B,int E);
	
	for(cont=1;cont<=10;cont++)
	{
		cout<<"PAR "<<cont<<" : "<<endl;
		cout<<"Escribe la base"<<endl;
		cin>>Base;
		cout<<"Escribe el exponente"<<endl;
		cin>>Exp;
		POTENCIA(Base,Exp);
		cout<<"El resultado es: "<<Resultado<<endl;
	}
	system("pause");
	return 0;
}

void POTENCIA(int B,int E)
{
	int CON;
	Resultado=1;
	for(CON=1;CON<=E;CON++)
	{
		Resultado*=B;
	}
}
