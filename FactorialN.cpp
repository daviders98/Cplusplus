#include <iostream>
using namespace std;

int main()
{
	int Numero,Cont,Factorial=1;
	
	cout<<"Ingrese el numero"<<endl;
	cin>>Numero;
	
	for(Cont=1;Cont<=Numero;Cont++)
	Factorial*=Cont;
	cout<<"El factorial de: "<<Numero<<" es : "<<Factorial<<endl;
	system("PAUSE");
	return 0;
}
