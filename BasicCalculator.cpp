#include <iostream>
using namespace std;

int main()
{
	float A,B;
	char Respuesta;
	
	cout<<"MENU"<<endl<<"+ Suma"<<endl<<"- Resta"<<endl<<"* Multiplicacion"<<endl<<"/ Division"<<endl;
	
	cout<<"Que operacion desea realizar (+ , - , * o /)?"<<endl;
	cin>>Respuesta;
	cout<<"Proporcione el primer operando: "<<endl;
	cin>>A;
	cout<<"Proporcione el segundo operando: "<<endl;
	cin>>B;
	if (Respuesta=='+')
	cout<<"El resultado de "<<A<<" + "<<B<<" es "<<A+B<<endl;
	if (Respuesta=='-')
	cout<<"El resultado de "<<A<<" - "<<B<<" es "<<A-B<<endl;
	if (Respuesta=='*')
	cout<<"El resultado de "<<A<<" * "<<B<<" es "<<A*B<<endl;
	if (Respuesta=='/')
	cout<<"El resultado de "<<A<<" / "<<B<<" es "<<A/B<<endl;
	system ("PAUSE");
	return 0;
}
