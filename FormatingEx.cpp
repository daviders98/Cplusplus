#include <iostream>
#include <iomanip>
using namespace std;

int produccion[5][3], i, j;
int acum[5][3];

int main()
{
	
	void lectura();
	void despliegue();
	
	
	lectura();
	despliegue();
	
	system ("pause");
	return 0;
}

void lectura()
{
	for(i=0; i<=4; i++)
	{
		
		cout<<endl;
		cout<<"Teclea la produccion del articulo "<<i+1<<endl;
		for(j=0; j<=2; j++)
		{
			cout<<"Proporcione el numero de articulos del turno "<<j+1<<": ";
			cin>>produccion[i][j];
			acum[i][j]+=produccion[i][j];
		}
	}
	system ("cls");
}

void despliegue()
{
	int j=0;
	cout<<"Art  Turno1  Turno2  Turno3  Total"<<endl;
	cout<<"-----------------------------------"<<endl;
	for(i=0; i<=4; i++)
	{
		acum[i][j]=0;
		cout<<setw(3)<<i+1;
		for(j=0; j<=2; i++)
		{ 
		    cout<<setw(8)<<produccion[i][j]<<setw(7);
		}
		acum[i][j]=0;
		cout<<acum[i][j]<<endl;
	}
	
}
