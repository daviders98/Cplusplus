#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float X,Y,Z,CON;
	
	for(CON=.5;CON<=10;CON+=.5)
	{
		X=CON;
		Y=3*pow(X,2)+7*X-15;
		Z=Y-2*pow(X,2);
		
		cout<<"Para X="<<X<<", Y tiene un valor de: "<<Y<<" y Z tiene un valor de: "<<Z<<endl<<endl;
	}
	system("PAUSE");
	return 0;
}
