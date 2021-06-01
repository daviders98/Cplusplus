#include <iostream>
using namespace std;

int main()

{
	char Respuesta;
	cout<<"Escribe una letra"<<endl;
	cin>>Respuesta;
	switch(Respuesta)
	{   case'a':
		case'e':
		case'i':
		case'o':
		case'u':
			cout<<"El caracter es una vocal minuscula";
			break;
		case'A':
		case'E':
		case'I':
		case'O':
		case'U':
			cout<<"El caracter es una vocal mayuscula";
			break;
		default:
			cout<<"El caracter es de otro tipo";
	}
	system ("PAUSE");
	return 0;
}
