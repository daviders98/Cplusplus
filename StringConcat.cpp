#include <iostream>
using namespace std;

int main()
{
	char Nombre[51];
	float Peso;
	cout<<"Introduce el nombre de la persona:"<<endl;
	cin.getline(Nombre,50);
	cout<<"Introduce el peso de la persona:"<<endl;
	cin>>Peso;
	cout<<Nombre<<" tiene un peso de "<<Peso<<endl;
	cout<<"Gracias por usar el programa xd";
	system("PAUSE");
	return 0;
}
