#include <iostream>
using namespace std;

int main()
{
	int Prod=1;
	float ACtoxic=0,Toxic;
	do{
		cout<<"Cuantos miligramos de toxicidad tiene la sustancia "<<Prod<<" ? "<<endl;
		cin>>Toxic;
		ACtoxic+=Toxic;
		if(Toxic>=10)
		cout<<"El producto tiene una toxicidad alta."<<endl;
		else
		if(Toxic>=5)
		cout<<"El producto tiene una toxicidad moderada."<<endl;
		else
		cout<<"El producto tiene una toxicidad nula."<<endl;
		Prod++;
		
	}while(Prod<=10);
	cout<<"El promedio de mg de toxicidad de los productos es: "<<ACtoxic/10<<endl;
	system("PAUSE");
	return 0;
}
