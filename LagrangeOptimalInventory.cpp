#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
	float z,Xnueva,Xarriba,Xabajo,veces;
	float cudos, cutres, condicion;
	int q1, q2, q3;
	veces=1;
	Xnueva=1;
	z=0;
	cout<<"Ingrese la condicion"<<endl;
	cin>>condicion;
	cout<<"Sumatoria de volumenes    Valor de Lambda  q1  q2  q3"<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	while(z!=condicion)
	{
		q2= (sqrt(1200000/(.4+(2*.4*Xnueva*((1000/500)+1)))));
		cudos= (sqrt(1200000/(.4+(2*.4*Xnueva*((1000/500)+1)))));					q3= (sqrt(2160000/(1.6+(.4*Xnueva))));
		cutres= (sqrt(2160000/(1.6+(.4*Xnueva))));
			if(cudos!=q2)
			{
				q2++;
			}
			q1= (1000/500)*q2;
			if(cutres!=q3)
			{
				q3++;
			}
			z=(q1*.4)+(q2*.4)+(q3*.4);
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
	}
	return 0;
}
