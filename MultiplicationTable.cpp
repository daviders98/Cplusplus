#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float Vector[10],Vect[10];
	int con,CONT;
	
	for(con=1;con<=10;con++)
	{
		cout<<"                           Multiplicación "<<con<<endl;
		cout<<"Cual es el vector 1?"<<endl;
		cin>>Vector[con-1];
		cout<<"Cual es el vector 2?"<<endl;
		cin>>Vect[con-1];
	}
	system("cls");
	cout<<"Vector 1    *    Vector 2      =     Vector 3"<<endl;
	cout<<"---------------------------------------------"<<endl;
	for(CONT=1;CONT<=10;CONT++)
	cout<<setw(7)<<Vector[CONT-1]<<setw(6)<<"*"<<setw(9)<<Vect[CONT-1]<<setw(10)<<"="<<setw(10)<<Vector[CONT-1]*Vect[CONT-1]<<endl;
	system("pause");
	return 0;
}
