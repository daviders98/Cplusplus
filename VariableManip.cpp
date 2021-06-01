#include <iostream>
using namespace std;
int main()
{ int varmain=10;
void prueba(int parvalor);
cout<<"el valor de varmain antes de la funcion es "<<varmain<<endl;
prueba(varmain);
cout<<"el valor de varmain despues de la funcion es "<<varmain<<endl;
system("pause");
return 0;
}
void prueba(int parvalor)
{ parvalor*=2;
cout<<"el valor de parvalor dentro de la funcion es "<<parvalor<<endl;
}

