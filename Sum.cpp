#include <iostream>
using namespace std;
int X,N;
int Suma;

int main()
{
	void Sumatoria();

	
	cout<<"Cual es el limite superior de la sumatoria?"<<endl;
	cin>>N;
	cout<<"De cuanto es el incremento?"<<endl;
	cin>>X;
	
	Sumatoria();
	cout<<"El resultado es: "<<Suma<<endl;
	system("pause");
	return 0;
}
Sumatoria()
{
	int Contador;
	
	for(Contador=1;Contador<=N;Contador+=X)
		Suma+=Contador;
}
