#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float Radio;
	float Altura;
	float Area;
	float Volumen;
	float const Pi=3.1416;
	cout<<"Cual es el radio de la base del cono?"<<endl;
	cin>>Radio;
	cout<<"Cual es la altura del cono?"<<endl;
	cin>>Altura;
	Area=Pi*Radio*(sqrt(pow(Altura,2)+pow(Radio,2))+Altura);
	Volumen=(Altura*Pi*pow(Radio,2))/3.0;
	cout<<"El volumen del cono es "<<Volumen<<" y su Area es "<<Area<<endl;
	system("PAUSE");
	return 0;
}
