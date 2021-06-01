#include <iostream>
using namespace std;

int main()
{
	float Deposito, I;
	int N, Con;
	
	cout<<"Inserte el deposito inicial:"<<endl;
	cin>>Deposito;
	cout<<"Cual es el plazo(en meses)?"<<endl;
	cin>>N;
	cout<<"Cual es la tasa de interes?"<<endl;
	cin>>I;
	
	for(Con=1;Con<=N;Con++)
	{
	Deposito*=(1+(I/100.0));
	cout<<"En el mes "<<Con<<" hay $"<<Deposito<<endl;
	}
	system("PAUSE");
	return 0;
}
