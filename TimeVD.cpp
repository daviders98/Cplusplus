#include <iostream>
using namespace std;
float Tiempo(float Dis, float Vel);

int main()
{
	float D,V;
	cout<<"Cual es la distancia reccorida?"<<endl;
	cin>>D;
	cout<<"Cual es la velocidad a la que viaja?"<<endl;
	cin>>V;
	cout<<"El tiempo que tomara en recorrer la distancia es de: "<<Tiempo(D,V)<<endl;
	system("pause");
	return 0;
}

float Tiempo(float Dis,float Vel)
{
	float T;
	T=Dis/Vel;
	return T;
}
