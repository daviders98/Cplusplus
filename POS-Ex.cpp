#include <iostream>
#include <iomanip>
using namespace std;

int i,j,Prod[5][3];

int main()
{
	void Desplegar();
	
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=2;j++)
		{
			cout<<"Introduce la produccion del articulo "<<i+1<<" del turno "<<j+1<<endl;
		    cin>>Prod[i][j];
		}
	}
	system("cls");
	Desplegar();
	system("pause");
	return 0;
}

Desplegar()
{
	int suma;
	
	cout<<"Articulo Turno 1  Turno 2  Turno 3  Total"<<endl;
	cout<<"-----------------------------------------"<<endl;
	for(i=0;i<=4;i++)
	{
		suma=0;
		cout<<setw(4)<<i+1;
		for(j=0;j<=2;j++)
		{
			cout<<setw(9)<<Prod[i][j];
			suma+=Prod[i][j];
		}
		cout<<setw(10)<<suma<<endl;
	}
}
