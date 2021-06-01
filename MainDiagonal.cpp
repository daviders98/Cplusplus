#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int Reng,Col;
	int i,j;
	int posx,posy,SUMA=0;
	
	cout<<setw(50)<<"MATRICES CUADRADAS"<<endl;
	do{
	cout<<"De cuantos renglones quiere la matriz? ";
	cin>>Reng;
	cout<<"De cuantas columnas? ";
	cin>>Col;
	if(Reng!=Col)
	{
		cout<<setw(80)<<"ERROR, INTRODUZCA EL MISMO NUMERO DE RENGLONES Y COLUMNAS"<<endl;
	}
	}while(Reng!=Col);
	system("cls");
	int Matriz[Reng][Col];
	for(i=0;i<=Reng-1;i++)
	{
		for(j=0;j<=Col-1;j++)
	{
			cout<<"Ingresa el valor de la matriz renglon "<<i+1<<" , posicion "<<j+1<<endl;
			cin>>Matriz[i][j];	
	}
	}
	
	system("cls");
	cout<<setw(30)<<"Matriz diagonal"<<endl;
	for(i=0;i<=Reng-1;i++)
	{
		for(j=0;j<=Col-1;j++)
		{
			if(j==0)
			{
			cout<<Matriz[0][0];
			posx=i;
			posy=j;
			}
			else
			{
				cout<<setw(10)<<Matriz[i][j];
				posx=i;
				posy=j;
			}
			SUMA+=Matriz[posx][posy];
		}
		cout<<endl;
		if(i==Reng-1)
		cout<<"La suma de la diagonal de la matriz es: "<<SUMA<<endl;
	}
	system("pause");
	return 0;
}

