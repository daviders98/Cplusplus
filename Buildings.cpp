#include <iostream>
#include <iomanip>
using namespace std;
char ED[6][41];
int ALT[6],CON,ACALTURA=0;

int main()
{
	void LECTURA();
	void LISTADO();
	void SUMA();
	void PROMEDIO();
	void MAYOR();
	void MENOR();
	
	LECTURA();
	int OPCION;
	char R='s';
	do{
		ACALTURA=0;
		cout<<"------------------------MENU------------------------"<<endl;
		cout<<"1. LISTADO DE EDIFICIOS CON SUS RESPECTIVAS ALTURAS."<<endl;
		cout<<"2. SUMA TOTAL DE LAS ALTURAS DE TODOS LOS EDIFICIOS."<<endl;
		cout<<"3. ALTURA PROMEDIO DE LOS EDIFICIOS."<<endl;
		cout<<"4. NOMBRE Y ALTURA DEL EDIFICIO MAS ALTO."<<endl;
		cout<<"5. NOMBRE Y ALTURA DEL EDIFICIO MAS BAJO."<<endl;
		cout<<"6. SALIR."<<endl<<endl;
		cout<<"Elija la opcion que desee:"<<endl;
		cin>>OPCION;
		system("cls");
		switch(OPCION)
		{
		case 1:
			LISTADO();
			break;
		case 2:
			SUMA();
			break;
		case 3:
			PROMEDIO();
			break;
		case 4:
			MAYOR();
			break;
		case 5:
			MENOR();
			break;
			}
	system("pause");
	system("cls");
	}while(OPCION>=1 and OPCION<=5);
	return 0;
}
void LECTURA()
{
	    cout<<"                                     ------EDIFICIOS FAMOSOS------"<<endl;
	for(CON=1;CON<=6;CON++)
	{
		cout<<"                                           EDIFICIO  NUMERO: "<<CON<<endl;
		cout<<"Escribe el nombre del edificio famoso "<<CON<<" : ";
	    cin.getline(ED[CON-1],40);
	    cout<<"Escribe la altura del edificio "<<CON<<" :";
	    cin>>ALT[CON-1];
	    fflush(stdin);
	}

	system("cls");
}

void LISTADO()
{
	cout<<"                      LISTADO                     "<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"          EDIFICIO                          ALTURA"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	for(CON=1;CON<=6;CON++)
	cout<<setw(18)<<ED[CON-1]<<setw(32)<<ALT[CON-1]<<endl;
}

void SUMA()
{	
	for(CON=1;CON<=6;CON++)
	ACALTURA+=ALT[CON-1];
	cout<<"La suma de las alturas de los edificios es: "<<ACALTURA<<endl;
}

void PROMEDIO()
{
	for(CON=1;CON<=6;CON++)
	ACALTURA+=ALT[CON-1];
	cout<<"El promedio de las alturas de los edificios es: "<<ACALTURA/6.0<<endl;
}

void MAYOR()
{
	int Mayor,POS;
	
	for(CON=1;CON<=6;CON++)
	{
		if(CON==1)
		{
			Mayor=ALT[CON-1];
			POS=0;
		}
		else
		    if(ALT[CON-1]>Mayor)
		    {
		    	Mayor=ALT[CON-1];
		    	POS=CON-1;
			}
	}
	cout<<"El edificio "<<ED[POS]<<" tiene una altura de "<<ALT[POS]<<", por lo tanto es el mas alto."<<endl;
}

void MENOR()
{
	int Menor,Pos;
	for(CON=1;CON<=6;CON++)
	{
		if(CON==1)
		{
			Menor=ALT[CON-1];
			Pos=0;
		}
		else
		if(ALT[CON-1]<Menor)
		{
			Menor=ALT[CON-1];
			Pos=CON-1;
		}
	}
	cout<<"El edificio "<<ED[Pos]<<" tiene una altura de "<<ALT[Pos]<<", por lo tanto es el mas bajo."<<endl;
}
