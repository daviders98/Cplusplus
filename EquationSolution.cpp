#include <iostream>
using namespace std;

int main ()
{
	float A,B,C,D,E,F,X,Y;
	cout<<"Dame los coeficientes a,b,c,d,e y f";
	cin>>A>>B>>C>>D>>E>>F;
	if (A*E-B*D!=0)
	{
	   X=(C*E-B*F)/(A*E-B*D);
	   Y=(A*F-C*D)/(A*E-B*D);
	   cout<<"El valor en X es "<<X<<" y el valor en Y es "<<Y<<endl;
	}
	else
	    cout<<"El sistema no tiene solucion";
	
	system ("PAUSE");
	return 0;
}
