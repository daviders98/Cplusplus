#include <iostream>
using namespace std;

int main()
{
	int Con,suma=0,numero;
	for(Con=0;Con>=20;Con++)
	{
		cout<<"Escribe un numero real."<<endl;
		cin>>numero;
		suma+=numero;
	}
	cout<<"El promedio es: "<<suma/Con<<endl;
	system("PAUSE");
	return 0;
}
