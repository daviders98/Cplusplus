#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
	float z,Xnueva,Xarriba,Xabajo,zanterior,veces;
	float cuuno, cudos, cutres, condicion;
	int q1, q2, q3;
	veces=1;
	Xnueva=1;
	z=0;
	cout<<"Ingrese la condicion"<<endl;
	cin>>condicion;
	
	while(veces<=2)
	{
		q1= (sqrt(1200000/(.8+(.8*Xnueva))));
		cuuno= (sqrt(1200000/(.8+(.8*Xnueva))));
		q2= (sqrt(600000/(.4+(.8*Xnueva))));
		cudos=(sqrt(600000/(.4+(.8*Xnueva))));
		q3= (sqrt(2160000/(1.6+(.8*Xnueva))));
		cutres= (sqrt(2160000/(1.6+(.8*Xnueva))));

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

			z=(q1*.4)+(q2*.4)+(q3*.4);
			cout<<q1<<" "<<q2<<q3<<endl;
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
