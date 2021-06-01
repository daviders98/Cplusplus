#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	float radio, area, volumen;
	float const Pi=3.1416;
	
	cout<<"Inserta el radio de la esfera";
	cin>>radio;
	area=4*Pi*pow(radio,2);
	volumen=4*Pi*pow(radio,3)/3.0;
	cout<<"El area de la esfera es igual a "<<area<<endl;
	cout<<"El volumen de la esfera es igual a "<<volumen<<endl;
	system("PAUSE");
	return 0;
}
