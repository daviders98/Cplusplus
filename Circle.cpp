#include <iostream>
using namespace std;

int main()
{
	float const Pi=3.1416;
	float Radio;
	float Area;
	float Circunferencia;
	cout<<"Cual es el radio del circulo?"<<endl;
	cin>>Radio;
	Circunferencia=Pi*Radio*2;
	Area=Pi*Radio*Radio;
	cout<<"El area del circulo es: "<<Area<<" y la circunferencia es de:"<<Circunferencia<<endl;
	system ("PAUSE");
	return 0;
}
