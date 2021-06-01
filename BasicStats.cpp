 #include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int Poblacion[10], cont, Sumatoria=0,Mayor, Menor,i;
	
	for(cont=1;cont<=10;cont++)
	{
		cout<<"Cual es la poblacion de la universidad en el año "<<cont<<" ?"<<endl;
		cin>>Poblacion[cont-1];
		Sumatoria+=Poblacion[cont-1];
		if(cont==1)
		{
		Menor=Poblacion[cont-1];
		Mayor=Poblacion[cont-1];	
		}
		if(Mayor < Poblacion[cont-1])
		Mayor=Poblacion[cont-1];
		if(Menor > Poblacion[cont-1])
		Menor=Poblacion[cont-1];
	}
	cout<<"Poblacion de la universidad en la ultima decada"<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<"   AÑO                               POBLACION "<<endl;
	for(i=0;i<=9;i++)
	cout<<setw(5)<<i+1<<setw(42)<<Poblacion[i]<<endl;
	cout<<"La suma total es:"<<Sumatoria<<endl;
	cout<<"El promedio es:"<<Sumatoria/10<<endl;
	cout<<"El mayor es:"<<Mayor<<endl;
	cout<<"El menor es:"<<Menor<<endl;
	system("pause");
	return 0;
}
