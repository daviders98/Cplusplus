#include <iostream>
using namespace std;

int main()
{
	int N,no,C,Suma=0;
	float Prom;
	cout<<"Cuantos numeros quieres promediar?"<<endl;
	cin>>N;
	for(C=0;C<=N-1;C++)
		{cout<<"Escribe un numero:";
		cin>>no;
		Suma+=no;
		}
	Prom=Suma/N;
	cout<<"El promedio es:"<<Prom<<endl;
	system("PAUSE");
	return 0;
}
