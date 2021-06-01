#include <iostream>
using namespace std;

int main()
{
    float F,M,A;
    char Respuesta;
    cout<<"Que es lo que desea calcular (Fuerza, Masa o Aceleracion)?";
    cin>>Respuesta;
    if(Respuesta=='F' or Respuesta=='f')
    {
        cout<<"Inserte el valor de M y de A:"<<endl;
        cin>>M>>A;
        F=M*A;
        cout<<"El valor de la Fuerza es de:"<<F<<endl;
    }
    else
        if(Respuesta=='A' or Respuesta=='a')
        {
            cout<<"Inserte el valor de F y de M:"<<endl;
            cin>>F>>M;
            A=F/M;
            cout<<"El valor de la Aceleracion es de:"<<A<<endl;
			     }
			     else
                     if(Respuesta=='M' or Respuesta=='m')
                     {
                         cout<<"Inserte el valor de A y de F"<<endl;
                         cin>>A>>F;
                         M=F/A;
                         cout<<"El valor de la Masa es de:"<<M<<endl;
                     }
    
    system ("PAUSE");
    return 0;
}
