#include <iostream>
using namespace std;

int main()
{
	float Total(char Tipo,float Precio, int Cant);
	char T, Resp;
	float P, Tot, ACVENTA=0;
	int C,NUMVENTA=0;
	
	do{
		cout<<"Tipo?"<<endl;
		cin>>T;
		cout<<"Precio?"<<endl;
		cin>>P;
		cout<<"Cantidad?"<<endl;
		cin>>C;
		Tot=Total(T,P,C);
		ACVENTA+=Tot;
		NUMVENTA++;
		cout<<"El total es $"<<Tot<<endl;
		cout<<"Mas ventas?"<<endl;
		cin>>Resp;
	}while(Resp=='s' or Resp=='S');
	cout<<"El total es $ "<<ACVENTA<<endl;
	cout<<"El promedio es $ "<<ACVENTA/NUMVENTA<<endl;
	system("pause");
	return 0;
}
float Total(char Tipo,float Precio, int Cant)
{
	switch(Tipo)
	{
		case 'A':
		case 'a':
			return Precio*Cant*.9;
			break;
		case 'B':
		case 'b':
		    return Precio*Cant*.85;
		    break;
		case 'C':
		case 'c':
		    return Precio*Cant*.8;
	}
}
