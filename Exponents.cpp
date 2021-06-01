#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float X,Y,Pot,Rcuad;
	
	cout<<"Proporcione los valores de X y Y (separados por un espacio):";
	cin>>X>>Y;
	Pot=pow(X,Y);
	Rcuad=sqrt(X);
	cout<<"Potencia X a la Y="<<Pot<<endl<<"Raiz cuadrada de X="<<Rcuad<<endl;
	cout<<"Raiz Cubica de X="<<cbrt(X)<<endl;
	system("PAUSE");
	return 0;
}
