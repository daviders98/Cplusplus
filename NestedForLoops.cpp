#include <iostream>
using namespace std;

int main()
{
	int Dias, Trab,Prod,ACProd=0,ProdTrab=0;
	
	for(Trab=1;Trab<=5;Trab++)
	{
		for(Dias=1;Dias<=6;Dias++)
	{
		cout<<"Produccion del trabajador: "<<Trab<<" el dia "<<Dias<<" es : "<<endl;
		cin>>Prod;
		ProdTrab+=Prod;
	}
	cout<<"El total producido por el trabajador "<<Trab<<" es: "<<ProdTrab<<endl;
	ACProd+=ProdTrab;
	}
	cout<<"El total de la produccion de todos los trabajadores es: "<<ACProd<<endl;
	system("PAUSE");
	return 0;
}
