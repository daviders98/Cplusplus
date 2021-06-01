#include <iostream>
using namespace std;
int main ()
{
	int Angulo;
	
	cout<<"Tamano del angulo?";
	cin>>Angulo;
	if(Angulo<90)
	  cout<<"El angulo es Agudo";
	if(Angulo==90)
	  cout<<"El angulo es Recto";
	if(Angulo>90 && Angulo<180)
	  cout<<"El angulo es Obtuso";
	if(Angulo==180)
	  cout<<"El angulo es Llano";
	if(Angulo>180 && Angulo<360)
	  cout<<"El angulo es Concavo";
	cout<<endl;
	system("PAUSE");
	return 0;
	  
}
