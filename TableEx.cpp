#include <iostream>
#include <iomanip>
using namespace std;
int Prod[7];
char Nombre[51];
float ACprod=0;
 
int main()
{ void Lee();
void Despliega();
Lee();
Despliega();
system("pause");
return 0;
}
void Lee()
{ int i;
  cout<<"Cual es el nombre del obrero?"<<endl;
  cin.getline(Nombre,50);
for (i=1; i<=6; i++)
{ cout<<"Proporcione la produccion del dia "<<i<<": ";
cin>>Prod[i-1];
ACprod+=Prod[i-1];
}
}
void Despliega()
{ int i;
system("cls");
cout<<"Obrero: "<<Nombre<<endl;
cout<<"Dias              Produccion\n";
cout<<"----------------------------\n";
for (i=1; i<=6; i++)
cout<<setw(2)<<i<<setw(20)<<Prod[i-1]<<endl;
cout<<"TOTAL:"<<setw(16)<<ACprod<<endl;
cout<<"PROMEDIO:"<<setw(13)<<ACprod/6<<endl;
}
