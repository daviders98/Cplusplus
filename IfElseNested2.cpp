#include <iostream>
using namespace std;
int main()
{
	int CanTrajes;
	float Precio, Subtotal, Dcto, Total;
	
	cout<<"Cuantos trajes se compran?";
	cin>>CanTrajes;
	cout<<"Cual es el precio unitario?";
	cin>>Precio;
	Subtotal=Precio*CanTrajes;
	if(CanTrajes==1)
	 Dcto=Subtotal*0.05;
	 else
	   if(CanTrajes==2)
	       Dcto=Subtotal*0.1;
	    else
	         if(CanTrajes==3)
	                Dcto=Subtotal*.15;
	        else 
	                Dcto=Subtotal*0.2;
	Total=Subtotal-Dcto;
	cout<<"El subtotal es $"<<Subtotal<<endl;
	cout<<"El descuento es $"<<Dcto<<endl;
	cout<<"El total es $"<<Total<<endl;
	system("PAUSE");
	return 0;
}
