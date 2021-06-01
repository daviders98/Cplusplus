#include <iostream>
using namespace std;

int main()
{
	int N,Con=0,Num,Suma=0;
	cout<<"Cuantos numeros quieres promediar?"<<endl;
	cin>>N;
	for(Con=0;Con=N;Con++)
	{
		cout<<"Escribe un numero:"<<endl;
		cin>>Num;
		Suma+=Num;
	}
	cout<<"El promedio es:"<<Suma/Con<<endl;
	system("PAUSE");
	return 0;
}
