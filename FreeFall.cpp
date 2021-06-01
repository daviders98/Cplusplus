
#include <iostream>
#include <math.h>
using namespace std;

float Time(float A);

int main()
{
	float Altura;
	cout<<"Cual es la altura?"<<endl;
	cin>>Altura;
	cout<<"El tiempo que le tomara en caer es de: "<<Time(Altura)<<endl;
	system("pause");
	return 0;
}

float Time(float A)
{
	float T;
	T=sqrt(A*2/9.8);
	return T;
}
