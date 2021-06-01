#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float Coseno, Grados,Radianes;
	float const PI=3.1416;
	
	cout<<"Proporcione el valor del angulo en grados:";
	cin>>Grados;
	Radianes=Grados*(PI/180);
	Coseno=cos(Radianes);
	cout<<"Seno="<<sin(Radianes)<<endl<<"Coseno="<<Coseno<<endl;
	system("PAUSE");
	return 0;
}
