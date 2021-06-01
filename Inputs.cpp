#include <iostream>
using namespace std;

int main()
{
	char Nombre[51];
	int Edad;
	cout<<"Teclee su nombre (puede incluir espacios)";
	cin.getline(Nombre,50);
	cout<<"Proporcione su edad";
	cin>>Edad;
	cout<<"Hola "<<Nombre<<" de "<<Edad<<" de edad."<<endl;
	system("PAUSE");
	return 0;
}
