#include <iostream>
#include <math.h>
using namespace std;

int main()

{
	float A,B,C,X1,X2,Valor, Discriminante;
	cout<<"Escribe los coeficientes de la ecuacion cuadratica"<<endl;
	cin>>A>>B>>C;
	
	Discriminante=pow(B,2)-4*A*C;
	
	if (A==0 and B==0)
	    cout<<"La ecuacion es degenerada"<<endl;
	else 
	if(A==0 and B!=0)
	{
	   Valor=-(C/B);
	   cout<<"Existe una raiz unica cuyo valor es: "<<Valor<<endl;
	}
	else
	if(Discriminante<0)
	   cout<<"Hay dos raices imaginarias"<<endl;
	else
	     {
	      X1=(-B+(sqrt(pow(B,2)-4*A*C)))/(2*A);
	      X2=(-B-(sqrt(pow(B,2)-4*A*C)))/(2*A);	
		 cout<<"Los valores de la ecuacion son:"<<X1<<" y "<<X2<<endl;
		 }
	system ("PAUSE");
	return 0;
}
