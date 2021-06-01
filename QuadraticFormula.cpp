#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float A,B,C,X1,X2;
	cout<<"Introduzca los coeficientes de la funcion cuadratica"<<endl;
	cin>>A>>B>>C;
	if (A==0 or (pow(B,2)-4*A*C)<0)
	  cout<<"ERROR EN LOS COEFICIENTES";
	else
	{
		X1=(-B+(sqrt(pow(B,2)-4*A*C)))/(2*A);
		X2=(-B-(sqrt(pow(B,2)-4*A*C)))/(2*A);
	  cout<<"Los valores de la ecuacion son:"<<X1<<" y "<<X2<<endl;
	}
	system ("PAUSE");
	return 0;
}
