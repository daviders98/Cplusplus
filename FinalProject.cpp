#include <iostream>
#include <iomanip>
using namespace std;

float Pot(float X,int Y);
int h,i, j, Vector[99], VecELE, capturaVecSI=0, Matriz[99][99], capturaMatSI=0, Reng, Col,ELIMVALOR;
void DespliegaVEC();

int main()
{
	void Figuras();
	void Calculos();
	void Vectores();
	void Matrices();
	int Opcion;
	
	do{
		system("cls");
		cout<<setw(22)<<"MENU PRINCIPAL"<<endl;
		cout<<"-----------------------------"<<endl;
		cout<<"1. Figuras Geometricas"<<endl;
		cout<<"2. Calculos matematicos"<<endl;
		cout<<"3. Operaciones sobre vectores"<<endl;
		cout<<"4. Operaciones sobre matrices"<<endl;
		cout<<"5. Salir"<<endl;
		cout<<"-----------------------------"<<endl;
		cout<<"Elige una opcion: ";
		cin>>Opcion;
		switch(Opcion)
	    {
		case 1:
			Figuras();
			break;
		case 2:
			Calculos();
			break;
		case 3:
			Vectores();
			break;
		case 4:
			Matrices();
     	}
	  }while(Opcion>=1 and Opcion<=4);
	  return 0;
}

void Figuras()
{
	void CUADRADO();
	void RECTANGULO();
	void CIRCULO();
	int REfig;
	
	do{
		system("cls");
		cout<<"FIGURAS GEOMETRICAS"<<endl;
		cout<<"-------------------"<<endl;
		cout<<"1. Cuadrado"<<endl;
		cout<<"2. Rectangulo"<<endl;
		cout<<"3. Circulo"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"-------------------"<<endl;
		cout<<"Elige una opcion: ";
		cin>>REfig;
		system("cls");
		
		switch(REfig)
		{
		  case 1:
		  	     CUADRADO();
		  	     system("pause");
		  	     break;
		  case 2:
		  	     RECTANGULO();
		  	     system("pause");
		  	     break;
	      case 3:
	      	     CIRCULO();
	      	     system("pause");
	    }
	  }while(REfig>=1 and REfig<=3);
}

void CUADRADO()
{
	float L;
	
	cout<<setw(38)<<"CUADRADO"<<endl;
	cout<<"Cual es el lado del cuadrado? ";
	cin>>L;
	cout<<endl<<"El perimetro de la figura es "<<L*4<<endl;
	cout<<"El area de la figura es "<<Pot(L ,2)<<endl;
}

void RECTANGULO()
{
	float LARGO,ANCHO;
	
	cout<<setw(43)<<"RECTANGULO"<<endl;
	cout<<"Cual es el ancho del rectangulo? ";
	cin>>ANCHO;
	cout<<"Cual es el largo del rectangulo? ";
	cin>>LARGO;
	cout<<endl<<"El area del rectangulo es "<<LARGO*ANCHO<<endl;
	cout<<"El perimetro del rectangulo es "<<(2*LARGO)+(2*ANCHO)<<endl;
}

void CIRCULO()
{
	float const Pi=3.1416;
	float Radio;
	
	cout<<setw(37)<<"CIRCULO"<<endl;
	cout<<"Cual es el radio del Circulo? ";
	cin>>Radio;
	cout<<endl<<"El area del circulo es "<<Pi*Pot(Radio,2)<<endl;
	cout<<"El perimetro del circulo es "<<2*Pi*Radio<<endl;
}

void Calculos()
{
	int REcal, N, Base, Exp, Factorial(int n);
	
	do{
		system("cls");
		cout<<"CALCULOS MATEMATICOS"<<endl;
		cout<<"--------------------"<<endl;
	    cout<<"1. Factorial."<<endl;
	    cout<<"2. Potencia."<<endl;
	    cout<<"3. Salir."<<endl;
	    cout<<"--------------------"<<endl;
	    cout<<"Elige una opcion: ";
	    cin>>REcal;
	    system("cls");
	    switch(REcal)
	    {
	    	case 1:
	    		cout<<setw(55)<<"FACTORIAL"<<endl;
	    		cout<<"Escribe un numero para calcular el factorial: ";
	    		cin>>N;
	    		if(N<0)
	    		cout<<"ERROR, no existe el factorial de numeros negativos"<<endl;
	    		else
	    		cout<<endl<<"El resultado de "<<N<<"! es "<<Factorial(N)<<endl;
	    		system("pause");
	    		break;
	    	case 2:
	    		cout<<setw(32)<<"POTENCIA"<<endl;
	    		cout<<"Cual es el numero base? ";
	    		cin>>Base;
	    		cout<<"Cual es el exponente? ";
	    		cin>>Exp;
	    		cout<<endl<<"El resultado de elevar "<<Base<<" a la "<<Exp<<" potencia es "<<Pot(Base,Exp)<<endl;
	    		system("pause");
		}
	  }while(REcal>=1 and REcal<=2);
}

int Factorial(int n)
{
	int Fact=1;
	
	if(n!=0)
	{
		for(i=1;i<=n;i++)
		{
			Fact*=i;
		}
	}
	return Fact;
}

float Pot(float X, int Y)
{
	float potencia=1;
	
	for(i=1;i<=Y;i++)
	{
		potencia*=X;
	}
	return potencia;
}

void Vectores()
{
	void CapturaVEC();
	void SumaPromVEC();
	void VECMayMen();
	void AGGVEC();
	void ElimVEC();
	void OrdVECas();
	void OrdVECde();
	int REvec;
	
	do{
		system("cls");
		cout<<setw(27)<<"SUB-MENU VECTORES"<<endl;
		cout<<"------------------------------------"<<endl;
	    cout<<"1. Captura de longitud y elementos"<<endl;
	    cout<<"2. Sumatoria y promedio de elementos"<<endl;
	    cout<<"3. Elemento mayor y menor"<<endl;
	    cout<<"4. Agregar elemento"<<endl;
	    cout<<"5. Eliminar elemento"<<endl;
	    cout<<"6. Ordenamiento ascendente"<<endl;
	    cout<<"7. Ordenamiento descendente"<<endl;
	    cout<<"8. Salir"<<endl;
	    cout<<"------------------------------------"<<endl;
	    cout<<"Elige una opcion: ";
	    cin>>REvec;
	    system("cls");
	    
	    switch(REvec)
	    {
	    	case 1:
	    		CapturaVEC();
	    		break;
	    	case 2:
	    		if(capturaVecSI==0)
	    		cout<<"ERROR- Por favor elige la opcion 1 primero para capturar datos y posteriormente usarlos"<<endl;
	    		else
	    		SumaPromVEC();
	    		system("pause");
	    		break;
	    	case 3:
	    		if(capturaVecSI==0)
	    		cout<<"ERROR- Por favor elige la opcion 1 primero para capturar datos y posteriormente usarlos"<<endl;
	    		else
	    		VECMayMen();
	    		system("pause");
	    		break;
	    	case 4:
	    		if(capturaVecSI==0)
	    		cout<<"ERROR- Por favor elige la opcion 1 primero para capturar datos y posteriormente usarlos"<<endl;
	    		else
	    		AGGVEC();
	    		system("pause");
	    		break;
	    	case 5:
	    		if(capturaVecSI==0)
	    		cout<<"ERROR- Por favor elige la opcion 1 primero para capturar datos y posteriormente usarlos"<<endl;
	    		else
	    		ElimVEC();
	    		system("pause");
	    		break;
	    	case 6:
	    		if(capturaVecSI==0)
	    		cout<<"ERROR- Por favor elige la primera opcion primero para capturar datos y posteriormente usarlos"<<endl;
	    		else
	    		OrdVECas();
	    		system("pause");
	    		break;
	    	case 7:
	    		if(capturaVecSI==0)
	    		cout<<"ERROR- Por favor elige la opcion 1 primero para capturar datos y posteriormente usarlos"<<endl;
	    		else
	    		OrdVECde();
	    		system("pause");
		}
	}while(REvec>=1 and REvec<=7);
}

void CapturaVEC()
{
	cout<<setw(43)<<"VECTORES"<<endl;
	cout<<"Cuantos elementos deseas escribir? ";
	cin>>VecELE;
	cout<<endl;
	for(i=0;i<=VecELE-1;i++)
	{
		cout<<"Introduce el elemento "<<i+1<<": ";
		cin>>Vector[i];
	}
	capturaVecSI++;
	cout<<endl<<"Elementos capturados con exito"<<endl;
	system("pause");
}

void SumaPromVEC()
{
	float Suma=0;
	
	cout<<"SUMATORIA Y PROMEDIO DE ELEMENTOS"<<endl<<endl;
	cout<<"Vector"<<endl;
	cout<<"-------------"<<endl;
	for(i=0;i<=VecELE-1;i++)
	{
		cout<<setw(3)<<i+1<<setw(10)<<Vector[i]<<endl;
		Suma+=Vector[i];
	}
	cout<<"La suma de los elementos es: "<<Suma<<endl;
	cout<<"El promedio de los elementos es: "<<Suma/VecELE<<endl;
}

void VECMayMen()
{
	int Mayor,Menor,posMas,posMenos;
	
	cout<<"ELEMENTO MAYOR Y MENOR"<<endl<<endl;
	cout<<"Vector"<<endl;
	cout<<"-------------"<<endl;
	for(i=0;i<=VecELE-1;i++)
	{
		if(i==0)
		{
			Mayor=Vector[i];
			Menor=Vector[i];
			posMas=i;
			posMenos=i;
		}
		if(Mayor<Vector[i])
		{
			Mayor=Vector[i];
			posMas=i;
		}
		if(Menor>Vector[i])
		{
			Menor=Vector[i];
			posMenos=i;
		}
			
		cout<<setw(3)<<i+1<<setw(10)<<Vector[i]<<endl;
	}
	cout<<"El elemento de mayor valor es "<<Vector[posMas]<<" y se encuentra en la posicion "<<posMas+1<<endl;
	cout<<"El elemento de menor valor es "<<Vector[posMenos]<<" y se encuentra en la posicion "<<posMenos+1<<endl;
}

void AGGVEC()
{
	int posVEC;
	cout<<"AGREGAR ELEMENTO"<<endl<<endl;
	cout<<"Tus elementos son:"<<endl;
	DespliegaVEC();
	cout<<"En que posicion deseas agregar un elemento? ";
	cin>>posVEC;
	if(posVEC<=0)
	cout<<"ERROR, el vector comienza en la posicion 1"<<endl;
	else
	if(posVEC>VecELE+1)
	cout<<"ERROR, el vector termina en la posicion "<<VecELE<<", intente agregando el elemento en la posicion "<<VecELE+1<<endl;
	else
	if(posVEC-1==VecELE-1)
	{
		VecELE++;
		Vector[posVEC]=Vector[posVEC-1];
		cout<<"Introduce el elemento: ";
		cin>>Vector[VecELE-2];
		cout<<"Elemento agregado con exito"<<endl<<endl;
		cout<<"Tu nuevo vector es: "<<endl;
		DespliegaVEC();
	}
	else
	{
		VecELE++;
		for(i=VecELE-1;i>=posVEC-1;i--)
	        {
		        Vector[i+1]=Vector[i];
	        }
		cout<<"Introduce el elemento: ";
		cin>>Vector[posVEC-1];
		cout<<"Elemento agregado con exito"<<endl<<endl;
		cout<<"Tu nuevo vector es: "<<endl;
		DespliegaVEC();
	}
	
}

void ElimVEC()
{
	char ELIMINAR;
	int POS, VALOR, found,SALIRSI;
	
	cout<<"ELIMINAR ELEMENTO"<<endl<<endl;
	cout<<"Tus elementos son:"<<endl;
	DespliegaVEC();
	cout<<"Desea eliminar segun la posicion o segun el valor? Escriba (P o V)"<<endl;
	cin>>ELIMINAR;
	switch(ELIMINAR)
	{
		case 'P':
		case 'p':
			cout<<"Cual es la posicion del elemento que desea eliminar? ";
			cin>>POS;
			if(POS-1>=VecELE)
			{
				cout<<"ERROR, solo puedes eliminar elementos desde 1 hasta "<<VecELE<<endl;
			}
			else
			{
				for(i=POS;i<=VecELE-1;i++)
	            {
		            Vector[i-1]=Vector[i];
	            }
	        VecELE--;
	        DespliegaVEC();
			}
	        break;
			
		case 'V':
		case 'v':
			cout<<"Cual es el valor del elemento que desea eliminar? ";
			cin>>VALOR;
		i=-1;
		do{
			i++;
		}while(Vector[i]!=VALOR or i>VecELE-1);
			POS=i;
			cout<<"Tu nuevo vector es: "<<endl;
			
		for(i=POS;i<=VecELE-2;i++)
	            {
		            Vector[i]=Vector[i+1];
	            }
	        VecELE--;
	        DespliegaVEC();
			}
	        
	}

void OrdVECas()
{
	cout<<"ORDENAMIENTO ASCENDENTE "<<endl<<endl;
	int ORDAS;
	for(i=0;i<=VecELE-1;i++)
	{ 
	    for(j=0;j<VecELE-1;j++)
	        { 
              if(Vector[j]>Vector[j+1])
			  { 
			     ORDAS=Vector[j]; 
				 Vector[j]=Vector[j+1];
				 Vector[j+1]=ORDAS; 
			  } 
			} 
	} 
	DespliegaVEC();
}

void OrdVECde()
{
	int ORDES;
	cout<<"ORDENAMIENTO DESCENDENTE"<<endl<<endl;
	for(i=0;i<=VecELE-1;i++)
	{ 
	    for(j=0;j<VecELE-1;j++)
	        { 
              if(Vector[j]<Vector[j+1])
			  { 
			     ORDES=Vector[j]; 
				 Vector[j]=Vector[j+1];
				 Vector[j+1]=ORDES; 
			  } 
			} 
	} 
	DespliegaVEC();
}

void DespliegaVEC()
{
	cout<<"Vector"<<endl;
		cout<<"-------------"<<endl;
		for(i=0;i<=VecELE-1;i++)
		{
		cout<<setw(3)<<i+1<<setw(10)<<Vector[i]<<endl;
	    }
		cout<<"-------------"<<endl;
}

void Matrices()
{
	void CapturaMAT();
	void SumaPromMAT();
	void SumaRengMAT();
	void SumaCol();
	void Diagonal();
	int REmatr;
	
	do{
		system("cls");
		cout<<"SUB-MENU MATRICES"<<endl;
		cout<<"------------------------------------"<<endl;
	    cout<<"1. Captura de longitudes y elementos"<<endl;
	    cout<<"2. Sumatoria y promedio de elementos"<<endl;
        cout<<"3. Sumatoria por renglones"<<endl;
	    cout<<"4. Sumatoria por columnas"<<endl;
	    cout<<"5. Diagonal principal"<<endl;
	    cout<<"6. Salir"<<endl;
	    cout<<"------------------------------------"<<endl;
	    cout<<"Elige una opcion: ";
	    cin>>REmatr;
	    system("cls");
	    switch(REmatr)
	    {
	    	case 1:
	    		CapturaMAT();
	    		system("pause");
	    		break;
	    	case 2:
	    		if(capturaMatSI==0)
	    		cout<<"ERROR- Por favor elige la opcion 1 primero para capturar datos y posteriormente usarlos"<<endl;
	    		else
	    		SumaPromMAT();
	    		system("pause");
	    		break;
	    	case 3:
	    		if(capturaMatSI==0)
	    		cout<<"ERROR- Por favor elige la opcion 1 primero para capturar datos y posteriormente usarlos"<<endl;
	    		else
	    		SumaRengMAT();
	    		system("pause");
	    		break;
	    	case 4:
	    		if(capturaMatSI==0)
	    		cout<<"ERROR- Por favor elige la opcion 1 primero para capturar datos y posteriormente usarlos"<<endl;
	    		else
	    		SumaCol();
	    		system("pause");
	    		break;
	    	case 5:
	    		if(capturaMatSI==0)
	    		cout<<"ERROR- Por favor elige la opcion 1 primero para capturar datos y posteriormente usarlos"<<endl;
	    		else
	    		Diagonal();
	    		system("pause");
		}
	  }while(REmatr>=1 and REmatr<=5);
}

void CapturaMAT()
{
	cout<<"CAPTURA DE LONGITUDES Y ELEMENTOS"<<endl<<endl;
	cout<<setw(24)<<"Matriz"<<endl;
	cout<<"De cuantos renglones deseas tu matriz? "<<endl;
	cin>>Reng;
	cout<<"De cuantas columnas deseas tu matriz? "<<endl;
	cin>>Col;
	cout<<endl;
	
	if(Reng<=0 or Col<=0)
	   cout<<"ERROR"<<endl;
	        else
	        {
		      for(i=0;i<=Reng-1;i++)
	                {
		                for(j=0;j<=Col-1;j++)
		                    {
			                cout<<"Escribe el elemento "<<j+1<<" del renglon "<<i+1<<": ";
			                cin>>Matriz[i][j];
		                    }
	                }
	            capturaMatSI++;
	            cout<<"Elementos capturados con exito"<<endl;
	        }
}

void SumaPromMAT()
{
	float TOTAL;
	TOTAL=0;
	
	cout<<"SUMATORIA Y PROMEDIO DE ELEMENTOS"<<endl<<endl;
	cout<<"Matriz"<<endl;
        cout<<"---------";
		for(i=0;i<=Col-1;i++)
		{
			if(i>=9)
			cout<<"--------";
			else
			cout<<"-------";
		}
		cout<<endl;
		
		for(h=0;h<=Col-1;h++)
		{
			if(h==0)
			cout<<setw(15)<<"Col "<<h+1;
			else
			cout<<setw(6)<<"Col "<<h+1;
		}
		cout<<endl;

		for(i=0;i<=Reng-1;i++)
		{ 
			cout<<"Renglon "<<i+1;
			for(j=0;j<=Col-1;j++)
			{
				TOTAL+=Matriz[i][j];
					if(i>=9 and j==0)
					    cout<<setw(6)<<Matriz[i][j];
					    else
					        if(j==0)
				                cout<<setw(7)<<Matriz[i][j];
					            else
					                if(j>=9)
					                    cout<<setw(8)<<Matriz[i][j];
					                    else
					                        cout<<setw(7)<<Matriz[i][j];
			}
			cout<<endl;
		}
		cout<<"---------";
		for(i=0;i<=Col-1;i++)
		{
			if(i>=9)
			cout<<"--------";
			else
			cout<<"-------";
		}
		cout<<endl;
		
	cout<<"La suma de todos los elementos de la matriz es: "<<TOTAL<<endl;
	cout<<"El promedio de todos los elementos de la matriz es: "<<TOTAL/(Col*Reng)<<endl;
}

void SumaRengMAT()
{
	int SumaREN;
	
	    cout<<"SUMATORIA POR RENGLONES"<<endl<<endl;
	    cout<<"Matriz"<<endl;
        cout<<"---------";
		for(i=0;i<=Col-1;i++)
		{
			if(i>=9)
			cout<<"--------";
			else
			cout<<"-------";
		}
		cout<<"-------"<<endl;
		
		for(h=0;h<=Col-1;h++)
		{
			if(h==0)
			cout<<setw(15)<<"Col "<<h+1;
			else
			cout<<setw(6)<<"Col "<<h+1;
		}
		cout<<"  Total"<<endl;

		for(i=0;i<=Reng-1;i++)
		{
			SumaREN=0;
			cout<<"Renglon "<<i+1;
			for(j=0;j<=Col-1;j++)
			{
				SumaREN+=Matriz[i][j];
					if(i>=9 and j==0)
					    cout<<setw(6)<<Matriz[i][j];
					    else
					        if(j==0)
				                cout<<setw(7)<<Matriz[i][j];
					            else
					                if(j>=9)
					                    cout<<setw(8)<<Matriz[i][j];
					                    else
					                        cout<<setw(7)<<Matriz[i][j];
			}
			cout<<setw(7)<<SumaREN<<endl;
		}
		cout<<"---------";
		for(i=0;i<=Col-1;i++)
		{
			if(i>=9)
			cout<<"--------";
			else
			cout<<"-------";
		}
		cout<<"-------"<<endl;
}


void SumaCol()
{
	int SumaCOL[10];
	
	    cout<<"SUMATORIA POR COLUMNAS"<<endl<<endl;
	    cout<<"Matriz"<<endl;
        cout<<"---------";
		for(i=0;i<=Col-1;i++)
		{
			if(i>=9)
			cout<<"--------";
			else
			cout<<"-------";
		}
		cout<<endl;
		
		for(h=0;h<=Col-1;h++)
		{
			if(h==0)
			cout<<setw(15)<<"Col "<<h+1;
			else
			cout<<setw(6)<<"Col "<<h+1;
		}
		cout<<endl;

		for(i=0;i<=Reng-1;i++)
		{
			cout<<"Renglon "<<i+1;
			for(j=0;j<=Col-1;j++)
			{
				if(i==0)
				SumaCOL[j]=0;
				SumaCOL[j]+=Matriz[i][j];
					if(i>=9 and j==0)
					    cout<<setw(6)<<Matriz[i][j];
					    else
					        if(j==0)
				                cout<<setw(7)<<Matriz[i][j];
					            else
					                if(j>=9)
					                    cout<<setw(8)<<Matriz[i][j];
					                    else
					                        cout<<setw(7)<<Matriz[i][j];
			}
			cout<<endl;
		}
		cout<<"---------";
		for(i=0;i<=Col-1;i++)
		{
			if(i>=9)
			cout<<"--------";
			else
			cout<<"-------";
		}
		cout<<endl<<"Total";
		for(j=0;j<=Col-1;j++)
		{
			if(j==0)
			cout<<setw(11)<<SumaCOL[j];
			else
			if(j>=9)
			cout<<setw(8)<<SumaCOL[j];
			else
			cout<<setw(7)<<SumaCOL[j];
		}
		cout<<endl;
		
		
}

void Diagonal()
{
	int Diag,DIAGPAL=0;
	
	for(Diag=0;Diag<=1;Diag++)
	{
		if(Diag==1)
		{
			cout<<"Diagonal principal de la ";
		}
		cout<<"Matriz"<<endl;
		cout<<"---------";
		for(i=0;i<=Col-1;i++)
		{
			if(i>=9)
			cout<<"--------";
			else
			cout<<"-------";
		}
		cout<<endl;
		
		for(h=0;h<=Col-1;h++)
		{
			if(h==0)
			cout<<setw(15)<<"Col "<<h+1;
			else
			cout<<setw(6)<<"Col "<<h+1;
		}
		cout<<endl;
		for(i=0;i<=Reng-1;i++)
		{
			cout<<"Renglon "<<i+1;
			for(j=0;j<=Col-1;j++)
			{
				if(Diag==0)
				{
					if(i>=9 and j==0)
					    cout<<setw(6)<<Matriz[i][j];
					    else
					        if(j==0)
				                cout<<setw(7)<<Matriz[i][j];
					            else
					                if(j>=9)
					                    cout<<setw(8)<<Matriz[i][j];
					                    else
					                        cout<<setw(7)<<Matriz[i][j];
				}
				else
				{
					if(i==j)
				    {
				    	DIAGPAL+=Matriz[i][j];
					if(i>=9 and j==0)
					    cout<<setw(7)<<Matriz[i][j];
					    else
					        if(j==0)
				                cout<<setw(7)<<Matriz[i][j];
					            else
					                if(j>=9)
					                    cout<<setw(6)<<Matriz[i][j];
					                    else
					                        cout<<setw(7)<<Matriz[i][j];
				    }
				    else
				    {
				    	if(i>=8 and j>=8)
				    	cout<<setw(8)<<"";
				    	else
				    	if(i>=0 and j==0)
				    	    cout<<setw(7)<<"";
				    	            else
				    	                if(j>=9)
				    	                    cout<<setw(6)<<"";
				    	                    else
				    	                        cout<<setw(7)<<"";
					}
				}
			}
		cout<<endl;
		}
		cout<<"---------";
		for(i=0;i<=Col-1;i++)
		{
			if(i>=9)
			cout<<"--------";
			else
			cout<<"-------";
		}
		cout<<endl;
		if(Diag==0)
		cout<<endl<<"LA DIAGONAL PRINCIPAL DE TU MATRIZ ES LA SIGUIENTE: "<<endl<<endl;
	}
	cout<<endl<<"La suma de la diagonal principal es: "<<DIAGPAL<<endl;
}
