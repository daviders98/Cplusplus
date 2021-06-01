#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float A,B,C;
	cout<<"Cuanto mide cada lado del triangulo? (separe la medida con espacios)";
	cin>>A,B;
	C=sqrt(pow(A,2)+pow(B,2));
	cout<<"La medida de la hipotenusa es "<<C<<endl;
	system("PAUSE");
	return 0;
}
