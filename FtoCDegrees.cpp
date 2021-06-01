#include <iostream>
using namespace std;

main()
{
	float Celcius,Farenheit;

	cout<<"Cuantos grados Farenheit son?";
	cin>>Farenheit;
	Celcius = (Farenheit-32)*(float(5)/9);
	cout<<Farenheit<<" grados farenheit equivalen a "<<Celcius<<" grados Celcius."<<endl;
	system("PAUSE");
	return 0;
}
