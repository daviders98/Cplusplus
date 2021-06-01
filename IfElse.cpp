#include <iostream>
using namespace std;

int main()
{
	char Socio[41];
	int Mens,Tiempo;
	float Pago;
	
	cout<<"Cual es el nombre del socio?";
	cin.getline(Socio,40);
	cout<<"Cuantos anos lleva en el club?";
	cin>>Tiempo;
	cout<<"Cuantas mensualidades tiene vencidas?";
	cin>>Mens;
	if(Tiempo>10 and Mens<=3)
	  Pago=(Mens*1500)*.9;
    else
	  Pago=(Mens*1500);
	cout<<"El socio "<<Socio<<" debe pagar "<<Pago<<endl;
	system("PAUSE");
	return 0;	
}


