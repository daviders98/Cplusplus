
#include <iostream>
using namespace std;
int SUMA=0;

int main()
{
	void SUMATORIA(int Num);
	int N;
	
	cout<<"Ingresa un numero: "<<endl;
	cin>>N;
	SUMATORIA(N);
	cout<<"la sumatoria de los cuadrados es igual a: "<<SUMA<<endl;
	system("pause");
	return 0;
}

void SUMATORIA(int Num)
{
	int cont;
	for(cont=1;cont<=Num;cont++)
		SUMA+=cont*cont;
}

