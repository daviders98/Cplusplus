#include <iostream>
using namespace std;

int main()
{
	int Num;
	void Tabla(int N);
	do{
		system("cls");
		cout<<"Escribe un numero:"<<endl;
		cin>>Num;
		if(Num>0)	
		Tabla(Num);
	}while(Num!=0);
	system("pause");
	return 0;
}

void Tabla(int N)
{
	system("cls");
	int CON;
		cout<<"La tabla del "<<N<<" es:"<<endl<<endl;
	for(CON=1;CON<=12;CON++)
	{
		cout<<N<<" * "<<CON<<" = "<<CON*N<<endl;
	}
	system("pause");
}
