#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
	float z,zanterior,Xnueva,Xarriba,Xabajo,veces;
	float cudos, cutres, condicion,q1;
	int q2, paro,q3;
	veces=1;
	Xnueva=1;
	z=0;
	zanterior=0;
	paro=0;
	cout<<"Ingrese la condicion"<<endl;
	cin>>condicion;
	cout<<"Sumatoria de volumenes    Valor de Lambda  q1  q2  q3"<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	while(paro<=0)
	{
		z=1;
		q2= (sqrt(1800000/((7.76+(2*.4*Xnueva*(6.6))))));
		cudos= (sqrt(1800000/((7.76+(2*.4*Xnueva*(6.6))))));
			if(cudos!=q2)
			{
				q2++;
			}
			q1= (1000/500)*q2;
			q3= (3.6)*q2;
			cutres= 3.6*q2;
			if(cutres!=q3)
			{
				q3++;
			}
			
			z=(q1*.4)+(q2*.4)+(q3*.4);
			if(z==zanterior)
		{
			paro++;
		}
		cout<<setw(22)<<setprecision(6)<<z<<" "<<setw(18)<<setprecision(10)<<Xnueva<<" "<<q1<<" "<<q2<<" "<<q3<<endl;
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
				Xnueva=2*Xnueva;
			}
		}
		veces++;
		zanterior=z;
	}
	return 0;
}
