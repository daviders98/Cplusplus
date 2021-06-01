#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
	float z,Xnueva,Xarriba,Xabajo,zanterior,veces;
	float cuuno, cudos, cutres, cucuatro, condicion;
	int q1, q2, q3, q4;
	veces=1;
	Xnueva=1;
	z=0;
	cout<<"Ingrese la condicion"<<endl;
	cin>>condicion;
	
	while(veces<=1000)
	{
		q1= (sqrt(12000/(1+(10*Xnueva))));
			cuuno=(sqrt(12000/(1+(10*Xnueva))));
			q2= (sqrt(100000/(.3+(2*Xnueva))));
			cudos=(sqrt(100000/(.3+(2*Xnueva))));
			q3= (sqrt(200000/(.5+(2*Xnueva))));
			cutres= (sqrt(200000/(.5+(2*Xnueva))));
			q4= (sqrt(128000/(.2+(3*Xnueva))));
			cucuatro= (sqrt(128000/(.2+(3*Xnueva))));
			if(cuuno!=q1)
			{
				q1++;
			}
			if(cudos!=q2)
			{
				q2++;
			}
			if(cutres!=q3)
			{
				q3++;
			}
			if(cucuatro!=q4)
			{
				q4++;
			}
			z=(5*q1)+q2+q3+(1.5*q4);
		if(veces==1)
		{
			
			if(z<condicion)
			{
				Xarriba=1;
				Xnueva=.5;
				Xabajo=0;
			}
			else
			{
				Xabajo=Xnueva;
				Xnueva=2*Xnueva;				
				Xarriba=Xnueva;
			}
			zanterior=z;
		}	
		else
		{
			if(z<condicion)
			{
				Xarriba=Xnueva;
				Xnueva=(Xarriba+Xabajo)/2;
			}
			else
			{
				Xabajo=Xnueva;
				Xnueva=(Xarriba+Xabajo)/2;
			}
		}
		veces++;
		cout<<z<<" "<<setprecision(15)<<Xnueva<<" "<<setprecision(15)<<Xabajo<<" "<<setprecision(15)<<Xarriba<<endl;
	}
	return 0;
}
