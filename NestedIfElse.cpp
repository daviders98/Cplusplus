#include <iostream>
using namespace std;

int main()
{
	float Compra,Desc,PagoF;
	cout<<"Cual fue el monto de la compra?";
	cin>>Compra;
	if(Compra<500)
	  Desc=0;
	   else
	       if(Compra<=1000)
	         Desc=Compra*.05;
	             else
	                if(Compra<=7000)
	                Desc=Compra*.1;
	                 else 
	                  Desc=Compra*.15;
	PagoF=Compra-Desc;
	cout<<"El descuento a aplicar es de:$"<<Desc<<endl;
	cout<<"La cantidad final a pagar es de:$"<<PagoF<<endl;
	system("PAUSE");
	return 0;
}
