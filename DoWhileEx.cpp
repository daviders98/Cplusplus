#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float X,Y,Z,CONT=.5;
	
	do{
		X=CONT;
		Y=3*pow(X,2)+7*X-15;
		Z=Y-2*pow(X,2);
		cout<<"Para X="<<X<<", Y tiene un valor de: "<<Y<<" y Z tiene un valor de: "<<Z<<endl<<endl;
		CONT+=.5;
	}while(CONT<=10);
	system("PAUSE");
	return 0;
}
